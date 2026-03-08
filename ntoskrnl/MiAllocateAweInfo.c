/*
 * XREFs of MiAllocateAweInfo @ 0x140A3D3BC
 * Callers:
 *     MiCreatePagingFileMap @ 0x1407F3500 (MiCreatePagingFileMap.c)
 *     MiCreateProcessDefaultAweInfo @ 0x140A3EA20 (MiCreateProcessDefaultAweInfo.c)
 * Callees:
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     ExInitializeAutoExpandPushLock @ 0x1402CCEF0 (ExInitializeAutoExpandPushLock.c)
 *     MiGetAweInfoPartition @ 0x1406482AC (MiGetAweInfoPartition.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     MiCreateAweInfoBitMap @ 0x140A3E8D0 (MiCreateAweInfoBitMap.c)
 *     MiDeleteAweInfo @ 0x140A3EDD8 (MiDeleteAweInfo.c)
 */

__int64 __fastcall MiAllocateAweInfo(__int64 a1, int a2, char a3, KPROCESSOR_MODE a4, _QWORD *a5)
{
  char v7; // bp
  int AweInfoBitMap; // edi
  _QWORD *Pool; // rax
  _QWORD *v11; // rbx

  v7 = a2;
  *a5 = 0LL;
  if ( (a2 & 0xFFFFFFFE) != 0 )
    return (unsigned int)-1073741585;
  Pool = MiAllocatePool(64, 0x58uLL, 0x77416D4Du);
  v11 = Pool;
  if ( !Pool )
    return (unsigned int)-1073741670;
  if ( (a3 & 2) != 0 )
  {
    Pool[2] = 512LL;
  }
  else if ( (a3 & 4) != 0 )
  {
    Pool[2] = 0x40000LL;
  }
  else
  {
    Pool[2] = (a3 & 1) != 0 ? 16LL : 1LL;
  }
  if ( (a3 & 0x40) != 0 )
    *((_DWORD *)Pool + 2) |= 8u;
  *Pool = 399680LL;
  if ( (v7 & 1) != 0 )
    *((_DWORD *)Pool + 2) |= 1u;
  if ( (a3 & 0x20) != 0 )
    *((_DWORD *)Pool + 20) = 0;
  else
    *((_DWORD *)Pool + 20) = ((a3 & 0x10) != 0) + 1;
  Pool[5] = a1;
  if ( (a3 & 8) != 0 )
  {
    if ( (*(_DWORD *)(MiGetAweInfoPartition((__int64)Pool) + 4) & 0x20) == 0 )
    {
      AweInfoBitMap = -1073741637;
LABEL_20:
      MiDeleteAweInfo(KeGetCurrentThread()->ApcState.Process, v11);
      return (unsigned int)AweInfoBitMap;
    }
    if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, a4) )
    {
      AweInfoBitMap = -1073741727;
      goto LABEL_20;
    }
    *((_DWORD *)v11 + 2) |= 4u;
  }
  AweInfoBitMap = MiCreateAweInfoBitMap(v11);
  if ( AweInfoBitMap < 0 )
    goto LABEL_20;
  ExInitializeAutoExpandPushLock(v11 + 8, 1);
  *((_DWORD *)v11 + 2) |= 2u;
  if ( a1 )
  {
    *(_DWORD *)(a1 + 92) |= 0x20000u;
    *(_QWORD *)(a1 + 8) = v11;
  }
  *a5 = v11;
  return (unsigned int)AweInfoBitMap;
}
