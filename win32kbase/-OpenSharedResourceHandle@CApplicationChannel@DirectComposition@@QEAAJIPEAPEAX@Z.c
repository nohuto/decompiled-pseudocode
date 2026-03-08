/*
 * XREFs of ?OpenSharedResourceHandle@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAX@Z @ 0x1C00BA090
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0066180 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?CreateHandle@CompositionObject@@QEBAJK_NDPEAPEAX@Z @ 0x1C00BA110 (-CreateHandle@CompositionObject@@QEBAJK_NDPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

int __fastcall DirectComposition::CApplicationChannel::OpenSharedResourceHandle(
        DirectComposition::CApplicationChannel *this,
        int a2,
        void **a3)
{
  unsigned __int64 v3; // r9
  __int64 v5; // rcx
  __int64 v6; // rax

  v3 = (unsigned int)(a2 - 1);
  if ( !a2 )
    return -1073741790;
  if ( v3 >= *((_QWORD *)this + 10) )
    return -1073741790;
  _mm_lfence();
  v5 = *(_QWORD *)(*((_QWORD *)this + 11) * v3 + *((_QWORD *)this + 7));
  if ( !v5 )
    return -1073741790;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 48LL))(v5);
  if ( v6 )
    return CompositionObject::CreateHandle((CompositionObject *)(v6 - 24), 3u, 0, 0, a3);
  else
    return -1073741637;
}
