/*
 * XREFs of UsbhGetExceptionDispatch @ 0x1C004B0F4
 * Callers:
 *     UsbhException @ 0x1C004A988 (UsbhException.c)
 *     UsbhExceptionWorker @ 0x1C004B000 (UsbhExceptionWorker.c)
 *     UsbhEtwLogHubPastExceptions @ 0x1C005BB74 (UsbhEtwLogHubPastExceptions.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 */

char *__fastcall UsbhGetExceptionDispatch(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 v4; // r8
  __int64 v5; // rax
  _DWORD *i; // rcx

  v2 = a2;
  FdoExt(a1);
  Log(a1, 128, 1702380607, 0LL, v2);
  v4 = 0LL;
  v5 = 0LL;
  for ( i = &HubExceptionTable; (_DWORD)v2 != *i; i += 6 )
  {
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= 0x8E )
      return (char *)v4;
  }
  return (char *)&HubExceptionTable + 24 * v5;
}
