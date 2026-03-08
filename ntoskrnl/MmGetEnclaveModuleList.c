/*
 * XREFs of MmGetEnclaveModuleList @ 0x140646774
 * Callers:
 *     PsGetProcessEnclaveModuleInfo @ 0x1405A440C (PsGetProcessEnclaveModuleInfo.c)
 * Callees:
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     MiObtainReferencedVadEx @ 0x14031EFE0 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVadShared @ 0x14031F7B0 (MiUnlockAndDereferenceVadShared.c)
 */

__int64 __fastcall MmGetEnclaveModuleList(unsigned __int64 a1, _QWORD *a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rax
  void *v7; // rdi
  __int64 **v9; // rsi
  unsigned int v10; // ecx
  __int64 **v11; // rax
  _QWORD *Pool; // r8
  __int64 *v13; // rdx
  unsigned int v14; // r9d
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v17 = 0;
  v6 = MiObtainReferencedVadEx(a1, 2, (int *)&v17);
  v7 = (void *)v6;
  if ( !v6 )
    return v17;
  if ( (*(_DWORD *)(v6 + 48) & 0x6200000) != 0x4200000 || (*(_DWORD *)(v6 + 64) & 1) != 0 )
  {
    v3 = -1073741800;
  }
  else
  {
    v9 = (__int64 **)(v6 + 80);
    v10 = 0;
    v11 = *(__int64 ***)(v6 + 80);
    while ( v11 != v9 )
    {
      if ( v10 == -1 )
        goto LABEL_11;
      v11 = (__int64 **)*v11;
      ++v10;
    }
    Pool = MiAllocatePool(256, 24LL * v10, 0x4C4D4556u);
    if ( !Pool )
    {
LABEL_11:
      v3 = -1073741670;
      goto LABEL_16;
    }
    v13 = *v9;
    v14 = 0;
    while ( v13 != (__int64 *)v9 )
    {
      v15 = v14++;
      v16 = 3 * v15;
      Pool[v16] = v13[2];
      Pool[v16 + 1] = v13[3];
      LODWORD(Pool[v16 + 2]) = *((_DWORD *)v13 + 9);
      HIDWORD(Pool[v16 + 2]) = *((_DWORD *)v13 + 10);
      v13 = (__int64 *)*v13;
    }
    *a2 = Pool;
    *a3 = v14;
  }
LABEL_16:
  MiUnlockAndDereferenceVadShared(v7);
  return v3;
}
