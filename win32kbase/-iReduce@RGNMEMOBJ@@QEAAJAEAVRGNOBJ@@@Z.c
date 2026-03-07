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
