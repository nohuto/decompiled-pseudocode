/*
 * XREFs of DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_e855345159ffcf8e8cf911d9c3e7f6ed___lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e___ @ 0x180493F80
 * Callers:
 *     DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_double__lambda_e855345159ffcf8e8cf911d9c3e7f6ed___lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e___ @ 0x180494170 (DCompThumbnailHelpers--DCompThumbnail_SetValueWithPreAndPostCallbacks_double__lambda_e855345159f.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_e855345159ffcf8e8cf911d9c3e7f6ed___lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e___::CAnimationCallbackHandler__lambda_e855345159ffcf8e8cf911d9c3e7f6ed___lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e___ @ 0x180494370 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_e855345159ffcf8e8cf911d9c3e7f6ed___lamb.c)
 */

__int64 __fastcall DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_e855345159ffcf8e8cf911d9c3e7f6ed___lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e___(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        _QWORD *a4)
{
  void *v6; // rax
  __int64 v7; // rdx
  __int64 (__fastcall ***v8)(_QWORD, GUID *, _QWORD *); // rax
  __int64 (__fastcall ***v9)(_QWORD, GUID *, _QWORD *); // rsi
  unsigned int v10; // edi
  __int64 v11; // rcx

  *a4 = 0LL;
  v6 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6
    && (v8 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_e855345159ffcf8e8cf911d9c3e7f6ed___lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e___::CAnimationCallbackHandler__lambda_e855345159ffcf8e8cf911d9c3e7f6ed___lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e___(
                                                                   v6,
                                                                   v7,
                                                                   a2,
                                                                   0LL),
        (v9 = v8) != 0LL) )
  {
    v10 = (**v8)(v8, &GUID_bac5f55a_ba7c_414c_b599_fbf850f553c6, a4);
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v9)[2])(v9);
  }
  else
  {
    v10 = -2147024882;
  }
  v11 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v10;
}
