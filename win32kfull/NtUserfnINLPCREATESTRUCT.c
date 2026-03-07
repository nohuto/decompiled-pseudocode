__int64 __fastcall NtUserfnINLPCREATESTRUCT(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        ULONG64 a4,
        __int64 a5,
        char a6,
        int a7)
{
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rbx
  _OWORD *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  _OWORD v21[3]; // [rsp+40h] [rbp-88h] BYREF
  __int128 v22; // [rsp+70h] [rbp-58h]
  __int128 v23; // [rsp+80h] [rbp-48h]
  _QWORD v24[2]; // [rsp+90h] [rbp-38h] BYREF
  _BYTE v25[16]; // [rsp+A0h] [rbp-28h] BYREF

  memset_0(v21, 0, 0x70uLL);
  v12 = SGDGetUserSessionState(v11);
  v13 = 0LL;
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v12 + 8)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( !a4 )
  {
    if ( a2 == 129 )
      return v13;
    return (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, unsigned __int64, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
            + ((a6 + 6) & 0x1F)))(
             a1,
             a2,
             a3,
             (unsigned __int64)v21 & -(__int64)(a4 != 0),
             a5);
  }
  v14 = (_OWORD *)a4;
  if ( a4 >= MmUserProbeAddress )
    v14 = (_OWORD *)MmUserProbeAddress;
  v21[0] = *v14;
  v21[1] = v14[1];
  v21[2] = v14[2];
  v22 = v14[3];
  v23 = v14[4];
  if ( a7 )
  {
    v18 = *((_QWORD *)&v22 + 1);
    if ( *((_QWORD *)&v22 + 1) )
      v18 = *((_QWORD *)&v22 + 1);
    RtlInitLargeAnsiString(v24, v18);
    v19 = v23;
    if ( (v23 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( (_QWORD)v23 )
        v19 = v23;
      RtlInitLargeAnsiString(v25, v19);
    }
    return (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, unsigned __int64, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
            + ((a6 + 6) & 0x1F)))(
             a1,
             a2,
             a3,
             (unsigned __int64)v21 & -(__int64)(a4 != 0),
             a5);
  }
  v15 = *((_QWORD *)&v22 + 1);
  if ( *((_QWORD *)&v22 + 1) )
  {
    if ( (BYTE8(v22) & 1) != 0 )
      goto LABEL_26;
    v15 = *((_QWORD *)&v22 + 1);
  }
  v24[1] = v15;
  HIDWORD(v24[0]) &= ~0x80000000;
  if ( v15 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( *(_WORD *)(v15 + 2 * v16) );
    LODWORD(v24[0]) = 2 * v16;
    HIDWORD(v24[0]) = (2 * v16 + 2) & 0x7FFFFFFF;
  }
  else
  {
    v24[0] = 0LL;
  }
  v17 = v23;
  if ( (v23 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    return (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, unsigned __int64, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
            + ((a6 + 6) & 0x1F)))(
             a1,
             a2,
             a3,
             (unsigned __int64)v21 & -(__int64)(a4 != 0),
             a5);
  if ( (_QWORD)v23 )
  {
    if ( (v23 & 1) == 0 )
    {
      v17 = v23;
      goto LABEL_18;
    }
LABEL_26:
    ExRaiseDatatypeMisalignment();
  }
LABEL_18:
  RtlInitLargeUnicodeString(v25, v17);
  return (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, unsigned __int64, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
          + ((a6 + 6) & 0x1F)))(
           a1,
           a2,
           a3,
           (unsigned __int64)v21 & -(__int64)(a4 != 0),
           a5);
}
