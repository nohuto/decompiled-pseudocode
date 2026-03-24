/*
 * XREFs of ?GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z @ 0x1C0191780
 * Callers:
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C018A4B4 (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C00298B0 (Win32AllocPoolZInit.c)
 *     ?CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ @ 0x1C00B8510 (-CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ @ 0x1C018887C (-CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ.c)
 */

struct tagCPointerCoalesceInfo *__fastcall CTouchProcessor::GetCoalesceInfo(struct _KTHREAD **this, unsigned int a2)
{
  __int64 v2; // rdi
  unsigned __int64 v4; // rsi
  unsigned int v5; // eax

  v2 = a2;
  if ( !(unsigned int)CTouchProcessor::CTouchProcessorLocked(this) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 8529);
  if ( !(_DWORD)v2 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 8530);
  v4 = (unsigned __int64)(this + 17);
  *((_DWORD *)this + 35) = 0;
  if ( *((_DWORD *)this + 34) < (unsigned int)v2 )
  {
    CTouchProcessor::CleanupCoalesceInfo((CTouchProcessor *)this);
    if ( (_DWORD)v2 )
    {
      v5 = 16 * v2;
      if ( (unsigned __int64)(16 * v2) <= 0xFFFFFFFF )
      {
        if ( v5 )
        {
          this[18] = (struct _KTHREAD *)Win32AllocPoolZInit(v5, 1885631317LL);
          *(_DWORD *)v4 = v2;
        }
      }
    }
  }
  return (struct tagCPointerCoalesceInfo *)(v4 & -(__int64)(this[18] != 0LL));
}
