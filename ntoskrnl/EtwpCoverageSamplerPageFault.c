void __fastcall EtwpCoverageSamplerPageFault(unsigned __int64 a1, unsigned __int64 a2, char a3)
{
  __int64 v4; // rcx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v6; // rbx
  unsigned int v7; // ecx
  __int64 v8; // rbx
  __int64 v9; // rdi
  int v10; // esi
  int v11; // r8d
  int v12; // eax
  int v13; // edx
  int v14; // ecx
  int v15; // r9d
  unsigned int v16; // r9d
  unsigned int v17; // r9d
  unsigned int v18; // eax
  int v19; // ecx
  int v20; // ecx
  int v21; // eax
  struct _KTHREAD *v22; // rcx
  bool v23; // zf

  if ( !a3 )
    return;
  v4 = qword_140C31888;
  if ( a1 - 1 > 0xFFFF7FFFFFFFFFFEuLL || a2 >= 0xFFFF800000000000uLL )
    return;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v6 = (unsigned int)*(_QWORD *)(v4 + 8);
  LODWORD(CurrentThread) = ((unsigned int)v6 >> 13) & 0x3FFFF;
  _BitScanReverse(&v7, (unsigned int)CurrentThread);
  v8 = (v6 >> 4) & 0x1FF;
  v9 = *(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v7 - 2)
                 + 8LL * ((unsigned int)CurrentThread ^ (1 << v7))
                 + 8);
  if ( !*(_DWORD *)(v9 + 8 * v8 + 264) )
    goto LABEL_5;
  v11 = MEMORY[0xFFFFF78000000320];
  if ( (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v9 + 8 * v8 + 268)) > *(_DWORD *)(v9 + 8 * v8 + 272) )
  {
    v12 = *(_DWORD *)(v9 + 8 * v8 + 276);
    v13 = *(_DWORD *)(v9 + 8 * v8 + 264);
    v14 = v13 + *(_DWORD *)(v9 + 8 * v8 + 284);
    v15 = *(_DWORD *)(v9 + 8 * v8 + 280);
    *(_DWORD *)(v9 + 8 * v8 + 268) = MEMORY[0xFFFFF78000000320];
    if ( v14 > v12 )
      v14 = v12;
    v16 = *(_DWORD *)(v9 + 8 * v8 + 292) + v15;
    *(_DWORD *)(v9 + 8 * v8 + 280) = 0;
    v17 = v16 >> 1;
    *(_DWORD *)(v9 + 8 * v8 + 284) = v14;
    *(_DWORD *)(v9 + 8 * v8 + 292) = v17;
    if ( v17 >= 2 * v13 )
    {
      v18 = v17 / (v13 + 1);
      v19 = 16777619 * (*(_DWORD *)(v9 + 8 * v8 + 300) ^ v11);
      *(_DWORD *)(v9 + 8 * v8 + 296) = v18;
      *(_DWORD *)(v9 + 8 * v8 + 300) = v19;
      *(_DWORD *)(v9 + 8 * v8 + 288) = v19 & (2 * v18);
    }
    else
    {
      *(_DWORD *)(v9 + 8 * v8 + 296) = 1;
      *(_DWORD *)(v9 + 8 * v8 + 288) = 1;
    }
  }
  ++*(_DWORD *)(v9 + 8 * v8 + 280);
  v20 = *(_DWORD *)(v9 + 8 * v8 + 284);
  if ( v20 > 0 )
  {
    v21 = *(_DWORD *)(v9 + 8 * v8 + 288) - 1;
    *(_DWORD *)(v9 + 8 * v8 + 288) = v21;
    if ( v21 <= 0 )
    {
      *(_DWORD *)(v9 + 8 * v8 + 284) = v20 - 1;
      *(_DWORD *)(v9 + 8 * v8 + 288) = *(_DWORD *)(v9 + 8 * v8 + 296);
LABEL_5:
      v10 = 1;
      goto LABEL_16;
    }
  }
  v10 = 0;
LABEL_16:
  v22 = KeGetCurrentThread();
  v23 = v22->SpecialApcDisable++ == -1;
  if ( v23 && ($C71981A45BEB2B45F82C232A7085991E *)v22->ApcState.ApcListHead[0].Flink != &v22->152 )
    KiCheckForKernelApcDelivery();
  if ( v10 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v9 + 8 * v8 + 332), 1u);
    EtwpCovSampCaptureSample(a1, 0x50000010u);
  }
}
