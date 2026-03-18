/*
 * XREFs of ?OpenSharedResourceHandle@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAX@Z @ 0x1C00AA68C
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C002D930 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1C002EB40 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?CreateHandle@CompositionObject@@QEBAJK_NDPEAPEAX@Z @ 0x1C00AA6F0 (-CreateHandle@CompositionObject@@QEBAJK_NDPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

int __fastcall DirectComposition::CApplicationChannel::OpenSharedResourceHandle(
        DirectComposition::CApplicationChannel *this,
        int a2,
        void **a3)
{
  struct DirectComposition::CResourceMarshaler *v4; // rax
  __int64 v5; // rax

  v4 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(this, a2);
  if ( !v4 )
    return -1073741790;
  v5 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v4 + 48LL))(v4);
  if ( v5 )
    return CompositionObject::CreateHandle((CompositionObject *)(v5 - 24), 3u, 0, 0, a3);
  else
    return -1073741637;
}
