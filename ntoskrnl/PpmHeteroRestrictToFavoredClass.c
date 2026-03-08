/*
 * XREFs of PpmHeteroRestrictToFavoredClass @ 0x140595314
 * Callers:
 *     PpmParkComputeUnparkMask @ 0x14059A174 (PpmParkComputeUnparkMask.c)
 * Callees:
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 *     PoHeteroIsArchFavoredCoreSupported @ 0x14040B854 (PoHeteroIsArchFavoredCoreSupported.c)
 */

__int64 __fastcall PpmHeteroRestrictToFavoredClass(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int8 *a3,
        __int64 a4,
        unsigned __int8 a5,
        unsigned int a6,
        unsigned int a7,
        int a8)
{
  unsigned __int16 v8; // dx
  unsigned __int64 v9; // rcx
  int v10; // r10d
  bool v11; // bl
  unsigned __int8 v12; // di
  __int64 v13; // r14
  unsigned __int64 v14; // r12
  int v15; // ebp
  unsigned __int64 v16; // rax
  unsigned int v17; // esi
  __int64 Prcb; // r8
  __int64 v19; // rsi
  unsigned __int8 v20; // dl
  unsigned __int8 v21; // cl
  unsigned __int64 v22; // r15
  unsigned __int64 v23; // rax
  unsigned int v24; // esi
  __int64 v25; // rcx
  __int64 v26; // rsi
  char v27; // al
  int v29; // [rsp+20h] [rbp-58h]
  int v30; // [rsp+24h] [rbp-54h]

  v29 = 0;
  if ( PoHeteroIsArchFavoredCoreSupported() )
  {
    if ( PopHeteroSystem == 3 )
    {
      v11 = 1;
    }
    else if ( PopHeteroSystem == 6 )
    {
      v11 = a8 != 0;
    }
    else
    {
      v11 = a7 < a6;
    }
    if ( !PpmHeteroPolicy )
      v11 = 1;
  }
  else
  {
    v11 = a7 < a6;
    if ( !PpmHeteroPolicy )
      v11 = 1;
  }
  if ( PpmHeteroHgsParkingEnabled )
  {
    if ( v11 )
      v29 = v10;
    else
      v29 = a5;
  }
  v12 = 0;
  v30 = v8;
  v13 = 0LL;
  v14 = v9;
  if ( v9 )
  {
    v15 = v8 << 6;
    do
    {
      _BitScanForward64(&v16, v14);
      v17 = KiProcessorNumberToIndexMappingTable[v15 + (v16 & 0x3F)];
      Prcb = KeGetPrcb(v17);
      if ( PpmHeteroHgsParkingEnabled )
      {
        v19 = v29 + PpmHeteroWorkloadClasses * v17;
        if ( v11 )
          v20 = *((_BYTE *)PpmHeteroCapability + 4 * v19 + 25);
        else
          v20 = *((_BYTE *)PpmHeteroCapability + 4 * v19 + 24);
      }
      else if ( !PoHeteroIsArchFavoredCoreSupported() || v11 )
      {
        v20 = *(_BYTE *)(Prcb + 34057);
      }
      else
      {
        v20 = *(_BYTE *)(Prcb + 34058);
      }
      v21 = v12;
      if ( v12 <= v20 )
        v21 = v20;
      v12 = v21;
      v14 &= ~*(_QWORD *)(Prcb + 200);
    }
    while ( v14 );
    v13 = 0LL;
    v22 = a1;
    do
    {
      _BitScanForward64(&v23, v22);
      v24 = KiProcessorNumberToIndexMappingTable[64 * v30 + (v23 & 0x3F)];
      v25 = KeGetPrcb(v24);
      if ( PpmHeteroHgsParkingEnabled )
      {
        v26 = v29 + PpmHeteroWorkloadClasses * v24;
        if ( v11 )
          v27 = *((_BYTE *)PpmHeteroCapability + 4 * v26 + 25);
        else
          v27 = *((_BYTE *)PpmHeteroCapability + 4 * v26 + 24);
      }
      else if ( !PoHeteroIsArchFavoredCoreSupported() || v11 )
      {
        v27 = *(_BYTE *)(v25 + 34057);
      }
      else
      {
        v27 = *(_BYTE *)(v25 + 34058);
      }
      if ( v27 == v12 )
        v13 |= *(_QWORD *)(v25 + 200);
      v22 &= ~*(_QWORD *)(v25 + 200);
    }
    while ( v22 );
  }
  *a3 = v12;
  return v13;
}
