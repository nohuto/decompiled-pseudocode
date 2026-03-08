/*
 * XREFs of PopGetIoLocation @ 0x140A9FBBC
 * Callers:
 *     PopHiberReadChecksums @ 0x140AA01BC (PopHiberReadChecksums.c)
 *     PopRequestRead @ 0x140AA0A10 (PopRequestRead.c)
 *     PopRequestWrite @ 0x140AA0E40 (PopRequestWrite.c)
 *     PopWriteHiberPages @ 0x140AA2874 (PopWriteHiberPages.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PopGetIoLocation(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned __int64 v3; // r10
  _QWORD *v6; // r9
  __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  _QWORD *v9; // r8
  unsigned __int64 i; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 16);
  if ( a2 < v3 )
  {
    v6 = *(_QWORD **)a1;
    v3 = 0LL;
    *(_QWORD *)(a1 + 8) = *(_QWORD *)a1;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  else
  {
    v6 = *(_QWORD **)(a1 + 8);
    if ( a2 < v3 + *v6 )
      goto LABEL_8;
  }
  v7 = *v6;
  v8 = v3;
  v9 = v6;
  for ( i = *v6 + v3; a2 >= i; i = v7 + v3 )
  {
    v3 = v8 + v7;
    v6 = v9 + 2;
    *(_QWORD *)(a1 + 16) = v8 + v7;
    *(_QWORD *)(a1 + 8) = v9 + 2;
    v8 = v3;
    v7 = v9[2];
    v9 += 2;
  }
LABEL_8:
  v11 = a2 - v3;
  result = v11 + v6[1];
  *a3 = *v6 - v11;
  return result;
}
