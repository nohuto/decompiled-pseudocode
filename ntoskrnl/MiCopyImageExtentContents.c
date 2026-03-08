/*
 * XREFs of MiCopyImageExtentContents @ 0x14063A258
 * Callers:
 *     MiIssueHardFaultIo @ 0x1403435F0 (MiIssueHardFaultIo.c)
 * Callees:
 *     MiFillPageWithImageExtentContents @ 0x14063AC90 (MiFillPageWithImageExtentContents.c)
 */

__int64 __fastcall MiCopyImageExtentContents(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rsi
  unsigned int v4; // ebx
  __int64 result; // rax
  ULONG_PTR i; // rbp
  unsigned int v7; // edi

  v2 = a2 + 48;
  v3 = *(_QWORD *)(a1 + 96);
  v4 = *(_DWORD *)(a2 + 40);
  result = *(_QWORD *)(**(_QWORD **)(a1 + 208) + 96LL);
  for ( i = *(_QWORD *)(result + 48) & 0xFFFFFFFFFFFFFFF0uLL; v4; v4 -= v7 )
  {
    v7 = 4096;
    if ( v4 <= 0x1000 )
      v7 = v4;
    result = MiFillPageWithImageExtentContents(i);
    if ( v4 <= 0x1000 )
      break;
    result = v7;
    v2 += 8LL;
    v3 += v7;
  }
  return result;
}
