/*
 * XREFs of IopDeleteDriver @ 0x14085AE30
 * Callers:
 *     <none>
 * Callees:
 *     KeFlushQueuedDpcs @ 0x1402AF200 (KeFlushQueuedDpcs.c)
 *     PnpRequestDeviceAction @ 0x1402F5074 (PnpRequestDeviceAction.c)
 *     IoUnregisterPriorityCallback @ 0x1405550E0 (IoUnregisterPriorityCallback.c)
 *     MmUnloadSystemImage @ 0x1407F5FA0 (MmUnloadSystemImage.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall IopDeleteDriver(__int64 a1)
{
  _QWORD *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  _QWORD *v8; // rbx
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD **)(*(_QWORD *)(a1 + 48) + 40LL);
  if ( v2 )
  {
    do
    {
      v8 = (_QWORD *)*v2;
      ExFreePoolWithTag(v2, 0);
      v2 = v8;
    }
    while ( v8 );
  }
  if ( (*(_DWORD *)(a1 + 16) & 0x200) != 0 )
    IoUnregisterPriorityCallback(a1);
  if ( *(_QWORD *)(a1 + 40) )
  {
    KeFlushQueuedDpcs();
    MmUnloadSystemImage(*(_QWORD *)(a1 + 40));
    v9 = 0LL;
    v3 = (void *)*((_QWORD *)IopRootDeviceNode + 4);
    LODWORD(v9) = 38;
    PnpRequestDeviceAction(v3, 2, 0, &v9, 0LL, 0LL, 0LL);
  }
  v4 = *(void **)(a1 + 64);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  v5 = *(void **)(*(_QWORD *)(a1 + 48) + 32LL);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  v6 = *(void **)(*(_QWORD *)(a1 + 48) + 48LL);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  v7 = *(void **)(*(_QWORD *)(a1 + 48) + 56LL);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
}
