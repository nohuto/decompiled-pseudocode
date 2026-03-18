/*
 * XREFs of ?Reassign@CAnimationBinding@DirectComposition@@QEAAXPEAVCBaseAnimation@2@PEAVCApplicationChannel@2@@Z @ 0x1C020D548
 * Callers:
 *     ?BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@@Z @ 0x1C0065550 (-BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAn.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C002FD60 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C003019C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
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
