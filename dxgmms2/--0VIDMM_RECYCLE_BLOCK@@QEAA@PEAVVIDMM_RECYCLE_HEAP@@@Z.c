/*
 * XREFs of ??0VIDMM_RECYCLE_BLOCK@@QEAA@PEAVVIDMM_RECYCLE_HEAP@@@Z @ 0x1C00A966C
 * Callers:
 *     ?CreateBlockForType@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_BLOCK@@_KE@Z @ 0x1C00A95DC (-CreateBlockForType@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_BLOCK@@_KE@Z.c)
 * Callees:
 *     ?CreateHistoryProxy@VIDMM_RECYCLE_BLOCK@@QEAAX_K@Z @ 0x1C00320A8 (-CreateHistoryProxy@VIDMM_RECYCLE_BLOCK@@QEAAX_K@Z.c)
 */

VIDMM_RECYCLE_BLOCK *__fastcall VIDMM_RECYCLE_BLOCK::VIDMM_RECYCLE_BLOCK(
        VIDMM_RECYCLE_BLOCK *this,
        struct VIDMM_RECYCLE_HEAP *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 **v5; // rdx

  *((_BYTE *)this + 132) &= ~1u;
  *((_QWORD *)this + 4) = a2;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 11) = this;
  *((_QWORD *)this + 13) = (char *)this + 96;
  *((_QWORD *)this + 12) = (char *)this + 96;
  v3 = (__int64 *)((char *)this + 16);
  ++*((_QWORD *)a2 + 3);
  v4 = *((_QWORD *)this + 4) + 32LL;
  v5 = *(__int64 ***)(v4 + 8);
  if ( *v5 != (__int64 *)v4 )
    __fastfail(3u);
  *v3 = v4;
  v3[1] = (__int64)v5;
  *v5 = v3;
  *(_QWORD *)(v4 + 8) = v3;
  *((_QWORD *)this + 10) = (char *)this + 72;
  *((_QWORD *)this + 9) = (char *)this + 72;
  if ( dword_1C00764A8 )
    VIDMM_RECYCLE_BLOCK::CreateHistoryProxy(this, (unsigned int)dword_1C00764AC);
  return this;
}
