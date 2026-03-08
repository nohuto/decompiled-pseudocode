/*
 * XREFs of HsaSetMessageInterruptRouting @ 0x140A967F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HsaSetMessageInterruptRouting(_DWORD *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v4; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( a1[44] )
  {
    v4 = *(_QWORD *)(*((_QWORD *)&HsaSharedRemappingTable + 1) + 16LL * a4) & 0xFFFFFF00LL | *(_QWORD *)(*((_QWORD *)&HsaSharedRemappingTable + 1) + 16LL * a4 + 8) & 0xFF00000000000000uLL | (*(_QWORD *)(*((_QWORD *)&HsaSharedRemappingTable + 1) + 16LL * a4) >> 4) & 4LL | ((unsigned __int64)(unsigned __int8)*(_QWORD *)(*((_QWORD *)&HsaSharedRemappingTable + 1) + 16LL * a4 + 8) << 32);
    *(_QWORD *)(*(_QWORD *)a1 + 368LL) = v4;
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
    *(_QWORD *)(*(_QWORD *)a1 + 376LL) = v4;
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
    *(_QWORD *)(*(_QWORD *)a1 + 384LL) = v4;
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)a1 + 348LL) = a3;
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
    *(_DWORD *)(*(_QWORD *)a1 + 356LL) = a4;
  }
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  *(_DWORD *)(*(_QWORD *)a1 + 344LL) = *(_DWORD *)(*(_QWORD *)a1 + 344LL) & 0xFF8EFFFF | 0x10000;
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  return 0LL;
}
