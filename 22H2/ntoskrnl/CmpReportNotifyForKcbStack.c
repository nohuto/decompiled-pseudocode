/*
 * XREFs of CmpReportNotifyForKcbStack @ 0x1406D5460
 * Callers:
 *     CmDeleteLayeredKey @ 0x14061695C (CmDeleteLayeredKey.c)
 *     CmpPerformUnloadKey @ 0x140699394 (CmpPerformUnloadKey.c)
 *     CmpCreateChild @ 0x1406D1020 (CmpCreateChild.c)
 *     CmSetValueKey @ 0x1406D32F0 (CmSetValueKey.c)
 *     CmpSetKeySecurity @ 0x14070C46C (CmpSetKeySecurity.c)
 *     CmDeleteValueKey @ 0x14070EFD4 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x14071009C (CmDeleteKey.c)
 *     CmpReportNotify @ 0x1407D2130 (CmpReportNotify.c)
 * Callees:
 *     CmpReportNotifyHelper @ 0x1406D54F0 (CmpReportNotifyHelper.c)
 *     CmpGetKcbAtLayerHeight @ 0x1406D5850 (CmpGetKcbAtLayerHeight.c)
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
