/*
 * XREFs of ?RegisterIndirectTarget@CExpressionManager@@QEAAJPEAVCBaseExpression@@PEAV?$CWeakReference@VCResource@@@@IPEAVSubchannelMaskInfo@@@Z @ 0x180213A54
 * Callers:
 *     ?RegisterIndirectTarget@CBaseExpression@@QEAAJPEAV?$CWeakReference@VCResource@@@@I@Z @ 0x18023C1BC (-RegisterIndirectTarget@CBaseExpression@@QEAAJPEAV-$CWeakReference@VCResource@@@@I@Z.c)
 * Callees:
 *     ??1CTargetMapEntry@@QEAA@XZ @ 0x1800995B8 (--1CTargetMapEntry@@QEAA@XZ.c)
 *     ?InsertExpressionIntoTargetMap@CExpressionManager@@AEAAJAEAVCTargetMapEntry@@PEAVCBaseExpression@@PEAVSubchannelMaskInfo@@@Z @ 0x180099738 (-InsertExpressionIntoTargetMap@CExpressionManager@@AEAAJAEAVCTargetMapEntry@@PEAVCBaseExpression.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpressionManager::RegisterIndirectTarget(
        CExpressionManager *a1,
        struct CBaseExpression *a2,
        __int64 a3,
        int a4)
{
  int inserted; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v9; // [rsp+30h] [rbp-28h] BYREF
  int v10; // [rsp+38h] [rbp-20h]
  __int64 v11; // [rsp+40h] [rbp-18h]

  v11 = 0LL;
  v9 = a3;
  v10 = a4;
  inserted = CExpressionManager::InsertExpressionIntoTargetMap(a1, (struct CTargetMapEntry *)&v9, a2, 0LL);
  v7 = inserted;
  if ( inserted < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, inserted, 0xBDu, 0LL);
  }
  else
  {
    *((_BYTE *)a1 + 448) |= 4u;
    v7 = 0;
  }
  CTargetMapEntry::~CTargetMapEntry((CTargetMapEntry *)&v9);
  return v7;
}
