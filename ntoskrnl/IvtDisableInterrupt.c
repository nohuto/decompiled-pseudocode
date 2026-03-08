/*
 * XREFs of IvtDisableInterrupt @ 0x140933120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IvtDisableInterrupt(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(a1 + 316) )
  {
    result = *(_DWORD *)(v1 + 224) | 0x80000000;
    *(_DWORD *)(v1 + 224) = result;
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  }
  if ( *(_BYTE *)(a1 + 318) )
  {
    result = *(_DWORD *)(v1 + 56) | 0x80000000;
    *(_DWORD *)(v1 + 56) = result;
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  }
  return result;
}
