/*
 * XREFs of ?VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z @ 0x1C0046B60
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiLogInterrupt @ 0x1C000EAC0 (VidSchiLogInterrupt.c)
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000EC20 (VidSchDdiNotifyInterruptWorker.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0019BB8 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A820 (_guard_dispatch_icall_nop.c)
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
  if ( (qword_1C0076010 & 2) != 0 )
  {
    v9 = 1;
    v7 = 4016;
    if ( byte_1C0076981 < 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 4016);
  }
  else
  {
    v9 = 0;
  }
  DxgCoreInterface[79]((ADAPTER_DISPLAY *)&v7, (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)4016);
  VidSchiLogInterrupt(*((_QWORD *)*a1 + 93), a1[1], 0);
  VidSchDdiNotifyInterruptWorker((__int64)*a1, (__int64)a1[1], 0);
  ((void (__fastcall *)(int *))DxgCoreInterface[80])(&v7);
  if ( v9 )
  {
    LOBYTE(v4) = byte_1C0076981;
    if ( byte_1C0076981 < 0 )
      McTemplateK0q_EtwWriteTransfer(v4, (__int64)&EventProfilerExit, v5, v7);
  }
  return 1;
}
