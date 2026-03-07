__int64 __fastcall NtUserfnINLPMDICREATESTRUCT(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        ULONG64 a4,
        __int64 a5,
        char a6,
        int a7)
{
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  _OWORD v16[3]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v17; // [rsp+70h] [rbp-38h]
  _BYTE v18[16]; // [rsp+78h] [rbp-30h] BYREF
  _BYTE v19[24]; // [rsp+88h] [rbp-20h] BYREF

  memset_0(v16, 0, 0x58uLL);
  PtiCurrentShared(v11);
  if ( a4 >= MmUserProbeAddress )
    a4 = MmUserProbeAddress;
  v16[0] = *(_OWORD *)a4;
  v16[1] = *(_OWORD *)(a4 + 16);
  v16[2] = *(_OWORD *)(a4 + 32);
  v17 = *(_QWORD *)(a4 + 48);
  v12 = *((_QWORD *)&v16[0] + 1);
  if ( !a7 )
  {
    if ( *((_QWORD *)&v16[0] + 1) )
    {
      if ( (BYTE8(v16[0]) & 1) != 0 )
        goto LABEL_17;
      v12 = *((_QWORD *)&v16[0] + 1);
    }
    RtlInitLargeUnicodeString((__int64)v18, v12);
    v14 = *(_QWORD *)&v16[0];
    if ( (*(_QWORD *)&v16[0] & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( *(_QWORD *)&v16[0] )
      {
        if ( (v16[0] & 1) != 0 )
LABEL_17:
          ExRaiseDatatypeMisalignment();
        v14 = *(_QWORD *)&v16[0];
      }
    }
    else
    {
      v14 = 0LL;
    }
    RtlInitLargeUnicodeString((__int64)v19, v14);
    return (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, _OWORD *, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
            + ((a6 + 6) & 0x1F)))(
             a1,
             a2,
             a3,
             v16,
             a5);
  }
  if ( *((_QWORD *)&v16[0] + 1) )
    v12 = *((_QWORD *)&v16[0] + 1);
  RtlInitLargeAnsiString((__int64)v18, v12);
  v13 = *(_QWORD *)&v16[0];
  if ( (*(_QWORD *)&v16[0] & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( *(_QWORD *)&v16[0] )
      v13 = *(_QWORD *)&v16[0];
  }
  else
  {
    v13 = 0LL;
  }
  RtlInitLargeAnsiString((__int64)v19, v13);
  return (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, _OWORD *, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
          + ((a6 + 6) & 0x1F)))(
           a1,
           a2,
           a3,
           v16,
           a5);
}
