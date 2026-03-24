/*
 * XREFs of ?OpenSharedResourceHandle@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAX@Z @ 0x1C009C374
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C007E324 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::OpenSharedResourceHandle(
        DirectComposition::CApplicationChannel *this,
        int a2,
        void **a3)
{
  unsigned __int64 v3; // r9
  __int64 v4; // rcx

  v3 = (unsigned int)(a2 - 1);
  if ( a2 && v3 < *((_QWORD *)this + 10) )
  {
    _mm_lfence();
    v4 = *(_QWORD *)(v3 * *((_QWORD *)this + 11) + *((_QWORD *)this + 7));
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
    return (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v4 + 16LL))(v4, a3);
  else
    return 3221225506LL;
}
