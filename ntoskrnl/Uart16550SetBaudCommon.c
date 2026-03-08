/*
 * XREFs of Uart16550SetBaudCommon @ 0x14067AA80
 * Callers:
 *     Uart16550SetBaud @ 0x14067AA60 (Uart16550SetBaud.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

char __fastcall Uart16550SetBaudCommon(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  char v5; // al
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx
  char result; // al

  if ( !a1 || !*(_QWORD *)a1 || !a2 )
    return 0;
  v4 = 0x1C200 % a2;
  LOBYTE(v4) = 3;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 16))(a1, v4);
  LOBYTE(v6) = 3;
  LOBYTE(v7) = v5 | 0x80;
  (*(void (__fastcall **)(__int64, __int64, __int64))(a1 + 24))(a1, v6, v7);
  LOBYTE(v8) = 1;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(a1 + 24))(a1, v8, (0x1C200 / a2) >> 8);
  LOBYTE(v9) = 0x1C200 / a2;
  (*(void (__fastcall **)(__int64, _QWORD, __int64))(a1 + 24))(a1, 0LL, v9);
  LOBYTE(v10) = 3;
  (*(void (__fastcall **)(__int64, __int64))(a1 + 24))(a1, v10);
  result = 1;
  *(_DWORD *)(a1 + 8) = a2;
  return result;
}
