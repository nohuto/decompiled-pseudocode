/*
 * XREFs of KiComputeDueTime @ 0x140251110
 * Callers:
 *     KeSetTimerEx @ 0x140250F30 (KeSetTimerEx.c)
 *     KiCommitThreadWait @ 0x140261290 (KiCommitThreadWait.c)
 *     KiResumeThread @ 0x1403538F8 (KiResumeThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiComputeDueTime(int *a1, __int64 a2, char a3, _DWORD *a4)
{
  __int64 v5; // r9
  __int64 v6; // rax
  int v7; // edx
  __int64 result; // rax
  int v9; // [rsp+0h] [rbp-28h]

  v9 = *a1;
  BYTE1(v9) = a3;
  if ( a2 >= 0 )
  {
    BYTE1(v9) = a3 | 1;
    a2 = MEMORY[0xFFFFF78000000014] - a2;
    if ( a2 >= 0 )
    {
      *a1 = v9;
      result = 0LL;
      *((_QWORD *)a1 + 3) = 0LL;
      return result;
    }
    a3 |= 1u;
  }
  v5 = 0LL;
  if ( (a3 & 0xFC) != 0 )
    v5 = (unsigned __int8)(a3 & 0xFC) << 16;
  v6 = MEMORY[0xFFFFF78000000008] - a2;
  *((_QWORD *)a1 + 3) = MEMORY[0xFFFFF78000000008] - a2;
  HIBYTE(v9) |= 0x40u;
  v7 = (unsigned __int8)((unsigned __int64)(v5 + v6) >> 18);
  BYTE2(v9) = (unsigned __int64)(v5 + v6) >> 18;
  *a1 = v9;
  result = 1LL;
  *a4 = v7;
  return result;
}
