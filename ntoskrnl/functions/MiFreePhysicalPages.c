__int64 __fastcall MiFreePhysicalPages(__int64 a1, unsigned int *a2, __int64 *a3)
{
  unsigned int *v4; // r14
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 *v7; // rbx
  _QWORD *v8; // rax
  size_t v9; // rdx
  unsigned __int64 v10; // r12
  unsigned __int64 *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // r13
  unsigned __int64 v14; // r14
  __int64 v15; // rax
  unsigned int v16; // r12d
  bool v17; // zf
  _QWORD *v18; // r8
  unsigned __int64 LeafPfnBuddy; // rax
  unsigned __int64 v20; // rdx
  _QWORD *v21; // r8
  _QWORD *v22; // rdx
  ULONG_PTR v25; // [rsp+30h] [rbp-118h]
  __int64 v26; // [rsp+38h] [rbp-110h]
  _QWORD v27[24]; // [rsp+40h] [rbp-108h] BYREF

  v4 = a2;
  memset(v27, 0, 0xB8uLL);
  CurrentThread = KeGetCurrentThread();
  v7 = (unsigned __int64 *)(v4 + 12);
  LODWORD(v27[1]) = 20;
  *a3 = 0LL;
  v8 = v4 + 12;
  v9 = (unsigned __int64)v4[10] >> 12;
  LODWORD(v27[0]) = 1;
  WORD2(v27[0]) = 0;
  v10 = (unsigned __int64)&v4[2 * v9 + 12];
  v27[2] = 0LL;
  v27[3] = 0LL;
  if ( v4 + 12 != (unsigned int *)v10 )
  {
    while ( *v8 )
    {
      if ( ++v8 == (_QWORD *)v10 )
        goto LABEL_6;
    }
    qsort(v4 + 12, v9, 8uLL, (int (__cdecl *)(const void *, const void *))HalpNodeCostSort);
  }
LABEL_6:
  v26 = *(_QWORD *)(a1 + 16);
  v11 = (unsigned __int64 *)(v4 + 12);
  if ( (*(_DWORD *)(a1 + 8) & 1) != 0 )
  {
    v25 = 0LL;
    v12 = MiLockAweVadsShared(CurrentThread);
    --CurrentThread->SpecialApcDisable;
    v13 = v12;
    ExAcquireAutoExpandPushLockExclusive(a1 + 64, 0LL);
  }
  else
  {
    --CurrentThread->SpecialApcDisable;
    v13 = 0LL;
    v25 = ExAcquireAutoExpandPushLockShared(a1 + 64, 0LL);
  }
  if ( (unsigned __int64)v7 >= v10 )
  {
LABEL_19:
    v16 = 0;
    goto LABEL_20;
  }
  while ( 1 )
  {
    v14 = *v7;
    v15 = MiDecrementAweMapCount(a1, *v7, a3, 1);
    if ( v15 == -1 )
      break;
    if ( !v15 )
      goto LABEL_14;
    if ( (*(_DWORD *)(a1 + 8) & 1) != 0 )
    {
      MiUnmapLegacyAwePage(a1, v14, v27);
LABEL_14:
      if ( v14 != -1LL )
      {
        *v11++ = v14;
        if ( v26 == 1 )
        {
          *(_QWORD *)(48 * v14 - 0x21FFFFFFFFF0LL) = 0LL;
          *a3 = 0LL;
        }
      }
    }
    if ( (unsigned __int64)++v7 >= v10 )
    {
      v4 = a2;
      goto LABEL_19;
    }
  }
  v4 = a2;
  v16 = -1073741800;
LABEL_20:
  MiFlushTbList((int *)v27);
  if ( v13 )
  {
    ExReleaseAutoExpandPushLockExclusive(a1 + 64, 0LL);
    v17 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v17 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    MiUnlockAweVadsShared(CurrentThread, v13);
  }
  else
  {
    MiUnlockAweVadsShared(CurrentThread, v25);
  }
  v4[10] = ((char *)v11 - (char *)v4 - 48) >> 3;
  v4[11] = ((char *)v7 - (char *)v4 - 48) >> 3;
  if ( (*(_DWORD *)(a1 + 8) & 8) == 0 )
  {
    v18 = (_QWORD *)*a3;
    if ( *a3 )
    {
      do
      {
        LeafPfnBuddy = MiGetLeafPfnBuddy(v18);
        *v21 ^= (*v21 ^ (v20 >> 3)) & 0xFFFFFFFFFFELL;
        v22 = v21;
        v18 = (_QWORD *)LeafPfnBuddy;
      }
      while ( LeafPfnBuddy );
      *a3 = (__int64)v22;
    }
  }
  return v16;
}
