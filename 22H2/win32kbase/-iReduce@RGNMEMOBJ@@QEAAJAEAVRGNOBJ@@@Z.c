/*
 * XREFs of ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C0157418
 * Callers:
 *     GreExtCreateRegion @ 0x1C007C890 (GreExtCreateRegion.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C003D9E0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C003E0F4 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXXZ @ 0x1C003E4A0 (-vSet@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x1C003ED80 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?iComplexity@RGNCOREOBJ@@QEBAJXZ @ 0x1C0044530 (-iComplexity@RGNCOREOBJ@@QEBAJXZ.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C004C7D0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C007DF50 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 */

__int64 __fastcall RGNMEMOBJ::iReduce(RGNMEMOBJ *this, struct RGNOBJ *a2)
{
  unsigned int v2; // ebx
  int v5; // r9d
  struct _RECTL si128; // [rsp+20h] [rbp-18h] BYREF
  PVOID v8; // [rsp+50h] [rbp+18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v2 = 0;
  v8 = 0LL;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v8, 0x70u);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v8);
  if ( v8
    && (si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm),
        RGNOBJ::vSet((RGNOBJ *)&v8, &si128),
        LOBYTE(v5) = 8,
        *(__m128i *)(*(_QWORD *)this + 56LL) = _mm_load_si128((const __m128i *)&_xmm),
        (unsigned int)RGNOBJ::bMerge(this, (struct RGNOBJ *)&v8, a2, v5)) )
  {
    v9 = (*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL);
    v2 = RGNCOREOBJ::iComplexity((RGNCOREOBJ *)&v9);
  }
  else
  {
    RGNOBJ::vSet(this);
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP(&v8);
  return v2;
}
