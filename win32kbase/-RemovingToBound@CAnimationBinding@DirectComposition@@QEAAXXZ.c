/*
 * XREFs of ?RemovingToBound@CAnimationBinding@DirectComposition@@QEAAXXZ @ 0x1C024C088
 * Callers:
 *     ?BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@@Z @ 0x1C005B08C (-BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAn.c)
 * Callees:
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C0061AAC (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CAnimationBinding::RemovingToBound(DirectComposition::CAnimationBinding *this)
{
  DirectComposition::CResourceMarshaler *v1; // rax

  *((_DWORD *)this + 2) = *((_DWORD *)this + 2) & 0xFFFFFFFA | 1;
  v1 = (DirectComposition::CResourceMarshaler *)(***((__int64 (__fastcall ****)(_QWORD))this + 3))(*((_QWORD *)this + 3));
  DirectComposition::CResourceMarshaler::AddRef(v1);
}
