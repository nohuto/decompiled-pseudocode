/*
 * XREFs of ?ProcessSetActiveExclusiveView@CHolographicExclusiveMode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICEXCLUSIVEMODE_SETACTIVEEXCLUSIVEVIEW@@@Z @ 0x1802A4AE0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicExclusiveMode::ProcessSetActiveExclusiveView(
        RTL_SRWLOCK *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_HOLOGRAPHICEXCLUSIVEMODE_SETACTIVEEXCLUSIVEVIEW *a3)
{
  RTL_SRWLOCK *v3; // rsi

  v3 = this + 10;
  AcquireSRWLockExclusive(this + 10);
  this[11].Ptr = (PVOID)*((unsigned int *)a3 + 2);
  LODWORD(this[12].Ptr) = *((_DWORD *)a3 + 3);
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  return 0LL;
}
