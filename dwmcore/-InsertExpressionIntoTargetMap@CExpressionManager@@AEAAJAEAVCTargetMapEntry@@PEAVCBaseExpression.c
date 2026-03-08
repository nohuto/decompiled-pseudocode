/*
 * XREFs of ?InsertExpressionIntoTargetMap@CExpressionManager@@AEAAJAEAVCTargetMapEntry@@PEAVCBaseExpression@@PEAVSubchannelMaskInfo@@@Z @ 0x180099738
 * Callers:
 *     ?RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z @ 0x180099600 (-RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z.c)
 *     ?RegisterIndirectTarget@CExpressionManager@@QEAAJPEAVCBaseExpression@@PEAV?$CWeakReference@VCResource@@@@IPEAVSubchannelMaskInfo@@@Z @ 0x180213A54 (-RegisterIndirectTarget@CExpressionManager@@QEAAJPEAVCBaseExpression@@PEAV-$CWeakReference@VCRes.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall CExpressionManager::InsertExpressionIntoTargetMap(
        CExpressionManager *this,
        struct CTargetMapEntry *a2,
        struct CBaseExpression *a3,
        struct SubchannelMaskInfo *a4)
{
  struct _RTL_GENERIC_TABLE *v4; // rbp
  unsigned int v5; // esi
  int v6; // eax
  _QWORD *v10; // rax
  void *v11; // rdi
  _QWORD *inserted; // rbx
  unsigned int v13; // ecx
  HANDLE ProcessHeap; // rax
  _QWORD *v15; // rax
  void *v17; // rcx
  unsigned int v18; // [rsp+20h] [rbp-68h]
  __int128 v19; // [rsp+30h] [rbp-58h]
  __int128 v20; // [rsp+40h] [rbp-48h] BYREF
  void *v21; // [rsp+50h] [rbp-38h]
  unsigned __int8 NewElement; // [rsp+90h] [rbp+8h] BYREF

  v4 = (struct _RTL_GENERIC_TABLE *)((char *)this + 328);
  *(_QWORD *)&v19 = *(_QWORD *)a2;
  v5 = 0;
  v6 = *((_DWORD *)a2 + 2);
  v21 = 0LL;
  DWORD2(v19) = v6;
  v20 = v19;
  v10 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 328), &v20);
  v11 = v21;
  inserted = v10;
  while ( v11 )
  {
    v17 = v11;
    v11 = (void *)*((_QWORD *)v11 + 2);
    operator delete(v17, 0x18uLL);
  }
  if ( !inserted )
  {
    inserted = RtlInsertElementGenericTable(v4, a2, 0x18u, &NewElement);
    if ( !inserted )
    {
      v18 = 982;
LABEL_11:
      v5 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024882, v18, 0LL);
      return v5;
    }
  }
  ProcessHeap = GetProcessHeap();
  v15 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
  v13 = (unsigned int)v15;
  if ( !v15 )
  {
    v18 = 986;
    goto LABEL_11;
  }
  v15[2] = 0LL;
  *v15 = a4;
  v15[1] = a3;
  v15[2] = inserted[2];
  inserted[2] = v15;
  return v5;
}
