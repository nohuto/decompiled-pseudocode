/*
 * XREFs of EtwpPreInitializeSiloState @ 0x14084497C
 * Callers:
 *     EtwInitializeSiloState @ 0x1409DF038 (EtwInitializeSiloState.c)
 *     EtwpInitialize @ 0x140B3CA40 (EtwpInitialize.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x1402992FC (PsGetServerSiloGlobals.c)
 *     KeInitializeMutex @ 0x1402D97E0 (KeInitializeMutex.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x1406F3D20 (ExAllocateCacheAwareRundownProtection.c)
 *     EtwpCleanupSiloState @ 0x1409E04E0 (EtwpCleanupSiloState.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpPreInitializeSiloState(__int64 a1, unsigned int a2)
{
  unsigned int v4; // esi
  __int64 *Pool2; // rax
  __int64 *v6; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rax
  unsigned int v10; // ebp
  _QWORD *v11; // rcx
  __int64 v12; // r8
  _QWORD *v13; // rax
  __int64 v14; // rdx

  v4 = 0;
  Pool2 = (__int64 *)ExAllocatePool2(72LL, 4664LL, 1635218501LL);
  v6 = Pool2;
  if ( !Pool2 )
    goto LABEL_15;
  *Pool2 = a1;
  Pool2[1] = (__int64)PsGetServerSiloGlobals(a1);
  v7 = 256;
  if ( a2 <= 0x100 )
  {
    v7 = a2;
    if ( a2 < 0x20 )
      v7 = 32;
  }
  v8 = 8 * v7;
  *((_DWORD *)v6 + 4) = v7;
  v9 = ExAllocatePool2(72LL, (unsigned int)(16 * v7), 1635218501LL);
  v6[56] = v9;
  if ( !v9 )
  {
LABEL_15:
    v4 = -1073741801;
    EtwpCleanupSiloState(v6);
    return v4;
  }
  v10 = 0;
  v6[57] = v9 + v8;
  if ( *((_DWORD *)v6 + 4) )
  {
    do
    {
      *(_QWORD *)(v6[57] + 8LL * v10) = 1LL;
      *(_QWORD *)(v6[56] + 8LL * v10) = ExAllocateCacheAwareRundownProtection(NonPagedPoolNx, 0x63777445u);
      if ( !*(_QWORD *)(v6[56] + 8LL * v10) )
        goto LABEL_15;
    }
    while ( ++v10 < *((_DWORD *)v6 + 4) );
  }
  KeInitializeMutex((PRKMUTEX)(v6 + 576), 0);
  v11 = v6 + 58;
  *((_WORD *)v6 + 2024) = 3;
  v12 = 64LL;
  do
  {
    v11[6] = 0LL;
    v13 = v11;
    v14 = 3LL;
    do
    {
      v13[1] = v13;
      *v13 = v13;
      v13 += 2;
      --v14;
    }
    while ( v14 );
    v11 += 7;
    --v12;
  }
  while ( v12 );
  v6[54] = 0LL;
  v6[52] = (__int64)v6;
  *((_OWORD *)v6 + 4) = SecurityProviderGuid;
  *((_QWORD *)PsGetServerSiloGlobals(a1) + 108) = v6;
  return v4;
}
