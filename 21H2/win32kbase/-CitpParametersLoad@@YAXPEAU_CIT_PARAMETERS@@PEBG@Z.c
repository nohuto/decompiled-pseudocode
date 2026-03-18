/*
 * XREFs of ?CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x1C00A3BB0
 * Callers:
 *     ?CitpInitialize@@YAJPEBG@Z @ 0x1C00A3954 (-CitpInitialize@@YAJPEBG@Z.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x1C0240624 (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     ?CitpParameterGetInt32@@YAXPEAXPEBGPEAI@Z @ 0x1C00A3DB0 (-CitpParameterGetInt32@@YAXPEAXPEBGPEAI@Z.c)
 *     ?CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x1C00A3E54 (-CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z.c)
 *     ?CitpIsInteractiveSession@@YAEXZ @ 0x1C00A3EDC (-CitpIsInteractiveSession@@YAEXZ.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C023FD24 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

void __fastcall CitpParametersLoad(struct _CIT_PARAMETERS *a1, PCWSTR SourceString)
{
  NTSTATUS v4; // eax
  const char *v5; // rdx
  unsigned int v6; // eax
  void *v7; // rcx
  bool v8; // cf
  unsigned int v9; // eax
  void *v10; // rcx
  unsigned int v11; // eax
  void *v12; // rcx
  unsigned int v13; // eax
  unsigned int v14; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v17; // [rsp+90h] [rbp+30h] BYREF
  void *KeyHandle; // [rsp+98h] [rbp+38h] BYREF

  KeyHandle = 0LL;
  if ( CitpIsInteractiveSession() )
  {
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, SourceString);
    *(&ObjectAttributes.Length + 1) = 0;
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    v4 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( v4 < 0 )
    {
      CitpLogFailureWorker(v4, v5, 0x823u);
    }
    else
    {
      CitpParameterGetInt32(KeyHandle, L"EntryCount", (unsigned int *)a1);
      if ( *(_DWORD *)a1 >= 4u )
      {
        if ( *(_DWORD *)a1 > 0x7FFFu )
          *(_DWORD *)a1 = 0x7FFF;
      }
      else
      {
        *(_DWORD *)a1 = 4;
      }
      v17 = 60;
      CitpParameterGetInt32(KeyHandle, L"UATO", &v17);
      v6 = v17;
      v7 = KeyHandle;
      v8 = v17 == 0;
      v17 = 3600;
      if ( v8 )
        v6 = 1;
      *((_DWORD *)a1 + 1) = 1000 * v6;
      CitpParameterGetInt32(v7, L"PUUPeriod", &v17);
      v9 = v17;
      v10 = KeyHandle;
      v8 = v17 < 0x3C;
      *((_DWORD *)a1 + 4) = 1;
      if ( v8 )
        v9 = 60;
      *((_DWORD *)a1 + 2) = 1000 * v9;
      CitpParameterGetInt32(v10, L"AggFlags", (unsigned int *)a1 + 4);
      v17 = 60;
      CitpParameterGetInt32(KeyHandle, L"AggPeriod", &v17);
      v11 = 1000 * v17;
      v12 = KeyHandle;
      v17 = 1;
      *((_DWORD *)a1 + 5) = v11;
      CitpParameterGetInt32(v12, L"AggBitPeriod", &v17);
      v13 = 1000 * v17;
      *((_DWORD *)a1 + 6) = 1000 * v17;
      if ( !v13 )
        *((_DWORD *)a1 + 6) = 1;
      v17 = 34;
      CitpParameterGetInt32(KeyHandle, L"DPFlags", &v17);
      v14 = v17;
      if ( (v17 & 0xFF0000) == 0 )
        v14 = v17 & 0xFF00FFFF | 0x80000;
      if ( (v14 & 0xFF000000) == 0 )
        v14 = v14 & 0xFFFFFF | 0x40000000;
      *((_DWORD *)a1 + 8) = v14;
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  CitpParametersCompute(a1);
}
