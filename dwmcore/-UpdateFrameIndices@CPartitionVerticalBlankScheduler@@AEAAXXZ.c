/*
 * XREFs of ?UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18004CFE4
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x18004DAF0 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     ?ReleaseResponses@CFrameInfo@@QEAAXXZ @ 0x18004D0C8 (-ReleaseResponses@CFrameInfo@@QEAAXXZ.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     McTemplateU0qqqq_EventWriteTransfer @ 0x18012A6F8 (McTemplateU0qqqq_EventWriteTransfer.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::UpdateFrameIndices(CPartitionVerticalBlankScheduler *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  char *v4; // rbx

  v2 = *((unsigned int *)this + 1048);
  v3 = ((_BYTE)v2 + 1) & 0xF;
  if ( *((_DWORD *)this + 1051) == (_DWORD)v3 )
    *((_DWORD *)this + 1051) = -1;
  if ( *((_DWORD *)this + 1050) == (_DWORD)v3 )
    *((_DWORD *)this + 1050) = -1;
  *((_DWORD *)this + 1048) = v3;
  v4 = (char *)this + 256 * v3 + 96;
  *((_DWORD *)this + 1049) = v2;
  *((_QWORD *)this + 526) = v4;
  *((_QWORD *)this + 527) = (char *)this + 256 * v2 + 96;
  memset_0(v4, 0, 0xB0uLL);
  CFrameInfo::ReleaseResponses((CFrameInfo *)v4);
  *(_BYTE *)(*((_QWORD *)this + 526) + 208LL) = 0;
  *(_QWORD *)(*((_QWORD *)this + 526) + 216LL) = 0LL;
  *(_BYTE *)(*((_QWORD *)this + 526) + 224LL) = 0;
  *(_BYTE *)(*((_QWORD *)this + 526) + 226LL) = 0;
  *(_BYTE *)(*((_QWORD *)this + 526) + 225LL) = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0qqqq_EventWriteTransfer(
      (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (unsigned int)&EVTDESC_SCHEDULE_UPDATE_FRAME_INDEXES,
      *((_DWORD *)this + 1049),
      *((_DWORD *)this + 1048),
      *((_DWORD *)this + 1051),
      *((_DWORD *)this + 1050));
}
