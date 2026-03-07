unsigned __int8 __fastcall VidSchiBlockInterruptCallbackAtISR(_QWORD *a1)
{
  DpiSetSchedulerCallbackState(*(_QWORD *)(a1[2] + 216LL), 1LL);
  return 1;
}
