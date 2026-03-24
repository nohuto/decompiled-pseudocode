/*
 * XREFs of ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C0024D00
 * Callers:
 *     GreExtCreateRegion @ 0x1C0022DA0 (GreExtCreateRegion.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C00BD804 (GreCreatePolyPolygonRgnInternal.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C01405B0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     ?bAddScans@RGNMEMOBJ@@AEAAHJPEAVEDGE@@K@Z @ 0x1C0025138 (-bAddScans@RGNMEMOBJ@@AEAAHJPEAVEDGE@@K@Z.c)
 *     ?vTighten@RGNOBJ@@QEAAXXZ @ 0x1C00252D0 (-vTighten@RGNOBJ@@QEAAXXZ.c)
 *     ?vCloseAllFigures@EPATHOBJ@@QEAAXXZ @ 0x1C00253B0 (-vCloseAllFigures@EPATHOBJ@@QEAAXXZ.c)
 *     ?bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z @ 0x1C00256F4 (-bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z.c)
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C002AE08 (PALLOCMEM2.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x1C002B1C0 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C002B9F0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?bFlatten@EPATHOBJ@@QEAAHXZ @ 0x1C0081A20 (-bFlatten@EPATHOBJ@@QEAAHXZ.c)
 *     ?bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z @ 0x1C00B9D74 (-bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z.c)
 *     bConstructGET @ 0x1C00BC7C0 (bConstructGET.c)
 *     vAdvanceAETEdges @ 0x1C00BCCE0 (vAdvanceAETEdges.c)
 *     vXSortAETEdges @ 0x1C00BD3D0 (vXSortAETEdges.c)
 *     vMoveNewEdges @ 0x1C00BDBC0 (vMoveNewEdges.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 */

void __fastcall RGNMEMOBJ::vCreate(RGNMEMOBJ *this, struct EPATHOBJ *a2, unsigned int a3, struct _RECTL *a4)
{
  int v7; // eax
  unsigned int v8; // edi
  _DWORD *v9; // r9
  __m128i *v10; // rcx
  char *v11; // r14
  int v12; // r15d
  __int64 v13; // rcx
  LONG v14; // edx
  LONG bottom; // r8d
  __int64 v16; // rdi
  __int64 v17; // rdi
  struct REGION *Region; // rax
  unsigned int v19; // edi
  _QWORD *v20; // rax
  int v21; // esi
  struct _KTHREAD *CurrentThread; // r12
  __int64 v23; // rax
  int v24; // eax
  int v25; // edx
  _DWORD *v26; // rdx
  REGION *v27; // rcx
  LONG top; // eax
  __int64 v29; // rax
  __int128 v31; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v32; // [rsp+38h] [rbp-C8h]
  __int128 v33; // [rsp+48h] [rbp-B8h]
  _OWORD v34[3]; // [rsp+58h] [rbp-A8h] BYREF
  char v35; // [rsp+90h] [rbp-70h] BYREF

  if ( !*((_QWORD *)a2 + 1) )
    return;
  *(_QWORD *)this = 0LL;
  v7 = *(_DWORD *)a2;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  memset(v34, 0, sizeof(v34));
  if ( (v7 & 1) != 0 && !(unsigned int)EPATHOBJ::bFlatten(a2) )
    return;
  EPATHOBJ::vCloseAllFigures(a2);
  v8 = *((_DWORD *)a2 + 1);
  if ( v8 < 2 )
    return;
  if ( !a4
    || (v10 = (__m128i *)*((_QWORD *)a2 + 1), a4->top < (int)HIDWORD(v10[3].m128i_i64[0]))
    && a4->bottom > _mm_srli_si128(v10[48LL], 8).m128i_i32[1] )
  {
    if ( (unsigned int)RGNMEMOBJ::bFastFillWrapper(this, a2) )
    {
      RGNOBJ::vTighten(this);
      v9 = *(_DWORD **)this;
      if ( (*(_DWORD *)(*(_QWORD *)this + 96LL) & 0xF8000000) != 0
        && (*(_DWORD *)(*(_QWORD *)this + 96LL) & 0xF8000000) != -134217728
        || (v9[27] & 0xF8000000) != 0 && (v9[27] & 0xF8000000) != -134217728
        || (v9[26] & 0xF8000000) != 0 && (v9[26] & 0xF8000000) != -134217728
        || (v9[25] & 0xF8000000) != 0 && (v9[25] & 0xF8000000) != -134217728 )
      {
        REGION::vDeleteREGION(*(REGION **)this);
        *(_QWORD *)this = 0LL;
      }
      return;
    }
  }
  if ( v8 >= 0x14 )
  {
    v29 = v8 + 1;
    if ( (unsigned int)v29 < v8 )
      return;
    if ( (unsigned __int64)(48 * v29) > 0xFFFFFFFF )
      return;
    v11 = (char *)PALLOCMEM2(48 * v29);
    if ( !v11 )
      return;
    v12 = 1;
  }
  else
  {
    v11 = &v35;
    v12 = 0;
  }
  v13 = *((_QWORD *)a2 + 1);
  v14 = *(_DWORD *)(v13 + 52);
  bottom = *(_DWORD *)(v13 + 60);
  if ( bottom < v14 )
    goto LABEL_55;
  if ( a4 )
  {
    top = a4->top;
    if ( v14 > top )
      top = *(_DWORD *)(v13 + 52);
    v14 = top;
    if ( bottom >= a4->bottom )
      bottom = a4->bottom;
  }
  v16 = bottom - (__int64)v14;
  if ( v16 <= 0 )
    v16 = 0LL;
  v17 = 32 * (v16 >> 4) + 432;
  if ( v17 > 0x7FFFFFFF )
    goto LABEL_55;
  Region = RGNMEMOBJ::AllocateRegion((unsigned int)v17);
  *(_QWORD *)this = Region;
  if ( !Region )
    goto LABEL_55;
  *((_DWORD *)Region + 6) = v17;
  v19 = 0x80000000;
  *(_DWORD *)(*(_QWORD *)this + 80LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 32LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 28LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 36LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 84LL) = 0;
  *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_QWORD *)(*(_QWORD *)this + 88LL);
  v20 = (_QWORD *)(*(_QWORD *)this + 48LL);
  v20[1] = v20;
  *v20 = v20;
  v21 = bConstructGET(a2, v34, v11, a4);
  if ( !v21 )
    goto LABEL_60;
  CurrentThread = KeGetCurrentThread();
  LODWORD(v32) = 0;
  *(_QWORD *)&v31 = &v31;
  HIDWORD(v31) = 0x7FFFFFFF;
  while ( !PsIsThreadTerminating(CurrentThread) )
  {
    if ( (__int128 *)v31 != &v31 )
    {
      vAdvanceAETEdges(&v31);
      if ( (__int128 *)v31 != &v31 )
      {
        if ( *(__int128 **)v31 != &v31 )
          vXSortAETEdges(&v31);
LABEL_29:
        v23 = *(_QWORD *)&v34[0];
        goto LABEL_30;
      }
    }
    v23 = *(_QWORD *)&v34[0];
    if ( *(_OWORD **)&v34[0] == v34 )
      goto LABEL_38;
    v25 = v19;
    v19 = *(_DWORD *)(*(_QWORD *)&v34[0] + 16LL);
    if ( v19 != v25 )
    {
      if ( !(unsigned int)RGNMEMOBJ::bAddNullScan(this, v25, v19) )
        goto LABEL_60;
      goto LABEL_29;
    }
LABEL_30:
    if ( *(_DWORD *)(v23 + 16) == v19 )
      vMoveNewEdges(v34, &v31, v19);
    v24 = RGNMEMOBJ::bAddScans(this, v19++, (struct EDGE *)&v31, a3);
    v21 = v24;
    if ( !v24 )
      goto LABEL_60;
  }
  v21 = 0;
LABEL_38:
  if ( !v21 || !(unsigned int)RGNMEMOBJ::bAddNullScan(this, v19, 0x7FFFFFFF) )
  {
LABEL_60:
    v27 = *(REGION **)this;
    goto LABEL_61;
  }
  RGNOBJ::vTighten(this);
  v26 = *(_DWORD **)this;
  if ( ((*(_DWORD *)(*(_QWORD *)this + 96LL) & 0xF8000000) == 0
     || (*(_DWORD *)(*(_QWORD *)this + 96LL) & 0xF8000000) == -134217728)
    && (((v26[27] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
    && (((v26[26] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
    && (((v26[25] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
  {
    goto LABEL_55;
  }
  v27 = *(REGION **)this;
LABEL_61:
  REGION::vDeleteREGION(v27);
  *(_QWORD *)this = 0LL;
LABEL_55:
  if ( v12 )
    Win32FreePool(v11);
}
