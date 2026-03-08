/*
 * XREFs of ?VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z @ 0x1C0042D18
 * Callers:
 *     VidSchiMarkDeviceAsError @ 0x1C0014B80 (VidSchiMarkDeviceAsError.c)
 *     ?VidSchiRundownHardwareScheduledContexts@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C0042F38 (-VidSchiRundownHardwareScheduledContexts@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x1C00062E0 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiSignalRegisteredEvent @ 0x1C00104D4 (VidSchiSignalRegisteredEvent.c)
 *     ?VidSchiCheckHwSchNodeProgress@@YAEPEAU_VIDSCH_NODE@@_N@Z @ 0x1C001C8D0 (-VidSchiCheckHwSchNodeProgress@@YAEPEAU_VIDSCH_NODE@@_N@Z.c)
 *     ?VidSchiSetHwQueueState@@YAXPEAUVIDSCH_HW_QUEUE@@W4VIDSCH_HW_QUEUE_STATE@@@Z @ 0x1C001D4C6 (-VidSchiSetHwQueueState@@YAXPEAUVIDSCH_HW_QUEUE@@W4VIDSCH_HW_QUEUE_STATE@@@Z.c)
 *     ?VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0042E6C (-VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_H.c)
 */

void __fastcall VidSchiRundownHardwareContext(struct HwQueueStagingList *a1, struct VIDSCH_HW_CONTEXT *a2)
{
  char *v2; // r15
  char *i; // rdi
  _QWORD *v6; // r14
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rdi

  v2 = (char *)a2 + 224;
  for ( i = (char *)*((_QWORD *)a2 + 28); i != v2; i = *(char **)i )
  {
    v6 = i + 152;
    *((_QWORD *)i + 25) = i + 152;
    while ( (_QWORD *)*v6 != v6 )
      VidSchiRundownHardwarePacket(a1, (struct _VIDSCH_QUEUE_PACKET *)(*v6 - 32LL), (struct VIDSCH_HW_QUEUE *)(i - 8));
    v7 = i + 16;
    v8 = *((_QWORD *)i + 2);
    if ( v8 )
    {
      if ( *(_QWORD **)(v8 + 8) != v7 || (v9 = (_QWORD *)*((_QWORD *)i + 3), (_QWORD *)*v9 != v7) )
LABEL_18:
        __fastfail(3u);
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
      *v7 = 0LL;
      *((_QWORD *)i + 3) = 0LL;
    }
    v10 = i + 184;
    v11 = *((_QWORD *)i + 23);
    if ( v11 )
    {
      if ( *(_QWORD **)(v11 + 8) != v10 )
        goto LABEL_18;
      v12 = (_QWORD *)*((_QWORD *)i + 24);
      if ( (_QWORD *)*v12 != v10 )
        goto LABEL_18;
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
      *v10 = 0LL;
      *((_QWORD *)i + 24) = 0LL;
    }
    VidSchiSetHwQueueState((__int64)(i - 8), 0);
  }
  v13 = *((_QWORD *)a2 + 20);
  if ( *((_QWORD *)a2 + 21) != v13 )
  {
    v14 = *((_QWORD *)a2 + 1);
    v15 = *(_QWORD *)(v14 + 32);
    *((_QWORD *)a2 + 21) = v13;
    --*(_DWORD *)(v15 + 72);
    --*(_DWORD *)(*((_QWORD *)a2 + 2) + 1720LL);
    VidSchiCheckHwSchNodeProgress(*((struct _VIDSCH_NODE **)a2 + 2), 0);
    VidSchiSignalRegisteredEvent(v15, (struct _KEVENT **)(v14 + 168));
  }
  VidSchiCheckPendingDeviceCommand(*((_QWORD **)a2 + 1));
}
