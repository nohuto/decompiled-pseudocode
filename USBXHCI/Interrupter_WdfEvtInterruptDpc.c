__int64 __fastcall Interrupter_WdfEvtInterruptDpc(__int64 a1, __int64 a2)
{
  return Interrupter_DeferredWorkProcessor(a1, a2, 0LL);
}
