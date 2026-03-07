__int64 __fastcall NtUserfnINLPUAHDRAWMENU(__int64 a1, unsigned int a2, __int64 a3, ULONG64 a4, __int64 a5, char a6)
{
  __int128 v11; // [rsp+38h] [rbp-20h] BYREF
  __int64 v12; // [rsp+48h] [rbp-10h]

  v11 = 0LL;
  v12 = 0LL;
  PtiCurrentShared(a1);
  if ( a4 >= MmUserProbeAddress )
    a4 = MmUserProbeAddress;
  v11 = *(_OWORD *)a4;
  v12 = *(_QWORD *)(a4 + 16);
  return (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
          + ((a6 + 6) & 0x1F)))(
           a1,
           a2,
           a3,
           &v11,
           a5);
}
