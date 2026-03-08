/*
 * XREFs of PpmHeteroDetectFavoredCores @ 0x14079C25C
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x140826970 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140234A60 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 *     PoHeteroIsArchFavoredCoreSupported @ 0x14040B854 (PoHeteroIsArchFavoredCoreSupported.c)
 */

char __fastcall PpmHeteroDetectFavoredCores(__int64 a1)
{
  char v2; // cl
  char v3; // bl
  unsigned __int8 v4; // cl
  unsigned int v5; // esi
  __int64 v6; // rbp
  __int64 v7; // rcx
  char v8; // al
  bool IsArchFavoredCoreSupported; // al
  __int64 v10; // r9
  __int64 v11; // rdx
  unsigned __int16 *v13[2]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v14; // [rsp+30h] [rbp-28h]
  int v15; // [rsp+32h] [rbp-26h]
  __int16 v16; // [rsp+36h] [rbp-22h]
  unsigned int v17; // [rsp+68h] [rbp+10h] BYREF

  v15 = 0;
  v16 = 0;
  v2 = PpmHeteroHighestPerformanceClasses;
  v17 = 0;
  v3 = 1;
  if ( (unsigned __int8)PpmHeteroNominalPerformanceClasses > (unsigned __int8)PpmHeteroHighestPerformanceClasses )
    v2 = PpmHeteroNominalPerformanceClasses;
  if ( (unsigned __int8)v2 <= 1u || PoHeteroIsArchFavoredCoreSupported() && v4 <= (unsigned __int8)PpmMaxCoreClasses )
    return 0;
  *(_DWORD *)(a1 + 4) = 1;
  v13[1] = (unsigned __int16 *)qword_140C0BC68;
  v13[0] = (unsigned __int16 *)&PpmPerfStatesRegistered;
  v14 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v17, v13) )
  {
    v5 = 0;
    if ( *(_DWORD *)(a1 + 4) )
    {
      v6 = v17;
      do
      {
        v7 = *(_QWORD *)(KeGetPrcb(v6) + 33968);
        if ( (unsigned __int8)PpmHeteroNominalPerformanceClasses <= 1u )
          v8 = *(_BYTE *)(v7 + 302);
        else
          v8 = *(_BYTE *)(v7 + 301);
        *(_BYTE *)(a1 + 4LL * (v5 + *(_DWORD *)(a1 + 4) * (_DWORD)v6) + 25) = v8;
        IsArchFavoredCoreSupported = PoHeteroIsArchFavoredCoreSupported();
        if ( IsArchFavoredCoreSupported )
          *(_BYTE *)(a1 + 4 * v10 + 24) = PpmMaxCoreClasses - *(_BYTE *)(*(_QWORD *)(a1 + 8) + v6) - 1;
        v11 = *(_QWORD *)(a1 + 16);
        *(_BYTE *)(v11 + 2LL * v5 + 1) = 1;
        if ( IsArchFavoredCoreSupported )
          *(_BYTE *)(v11 + 2LL * v5) = 1;
        ++v5;
      }
      while ( v5 < *(_DWORD *)(a1 + 4) );
    }
  }
  return v3;
}
