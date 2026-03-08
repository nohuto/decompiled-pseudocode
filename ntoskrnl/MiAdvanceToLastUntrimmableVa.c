/*
 * XREFs of MiAdvanceToLastUntrimmableVa @ 0x1402EC17C
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x140223160 (MiWalkPageTablesRecursively.c)
 *     MiComputePxeWalkAction @ 0x140223D30 (MiComputePxeWalkAction.c)
 * Callees:
 *     MiLocateAddress @ 0x140228680 (MiLocateAddress.c)
 *     MiUnlockVadTree @ 0x140330EC8 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1403334B4 (MiLockVadTree.c)
 */

unsigned __int64 __fastcall MiAdvanceToLastUntrimmableVa(unsigned __int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  unsigned __int64 Address; // r10
  int v5; // eax
  int v6; // ecx
  _QWORD **v7; // rax
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rcx

  v2 = 0;
  MiLockVadTree(1LL);
  Address = (unsigned __int64)MiLocateAddress(a1);
  while ( Address )
  {
    v5 = *(_DWORD *)(Address + 48);
    v6 = v5 & 0x70;
    if ( v6 != 16
      && v6 != 48
      && ((v5 & 0x200000) == 0 || (v5 & 0x800000) == 0 && (v5 & 0x180000u) < 0x100000)
      && v6 != 80 )
    {
      break;
    }
    ++v2;
    a1 = ((*(unsigned int *)(Address + 28) | ((unsigned __int64)*(unsigned __int8 *)(Address + 33) << 32)) << 12) | 0xFFF;
    if ( v2 > 0x100 )
      break;
    v7 = *(_QWORD ***)(Address + 8);
    v8 = Address;
    if ( v7 )
    {
      v9 = *v7;
      for ( Address = *(_QWORD *)(Address + 8); v9; v9 = (_QWORD *)*v9 )
        Address = (unsigned __int64)v9;
    }
    else
    {
      while ( 1 )
      {
        Address = *(_QWORD *)(Address + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !Address || *(_QWORD *)Address == v8 )
          break;
        v8 = Address;
      }
    }
  }
  LOBYTE(v3) = 17;
  MiUnlockVadTree(1LL, v3);
  return a1;
}
