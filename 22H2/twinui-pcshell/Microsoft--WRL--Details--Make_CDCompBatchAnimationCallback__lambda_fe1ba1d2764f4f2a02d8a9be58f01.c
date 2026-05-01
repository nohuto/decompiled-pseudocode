/*
 * XREFs of Microsoft::WRL::Details::Make_CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f012f2_____lambda_fe1ba1d2764f4f2a02d8a9be58f012f2__&_ @ 0x18047B6A8
 * Callers:
 *     ?CancelPlacement@WindowArrangementView@@UEAAJXZ @ 0x18047C900 (-CancelPlacement@WindowArrangementView@@UEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIDCompBatchAnimationCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x18041F994 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIDCompBatchAnimationCallback@@@WRL@Mi.c)
 *     _lambda_fe1ba1d2764f4f2a02d8a9be58f012f2_::_lambda_fe1ba1d2764f4f2a02d8a9be58f012f2_ @ 0x18047BD40 (_lambda_fe1ba1d2764f4f2a02d8a9be58f012f2_--_lambda_fe1ba1d2764f4f2a02d8a9be58f012f2_.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_CDCompBatchAnimationCallback__lambda_fe1ba1d2764f4f2a02d8a9be58f012f2_____lambda_fe1ba1d2764f4f2a02d8a9be58f012f2____(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx

  *a1 = 0LL;
  v4 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDCompBatchAnimationCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDCompBatchAnimationCallback>(v4);
    *v5 = off_180506C78;
    lambda_fe1ba1d2764f4f2a02d8a9be58f012f2_::_lambda_fe1ba1d2764f4f2a02d8a9be58f012f2_(v5 + 2, a2);
    *((_DWORD *)v5 + 6) = 0;
    *((_DWORD *)v5 + 7) = 0;
    v5[4] = 0LL;
    *((_DWORD *)v5 + 10) = 0;
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v5;
  }
  return a1;
}
