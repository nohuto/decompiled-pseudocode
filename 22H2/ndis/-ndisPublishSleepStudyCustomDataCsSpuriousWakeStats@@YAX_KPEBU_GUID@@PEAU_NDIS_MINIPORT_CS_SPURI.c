/*
 * XREFs of ?ndisPublishSleepStudyCustomDataCsSpuriousWakeStats@@YAX_KPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS@@PEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX@@@Z @ 0x1C011524C
 * Callers:
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z @ 0x1C005BF88 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z.c)
 * Callees:
 *     ?ndisPublishSleepStudyCustomData@@YAX_KPEBU_GUID@@PEB_W0@Z @ 0x1C01150D0 (-ndisPublishSleepStudyCustomData@@YAX_KPEBU_GUID@@PEB_W0@Z.c)
 */

void __fastcall ndisPublishSleepStudyCustomDataCsSpuriousWakeStats(
        __int64 a1,
        const struct _GUID *a2,
        struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS *a3,
        struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX *a4)
{
  const wchar_t **v5; // rdi
  __int64 v9; // rbp
  const wchar_t **v10; // rbx
  __int64 v11; // rdi

  v5 = (const wchar_t **)off_1C00C9F50;
  v9 = 13LL;
  do
  {
    if ( *(_DWORD *)a3 )
      ndisPublishSleepStudyCustomData(a1, a2, *v5, *(unsigned int *)a3);
    a3 = (struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS *)((char *)a3 + 4);
    ++v5;
    --v9;
  }
  while ( v9 );
  v10 = (const wchar_t **)off_1C00C9F28;
  v11 = 5LL;
  do
  {
    if ( *(_DWORD *)a4 )
      ndisPublishSleepStudyCustomData(a1, a2, *v10, *(unsigned int *)a4);
    a4 = (struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX *)((char *)a4 + 4);
    ++v10;
    --v11;
  }
  while ( v11 );
}
