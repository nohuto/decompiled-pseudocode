/*
 * XREFs of KiVerifyXcpt4 @ 0x140B5D250
 * Callers:
 *     <none>
 * Callees:
 *     _local_unwind @ 0x1403D3990 (_local_unwind.c)
 *     KiVerifyXcptFilter @ 0x140B5D724 (KiVerifyXcptFilter.c)
 */

__int64 __fastcall KiVerifyXcpt4(__int64 a1)
{
  __int64 result; // rax
  _QWORD v2[7]; // [rsp+0h] [rbp-38h] BYREF

  v2[4] = v2;
  if ( *(_DWORD *)(a1 + 8) == 1 )
  {
    ++**(_DWORD **)a1;
  }
  else
  {
    *(_DWORD *)(a1 + 12) = -1;
    *(_DWORD *)(a1 + 16) = 1;
  }
  result = *(int *)(a1 + 12);
  *(_QWORD *)(a1 + 24) += result;
  return result;
}
