/*
 * XREFs of EtwInitializeAsyncKeyMonitor @ 0x1C00083E8
 * Callers:
 *     EtwTraceGetAsyncKeyState @ 0x1C0006A00 (EtwTraceGetAsyncKeyState.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C00298B0 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 */

__int64 EtwInitializeAsyncKeyMonitor()
{
  __int64 v0; // rax
  signed __int64 v1; // rbx

  v0 = Win32AllocPoolZInit(0x68uLL);
  v1 = v0;
  if ( v0 )
  {
    *(_DWORD *)v0 = 0;
    *(_DWORD *)(v0 + 4) = 0;
    *(_QWORD *)(v0 + 96) = 0LL;
    *(_BYTE *)(v0 + 88) = 0;
    memset((void *)(v0 + 8), -1, 0x50uLL);
  }
  else
  {
    v1 = 0LL;
  }
  if ( !v1 )
    return 3221225495LL;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&gpAsyncKeyEventMonitor, v1, 0LL) )
    Win32FreePool(v1);
  return 0LL;
}
