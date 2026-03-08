/*
 * XREFs of MiIsSubsectionClean @ 0x140622654
 * Callers:
 *     MiDeleteCachedSubsection @ 0x140621708 (MiDeleteCachedSubsection.c)
 * Callees:
 *     MiCheckProtoPtePageState @ 0x140283EB0 (MiCheckProtoPtePageState.c)
 *     MiUnlockProtoPoolPage @ 0x1402861D0 (MiUnlockProtoPoolPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockLeafPage @ 0x14034AF20 (MiLockLeafPage.c)
 */

__int64 __fastcall MiIsSubsectionClean(__int64 a1)
{
  unsigned int v1; // edi
  ULONG_PTR v2; // rbx
  ULONG_PTR v3; // r14
  unsigned __int64 v4; // rbp
  __int64 v5; // rsi
  char v6; // al
  char v7; // al
  unsigned __int8 v9; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( !*(_DWORD *)(a1 + 104) )
    return 0LL;
  v2 = *(_QWORD *)(a1 + 8);
  v3 = v2 + 8LL * *(unsigned int *)(a1 + 44);
  if ( !*(_QWORD *)(*(_QWORD *)a1 + 32LL) )
    return 0LL;
  v9 = 17;
  v4 = 0LL;
  if ( v2 >= v3 )
    return v1;
  while ( (v2 & 0xFFF) == 0 || v9 == 17 )
  {
    if ( v9 != 17 )
      MiUnlockProtoPoolPage(v4, v9);
    v4 = MiCheckProtoPtePageState(v2, &v9);
    if ( v4 )
      break;
    v2 = (v2 & 0xFFFFFFFFFFFFF000uLL) + 4096;
LABEL_15:
    if ( v2 >= v3 )
      goto LABEL_20;
  }
  v5 = MiLockLeafPage((__int64 *)v2, 0);
  if ( !v5 )
  {
LABEL_14:
    v2 += 8LL;
    goto LABEL_15;
  }
  if ( (MI_READ_PTE_LOCK_FREE(v2) & 1) == 0 )
  {
    if ( *(_WORD *)(v5 + 32) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v1 = 2;
      goto LABEL_20;
    }
    v6 = *(_BYTE *)(v5 + 34);
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (v6 & 0x18) != 0 )
    {
      v1 = 1;
      goto LABEL_20;
    }
    goto LABEL_14;
  }
  v7 = *(_BYTE *)(v5 + 34) & 0x18;
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v1 = 2 - (v7 != 0);
LABEL_20:
  if ( v9 != 17 )
    MiUnlockProtoPoolPage(v4, v9);
  return v1;
}
