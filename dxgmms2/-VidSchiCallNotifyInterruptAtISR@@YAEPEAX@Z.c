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
    if ( byte_1C00769C1 < 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 4016);
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
    LOBYTE(v4) = byte_1C00769C1;
    if ( byte_1C00769C1 < 0 )
      McTemplateK0q_EtwWriteTransfer(v4, &EventProfilerExit, v5, v7);
  }
  return 1;
}
