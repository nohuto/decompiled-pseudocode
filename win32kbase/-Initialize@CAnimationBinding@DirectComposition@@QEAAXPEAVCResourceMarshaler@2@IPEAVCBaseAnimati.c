/*
 * XREFs of ?Initialize@CAnimationBinding@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@@Z @ 0x1C005B370
 * Callers:
 *     ?BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@@Z @ 0x1C005B08C (-BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAn.c)
 *     ?Create@CAnimationBinding@DirectComposition@@SAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@PEAPEAV12@@Z @ 0x1C005B2F4 (-Create@CAnimationBinding@DirectComposition@@SAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@P.c)
 * Callees:
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C0061AAC (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CAnimationBinding::Initialize(
        DirectComposition::CAnimationBinding *this,
        struct DirectComposition::CResourceMarshaler *a2,
        int a3,
        struct DirectComposition::CBaseAnimation *a4)
{
  DirectComposition::CResourceMarshaler *v4; // rax

  *((_DWORD *)this + 3) = a3;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 4) = *((_QWORD *)a2 + 5);
  *((_QWORD *)a2 + 5) = this;
  *((_QWORD *)this + 3) = a4;
  *((_QWORD *)this + 5) = *((_QWORD *)a4 + 1);
  *((_QWORD *)a4 + 1) = this;
  *((_DWORD *)this + 2) = 2;
  v4 = (DirectComposition::CResourceMarshaler *)(**(__int64 (__fastcall ***)(struct DirectComposition::CBaseAnimation *))a4)(a4);
  DirectComposition::CResourceMarshaler::AddRef(v4);
}
