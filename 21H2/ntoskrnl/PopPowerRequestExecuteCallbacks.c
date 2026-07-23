/*
 * XREFs of PopPowerRequestExecuteCallbacks @ 0x140270918
 * Callers:
 *     PopPowerRequestCallbackWorker @ 0x1402707E0 (PopPowerRequestCallbackWorker.c)
 *     PopPowerRequestCleanUp @ 0x140270A38 (PopPowerRequestCleanUp.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall **__fastcall PopPowerRequestExecuteCallbacks(
        __int64 a1,
        unsigned int a2,
        __int64 a3))(int, int, int, int, int, int, __int64)
{
  unsigned int v3; // ebp
  __int64 (__fastcall **v4)(); // rbx
  __int64 v7; // rdi
  char v8; // al
  __int64 (__fastcall **result)(int, int, int, int, int, int, __int64); // rax

  v3 = a3;
  v4 = &off_140C002D8;
  v7 = 0LL;
  do
  {
    v8 = *(_BYTE *)(v7 + a1);
    if ( v8 )
    {
      LOBYTE(a3) = v8 > 0;
      ((void (__fastcall *)(_QWORD, _QWORD, __int64))*v4)(v3, a2, a3);
    }
    ++v7;
    result = &off_140C00338;
    v4 += 2;
  }
  while ( (__int64)v4 < (__int64)&off_140C00338 );
  return result;
}
