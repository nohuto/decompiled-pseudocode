/*
 * XREFs of sub_1800DAE90 @ 0x1800DAE90
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800B8CCC @ 0x1800B8CCC (sub_1800B8CCC.c)
 *     sub_1800B91A0 @ 0x1800B91A0 (sub_1800B91A0.c)
 *     sub_1800DAF14 @ 0x1800DAF14 (sub_1800DAF14.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800DAE90(__int64 a1, int a2)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  __int64 v5; // rcx
  _QWORD *v6[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( (unsigned int)(a2 - 1) <= 1 )
  {
    EnterCriticalSection(&stru_18019EF60);
    v6[1] = &stru_18019EF60;
    v3 = (_QWORD *)qword_18019D9B0;
    v6[0] = (_QWORD *)qword_18019D9B0;
    while ( v3 )
    {
      v4 = (_QWORD *)sub_1800B8CCC(v2, (__int64)v3);
      sub_1800DAF14(*v4);
      sub_1800B91A0(v5, v6);
      v3 = v6[0];
    }
    LeaveCriticalSection(&stru_18019EF60);
  }
}
