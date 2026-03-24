/*
 * XREFs of ?Reassign@CAnimationBinding@DirectComposition@@QEAAXPEAVCBaseAnimation@2@PEAVCApplicationChannel@2@@Z @ 0x1C01D5C74
 * Callers:
 *     ?BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@@Z @ 0x1C0091A28 (-BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAn.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C005FA08 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01D47C4 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

void __fastcall DirectComposition::CAnimationBinding::Reassign(
        DirectComposition::CAnimationBinding *this,
        struct DirectComposition::CBaseAnimation *a2,
        struct DirectComposition::CApplicationChannel *a3)
{
  struct DirectComposition::CBaseAnimation *v5; // rcx
  _QWORD *i; // rcx
  struct DirectComposition::CResourceMarshaler *v8; // rax
  DirectComposition::CResourceMarshaler *v9; // rax

  v5 = (struct DirectComposition::CBaseAnimation *)*((_QWORD *)this + 3);
  if ( a2 != v5 )
  {
    if ( v5 )
    {
      for ( i = (_QWORD *)((char *)v5 + 8); (DirectComposition::CAnimationBinding *)*i != this; i = (_QWORD *)(*i + 40LL) )
        ;
      *i = *((_QWORD *)this + 5);
      v8 = (struct DirectComposition::CResourceMarshaler *)(***((__int64 (__fastcall ****)(_QWORD))this + 3))(*((_QWORD *)this + 3));
      DirectComposition::CApplicationChannel::ReleaseResource(a3, v8);
    }
    v9 = (DirectComposition::CResourceMarshaler *)(**(__int64 (__fastcall ***)(struct DirectComposition::CBaseAnimation *))a2)(a2);
    DirectComposition::CResourceMarshaler::AddRef(v9);
    *((_QWORD *)this + 3) = a2;
    *((_QWORD *)this + 5) = *((_QWORD *)a2 + 1);
    *((_QWORD *)a2 + 1) = this;
  }
}
