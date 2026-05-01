/*
 * XREFs of ??$MakeAndInitialize@VJointResize@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18048BF30
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VJointResize@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18048CD30 (-CreateInstance@-$SimpleClassFactory@VJointResize@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_G.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??0JointResize@@QEAA@XZ @ 0x18048C250 (--0JointResize@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@JointResize@@QEAAJXZ @ 0x18048DE34 (-RuntimeClassInitialize@JointResize@@QEAAJXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<JointResize,IUnknown,>(_QWORD *a1)
{
  JointResize *v2; // rax
  int v3; // edi
  JointResize *v4; // rbx

  *a1 = 0LL;
  v2 = (JointResize *)operator new(0x2F0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = JointResize::JointResize(v2);
    v3 = JointResize::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
      v3 = (**(__int64 (__fastcall ***)(JointResize *, GUID *, _QWORD *))v4)(
             v4,
             &GUID_00000000_0000_0000_c000_000000000046,
             a1);
    if ( v4 )
      (*(void (__fastcall **)(JointResize *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
