/*
 * XREFs of PpmParkSetLpiCap @ 0x14057DC54
 * Callers:
 *     NtPowerInformation @ 0x14066AF10 (NtPowerInformation.c)
 * Callees:
 *     PpmAcquireLock @ 0x14026FCB4 (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x1402CF3B0 (PpmReleaseLock.c)
 *     PpmCheckCustomRun @ 0x14037CC28 (PpmCheckCustomRun.c)
 *     PpmParkApplyPolicy @ 0x1403C20B4 (PpmParkApplyPolicy.c)
 *     PpmCheckReInit @ 0x1407BAF74 (PpmCheckReInit.c)
 */

__int64 __fastcall PpmParkSetLpiCap(int a1, int a2, unsigned int *a3)
{
  unsigned int v7; // ebx
  unsigned int v8; // ecx
  __int64 v9; // r9
  unsigned __int8 *v10; // rdx
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // edx
  __int64 v14; // r10
  unsigned __int8 *v15; // r8
  int v16; // eax
  char v17; // al
  __int64 v18; // rdx
  __int64 v19; // rcx

  if ( KeGetCurrentPrcb()->PowerState.Hypervisor >= ProcHypervisorPower && (HvlEnlightenments & 0x40000) == 0 )
    return 3221225473LL;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  v7 = (unsigned __int8)PpmParkGranularity
     + a1
     - 1
     - ((unsigned int)(unsigned __int8)PpmParkGranularity + a1 - 1) % (unsigned __int8)PpmParkGranularity;
  if ( v7 )
  {
    v8 = 0;
    if ( PpmParkNumNodes )
    {
      v9 = (unsigned int)PpmParkNumNodes;
      v10 = (unsigned __int8 *)(PpmParkNodes + 6);
      do
      {
        v11 = *v10;
        if ( (unsigned __int8)v11 > (unsigned __int8)PpmParkGranularity )
          v8 += v11 - (unsigned __int8)PpmParkGranularity;
        v10 += 272;
        --v9;
      }
      while ( v9 );
    }
    if ( v7 > v8 )
      v7 = v8;
  }
  v12 = (unsigned __int8)PpmParkGranularity
      + a2
      - 1
      - ((unsigned int)(unsigned __int8)PpmParkGranularity + a2 - 1) % (unsigned __int8)PpmParkGranularity;
  if ( v12 )
  {
    v13 = 0;
    if ( PpmParkNumNodes )
    {
      v14 = (unsigned int)PpmParkNumNodes;
      v15 = (unsigned __int8 *)(PpmParkNodes + 6);
      do
      {
        v16 = *v15;
        if ( (unsigned __int8)v16 > (unsigned __int8)PpmParkGranularity )
          v13 += v16 - (unsigned __int8)PpmParkGranularity;
        v15 += 272;
        --v14;
      }
      while ( v14 );
    }
    if ( v12 > v13 )
      v12 = v13;
  }
  v17 = 0;
  if ( v7 != PpmParkLpiCap )
  {
    PpmParkLpiCap = v7;
    v17 = 1;
    PpmParkLpiCapChanged = 1;
  }
  if ( v12 != PpmParkThermalCap )
  {
    PpmParkThermalCap = v12;
    v17 = 1;
  }
  if ( v17 )
  {
    PpmParkApplyPolicy();
    PpmCheckReInit(v19, v18);
    PpmCheckCustomRun(4);
  }
  else
  {
    PpmReleaseLock(&PpmPerfPolicyLock);
  }
  *a3 = v7;
  return 0LL;
}
