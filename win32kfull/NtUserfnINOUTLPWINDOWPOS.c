__int64 __fastcall NtUserfnINOUTLPWINDOWPOS(__int64 a1, unsigned int a2, __int64 a3, ULONG64 a4, __int64 a5, char a6)
{
  __int64 v10; // rax
  _BYTE *v11; // rdx
  __int64 result; // rax
  __int128 v13; // [rsp+48h] [rbp-30h] BYREF
  __int128 v14; // [rsp+58h] [rbp-20h]
  __int64 v15; // [rsp+68h] [rbp-10h]

  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v10 = SGDGetUserSessionState(a1);
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v10 + 8)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  PsGetThreadWin32Thread(KeGetCurrentThread());
  v11 = (_BYTE *)a4;
  if ( a4 >= MmUserProbeAddress )
    v11 = (_BYTE *)MmUserProbeAddress;
  *v11 = *v11;
  v11[39] = v11[39];
  v13 = *(_OWORD *)a4;
  v14 = *(_OWORD *)(a4 + 16);
  v15 = *(_QWORD *)(a4 + 32);
  result = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
            + ((a6 + 6) & 0x1F)))(
             a1,
             a2,
             a3,
             &v13,
             a5);
  *(_OWORD *)a4 = v13;
  *(_OWORD *)(a4 + 16) = v14;
  *(_QWORD *)(a4 + 32) = v15;
  return result;
}
