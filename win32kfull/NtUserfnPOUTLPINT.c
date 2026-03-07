__int64 __fastcall NtUserfnPOUTLPINT(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        volatile void *a4,
        __int64 a5,
        char a6)
{
  PtiCurrentShared(a1);
  if ( a3 > 0x3FFFFFFFFFFFFFFFLL )
    ExRaiseAccessViolation();
  ProbeForWrite(a4, 4 * a3, 4u);
  return (*((__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, volatile void *, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
          + ((a6 + 6) & 0x1F)))(
           a1,
           a2,
           a3,
           a4,
           a5);
}
