void __fastcall xxxLoadUserAndNetworkFonts(
        __int64 a1,
        __int64 a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  const unsigned __int16 *v4; // r8
  const unsigned __int16 *v5; // r9
  ULONG v6; // r15d
  void *v7; // rax
  void *v8; // rdi
  __int64 v9; // rax
  unsigned int *v10; // rbx
  ULONG i; // esi
  NTSTATUS v12; // eax
  __int64 v13; // rax
  unsigned int *v14; // r14
  __int128 v15; // [rsp+30h] [rbp-39h] BYREF
  __int128 v16; // [rsp+40h] [rbp-29h] BYREF
  __int64 v17; // [rsp+50h] [rbp-19h]
  __int128 v18; // [rsp+58h] [rbp-11h]
  __int64 v19; // [rsp+68h] [rbp-1h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+7h] BYREF
  ULONG ResultLength; // [rsp+D0h] [rbp+67h] BYREF
  void *KeyHandle; // [rsp+D8h] [rbp+6Fh] BYREF

  xxxbEnumerateRegistryFonts(0x401u, 0x38u, a3, a4);
  xxxbEnumerateRegistryFonts(2u, 0x38u, v4, v5);
  v19 = 0LL;
  v17 = 0LL;
  KeyHandle = 0LL;
  ResultLength = 0;
  v18 = 0LL;
  v6 = 544;
  v16 = 0LL;
  v15 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v7 = (void *)OpenCacheKeyEx(0LL, 6LL, 131097LL, 0LL);
  v8 = v7;
  if ( v7 )
  {
    xxxbEnumerateRegistryFontsInternal(v7, 2u);
    v9 = Win32AllocPoolZInit(544LL, 1919972181LL);
    v10 = (unsigned int *)v9;
    if ( v9 )
    {
      PushW32ThreadLock(v9, &v16, (__int64)Win32FreePool);
      for ( i = 0; ; ++i )
      {
        v12 = ZwEnumerateKey(v8, i, KeyBasicInformation, v10, v6 - 2, &ResultLength);
        if ( v12 != -2147483643 && v12 != -1073741789 )
          goto LABEL_6;
        ResultLength += 2;
        v13 = Win32AllocPoolZInit(ResultLength, 1919972181LL);
        v14 = (unsigned int *)v13;
        if ( v13 )
        {
          ThreadLockExchange(v13, &v16);
          Win32FreePool(v10);
          v6 = ResultLength;
          v10 = v14;
          v12 = ZwEnumerateKey(v8, i, KeyBasicInformation, v14, ResultLength - 2, &ResultLength);
          if ( v12 != -2147483643 && v12 != -1073741789 )
          {
LABEL_6:
            if ( v12 < 0 )
            {
              PopAndFreeAlwaysW32ThreadLock((__int64)&v16);
              ZwClose(v8);
              return;
            }
            *((_WORD *)v10 + ((unsigned __int64)v10[3] >> 1) + 8) = 0;
            *((_QWORD *)&v15 + 1) = v10 + 4;
            LOWORD(v15) = *((_WORD *)v10 + 6);
            WORD1(v15) = v15;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&v15;
            ObjectAttributes.Length = 48;
            ObjectAttributes.RootDirectory = v8;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
            {
              xxxbEnumerateRegistryFontsInternal(KeyHandle, 2u);
              ZwClose(KeyHandle);
            }
          }
        }
      }
    }
  }
}
