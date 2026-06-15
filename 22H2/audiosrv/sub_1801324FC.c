/*
 * XREFs of sub_1801324FC @ 0x1801324FC
 * Callers:
 *     sub_1800C6894 @ 0x1800C6894 (sub_1800C6894.c)
 * Callees:
 *     sub_1800BB2C8 @ 0x1800BB2C8 (sub_1800BB2C8.c)
 */

__int64 __fastcall sub_1801324FC(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi

  v2 = a2;
  EnterCriticalSection(&stru_18019E708);
  v3 = 0LL;
  if ( (int)v2 <= dword_18019E738 && (int)v2 >= 0 )
  {
    if ( (_DWORD)v2 == dword_18019E738 )
    {
      v3 = qword_18019E6F0;
    }
    else
    {
      if ( (int)v2 >= dword_18019E738 )
      {
        sub_1800BB2C8(0xC000008C);
        JUMPOUT(0x180132572LL);
      }
      v3 = *(_QWORD *)(qword_18019E730 + 8 * v2);
    }
  }
  LeaveCriticalSection(&stru_18019E708);
  return v3;
}
