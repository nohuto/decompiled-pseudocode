/*
 * XREFs of CmpReportNotifyForKcbStack @ 0x1407AEF5C
 * Callers:
 *     CmDeleteLayeredKey @ 0x1406144A0 (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x1406B762C (CmDeleteKey.c)
 *     CmpSetKeySecurity @ 0x1406B7E3C (CmpSetKeySecurity.c)
 *     CmDeleteValueKey @ 0x1406B9764 (CmDeleteValueKey.c)
 *     CmpPerformUnloadKey @ 0x14074A194 (CmpPerformUnloadKey.c)
 *     CmpReportNotify @ 0x140783638 (CmpReportNotify.c)
 *     CmpCreateChild @ 0x1407A7590 (CmpCreateChild.c)
 *     CmSetValueKey @ 0x1407A9870 (CmSetValueKey.c)
 * Callees:
 *     CmpReportNotifyHelper @ 0x1407AF050 (CmpReportNotifyHelper.c)
 *     CmpGetKcbAtLayerHeight @ 0x1407AF600 (CmpGetKcbAtLayerHeight.c)
 */

__int64 __fastcall CmpReportNotifyForKcbStack(__int64 a1, int a2, int a3, __int64 a4)
{
  int v7; // edi
  __int64 KcbAtLayerHeight; // rbx
  int v9; // r8d
  __int64 v10; // r9
  __int64 result; // rax

  v7 = a1;
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1);
  result = CmpReportNotifyHelper(v7, *(_QWORD *)(KcbAtLayerHeight + 32), a2, v9, v10);
  if ( *(_QWORD *)(KcbAtLayerHeight + 32) != CmpMasterHive )
    return CmpReportNotifyHelper(v7, CmpMasterHive, a2, a3, a4);
  return result;
}
