__int64 __fastcall SdbGetMergeRedirectPath(wchar_t **a1, const wchar_t *a2)
{
  wchar_t *v3; // r12
  wchar_t *v4; // r14
  void *v5; // r13
  NTSTATUS FileTimestamp; // ebx
  wchar_t *v8; // rax
  const wchar_t *v9; // rdi
  const wchar_t *v10; // rsi
  int Key; // eax
  int String; // eax
  size_t v13; // r11
  size_t v14; // r11
  size_t v15; // rsi
  unsigned __int64 v16; // rcx
  size_t v17; // r13
  wchar_t *v18; // rax
  int ManifestedMergeStubAlloc; // eax
  unsigned __int64 v20; // rax
  void *v21; // [rsp+30h] [rbp-49h] BYREF
  size_t v22; // [rsp+38h] [rbp-41h] BYREF
  wchar_t *Str1; // [rsp+40h] [rbp-39h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-31h] BYREF
  size_t pcchLength; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int64 v26; // [rsp+58h] [rbp-21h] BYREF
  unsigned __int64 v27; // [rsp+60h] [rbp-19h] BYREF
  unsigned __int64 v28; // [rsp+68h] [rbp-11h] BYREF
  wchar_t **v29; // [rsp+70h] [rbp-9h]
  wchar_t Str2[12]; // [rsp+78h] [rbp-1h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  v29 = a1;
  v5 = 0LL;
  Handle = 0LL;
  Str1 = 0LL;
  pcchLength = 0LL;
  v22 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v26 = 0LL;
  v21 = 0LL;
  wcscpy(Str2, L"\\AppPatch\\");
  if ( !a1 )
    return 3221225711LL;
  *a1 = 0LL;
  FileTimestamp = -1073741772;
  v8 = wcsrchr(a2, 0x5Cu);
  if ( v8 )
  {
    v9 = v8 + 1;
    if ( v8 + 1 != a2 )
    {
      v10 = v8 - 1;
      if ( v8 - 1 >= a2 )
      {
        while ( *v10 != 92 && *v10 != 47 || wcsnicmp(v10, Str2, 0xAuLL) )
        {
          if ( --v10 < a2 )
            return (unsigned int)FileTimestamp;
        }
        Key = AslRegistryGetKey(
                &Handle,
                L"Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\SdbUpdates",
                0x80000100,
                1);
        FileTimestamp = Key;
        if ( Key < 0 )
        {
          if ( Key != -1073741772 )
            goto LABEL_41;
LABEL_42:
          if ( (char *)Handle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
            ZwClose(Handle);
          if ( v3 )
            ExFreePoolWithTag(v3, 0x74705041u);
          if ( v4 )
            ExFreePoolWithTag(v4, 0x74705041u);
          if ( v5 )
            ExFreePoolWithTag(v5, 0x74705041u);
          return (unsigned int)FileTimestamp;
        }
        String = AslRegistryGetString(&Str1, Handle, v9);
        v3 = Str1;
        FileTimestamp = String;
        if ( String < 0 )
          goto LABEL_42;
        if ( !wcsicmp(Str1, v9) )
        {
LABEL_16:
          FileTimestamp = -1073741772;
          goto LABEL_42;
        }
        FileTimestamp = RtlStringCchLengthW(a2, 0x7FFFFFFFuLL, &pcchLength);
        if ( FileTimestamp < 0 )
          goto LABEL_41;
        FileTimestamp = RtlStringCchLengthW(v9, v13, &v22);
        if ( FileTimestamp < 0 )
          goto LABEL_41;
        if ( pcchLength >= v22 )
        {
          v15 = pcchLength - v22;
          FileTimestamp = RtlStringCchLengthW(v3, v14, &v22);
          if ( FileTimestamp < 0 )
            goto LABEL_41;
          v16 = v15 + v22;
          if ( v15 + v22 >= v15 )
          {
            v17 = v16 + 1;
            if ( v16 + 1 < v16 )
            {
              FileTimestamp = -1073741675;
            }
            else
            {
              v18 = (wchar_t *)AslAlloc(v16, 2 * v17);
              v4 = v18;
              if ( !v18 )
              {
                FileTimestamp = -1073741801;
LABEL_39:
                v5 = v21;
                goto LABEL_42;
              }
              FileTimestamp = RtlStringCchCopyNW(v18, v17, a2, v15);
              if ( FileTimestamp >= 0 )
              {
                FileTimestamp = RtlStringCchCatW(v4, v17, v3);
                if ( FileTimestamp >= 0 )
                {
                  FileTimestamp = SdbpGetFileTimestamp(&v27, v4);
                  if ( FileTimestamp >= 0 )
                  {
                    FileTimestamp = SdbpGetFileTimestamp(&v28, a2);
                    if ( FileTimestamp >= 0 )
                    {
                      ManifestedMergeStubAlloc = SdbpGetManifestedMergeStubAlloc(&v21, v9);
                      FileTimestamp = ManifestedMergeStubAlloc;
                      if ( ManifestedMergeStubAlloc == -1073741772 )
                      {
                        v5 = v21;
                        v20 = 0LL;
LABEL_34:
                        if ( v27 >= v28 && v27 >= v20 )
                        {
                          *v29 = v4;
                          v4 = 0LL;
                          FileTimestamp = 0;
                          goto LABEL_42;
                        }
                        goto LABEL_16;
                      }
                      if ( ManifestedMergeStubAlloc >= 0 )
                      {
                        v5 = v21;
                        FileTimestamp = SdbpGetFileTimestamp(&v26, v21);
                        if ( FileTimestamp >= 0 )
                        {
                          v20 = v26;
                          goto LABEL_34;
                        }
LABEL_41:
                        AslLogCallPrintf(1LL);
                        goto LABEL_42;
                      }
                    }
                  }
                }
              }
            }
            AslLogCallPrintf(1LL);
            goto LABEL_39;
          }
        }
        FileTimestamp = -1073741675;
        goto LABEL_41;
      }
    }
  }
  return (unsigned int)FileTimestamp;
}
