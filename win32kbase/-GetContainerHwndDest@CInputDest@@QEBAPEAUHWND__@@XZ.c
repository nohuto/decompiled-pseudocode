/*
 * XREFs of ?GetContainerHwndDest@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C01E3794
 * Callers:
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1C01EB57C (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     ?StageMouseChunk@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@AEBVCInputDest@@@Z @ 0x1C0231448 (-StageMouseChunk@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@AEBVCInputDes.c)
 * Callees:
 *     ?GetContainerInfo@CInputDest@@AEBAPEBUtagBASEWNDCONTAINERINFO@@XZ @ 0x1C01E37DC (-GetContainerInfo@CInputDest@@AEBAPEBUtagBASEWNDCONTAINERINFO@@XZ.c)
 */

HWND __fastcall CInputDest::GetContainerHwndDest(CInputDest *this)
{
  const struct tagBASEWNDCONTAINERINFO *ContainerInfo; // rdx
  HWND result; // rax

  ContainerInfo = CInputDest::GetContainerInfo(this);
  result = 0LL;
  if ( ContainerInfo )
    return (HWND)*((_QWORD *)ContainerInfo + 1);
  return result;
}
