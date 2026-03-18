/*
 * XREFs of RIMIDEIsCompatibleDevice @ 0x1C019E1C4
 * Callers:
 *     RIMIDEAdoptOrphanedRimDevs @ 0x1C005EB24 (RIMIDEAdoptOrphanedRimDevs.c)
 * Callees:
 *     rimIsExplicitRimUsagesMatchingUsages @ 0x1C0056498 (rimIsExplicitRimUsagesMatchingUsages.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDEIsCompatibleDevice(_DWORD *a1, __int64 a2)
{
  char v2; // al
  _DWORD *v4; // rbx
  __int64 v5; // r8

  v2 = *(_BYTE *)(a2 + 48);
  v4 = a1;
  if ( !v2 )
  {
    v5 = 1LL;
    goto LABEL_14;
  }
  v5 = 2LL;
  if ( v2 != 1 )
  {
    if ( v2 == 2 )
    {
      if ( (*(_DWORD *)(a2 + 200) & 0x80u) == 0 )
      {
        v5 = 32LL;
        goto LABEL_14;
      }
      a1 = (_DWORD *)*(unsigned int *)(*(_QWORD *)(a2 + 472) + 24LL);
      if ( (unsigned int)((_DWORD)a1 - 5) <= 1 )
      {
        v5 = 4LL;
        goto LABEL_14;
      }
      if ( (_DWORD)a1 == 7 )
      {
        v5 = 8LL;
        goto LABEL_14;
      }
      if ( (unsigned int)((_DWORD)a1 - 1) <= 3 )
      {
        v5 = 16LL;
        goto LABEL_14;
      }
    }
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, 2LL);
    v5 = 0LL;
  }
LABEL_14:
  if ( ((unsigned int)v5 & v4[21]) == 0 )
    return 0LL;
  if ( (_DWORD)v5 != 32 || v4[272] )
    return 1LL;
  if ( !v4[22] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, v5);
  return rimIsExplicitRimUsagesMatchingUsages(
           (__int64)v4,
           *(_WORD *)(*(_QWORD *)(a2 + 464) + 16LL),
           *(_WORD *)(*(_QWORD *)(a2 + 464) + 18LL));
}
