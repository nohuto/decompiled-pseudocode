void __fastcall HandleAdapterMultiPlaneDisableEvent(PVOID IoObject, _DWORD *Context, PIO_WORKITEM IoWorkItem)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // [rsp+20h] [rbp-38h]
  int v8; // [rsp+28h] [rbp-30h]
  int v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+34h] [rbp-24h]
  int v11; // [rsp+3Ch] [rbp-1Ch]
  __int64 v12; // [rsp+40h] [rbp-18h]
  __int64 v13; // [rsp+48h] [rbp-10h]

  WdLogSingleEntry3(4LL, *(_QWORD *)Context, (unsigned int)Context[2], (unsigned int)Context[3]);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    v8 = Context[3];
    v7 = Context[2];
    McTemplateK0pqq_EtwWriteTransfer(v5, &MultiPlaneOverlayDisable, v6, *(_QWORD *)Context, v7, v8);
  }
  v10 = 0LL;
  v11 = 0;
  v13 = 0LL;
  v9 = 14;
  v12 = 1LL;
  SMgrGdiCallout(&v9, 0x200000000LL, 0LL, 0LL, 0LL, 0LL);
  ExFreePoolWithTag(Context, 0);
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
}
