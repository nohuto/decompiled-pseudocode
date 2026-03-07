__int64 __fastcall NtUserfnINOUTNCCALCSIZE(__int64 a1, unsigned int a2, __int64 a3, ULONG64 a4, __int64 a5, char a6)
{
  __int64 v10; // rax
  _BYTE *v11; // rdx
  __int128 *v12; // rdi
  _BYTE *v13; // rdx
  __int64 result; // rax
  __int128 v15; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v16; // [rsp+58h] [rbp-B0h]
  __int64 v17; // [rsp+68h] [rbp-A0h]
  __int128 v18; // [rsp+80h] [rbp-88h]
  __int128 v19; // [rsp+90h] [rbp-78h]
  __int128 v20; // [rsp+A0h] [rbp-68h]
  __int128 *v21; // [rsp+B0h] [rbp-58h]
  __int128 v22; // [rsp+B8h] [rbp-50h]

  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v22 = 0LL;
  v10 = SGDGetUserSessionState(a1);
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v10 + 8)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  PsGetThreadWin32Thread(KeGetCurrentThread());
  v11 = (_BYTE *)a4;
  if ( a3 )
  {
    if ( a4 >= MmUserProbeAddress )
      v11 = (_BYTE *)MmUserProbeAddress;
    *v11 = *v11;
    v11[55] = v11[55];
    v18 = *(_OWORD *)a4;
    v19 = *(_OWORD *)(a4 + 16);
    v20 = *(_OWORD *)(a4 + 32);
    v21 = *(__int128 **)(a4 + 48);
    v13 = v21;
    if ( (unsigned __int64)v21 >= MmUserProbeAddress )
      v13 = (_BYTE *)MmUserProbeAddress;
    *v13 = *v13;
    v13[39] = v13[39];
    v12 = v21;
    v15 = *v21;
    v16 = v21[1];
    v17 = *((_QWORD *)v21 + 4);
    v21 = &v15;
  }
  else
  {
    if ( a4 >= MmUserProbeAddress )
      v11 = (_BYTE *)MmUserProbeAddress;
    *v11 = *v11;
    v11[15] = v11[15];
    v22 = *(_OWORD *)a4;
    v12 = 0LL;
  }
  result = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
            + ((a6 + 6) & 0x1F)))(
             a1,
             a2,
             a3);
  if ( a3 )
  {
    *(_OWORD *)a4 = v18;
    *(_OWORD *)(a4 + 16) = v19;
    *(_OWORD *)(a4 + 32) = v20;
    *(_QWORD *)(a4 + 48) = v12;
    *v12 = v15;
    v12[1] = v16;
    *((_QWORD *)v12 + 4) = v17;
  }
  else
  {
    *(_OWORD *)a4 = v22;
  }
  return result;
}
