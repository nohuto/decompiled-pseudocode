/*
 * XREFs of MiInitializePageAccessLogging @ 0x140364410
 * Callers:
 *     MiAllocateAccessLog @ 0x140364034 (MiAllocateAccessLog.c)
 *     MiGetCcAccessLog @ 0x14077A724 (MiGetCcAccessLog.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializePageAccessLogging(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rax
  unsigned __int8 v4; // al
  __int64 result; // rax

  *(_QWORD *)(a2 + 32) = a2 + 72;
  v3 = (_QWORD *)(a2 + a3 - 8);
  *(_DWORD *)(a2 + 8) = 0;
  *v3 = 0LL;
  *(_QWORD *)(a2 + 48) = v3;
  *(_QWORD *)(a2 + 40) = v3 - 1;
  *(_QWORD *)a2 = 0LL;
  *(_DWORD *)(a2 + 64) = 0;
  v4 = *(_BYTE *)(a1 + 184) & 7;
  if ( v4 >= 2u )
  {
    *(_QWORD *)(a2 + 56) = 0LL;
  }
  else if ( v4 )
  {
    *(_QWORD *)(a2 + 56) = 1LL;
    *(_DWORD *)(a2 + 64) = *(_DWORD *)(a1 - 184);
  }
  else
  {
    *(_QWORD *)(a2 + 56) = a1 - 1664;
  }
  result = MEMORY[0xFFFFF78000000320];
  *(_QWORD *)(a2 + 16) = MEMORY[0xFFFFF78000000320];
  return result;
}
