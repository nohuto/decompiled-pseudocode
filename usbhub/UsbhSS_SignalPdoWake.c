__int64 __fastcall UsbhSS_SignalPdoWake(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rbx

  v4 = PdoExt(a2);
  UsbhLatchPdo(a1, *((_WORD *)v4 + 714), 0LL, 0x73737057u);
  Log(a1, 0x10000, 1935098187, a2, 0LL);
  return UsbhQueueWorkItemWithRetry(a1, (__int64)(v4 + 406), (int)UsbhSS_PdoWakeWorker, 0, a2, 0, 0x77505353u);
}
