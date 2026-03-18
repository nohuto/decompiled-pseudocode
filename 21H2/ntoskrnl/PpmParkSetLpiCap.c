/*
 * XREFs of PpmParkSetLpiCap @ 0x1405DD354
 * Callers:
 *     NtPowerInformation @ 0x14074F950 (NtPowerInformation.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x14022475C (PpmCheckCustomRun.c)
 *     PpmReleaseLock @ 0x140224C00 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140224E90 (PpmAcquireLock.c)
 *     PpmParkApplyPolicy @ 0x1403CEDC4 (PpmParkApplyPolicy.c)
 *     PpmCheckReInit @ 0x14081A3AC (PpmCheckReInit.c)
 */

__int64 __fastcall PpmParkSetLpiCap(int a1, int a2, unsigned int *a3)
{
  unsigned int v7; // ebx
  unsigned int v8; // ecx
  __int64 v9; // r9
  unsigned __int8 *v10; // r8
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // edx
  __int64 v14; // r11
  unsigned __int8 *v15; // r9
  int v16; // eax
  char v17; // al

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
    if ( !PpmParkNumNodes )
      goto LABEL_11;
    v9 = (unsigned int)PpmParkNumNodes;
    v10 = (unsigned __int8 *)(PpmParkNodes + 6);
    do
    {
      v11 = *v10;
      if ( (unsigned __int8)v11 > (unsigned __int8)PpmParkGranularity )
        v8 += v11 - (unsigned __int8)PpmParkGranularity;
      v10 += 336;
      --v9;
    }
    while ( v9 );
    if ( v7 > v8 )
LABEL_11:
      v7 = v8;
  }
  v12 = (unsigned __int8)PpmParkGranularity
      + a2
      - 1
      - ((unsigned int)(unsigned __int8)PpmParkGranularity + a2 - 1) % (unsigned __int8)PpmParkGranularity;
  if ( v12 )
  {
    v13 = 0;
    if ( !PpmParkNumNodes )
      goto LABEL_19;
    v14 = (unsigned int)PpmParkNumNodes;
    v15 = (unsigned __int8 *)(PpmParkNodes + 6);
    do
    {
      v16 = *v15;
      if ( (unsigned __int8)v16 > (unsigned __int8)PpmParkGranularity )
        v13 += v16 - (unsigned __int8)PpmParkGranularity;
      v15 += 336;
      --v14;
    }
    while ( v14 );
    if ( v12 > v13 )
LABEL_19:
      v12 = v13;
  }
  v17 = 0;
  if ( v7 != PpmParkLpiCap )
  {
    PpmParkLpiCap = v7;
    v17 = 1;
    PpmParkLpiCapChanged = 1;
  }
  if ( v12 == PpmParkThermalCap )
  {
    if ( !v17 )
    {
      PpmReleaseLock(&PpmPerfPolicyLock);
      goto LABEL_27;
    }
  }
  else
  {
    PpmParkThermalCap = v12;
  }
  PpmParkApplyPolicy();
  PpmCheckReInit();
  PpmCheckCustomRun(4u);
LABEL_27:
  *a3 = v7;
  return 0LL;
}
