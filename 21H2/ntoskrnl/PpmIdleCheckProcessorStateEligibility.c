/*
 * XREFs of PpmIdleCheckProcessorStateEligibility @ 0x140566850
 * Callers:
 *     PpmIdleSelectCoordinatedProcessorDependency @ 0x140566F54 (PpmIdleSelectCoordinatedProcessorDependency.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     PpmCheckIdleVeto @ 0x140565A08 (PpmCheckIdleVeto.c)
 */

__int64 __fastcall PpmIdleCheckProcessorStateEligibility(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        char a6)
{
  __int64 v6; // r10
  __int64 result; // rax
  unsigned int v9; // r9d
  __int64 v10; // r8
  unsigned int v11; // eax
  __int64 v12; // r8
  unsigned int v13; // r11d

  v6 = *(_QWORD *)(a1 + 0x8000);
  if ( *(_DWORD *)(v6 + 36) == 3 && PpmIdleVetoBias )
    return 4294967294LL;
  v9 = a5;
  v10 = 248LL * a5;
  if ( *(_BYTE *)(v10 + v6 + 1063) )
    return 2147483658LL;
  if ( a2 != -1 && a5 > a2 )
    return 2147483656LL;
  if ( !*(_BYTE *)(v10 + v6 + 1058) && *(_BYTE *)(v6 + 539) )
    return 2147483655LL;
  if ( a6 )
    goto LABEL_19;
  v11 = PpmCheckIdleVeto(v10 + v6 + 1016);
  if ( v11 )
    return v11 | 0x100000000LL;
  if ( *(_DWORD *)(v12 + v6 + 1000) > v13 )
    return 2147483650LL;
  if ( *(unsigned int *)(v12 + v6 + 1004) > a4 )
    return 2147483651LL;
LABEL_19:
  result = *(_QWORD *)(v6 + 448);
  if ( result )
    return ((unsigned int (__fastcall *)(_QWORD, _QWORD))result)(*(_QWORD *)(v6 + 488), v9);
  return result;
}
