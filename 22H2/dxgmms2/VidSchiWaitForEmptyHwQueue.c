/*
 * XREFs of VidSchiWaitForEmptyHwQueue @ 0x1C00CF730
 * Callers:
 *     VidSchiSwitchFromSuspendedDevices @ 0x1C0016990 (VidSchiSwitchFromSuspendedDevices.c)
 *     VidSchFlushAdapter @ 0x1C00CFF30 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C000B6D0 (VidSchiProfilePerformanceTick.c)
 *     memset @ 0x1C0018D80 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0080A40 (VidSchWaitForCompletionEvent.c)
 */

unsigned __int64 __fastcall VidSchiWaitForEmptyHwQueue(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 i; // rbx
  struct _KEVENT **v4; // rcx
  struct _KEVENT *v5; // rsi
  _DWORD v6[40]; // [rsp+48h] [rbp-49h] BYREF
  _UNKNOWN *retaddr; // [rsp+F0h] [rbp+5Fh] BYREF

  result = (unsigned __int64)&retaddr;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 72); i = (unsigned int)(i + 1) )
  {
    v4 = *(struct _KEVENT ***)(a1 + 624);
    if ( (unsigned int)i < *(_DWORD *)(a1 + 696) )
      v4 += i;
    v5 = *v4;
    memset(v6, 0, sizeof(v6));
    v6[4] = 0;
    v6[8] |= 0x40u;
    v6[5] = 1;
    v6[12] = i;
    v5[11].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
    KeResetEvent(v5 + 10);
    while ( 1 )
    {
      result = (unsigned int)v5[120].Header.Lock;
      if ( !(_DWORD)result )
        break;
      VidSchiProfilePerformanceTick(16LL, a1, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
      VidSchWaitForCompletionEvent(a1, (__int64)v6, 0xFFFFFFFFLL);
      VidSchiProfilePerformanceTick(17LL, a1, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  return result;
}
