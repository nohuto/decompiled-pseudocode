/*
 * XREFs of DpiControlEtwLogging @ 0x1C03946E8
 * Callers:
 *     ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C0020F18 (-DxgkEtwEnableCallback@@YAXKK_K@Z.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000B270 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

LONG __fastcall DpiControlEtwLogging(char a1, unsigned int a2, char a3)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  void (__fastcall *v8)(__int64, _QWORD, __int64); // rax
  __int64 v9; // r8

  AcquireMiniportListMutex();
  byte_1C013B494 = a1;
  v7 = qword_1C013B4C8;
  if ( *(_QWORD *)v7 != v7 )
  {
    do
    {
      v8 = *(void (__fastcall **)(__int64, _QWORD, __int64))(v7 + 264);
      v9 = a2 & 0xFFFFCFFF;
      if ( *(_DWORD *)(v7 + 28) < 0x5008u )
        v9 = a2;
      a2 = v9;
      if ( v8 )
      {
        LOBYTE(v9) = a3;
        LOBYTE(v6) = a1;
        v8(v6, a2, v9);
      }
      v7 = *(_QWORD *)v7;
    }
    while ( *(_QWORD *)v7 != qword_1C013B4C8 );
  }
  _InterlockedExchange64(&qword_1C013B4D8, 0LL);
  return KeReleaseMutex(Mutex, 0);
}
