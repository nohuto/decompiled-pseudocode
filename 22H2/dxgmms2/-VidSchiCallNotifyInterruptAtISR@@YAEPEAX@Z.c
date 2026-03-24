/*
 * XREFs of ?VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z @ 0x1C003C650
 * Callers:
 *     <none>
 * Callees:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000DED0 (VidSchDdiNotifyInterruptWorker.c)
 *     VidSchiLogInterrupt @ 0x1C000E1C0 (VidSchiLogInterrupt.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018AA0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024D70 (McTemplateK0q_EtwWriteTransfer.c)
 */

unsigned __int8 __fastcall VidSchiCallNotifyInterruptAtISR(int **a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  int v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  char v9; // [rsp+30h] [rbp-18h]

  v7 = -1;
  v8 = 0LL;
  if ( (qword_1C0050010 & 2) != 0 )
  {
    v9 = 1;
    v7 = 4016;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 4016);
  }
  else
  {
    v9 = 0;
  }
  ((void (__fastcall *)(int *, __int64))DxgCoreInterface[73])(&v7, 4016LL);
  VidSchiLogInterrupt(*((_QWORD *)*a1 + 78), a1[1], 0);
  VidSchDdiNotifyInterruptWorker((__int64)*a1, (struct _DXGKARGCB_NOTIFY_INTERRUPT_DATA *)a1[1], 0LL);
  ((void (__fastcall *)(int *))DxgCoreInterface[74])(&v7);
  if ( v9 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v4, &EventProfilerExit, v5, v7);
  return 1;
}
