/*
 * XREFs of IopCheckIfMergeRequired @ 0x1409699BC
 * Callers:
 *     PnpQueuePendingSurpriseRemoval @ 0x14087E79C (PnpQueuePendingSurpriseRemoval.c)
 * Callees:
 *     PiGetProviderList @ 0x1406CB884 (PiGetProviderList.c)
 *     PiEnumerateProviderListEntry @ 0x140838DE8 (PiEnumerateProviderListEntry.c)
 *     PipIsDeviceInDeviceObjectList @ 0x14086210C (PipIsDeviceInDeviceObjectList.c)
 *     IopEnumerateRelations @ 0x140863508 (IopEnumerateRelations.c)
 */

char __fastcall IopCheckIfMergeRequired(unsigned int **a1, unsigned int **a2)
{
  __int64 v4; // r11
  unsigned __int64 v5; // rdx
  __int64 v6; // r11
  __int64 *ProviderList; // rbx
  __int64 v8; // r11
  __int64 *v9; // r11
  __int64 v11; // [rsp+30h] [rbp-18h] BYREF
  __int64 v12; // [rsp+38h] [rbp-10h]
  int v13; // [rsp+68h] [rbp+20h] BYREF
  int v14; // [rsp+6Ch] [rbp+24h]

  v11 = 0LL;
  v12 = 0LL;
  v13 = 0;
  v14 = 0;
LABEL_2:
  while ( IopEnumerateRelations(a1, &v13, &v11, 0LL, 0LL) )
  {
    if ( PipIsDeviceInDeviceObjectList(*a2, v11, 0LL) )
      return 1;
    v5 = *(_QWORD *)(v4 + 16);
    if ( !v5 )
      v5 = *(_QWORD *)(v4 + 648) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( PipIsDeviceInDeviceObjectList(*a2, *(_QWORD *)(v5 + 32), 0LL) )
      return 1;
    ProviderList = PiGetProviderList(*(_QWORD *)(v6 + 32));
    v8 = *ProviderList;
    if ( (__int64 *)*ProviderList != ProviderList )
    {
      while ( 1 )
      {
        PiEnumerateProviderListEntry(v8);
        v8 = *v9;
        if ( v12 )
        {
          if ( PipIsDeviceInDeviceObjectList(*a2, v12, 0LL) )
            return 1;
        }
        if ( (__int64 *)v8 == ProviderList )
          goto LABEL_2;
      }
    }
  }
  return 0;
}
