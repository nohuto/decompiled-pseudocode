/*
 * XREFs of ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0024B20
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C001C600 (-bCompute@DC@@QEAAHXZ.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0027E60 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C003353C (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     GreCombineRgn @ 0x1C006EFF0 (GreCombineRgn.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C00968C0 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C016D4E0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     GreIntersectVisRect @ 0x1C0177FE0 (GreIntersectVisRect.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0022E08 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?bContain@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0026634 (-bContain@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C00266E0 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C0026860 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0027BB0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 */

__int64 __fastcall RGNOBJ::iCombine(RGNOBJ *this, struct RGNOBJ *a2, struct RGNOBJ *a3, int a4)
{
  __int64 v4; // r10
  RGNOBJ *v5; // rdi
  struct RGNOBJ *v6; // r11
  RGNOBJ *v7; // rbx
  int v8; // eax
  struct RGNOBJ *v10; // rdx
  __m128i *v11; // rcx
  __m128i v12; // xmm1
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // xmm1_8
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // xmm0_8
  LONG v17; // r8d
  LONG v18; // edx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // r11
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  struct _RECTL v25; // [rsp+20h] [rbp-18h] BYREF

  v4 = *(_QWORD *)this;
  v5 = a3;
  v6 = a2;
  v7 = this;
  if ( *(struct REGION **)this == prgnDefault )
    return RGNOBJ::iComplexity(this);
  if ( (unsigned int)(a4 - 1) <= 1 )
  {
    if ( *(_DWORD *)(*(_QWORD *)a2 + 80LL) == 56 && (unsigned int)RGNOBJ::bContain(a2, a3) )
    {
      if ( a4 != 1 )
        v5 = v6;
      v10 = v5;
    }
    else
    {
      if ( *(_DWORD *)(*(_QWORD *)v5 + 80LL) != 56 || !(unsigned int)RGNOBJ::bContain(v5, v6) )
      {
        if ( a4 == 1 && *(_DWORD *)(*(_QWORD *)v6 + 80LL) == 56 )
        {
          v11 = *(__m128i **)v5;
          if ( *(_DWORD *)(*(_QWORD *)v5 + 80LL) == 56 )
          {
            v12 = *(__m128i *)(*(_QWORD *)v6 + 96LL);
            v25 = 0LL;
            v13 = v12.m128i_i64[0];
            v14 = _mm_srli_si128(v12, 8).m128i_u64[0];
            v15 = v11[6].m128i_u64[0];
            v16 = _mm_srli_si128(v11[6], 8).m128i_u64[0];
            v17 = v15;
            if ( (int)v13 > (int)v15 )
              v17 = v13;
            v18 = v16;
            v25.left = v17;
            if ( (int)v14 < (int)v16 )
              v18 = v14;
            v19 = HIDWORD(v13);
            v20 = HIDWORD(v15);
            v25.right = v18;
            if ( (int)v19 > (int)v20 )
              LODWORD(v20) = v19;
            v21 = HIDWORD(v16);
            v25.top = v20;
            if ( SHIDWORD(v14) < SHIDWORD(v16) )
              LODWORD(v21) = HIDWORD(v14);
            v25.bottom = v21;
            if ( (int)v20 >= (int)v21 || v17 >= v18 )
            {
              v22 = *(_QWORD *)(v4 + 88);
              *(_DWORD *)(v4 + 80) = 16;
              *(_DWORD *)(v4 + 84) = 1;
              *(_QWORD *)(v4 + 96) = 0LL;
              *(_QWORD *)(v4 + 104) = 0LL;
              *(_DWORD *)v22 = 0;
              *(_DWORD *)(v22 + 4) = 0x80000000;
              *(_QWORD *)(v22 + 8) = 0x7FFFFFFFLL;
              *(_QWORD *)(v4 + 40) = v22 + 16;
            }
            else
            {
              RGNOBJ::vSet(v7, &v25);
            }
            return 2LL;
          }
        }
        goto LABEL_3;
      }
      if ( a4 != 1 )
        v6 = v5;
      v10 = v6;
    }
    v8 = RGNOBJ::bCopy(v7, v10);
    goto LABEL_4;
  }
LABEL_3:
  v8 = RGNOBJ::bMerge(v7, v6, v5, byte_1C025AA50[a4]);
LABEL_4:
  if ( v8 )
  {
    this = v7;
    return RGNOBJ::iComplexity(this);
  }
  v23 = *(_QWORD *)v7;
  *(_DWORD *)(v23 + 80) = 16;
  *(_DWORD *)(v23 + 84) = 1;
  *(_QWORD *)(v23 + 96) = 0LL;
  *(_QWORD *)(v23 + 104) = 0LL;
  v24 = *(_QWORD *)(v23 + 88);
  *(_DWORD *)v24 = 0;
  *(_DWORD *)(v24 + 4) = 0x80000000;
  *(_QWORD *)(v24 + 8) = 0x7FFFFFFFLL;
  *(_QWORD *)(v23 + 40) = v24 + 16;
  return 0LL;
}
