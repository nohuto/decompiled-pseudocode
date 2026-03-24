/*
 * XREFs of ?NotifyProcessStatusChange@DXGDEVICE@@QEAAXXZ @ 0x1C012C188
 * Callers:
 *     ?ProcessStatusChange@DXGPROCESS@@IEAAXXZ @ 0x1C0128C58 (-ProcessStatusChange@DXGPROCESS@@IEAAXXZ.c)
 *     ?SetProcessSchedulingPriorityBand@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULING_PRIORITYBAND@@@Z @ 0x1C0286530 (-SetProcessSchedulingPriorityBand@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULING_PRIORITYBAND@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGDEVICE::NotifyProcessStatusChange(DXGDEVICE *this)
{
  __int64 v1; // r8
  __int64 v3; // rax

  v1 = *((_QWORD *)this + 2);
  if ( !*(_BYTE *)(*(_QWORD *)(v1 + 16) + 209LL) )
  {
    v3 = *(_QWORD *)(v1 + 616);
    LOBYTE(v1) = 1;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(v3 + 8) + 160LL))(
      *((_QWORD *)this + 96),
      *(unsigned int *)(*((_QWORD *)this + 5) + 352LL),
      v1);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL) + 8LL) + 1040LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 648LL));
  }
}
