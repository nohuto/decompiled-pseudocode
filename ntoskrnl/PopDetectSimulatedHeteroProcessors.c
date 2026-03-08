/*
 * XREFs of PopDetectSimulatedHeteroProcessors @ 0x140B6D7C4
 * Callers:
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 * Callees:
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402459D0 (PsIsCurrentThreadInServerSilo.c)
 *     KeQueryActiveProcessorCountEx @ 0x1402A97C0 (KeQueryActiveProcessorCountEx.c)
 *     PpmReleaseLock @ 0x1402D1F40 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402D1F90 (PpmAcquireLock.c)
 *     KeIsMultiCoreClassesEnabled @ 0x14038E410 (KeIsMultiCoreClassesEnabled.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     PopReadSimulateProcessorClasses @ 0x140B6D8DC (PopReadSimulateProcessorClasses.c)
 */

void PopDetectSimulatedHeteroProcessors()
{
  unsigned __int8 v0; // bp
  __int64 ActiveProcessorCount; // rdi
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 Pool2; // rbx
  __int64 v5; // r15
  void *v6; // r14
  void *v7; // r13
  __int64 v8; // rax
  unsigned __int8 *v9; // r12
  __int64 v10; // rcx
  unsigned __int8 *v11; // rdx
  __int64 v12; // r8
  unsigned __int8 v13; // al
  unsigned __int8 v14; // si
  __int64 v15; // rdx
  char v16; // r8
  unsigned __int8 *v17; // rax
  int v18; // eax
  bool *v19; // rcx
  unsigned int v20; // r10d
  unsigned __int8 *v21; // r9
  __int64 v22; // r11
  __int64 v23; // rbp
  unsigned int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 i; // rdi
  __int64 Prcb; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rsi
  char v32; // r8

  v0 = -1;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( !PsIsCurrentThreadInServerSilo(v3, v2) )
  {
    Pool2 = ExAllocatePool2(256LL, 4 * (int)ActiveProcessorCount + 24, 0x704D5050u);
    if ( Pool2 )
    {
      v5 = (unsigned int)ActiveProcessorCount;
      v6 = (void *)ExAllocatePool2(256LL, (unsigned int)ActiveProcessorCount, 0x704D5050u);
      if ( !v6 )
        goto LABEL_12;
      v7 = (void *)ExAllocatePool2(256LL, 2uLL, 0x704D5050u);
      if ( !v7 )
        goto LABEL_10;
      v8 = ExAllocatePool2(256LL, (unsigned int)ActiveProcessorCount, 0x704D5050u);
      v9 = (unsigned __int8 *)v8;
      if ( !v8 )
        goto LABEL_8;
      if ( (unsigned __int8)PopReadSimulateProcessorClasses((unsigned int)ActiveProcessorCount, v8) )
      {
        if ( (_DWORD)ActiveProcessorCount )
        {
          v11 = v9;
          v12 = ActiveProcessorCount;
          do
          {
            v10 = *v11;
            v13 = v0;
            if ( v0 >= (unsigned __int8)v10 )
              v13 = *v11;
            ++v11;
            v0 = v13;
            --v12;
          }
          while ( v12 );
        }
        v14 = 0;
        v15 = (unsigned int)ActiveProcessorCount;
        while ( 1 )
        {
          v16 = 0;
          if ( (_DWORD)ActiveProcessorCount )
          {
            v17 = v9;
            v10 = ActiveProcessorCount;
            do
            {
              if ( *v17 == v0 )
              {
                v16 = 1;
                *v17 = v14;
                v15 = (unsigned int)(v15 - 1);
              }
              ++v17;
              --v10;
            }
            while ( v10 );
          }
          if ( !(_DWORD)v15 )
            break;
          ++v0;
          v10 = (unsigned __int8)(v14 + 1);
          if ( !v16 )
            v10 = v14;
          v14 = v10;
        }
        v18 = PpmHeteroMultiCoreClassesRegValue;
        if ( PpmHeteroMultiCoreClassesRegValue == -1 )
          v18 = v14 >= 2u;
        PpmHeteroMultiCoreClassesEnabled = v18;
        if ( !KeIsMultiCoreClassesEnabled(v10, v15) )
        {
          v14 = v14 != 0;
          if ( (_DWORD)ActiveProcessorCount )
          {
            v19 = (bool *)v9;
            do
            {
              *v19 = *v19;
              ++v19;
              --v5;
            }
            while ( v5 );
          }
        }
        *(_QWORD *)(Pool2 + 8) = v6;
        v20 = 0;
        *(_QWORD *)(Pool2 + 16) = v7;
        v6 = 0LL;
        v7 = 0LL;
        *(_DWORD *)Pool2 = ActiveProcessorCount;
        *(_DWORD *)(Pool2 + 4) = 1;
        if ( (_DWORD)ActiveProcessorCount )
        {
          v21 = v9;
          v22 = 0LL;
          do
          {
            v23 = 0LL;
            *(_BYTE *)(v22 + *(_QWORD *)(Pool2 + 8)) = *v21;
            v24 = *(_DWORD *)(Pool2 + 4);
            if ( v24 )
            {
              do
              {
                v25 = *(_QWORD *)(Pool2 + 16);
                v26 = v20 * v24 + (unsigned int)v23;
                *(_BYTE *)(Pool2 + 4 * v26 + 25) = *v21;
                *(_BYTE *)(Pool2 + 4 * v26 + 24) = v14 - *v21;
                *(_BYTE *)(v25 + 2 * v23) = v14;
                *(_BYTE *)(v25 + 2 * v23 + 1) = v14;
                v23 = (unsigned int)(v23 + 1);
                v24 = *(_DWORD *)(Pool2 + 4);
              }
              while ( (unsigned int)v23 < v24 );
            }
            ++v20;
            ++v22;
            ++v21;
          }
          while ( v20 < (unsigned int)ActiveProcessorCount );
        }
        PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)Pool2; i = (unsigned int)(i + 1) )
        {
          Prcb = KeGetPrcb(i);
          v30 = *(_QWORD *)(Pool2 + 8);
          v31 = Prcb;
          v32 = *(_BYTE *)(i + v30);
          *(_BYTE *)(Prcb + 34059) = v32;
          if ( v32 )
          {
            if ( !KeIsMultiCoreClassesEnabled(v30, v29) )
              *(_BYTE *)(v31 + 34059) = 1;
            if ( !PoDetectedHeteroSystem )
              PoDetectedHeteroSystem = 1;
          }
        }
        PpmReleaseLock(&PpmPerfPolicyLock);
        PpmHeteroCapabilitySimulation = Pool2;
        Pool2 = 0LL;
      }
      ExFreePoolWithTag(v9, 0x704D5050u);
      if ( v7 )
LABEL_8:
        ExFreePoolWithTag(v7, 0x704D5050u);
      if ( v6 )
LABEL_10:
        ExFreePoolWithTag(v6, 0x704D5050u);
      if ( Pool2 )
LABEL_12:
        ExFreePoolWithTag((PVOID)Pool2, 0x704D5050u);
    }
  }
}
