/*
 * XREFs of ?RemoveAt@?$DynArray@PEAVCExcludeVisualReference@@$0A@@@QEAAJI@Z @ 0x1801B50FC
 * Callers:
 *     ??$AddProperty@UD2DVector4@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector4@@PEAI@Z @ 0x18001C668 (--$AddProperty@UD2DVector4@@@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator.c)
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x18001D500 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     ??$AddProperty@UD2DVector2@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector2@@PEAI@Z @ 0x18001E5F0 (--$AddProperty@UD2DVector2@@@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator.c)
 *     ??$AddProperty@_N@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_NPEAI@Z @ 0x18001EA40 (--$AddProperty@_N@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4.c)
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x180021FCC (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ??$AddProperty@M@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBMPEAI@Z @ 0x1800DD520 (--$AddProperty@M@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4D.c)
 *     ??$AddProperty@UD2D_MATRIX_3X2_F@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2D_MATRIX_3X2_F@@PEAI@Z @ 0x1800DD7C4 (--$AddProperty@UD2D_MATRIX_3X2_F@@@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAll.c)
 *     ??$AddProperty@UD2DMatrix@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix@@PEAI@Z @ 0x1800DDDA0 (--$AddProperty@UD2DMatrix@@@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@.c)
 *     ??$AddProperty@U_D3DCOLORVALUE@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBU_D3DCOLORVALUE@@PEAI@Z @ 0x1800DE1C0 (--$AddProperty@U_D3DCOLORVALUE@@@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAlloc.c)
 *     ??$AddProperty@UD2DVector3@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector3@@PEAI@Z @ 0x1800DE5BC (--$AddProperty@UD2DVector3@@@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator.c)
 *     ?AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x18010AF30 (-AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x1801B5178 (-RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 *     ??$AddProperty@UD2DQuaternion@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DQuaternion@@PEAI@Z @ 0x1801E16AC (--$AddProperty@UD2DQuaternion@@@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAlloca.c)
 *     CComposition::ForEachCursorVisualReference__lambda_f7805202518b118888e0b3d23c76c683___ @ 0x1801EC088 (CComposition--ForEachCursorVisualReference__lambda_f7805202518b118888e0b3d23c76c683___.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C0E8C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArray<CExcludeVisualReference *,0>::RemoveAt(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // ebx
  unsigned int v4; // r9d
  __int64 v6; // r11
  __int64 v7; // rcx

  v2 = *(_DWORD *)(a1 + 24);
  v3 = 0;
  v4 = a2;
  if ( a2 < v2 )
  {
    v6 = *(_QWORD *)a1;
    if ( a2 < v2 - 1 )
    {
      do
      {
        v7 = v4++;
        *(_QWORD *)(v6 + 8 * v7) = *(_QWORD *)(v6 + 8LL * v4);
        v2 = *(_DWORD *)(a1 + 24);
      }
      while ( v4 < v2 - 1 );
    }
    *(_DWORD *)(a1 + 24) = v2 - 1;
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, 0x19Cu, 0LL);
  }
  return v3;
}
