/*
 * XREFs of ?UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18006CC28
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x18006E0E0 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     ??_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z @ 0x18001DA58 (--_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180094C0C (--3@YAXPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800BFE98 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     memset_0 @ 0x1800E7F5C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qqqq_EventWriteTransfer @ 0x180153D6C (McTemplateU0qqqq_EventWriteTransfer.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::UpdateFrameIndices(CPartitionVerticalBlankScheduler *this)
{
  __int64 v1; // rdx
  __int64 v3; // rax
  char *v4; // rdi
  unsigned int i; // esi
  unsigned int j; // esi
  unsigned int k; // esi
  int v8; // ecx
  CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *v9; // rcx
  __int64 v10; // rcx

  v1 = *((unsigned int *)this + 1254);
  v3 = ((_BYTE)v1 + 1) & 0xF;
  if ( *((_DWORD *)this + 1257) == (_DWORD)v3 )
    *((_DWORD *)this + 1257) = -1;
  if ( *((_DWORD *)this + 1256) == (_DWORD)v3 )
    *((_DWORD *)this + 1256) = -1;
  *((_DWORD *)this + 1254) = v3;
  v4 = (char *)this + 304 * v3 + 152;
  *((_DWORD *)this + 1255) = v1;
  *((_QWORD *)this + 629) = v4;
  *((_QWORD *)this + 630) = (char *)this + 304 * v1 + 152;
  memset_0(v4, 0, 0x90uLL);
  for ( i = 0; i < *((_DWORD *)v4 + 42); ++i )
    operator delete(*(void **)(*((_QWORD *)v4 + 18) + 8LL * i));
  *((_DWORD *)v4 + 42) = 0;
  DynArrayImpl<0>::ShrinkToSize(v4 + 144, 8LL);
  for ( j = 0; j < *((_DWORD *)v4 + 50); ++j )
  {
    v9 = *(CTelemetryTouchLatencyAnalysis::TouchUpdateInfo **)(*((_QWORD *)v4 + 22) + 8LL * j);
    if ( v9 )
      CTelemetryTouchLatencyAnalysis::TouchUpdateInfo::`scalar deleting destructor'(v9);
  }
  *((_DWORD *)v4 + 50) = 0;
  DynArrayImpl<0>::ShrinkToSize(v4 + 176, 8LL);
  for ( k = 0; k < *((_DWORD *)v4 + 58); ++k )
  {
    v10 = *(_QWORD *)(*((_QWORD *)v4 + 26) + 8LL * k);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10);
  }
  *((_DWORD *)v4 + 58) = 0;
  DynArrayImpl<0>::ShrinkToSize(v4 + 208, 8LL);
  *(_BYTE *)(*((_QWORD *)this + 629) + 240LL) = 0;
  *(_QWORD *)(*((_QWORD *)this + 629) + 248LL) = 0LL;
  *(_BYTE *)(*((_QWORD *)this + 629) + 256LL) = 0;
  *(_BYTE *)(*((_QWORD *)this + 629) + 265LL) = 0;
  *(_DWORD *)(*((_QWORD *)this + 629) + 260LL) = 0;
  *(_BYTE *)(*((_QWORD *)this + 629) + 264LL) = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0qqqq_EventWriteTransfer(
      v8,
      (unsigned int)&EVTDESC_SCHEDULE_UPDATE_FRAME_INDEXES,
      *((_DWORD *)this + 1255),
      *((_DWORD *)this + 1254),
      *((_DWORD *)this + 1257),
      *((_DWORD *)this + 1256));
}
