/*
 * XREFs of KiVerifyXcpt12 @ 0x140B5D570
 * Callers:
 *     <none>
 * Callees:
 *     _local_unwind @ 0x1403D3990 (_local_unwind.c)
 *     KiVerifyXcptFilter @ 0x140B5D724 (KiVerifyXcptFilter.c)
 */

__int64 __fastcall KiVerifyXcpt12(__int64 a1)
{
  int *v1; // rax
  __int64 result; // rax
  _QWORD v3[7]; // [rsp+0h] [rbp-38h] BYREF

  v3[4] = v3;
  if ( *(_DWORD *)(a1 + 8) == 1 )
  {
    ++**(_DWORD **)a1;
    v1 = (int *)(a1 + 12);
  }
  else
  {
    v1 = (int *)(a1 + 12);
    *(_DWORD *)(a1 + 12) = -1;
    *(_DWORD *)(a1 + 16) = 1;
  }
  result = *v1;
  *(_QWORD *)(a1 + 24) += result;
  return result;
}
