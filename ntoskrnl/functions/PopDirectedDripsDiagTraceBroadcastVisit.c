signed __int32 __fastcall PopDirectedDripsDiagTraceBroadcastVisit(__int64 a1, __int64 a2, int a3)
{
  int v5; // eax
  _QWORD *DeviceDiagnostic; // rbx
  bool v7; // zf
  int v8; // ecx
  REGHANDLE v9; // rdi
  unsigned int v10; // eax
  __int64 v11; // rax
  int v12; // r8d
  int v14; // [rsp+38h] [rbp-39h] BYREF
  int v15; // [rsp+3Ch] [rbp-35h] BYREF
  unsigned int v16; // [rsp+40h] [rbp-31h] BYREF
  int v17; // [rsp+44h] [rbp-2Dh] BYREF
  __int64 v18; // [rsp+48h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-19h] BYREF
  int *v20; // [rsp+68h] [rbp-9h]
  int v21; // [rsp+70h] [rbp-1h]
  int v22; // [rsp+74h] [rbp+3h]
  __int64 *v23; // [rsp+78h] [rbp+7h]
  int v24; // [rsp+80h] [rbp+Fh]
  int v25; // [rsp+84h] [rbp+13h]
  unsigned int *v26; // [rsp+88h] [rbp+17h]
  int v27; // [rsp+90h] [rbp+1Fh]
  int v28; // [rsp+94h] [rbp+23h]
  __int64 v29; // [rsp+98h] [rbp+27h]
  int v30; // [rsp+A0h] [rbp+2Fh]
  int v31; // [rsp+A4h] [rbp+33h]
  int *v32; // [rsp+A8h] [rbp+37h]
  int v33; // [rsp+B0h] [rbp+3Fh]
  int v34; // [rsp+B4h] [rbp+43h]

  v16 = 0;
  v14 = 0;
  v17 = 0;
  v18 = a1;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopDirectedDripsDiagLock, 0LL);
  if ( a2 )
    v5 = *(_DWORD *)(a2 + 32);
  else
    v5 = -1;
  v15 = v5;
  DeviceDiagnostic = *(_QWORD **)(v18 + 776);
  if ( DeviceDiagnostic
    || (DeviceDiagnostic = PopDirectedDripsDiagCreateDeviceDiagnostic(v18), v5 = v15, DeviceDiagnostic) )
  {
    v7 = (DeviceDiagnostic[19] & 0x20000) == 0;
    *((_DWORD *)DeviceDiagnostic + 37) = v5;
    v8 = v14;
    if ( !v7 )
      v8 = 1;
    v14 = v8;
    if ( PopDiagHandleRegistered )
    {
      v9 = PopDiagHandle;
      if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_DEVICE_VISIT) )
      {
        v10 = *(unsigned __int16 *)(v18 + 40);
        UserData.Reserved = 0;
        v22 = 0;
        v25 = 0;
        v28 = 0;
        v16 = v10 >> 1;
        UserData.Ptr = (ULONGLONG)&v15;
        v20 = &v14;
        v23 = &v18;
        v26 = &v16;
        UserData.Size = 4;
        v21 = 4;
        v27 = 4;
        v24 = 8;
        v11 = *(_QWORD *)(v18 + 48);
        v12 = *(unsigned __int16 *)(v18 + 40);
        v31 = 0;
        v34 = 0;
        v29 = v11;
        v32 = &v17;
        v30 = v12;
        v33 = 4;
        v17 = a3;
        EtwWrite(v9, &POP_ETW_EVENT_DIRECTED_DRIPS_DEVICE_VISIT, 0LL, 6u, &UserData);
      }
    }
    *((_DWORD *)DeviceDiagnostic + 38) |= 0x40000u;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopDirectedDripsDiagLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopDirectedDripsDiagLock);
  return KeAbPostRelease((ULONG_PTR)&PopDirectedDripsDiagLock);
}
