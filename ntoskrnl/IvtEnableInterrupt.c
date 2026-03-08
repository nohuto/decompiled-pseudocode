/*
 * XREFs of IvtEnableInterrupt @ 0x140A8E9E0
 * Callers:
 *     <none>
 * Callees:
 *     IvtClearPendingFaults @ 0x1403AC79C (IvtClearPendingFaults.c)
 */

int __fastcall IvtEnableInterrupt(__int64 a1)
{
  __int64 v2; // rdi
  int result; // eax
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(a1 + 316) )
  {
    result = *(_DWORD *)(v2 + 224) & 0x7FFFFFFF;
    *(_DWORD *)(v2 + 224) = result;
    _InterlockedOr(v4, 0);
  }
  if ( *(_BYTE *)(a1 + 318) )
  {
    IvtClearPendingFaults(a1);
    *(_DWORD *)(v2 + 56) &= ~0x80000000;
    _InterlockedOr(v4, 0);
    return IvtClearPendingFaults(a1);
  }
  return result;
}
