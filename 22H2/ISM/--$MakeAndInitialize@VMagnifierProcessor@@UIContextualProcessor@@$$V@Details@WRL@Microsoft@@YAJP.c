/*
 * XREFs of ??$MakeAndInitialize@VMagnifierProcessor@@UIContextualProcessor@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIContextualProcessor@@@Z @ 0x18017C5C4
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x1800272A4 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D030 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??0MagnifierProcessor@@QEAA@XZ @ 0x18017CD18 (--0MagnifierProcessor@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MagnifierProcessor,IContextualProcessor,>(_QWORD *a1)
{
  MagnifierProcessor *v2; // rax
  unsigned int v3; // edi
  MagnifierProcessor *v5; // [rsp+38h] [rbp+10h]

  *a1 = 0LL;
  v2 = (MagnifierProcessor *)operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v5 = MagnifierProcessor::MagnifierProcessor(v2);
    v3 = (**(__int64 (__fastcall ***)(MagnifierProcessor *, GUID *, _QWORD *))v5)(
           v5,
           &GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b,
           a1);
    (*(void (__fastcall **)(MagnifierProcessor *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
