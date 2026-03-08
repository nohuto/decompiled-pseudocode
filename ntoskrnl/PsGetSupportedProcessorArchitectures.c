/*
 * XREFs of PsGetSupportedProcessorArchitectures @ 0x14076CF28
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     PsWow64IsMachineSupported @ 0x14076D0D0 (PsWow64IsMachineSupported.c)
 */

__int64 __fastcall PsGetSupportedProcessorArchitectures(
        _DWORD *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4,
        __int64 a5)
{
  int IsMachineSupported; // r15d
  int v9; // r12d
  int v10; // ecx
  unsigned int v11; // edx
  __int16 v12; // bx
  unsigned int v13; // eax
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // eax
  int v17; // eax
  unsigned int v18; // eax
  int v19; // eax

  IsMachineSupported = PsWow64IsMachineSupported(332LL);
  v9 = PsWow64IsMachineSupported(452LL);
  v10 = (IsMachineSupported != 0) + 2;
  if ( !v9 )
    v10 = (IsMachineSupported != 0) + 1;
  v11 = 4 * v10 + 4;
  *a4 = v11;
  if ( v11 > a3 )
    return 3221225507LL;
  v12 = 0;
  if ( a5 )
  {
    if ( !*(_QWORD *)(a5 + 1408) || (v12 = *(_WORD *)(a5 + 2412)) == 0 )
      v12 = -31132;
  }
  memset(a1, 0, v11);
  v13 = *a1 & 0xFFFF0000 | 0x8664;
  *a1 = v13;
  v13 |= 0x10000u;
  *a1 = v13;
  v13 |= 0x20000u;
  *a1 = v13;
  v14 = v13 | 0x40000;
  *a1 = v14;
  if ( v12 == -31132 )
    *a1 = v14 | 0x80000;
  v15 = 1;
  if ( IsMachineSupported )
  {
    v16 = a1[1] & 0xFFFF0000 | 0x14C;
    a1[1] = v16;
    v16 |= 0x20000u;
    a1[1] = v16;
    v17 = v16 | 0x100000;
    a1[1] = v17;
    if ( v12 == 332 )
      a1[1] = v17 | 0x80000;
    v15 = 2;
  }
  if ( v9 )
  {
    v18 = a1[v15] & 0xFFFF0000 | 0x1C4;
    a1[v15] = v18;
    v18 |= 0x20000u;
    a1[v15] = v18;
    v19 = v18 | 0x100000;
    a1[v15] = v19;
    if ( v12 == 452 )
      a1[v15] = v19 | 0x80000;
  }
  return 0LL;
}
