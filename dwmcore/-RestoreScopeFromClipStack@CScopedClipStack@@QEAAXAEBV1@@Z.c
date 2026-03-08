/*
 * XREFs of ?RestoreScopeFromClipStack@CScopedClipStack@@QEAAXAEBV1@@Z @ 0x1800218C4
 * Callers:
 *     ?EndFrame@CSubDrawingContext@@AEAAX_N@Z @ 0x1800217DC (-EndFrame@CSubDrawingContext@@AEAAX_N@Z.c)
 * Callees:
 *     ?clear_region@?$vector_facade@USinkEntry@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkEntry@CCpuClipAntialiasSinkContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180090BE4 (-clear_region@-$vector_facade@USinkEntry@CCpuClipAntialiasSinkContext@@V-$buffer_impl@USinkEntry.c)
 */

void __fastcall CScopedClipStack::RestoreScopeFromClipStack(CScopedClipStack *this, const struct CScopedClipStack *a2)
{
  __int64 v2; // rax
  unsigned __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int64 v8; // r10
  __int64 v9; // rbx
  __int64 v10; // rcx

  v2 = *((_QWORD *)this + 1);
  v4 = 0LL;
  v5 = *(_QWORD *)(*(_QWORD *)a2 + 24LL);
  v6 = -858993459 * (unsigned int)((__int64)(*((_QWORD *)this + 234) - *((_QWORD *)this + 233)) >> 3)
     - *(_DWORD *)(v2 - 176);
  while ( 1 )
  {
    v7 = *((_QWORD *)this + 233);
    v8 = v4;
    if ( (unsigned int)v6 >= 0xCCCCCCCCCCCCCCCDuLL * ((*((_QWORD *)this + 234) - v7) >> 3) )
      break;
    v10 = 5 * v6;
    if ( !v5 && *(_QWORD *)(v7 + 40 * v6 + 24) )
    {
      *(_QWORD *)(v7 + 40 * v6 + 24) = 0LL;
      --*(_QWORD *)(v2 - 160);
    }
    ++v4;
    v6 = (unsigned int)(v6 + 1);
    if ( !*(_BYTE *)(v7 + 8 * v10 + 36) )
      v4 = v8;
  }
  v9 = *(_QWORD *)(v2 - 16);
  if ( v9 )
  {
    while ( 0x84BDA12F684BDA13uLL * ((__int64)(*(_QWORD *)(v9 + 24) - *(_QWORD *)(v9 + 16)) >> 4) > v4 )
      detail::vector_facade<CCpuClipAntialiasSinkContext::SinkEntry,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkEntry,2,1,detail::liberal_expansion_policy>>::clear_region(
        v9 + 16,
        0x84BDA12F684BDA13uLL * ((*(_QWORD *)(v9 + 24) - 432LL - *(_QWORD *)(v9 + 16)) >> 4),
        1LL);
  }
}
