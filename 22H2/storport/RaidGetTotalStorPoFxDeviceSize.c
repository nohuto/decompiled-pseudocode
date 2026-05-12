/*
 * XREFs of RaidGetTotalStorPoFxDeviceSize @ 0x1C0037E98
 * Callers:
 *     StorpAdapterInitializePoFxPower @ 0x1C003A84C (StorpAdapterInitializePoFxPower.c)
 *     StorpUnitInitializePoFxPower @ 0x1C003D498 (StorpUnitInitializePoFxPower.c)
 * Callees:
 *     RaidGetStorPoFxComponent @ 0x1C0013B74 (RaidGetStorPoFxComponent.c)
 *     RaidGetStorPoFxFState @ 0x1C0037E20 (RaidGetStorPoFxFState.c)
 */

__int64 __fastcall RaidGetTotalStorPoFxDeviceSize(int *a1)
{
  unsigned int v2; // edi
  char *StorPoFxComponent; // rax
  int v4; // r9d
  int v5; // r10d
  char *v6; // rsi
  int v7; // ebx
  unsigned int v8; // edx
  char *StorPoFxFState; // rax
  int v10; // edx
  int v11; // ecx

  v2 = 0;
  while ( 1 )
  {
    StorPoFxComponent = RaidGetStorPoFxComponent(a1, v2++);
    v6 = StorPoFxComponent;
    if ( !StorPoFxComponent )
      break;
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      StorPoFxFState = RaidGetStorPoFxFState(v6, v8);
      v8 = v10 + 1;
      if ( !StorPoFxFState )
        break;
      v11 = 32;
      if ( *(_DWORD *)StorPoFxFState != 1 )
        v11 = 0;
      v7 += v11;
    }
  }
  return (unsigned int)(v5 + v4);
}
