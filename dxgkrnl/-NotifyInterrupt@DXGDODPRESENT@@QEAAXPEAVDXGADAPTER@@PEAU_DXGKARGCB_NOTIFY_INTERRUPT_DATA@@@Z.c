void __fastcall DXGDODPRESENT::NotifyInterrupt(
        DXGDODPRESENT *this,
        ADAPTER_DISPLAY **a2,
        struct _DXGKARGCB_NOTIFY_INTERRUPT_DATA *a3)
{
  __int64 InterruptType; // rax
  unsigned int v5; // eax
  __int64 v6; // r11
  UINT SubmissionFenceId; // ecx
  UINT NodeOrdinal; // eax

  InterruptType = a3->InterruptType;
  if ( (_DWORD)InterruptType == 5 )
  {
    v5 = ADAPTER_DISPLAY::MapVidPnTargetToVidPnSource(a2[365], a3->DmaCompleted.SubmissionFenceId);
    if ( v5 != -1 )
      _InterlockedAdd((volatile signed __int32 *)(v6 + 4LL * v5 + 16), 1u);
  }
  else if ( (_DWORD)InterruptType == 6 )
  {
    SubmissionFenceId = a3->DmaCompleted.SubmissionFenceId;
    if ( SubmissionFenceId < *(_DWORD *)this )
    {
      NodeOrdinal = a3->DmaCompleted.NodeOrdinal;
      if ( NodeOrdinal )
      {
        if ( NodeOrdinal == 1 )
          _InterlockedOr64((volatile signed __int64 *)this + 10, 2LL << (2 * (unsigned __int8)SubmissionFenceId));
      }
      else
      {
        _InterlockedOr64((volatile signed __int64 *)this + 10, 1LL << (2 * (unsigned __int8)SubmissionFenceId));
      }
    }
  }
  else
  {
    WdLogSingleEntry5(0LL, 275LL, 24LL, *((_QWORD *)this + 11), InterruptType, 0LL);
  }
}
