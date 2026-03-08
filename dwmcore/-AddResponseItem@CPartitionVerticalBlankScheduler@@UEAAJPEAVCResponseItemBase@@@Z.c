/*
 * XREFs of ?AddResponseItem@CPartitionVerticalBlankScheduler@@UEAAJPEAVCResponseItemBase@@@Z @ 0x1801CEA70
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddResponse@CFrameInfo@@QEAAJPEAVCResponseItemBase@@@Z @ 0x1801EE688 (-AddResponse@CFrameInfo@@QEAAJPEAVCResponseItemBase@@@Z.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::AddResponseItem(
        CPartitionVerticalBlankScheduler *this,
        struct CResponseItemBase *a2)
{
  CFrameInfo *v2; // rcx
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v5; // rcx

  v2 = (CFrameInfo *)*((_QWORD *)this + 526);
  v3 = -2003292412;
  if ( v2 )
  {
    v4 = CFrameInfo::AddResponse(v2, a2);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x6F6u, 0LL);
  }
  return v3;
}
