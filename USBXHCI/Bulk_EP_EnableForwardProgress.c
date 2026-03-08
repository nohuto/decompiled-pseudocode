/*
 * XREFs of Bulk_EP_EnableForwardProgress @ 0x1C0046B10
 * Callers:
 *     <none>
 * Callees:
 *     TR_EnsureSegments @ 0x1C000B240 (TR_EnsureSegments.c)
 */

__int64 __fastcall Bulk_EP_EnableForwardProgress(__int64 a1, unsigned int a2)
{
  unsigned int v3; // r9d
  unsigned int v4; // r10d
  unsigned int v5; // r8d
  __int64 result; // rax

  v3 = 1;
  v4 = (((unsigned __int64)a2 + 8190) >> 12) + 1;
  v5 = (*(_DWORD *)(a1 + 20) >> 4)
     - ((*(_DWORD *)(a1 + 20) >> 4) - 1)
     % ((unsigned int)(((unsigned __int64)*(unsigned int *)(*(_QWORD *)(a1 + 56) + 152LL) + 8190) >> 12) + 1)
     - 1;
  if ( v4 > v5 )
  {
    v3 = v4 / v5 + 1;
    if ( !(v4 % v5) )
      v3 = v4 / v5;
  }
  result = TR_EnsureSegments(a1, v3, 0);
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(a1 + 24) = 0;
    *(_BYTE *)(a1 + 320) = 0;
  }
  return result;
}
