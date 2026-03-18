/*
 * XREFs of ?CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z @ 0x1C00A3364
 * Callers:
 *     ?CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00A2D54 (-CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00A31F4 (-CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 * Callees:
 *     ?CitpBytesToString@@YAXPEBXIPEAG@Z @ 0x1C00A3588 (-CitpBytesToString@@YAXPEBXIPEAG@Z.c)
 *     ?CitpEnsureDataKey@@YAJPEAPEAX@Z @ 0x1C00A35FC (-CitpEnsureDataKey@@YAJPEAPEAX@Z.c)
 *     ?CitpEnsureKey@@YAJPEAPEAXPEBG_N@Z @ 0x1C00A36C8 (-CitpEnsureKey@@YAJPEAPEAXPEBG_N@Z.c)
 *     ?CitpParameterGetInt32@@YAXPEAXPEBGPEAI@Z @ 0x1C00A3DB0 (-CitpParameterGetInt32@@YAXPEAXPEBGPEAI@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C023FD24 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpUpdateActiveBootId(int a1, char a2, unsigned __int16 *a3, unsigned __int16 *a4)
{
  unsigned int v4; // esi
  int v8; // ebx
  char IsStateSeparationEnabled; // al
  const unsigned __int16 *v10; // rdx
  unsigned int v11; // edx
  bool v12; // zf
  HANDLE v13; // rdi
  NTSTATUS v14; // eax
  const char *v15; // rdx
  unsigned int v16; // eax
  unsigned __int16 v17; // ax
  NTSTATUS v19; // eax
  const char *v20; // rdx
  unsigned int v21; // r8d
  int v22; // esi
  ULONG v23; // r15d
  unsigned int v24; // r14d
  __int16 v25; // ax
  NTSTATUS v26; // eax
  const char *v27; // rdx
  unsigned int Data; // [rsp+30h] [rbp-A1h] BYREF
  HANDLE Handle[2]; // [rsp+38h] [rbp-99h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-89h] BYREF
  unsigned int v31; // [rsp+4Ch] [rbp-85h] BYREF
  int v32; // [rsp+50h] [rbp-81h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-79h] BYREF
  _OWORD KeyInformation[2]; // [rsp+68h] [rbp-69h] BYREF
  __int128 v35; // [rsp+88h] [rbp-49h]
  WCHAR SourceString[12]; // [rsp+98h] [rbp-39h] BYREF
  _BYTE KeyValueInformation[16]; // [rsp+B0h] [rbp-21h] BYREF
  __int16 v38; // [rsp+C0h] [rbp-11h]
  char v39; // [rsp+C4h] [rbp-Dh] BYREF

  Handle[0] = 0LL;
  v4 = 0;
  ResultLength = 0;
  Data = 0;
  v32 = a1;
  v31 = 0;
  if ( a2 )
  {
    Data = MEMORY[0xFFFFF780000002C4];
    if ( !MEMORY[0xFFFFF780000002C4] )
      return (unsigned int)-1073741637;
  }
  v8 = CitpEnsureDataKey(Handle);
  if ( v8 >= 0 )
  {
    ZwClose(Handle[0]);
    Handle[0] = 0LL;
    IsStateSeparationEnabled = RtlIsStateSeparationEnabled();
    v10 = L"\\Registry\\Machine\\OSDATA\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\CIT\\System\\Active";
    if ( !IsStateSeparationEnabled )
      v10 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\CIT\\System\\Active";
    v8 = CitpEnsureKey(Handle, v10, 1);
    if ( v8 >= 0 )
    {
      DestinationString = 0LL;
      CitpBytesToString(&v32, v11, SourceString);
      RtlInitUnicodeString(&DestinationString, SourceString);
      v12 = a2 == 0;
      v13 = Handle[0];
      if ( v12 )
      {
        v19 = ZwDeleteValueKey(Handle[0], &DestinationString);
        if ( v19 != -1073741772 && v19 < 0 )
          CitpLogFailureWorker(v19, v20, 0x5D5u);
      }
      else
      {
        CitpParameterGetInt32(Handle[0], SourceString, &v31);
        memset(KeyInformation, 0, sizeof(KeyInformation));
        v35 = 0LL;
        v14 = ZwQueryKey(v13, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
        v8 = v14;
        if ( v14 < 0 && v14 != -2147483643 && v14 != -1073741789 )
        {
          v21 = 1425;
LABEL_32:
          CitpLogFailureWorker(v14, v15, v21);
          goto LABEL_21;
        }
        v16 = v35;
        if ( (unsigned int)v35 > 8 )
        {
          v22 = v35 - 8;
          v23 = 0;
          v24 = 0;
          while ( v24 < v16 )
          {
            v14 = ZwEnumerateValueKey(v13, v23, KeyValueFullInformation, KeyValueInformation, 0x2Au, &ResultLength);
            v8 = v14;
            if ( v14 < 0 && v14 != -2147483643 && v14 != -1073741789 )
            {
              if ( v14 == -2147483622 )
                break;
              v21 = 1446;
              goto LABEL_32;
            }
            Handle[0] = 0LL;
            Handle[1] = &v39;
            v25 = v38;
            if ( (unsigned __int16)v38 <= 0x12u )
            {
              LOWORD(Handle[0]) = v38;
            }
            else
            {
              v25 = 18;
              LOWORD(Handle[0]) = 18;
            }
            WORD1(Handle[0]) = v25;
            v26 = ZwDeleteValueKey(v13, (PUNICODE_STRING)Handle);
            if ( v26 < 0 )
            {
              ++v23;
              CitpLogFailureWorker(v26, v27, 0x5BAu);
            }
            else
            {
              --v22;
            }
            ++v24;
            if ( !v22 )
              break;
            v16 = v35;
          }
        }
        v14 = ZwSetValueKey(v13, &DestinationString, 0, 4u, &Data, 4u);
        v8 = v14;
        if ( v14 < 0 )
        {
          v21 = 1477;
          goto LABEL_32;
        }
        v4 = v31;
      }
      if ( a3 )
      {
        if ( v4 > 0xFFFF )
          LOWORD(v4) = -1;
        *a3 = v4;
      }
      if ( a4 )
      {
        v17 = Data;
        if ( Data > 0xFFFF )
          v17 = -1;
        *a4 = v17;
      }
      v8 = 0;
      goto LABEL_21;
    }
  }
  v13 = Handle[0];
LABEL_21:
  if ( v13 )
    ZwClose(v13);
  return (unsigned int)v8;
}
