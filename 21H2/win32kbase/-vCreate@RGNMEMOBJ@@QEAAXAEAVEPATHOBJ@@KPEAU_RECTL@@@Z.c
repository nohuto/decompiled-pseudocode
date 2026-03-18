/*
 * XREFs of ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C0032680
 * Callers:
 *     GreExtCreateRegion @ 0x1C00311B0 (GreExtCreateRegion.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C00CDB30 (GreCreatePolyPolygonRgnInternal.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C016D4E0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0023E50 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x1C0025B30 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FC74 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?vTighten@RGNOBJ@@QEAAXXZ @ 0x1C0032AD0 (-vTighten@RGNOBJ@@QEAAXXZ.c)
 *     ?vCloseAllFigures@EPATHOBJ@@QEAAXXZ @ 0x1C0032BC0 (-vCloseAllFigures@EPATHOBJ@@QEAAXXZ.c)
 *     ?bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z @ 0x1C0032BF4 (-bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?bFlatten@EPATHOBJ@@QEAAHXZ @ 0x1C0092170 (-bFlatten@EPATHOBJ@@QEAAHXZ.c)
 *     bConstructGET @ 0x1C00CBA10 (bConstructGET.c)
 *     ?bAddScans@RGNMEMOBJ@@AEAAHJPEAVEDGE@@K@Z @ 0x1C00CBE64 (-bAddScans@RGNMEMOBJ@@AEAAHJPEAVEDGE@@K@Z.c)
 *     vAdvanceAETEdges @ 0x1C00CC1A0 (vAdvanceAETEdges.c)
 *     vXSortAETEdges @ 0x1C00CC840 (vXSortAETEdges.c)
 *     vMoveNewEdges @ 0x1C00CC970 (vMoveNewEdges.c)
 *     ?bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z @ 0x1C00CD3E8 (-bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 */

void __fastcall RGNMEMOBJ::vCreate(RGNMEMOBJ *this, struct EPATHOBJ *a2, unsigned int a3, struct _RECTL *a4)
{
  int v7; // eax
  unsigned int v8; // edi
  _DWORD *v9; // r9
  __m128i *v10; // rcx
  char *v11; // rdi
  int v12; // r15d
  __int64 v13; // rax
  LONG v14; // ecx
  LONG bottom; // edx
  LONG top; // eax
  __int64 v17; // rsi
  __int64 v18; // rsi
  struct REGION *Region; // rax
  unsigned int v20; // esi
  _QWORD *v21; // rax
  int v22; // r14d
  struct _KTHREAD *CurrentThread; // r12
  __int64 v24; // rax
  int v25; // eax
  int v26; // edx
  _DWORD *v27; // rdx
  struct _SLIST_ENTRY *v28; // rcx
  __int64 v29; // rax
  unsigned int v30; // ecx
  __int128 v32; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v33; // [rsp+38h] [rbp-C8h]
  __int128 v34; // [rsp+48h] [rbp-B8h]
  _OWORD v35[3]; // [rsp+58h] [rbp-A8h] BYREF
  char v36; // [rsp+90h] [rbp-70h] BYREF

  if ( !*((_QWORD *)a2 + 1) )
    return;
  *(_QWORD *)this = 0LL;
  v7 = *(_DWORD *)a2;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  memset(v35, 0, sizeof(v35));
  if ( (v7 & 1) != 0 && !(unsigned int)EPATHOBJ::bFlatten(a2) )
    return;
  EPATHOBJ::vCloseAllFigures(a2);
  v8 = *((_DWORD *)a2 + 1);
  if ( v8 < 2 )
    return;
  if ( a4
    && ((v10 = (__m128i *)*((_QWORD *)a2 + 1), a4->top >= (int)HIDWORD(v10[3].m128i_i64[0]))
     || a4->bottom <= _mm_srli_si128(v10[48LL], 8).m128i_i32[1])
    || !(unsigned int)RGNMEMOBJ::bFastFillWrapper(this, a2) )
  {
    if ( v8 >= 0x14 )
    {
      v29 = v8 + 1;
      if ( (unsigned int)v29 < v8 )
        return;
      v30 = 48 * v29;
      if ( (unsigned __int64)(48 * v29) > 0xFFFFFFFF )
        return;
      if ( !v30 )
        return;
      v11 = (char *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                      260LL,
                      v30,
                      1734632775);
      if ( !v11 )
        return;
      v12 = 1;
    }
    else
    {
      v11 = &v36;
      v12 = 0;
    }
    v13 = *((_QWORD *)a2 + 1);
    v14 = *(_DWORD *)(v13 + 52);
    bottom = *(_DWORD *)(v13 + 60);
    if ( bottom >= v14 )
    {
      if ( a4 )
      {
        top = a4->top;
        if ( v14 > top )
          top = v14;
        v14 = top;
        if ( bottom >= a4->bottom )
          bottom = a4->bottom;
      }
      v17 = bottom - (__int64)v14;
      if ( v17 <= 0 )
        v17 = 0LL;
      v18 = 32 * (v17 >> 4) + 432;
      if ( v18 <= 0x7FFFFFFF )
      {
        Region = RGNMEMOBJ::AllocateRegion(v18);
        *(_QWORD *)this = Region;
        if ( Region )
        {
          *((_DWORD *)Region + 6) = v18;
          v20 = 0x80000000;
          *(_DWORD *)(*(_QWORD *)this + 80LL) = 0;
          *(_DWORD *)(*(_QWORD *)this + 32LL) = 0;
          *(_DWORD *)(*(_QWORD *)this + 28LL) = 0;
          *(_DWORD *)(*(_QWORD *)this + 36LL) = 0;
          *(_DWORD *)(*(_QWORD *)this + 84LL) = 0;
          *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_QWORD *)(*(_QWORD *)this + 88LL);
          v21 = (_QWORD *)(*(_QWORD *)this + 48LL);
          v21[1] = v21;
          *v21 = v21;
          v22 = bConstructGET(a2, v35, v11, a4);
          if ( v22 )
          {
            CurrentThread = KeGetCurrentThread();
            LODWORD(v33) = 0;
            *(_QWORD *)&v32 = &v32;
            HIDWORD(v32) = 0x7FFFFFFF;
            while ( 1 )
            {
              if ( PsIsThreadTerminating(CurrentThread) )
                goto LABEL_61;
              if ( (__int128 *)v32 != &v32 )
              {
                vAdvanceAETEdges(&v32);
                if ( (__int128 *)v32 != &v32 )
                  break;
              }
              v24 = *(_QWORD *)&v35[0];
              if ( *(_OWORD **)&v35[0] == v35 )
              {
                if ( !v22 || !(unsigned int)RGNMEMOBJ::bAddNullScan(this, v20, 0x7FFFFFFF) )
                  goto LABEL_61;
                RGNOBJ::vTighten(this);
                v27 = *(_DWORD **)this;
                if ( (*(_DWORD *)(*(_QWORD *)this + 96LL) & 0xF8000000) != 0
                  && (*(_DWORD *)(*(_QWORD *)this + 96LL) & 0xF8000000) != -134217728
                  || (((v27[27] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
                  || (((v27[26] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
                  || (((v27[25] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
                {
                  v28 = *(struct _SLIST_ENTRY **)this;
                  goto LABEL_62;
                }
                goto LABEL_56;
              }
              v26 = v20;
              v20 = *(_DWORD *)(*(_QWORD *)&v35[0] + 16LL);
              if ( v20 != v26 )
              {
                if ( !(unsigned int)RGNMEMOBJ::bAddNullScan(this, v26, v20) )
                  goto LABEL_61;
                goto LABEL_33;
              }
LABEL_34:
              if ( *(_DWORD *)(v24 + 16) == v20 )
                vMoveNewEdges(v35, &v32, v20);
              v25 = RGNMEMOBJ::bAddScans(this, v20++, (struct EDGE *)&v32, a3);
              v22 = v25;
              if ( !v25 )
                goto LABEL_61;
            }
            if ( *(__int128 **)v32 != &v32 )
              vXSortAETEdges(&v32);
LABEL_33:
            v24 = *(_QWORD *)&v35[0];
            goto LABEL_34;
          }
LABEL_61:
          v28 = *(struct _SLIST_ENTRY **)this;
LABEL_62:
          REGION::vDeleteREGION(v28);
          *(_QWORD *)this = 0LL;
        }
      }
    }
LABEL_56:
    if ( v12 && v11 )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v11);
    return;
  }
  RGNOBJ::vTighten(this);
  v9 = *(_DWORD **)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 96LL) & 0xF8000000) != 0
    && (*(_DWORD *)(*(_QWORD *)this + 96LL) & 0xF8000000) != -134217728
    || (v9[27] & 0xF8000000) != 0 && (v9[27] & 0xF8000000) != -134217728
    || (v9[26] & 0xF8000000) != 0 && (v9[26] & 0xF8000000) != -134217728
    || (v9[25] & 0xF8000000) != -134217728 && (v9[25] & 0xF8000000) != 0 )
  {
    REGION::vDeleteREGION(*(PSLIST_ENTRY *)this);
    *(_QWORD *)this = 0LL;
  }
}
