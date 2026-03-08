/*
 * XREFs of IvtSetMessageInterruptRouting @ 0x140A8EDB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IvtSetMessageInterruptRouting(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _DWORD *v4; // rdx
  unsigned int v5; // r9d
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v4 = *(_DWORD **)(a1 + 8);
  if ( *(_BYTE *)(a1 + 316) )
  {
    v4[59] = HIDWORD(a3);
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
    v4[58] = a3;
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  }
  if ( *(_BYTE *)(a1 + 318) )
  {
    v4[17] = HIDWORD(a3);
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
    v4[16] = a3;
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  }
  v5 = a4 & 0xFFFFBFFF;
  if ( *(_BYTE *)(a1 + 316) )
  {
    v4[57] = v5;
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  }
  if ( *(_BYTE *)(a1 + 318) )
  {
    v4[15] = v5;
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  }
  return 0LL;
}
