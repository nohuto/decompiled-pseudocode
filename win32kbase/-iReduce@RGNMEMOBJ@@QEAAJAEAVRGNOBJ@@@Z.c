/*
 * XREFs of ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C0184084
 * Callers:
 *     GreExtCreateRegion @ 0x1C0019830 (GreExtCreateRegion.c)
 * Callees:
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C0042EB0 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0044250 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?iComplexity@RGNCOREOBJ@@QEBAJXZ @ 0x1C004832C (-iComplexity@RGNCOREOBJ@@QEBAJXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x1C0051770 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0053220 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXXZ @ 0x1C0053560 (-vSet@RGNOBJ@@QEAAXXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0055304 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 */

__int64 __fastcall RGNMEMOBJ::iReduce(RGNMEMOBJ *this, struct RGNOBJ *a2)
{
  unsigned int v4; // ebx
  int v5; // r9d
  struct _RECTL si128; // [rsp+20h] [rbp-18h] BYREF
  PVOID v8; // [rsp+50h] [rbp+18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v8, 0x70u);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v8);
  v4 = 0;
  if ( v8
    && (si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm),
        RGNOBJ::vSet((RGNOBJ *)&v8, &si128),
        LOBYTE(v5) = 8,
        *(__m128i *)(*(_QWORD *)this + 56LL) = _mm_load_si128((const __m128i *)&_xmm),
        (unsigned int)RGNOBJ::bMerge(this, (struct RGNOBJ *)&v8, a2, v5)) )
  {
    v9 = (*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL);
    v4 = RGNCOREOBJ::iComplexity((RGNCOREOBJ *)&v9);
  }
  else
  {
    RGNOBJ::vSet(this);
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP(&v8);
  return v4;
}
