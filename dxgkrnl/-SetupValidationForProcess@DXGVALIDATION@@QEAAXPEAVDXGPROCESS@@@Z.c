/*
 * XREFs of ?SetupValidationForProcess@DXGVALIDATION@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C0008D30
 * Callers:
 *     ?Initialize@DXGPROCESS@@QEAAJPEAX@Z @ 0x1C01A7D50 (-Initialize@DXGPROCESS@@QEAAJPEAX@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

void __fastcall DXGVALIDATION::SetupValidationForProcess(DXGVALIDATION *this, struct DXGPROCESS *a2)
{
  struct _UNICODE_STRING *v3; // rax
  struct _UNICODE_STRING *v4; // rbx
  wchar_t *v5; // rax
  _CLIENT_ID ClientId; // [rsp+30h] [rbp-69h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-59h] BYREF
  int (*v8)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+70h] [rbp-29h] BYREF
  int v9; // [rsp+78h] [rbp-21h]
  const wchar_t *v10; // [rsp+80h] [rbp-19h]
  struct DXGPROCESS *v11; // [rsp+88h] [rbp-11h]
  int v12; // [rsp+90h] [rbp-9h]
  __int64 v13; // [rsp+98h] [rbp-1h]
  int v14; // [rsp+A0h] [rbp+7h]
  __int64 v15; // [rsp+A8h] [rbp+Fh]
  int v16; // [rsp+B0h] [rbp+17h]
  __int64 v17; // [rsp+B8h] [rbp+1Fh]
  __int128 v18; // [rsp+C0h] [rbp+27h]
  __int128 v19; // [rsp+D0h] [rbp+37h]
  ULONG ProcessInformationLength; // [rsp+100h] [rbp+67h] BYREF
  void *ProcessHandle; // [rsp+110h] [rbp+77h] BYREF

  if ( *(_DWORD *)this == 1 )
  {
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ProcessHandle = 0LL;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    ClientId.UniqueThread = 0LL;
    ClientId.UniqueProcess = PsGetCurrentProcessId();
    if ( ZwOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId) >= 0 )
    {
      ProcessInformationLength = 0;
      if ( ZwQueryInformationProcess(ProcessHandle, ProcessImageFileNameWin32, 0LL, 0, &ProcessInformationLength) == -1073741820
        && ProcessInformationLength > 0x10 )
      {
        v3 = (struct _UNICODE_STRING *)operator new[](ProcessInformationLength, 0x4B677844u, 256LL);
        v4 = v3;
        if ( v3 )
        {
          if ( ZwQueryInformationProcess(ProcessHandle, ProcessImageFileNameWin32, v3, ProcessInformationLength, 0LL) >= 0 )
          {
            v5 = wcsrchr(v4->Buffer, 0x5Cu);
            if ( v5 )
              RtlInitUnicodeString(v4, v5 + 1);
            v9 = 4;
            v11 = a2;
            v8 = ProcessValidationQueryCallback;
            v12 = 0;
            v10 = L"ProcessName";
            v13 = 0LL;
            v14 = 0;
            v15 = 0LL;
            v16 = 0;
            v17 = 0LL;
            v18 = 0LL;
            v19 = 0LL;
            RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\Validation", &v8, v4, 0LL);
          }
          ExFreePoolWithTag(v4, 0);
        }
      }
      ZwClose(ProcessHandle);
    }
  }
}
