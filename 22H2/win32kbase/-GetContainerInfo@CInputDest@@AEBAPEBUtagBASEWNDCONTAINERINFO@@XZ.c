/*
 * XREFs of ?GetContainerInfo@CInputDest@@AEBAPEBUtagBASEWNDCONTAINERINFO@@XZ @ 0x1C01B55B4
 * Callers:
 *     ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x1C0057574 (-BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z.c)
 *     ?GetContainerHwndDest@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C01B556C (-GetContainerHwndDest@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?GetContainerId@CInputDest@@QEBA?AUCONTAINER_ID@@XZ @ 0x1C01B5590 (-GetContainerId@CInputDest@@QEBA-AUCONTAINER_ID@@XZ.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1C01BC6B8 (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 * Callees:
 *     <none>
 */

const struct tagBASEWNDCONTAINERINFO *__fastcall CInputDest::GetContainerInfo(CInputDest *this)
{
  const struct tagBASEWNDCONTAINERINFO *result; // rax
  __int64 v2; // rcx
  __int64 v3; // rcx

  result = 0LL;
  if ( *((_DWORD *)this + 23) == 1 )
  {
    v2 = *((_QWORD *)this + 10);
    if ( v2 )
    {
      v3 = *(_QWORD *)(v2 + 136);
      if ( v3 )
        return (const struct tagBASEWNDCONTAINERINFO *)v3;
    }
  }
  return result;
}
