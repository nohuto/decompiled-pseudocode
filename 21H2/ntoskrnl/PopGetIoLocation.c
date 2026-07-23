/*
 * XREFs of PopGetIoLocation @ 0x1409950F8
 * Callers:
 *     PopWriteHiberPages @ 0x140991EBC (PopWriteHiberPages.c)
 *     PopRequestWrite @ 0x140994DB4 (PopRequestWrite.c)
 *     PopHiberReadChecksums @ 0x1409B22A8 (PopHiberReadChecksums.c)
 *     PopRequestRead @ 0x1409B2784 (PopRequestRead.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopGetIoLocation(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned __int64 v3; // r10
  _QWORD *v5; // r9
  __int64 v6; // r11
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  _QWORD *v10; // r8
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rbx

  v3 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD **)(a1 + 8);
  if ( a2 < v3 || (v6 = *v5, a2 >= *v5 + v3) )
  {
    v10 = *(_QWORD **)(a1 + 8);
    v5 = v10;
    v11 = *(_QWORD *)(a1 + 16);
    if ( a2 < v3 )
    {
      v5 = *(_QWORD **)a1;
      v11 = 0LL;
      *(_QWORD *)(a1 + 8) = *(_QWORD *)a1;
      v3 = 0LL;
      *(_QWORD *)(a1 + 16) = 0LL;
      v10 = v5;
    }
    v6 = *v5;
    v12 = v3;
    v3 = v11;
    if ( a2 >= *v5 + v11 )
    {
      v6 = *v10;
      v3 = v12;
      do
      {
        v3 += v6;
        v5 = v10 + 2;
        *(_QWORD *)(a1 + 16) = v3;
        v10 = v5;
        *(_QWORD *)(a1 + 8) = v5;
        v6 = *v5;
      }
      while ( a2 >= *v5 + v3 );
    }
  }
  v7 = v5[1];
  v8 = a2 - v3;
  *a3 = v6 - v8;
  return v8 + v7;
}
