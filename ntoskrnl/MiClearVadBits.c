/*
 * XREFs of MiClearVadBits @ 0x1403335A0
 * Callers:
 *     MiRemoveVad @ 0x140333090 (MiRemoveVad.c)
 * Callees:
 *     MiClearVadCellBits @ 0x1403336C0 (MiClearVadCellBits.c)
 */

struct _KTHREAD *__fastcall MiClearVadBits(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r15
  unsigned __int64 v6; // r14
  int v7; // ebp
  struct _KTHREAD *result; // rax
  unsigned int v9; // ebx
  _KPROCESS *Process; // rcx
  __int64 v11; // rdi
  int v12; // [rsp+50h] [rbp+8h] BYREF

  v4 = a1 >> 16;
  v6 = a2 >> 16;
  v7 = a3;
  if ( a3
    && ((a1 ^ ((*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) << 12)) & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    LODWORD(v4) = v4 + 1;
  }
  if ( a4
    && ((a2 ^ ((*(unsigned int *)(a4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 32) << 32)) << 12)) & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    result = (struct _KTHREAD *)(v6 - 1);
    if ( !v6 )
      return result;
    LODWORD(v6) = v6 - 1;
  }
  result = KeGetCurrentThread();
  v9 = 0;
  v12 = 0;
  Process = result->ApcState.Process;
  v11 = Process[1].ActiveProcessors.StaticBitmap[28] + 48;
  if ( *(_QWORD *)(Process[1].ActiveProcessors.StaticBitmap[28] + 264) )
  {
    LODWORD(result) = 0;
    do
    {
      MiClearVadCellBits(v11 + 72 * (_DWORD)result, v4, v6, v7, a4, (__int64)&v12);
      result = (struct _KTHREAD *)++v9;
    }
    while ( (unsigned __int64)v9 < *(_QWORD *)(v11 + 216) );
  }
  return result;
}
