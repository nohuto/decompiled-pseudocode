/*
 * XREFs of ?ndisOidPreGenStats@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0005E40
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisOidGetStatisticAllProcessors@@YAEPEAU_NDIS_MINIPORT_STATS@@KPEA_K@Z @ 0x1C009C050 (-ndisOidGetStatisticAllProcessors@@YAEPEAU_NDIS_MINIPORT_STATS@@KPEA_K@Z.c)
 *     ?ndisSSGetCachedOidValue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A7014 (-ndisSSGetCachedOidValue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 */

unsigned __int8 __fastcall ndisOidPreGenStats(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // r14
  char v3; // cl
  __int64 v4; // rsi
  int v6; // eax
  _DWORD *v7; // rcx
  int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // [rsp+50h] [rbp+28h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v12 = 0LL;
  v3 = 0;
  if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    return 1;
  }
  else
  {
    v4 = *(_QWORD *)a1;
    if ( !*(_QWORD *)a1 )
      return 0;
    if ( *(_BYTE *)(v4 + 32) >= 6u )
    {
      if ( *(_QWORD *)(v4 + 4448) )
        return ndisSSGetCachedOidValue(a1);
      return v3;
    }
    if ( *(_QWORD *)(v1 + 144) )
    {
      *((_DWORD *)a1 + 10) = 0;
      v6 = 0;
      if ( *(_DWORD *)(v1 + 48) < 0x98u )
      {
        v6 = -1073676268;
        *(_DWORD *)(v1 + 56) = 152;
        *((_DWORD *)a1 + 10) = -1073676268;
      }
      v7 = *(_DWORD **)(v1 + 144);
      if ( !v6 )
      {
        v8 = v7[14];
        if ( !v8 )
        {
          v9 = *(_QWORD *)(v1 + 40);
          *(_QWORD *)v9 = 9961856LL;
          v10 = *(_QWORD *)(*(_QWORD *)(v1 + 144) + 40LL);
          *(_DWORD *)(v9 + 4) = 16;
          *(_QWORD *)(v9 + 8) = v10;
          *(_QWORD *)(v9 + 16) = *(_QWORD *)(*(_QWORD *)(v1 + 144) + 24LL);
          *(_DWORD *)(v9 + 4) = 48;
          ndisOidGetStatisticAllProcessors(*(struct _NDIS_MINIPORT_STATS **)(v4 + 3152), 0x20219u, &v12);
          *(_QWORD *)(v9 + 24) = v12;
          *(_DWORD *)(v9 + 4) = 56;
          ndisOidGetStatisticAllProcessors(*(struct _NDIS_MINIPORT_STATS **)(v4 + 3152), 0x20208u, &v12);
          *(_QWORD *)(v9 + 32) = v12;
          *(_DWORD *)(v9 + 4) = 57;
          ndisOidGetStatisticAllProcessors(*(struct _NDIS_MINIPORT_STATS **)(v4 + 3152), 0x2020Au, &v12);
          *(_QWORD *)(v9 + 40) = v12;
          *(_DWORD *)(v9 + 4) = 59;
          ndisOidGetStatisticAllProcessors(*(struct _NDIS_MINIPORT_STATS **)(v4 + 3152), 0x2020Cu, &v12);
          *(_QWORD *)(v9 + 48) = v12;
          *(_DWORD *)(v9 + 4) = 63;
          ndisOidGetStatisticAllProcessors(*(struct _NDIS_MINIPORT_STATS **)(v4 + 3152), 0x2021Au, &v12);
          *(_QWORD *)(v9 + 56) = v12;
          *(_DWORD *)(v9 + 4) = 575;
          ndisOidGetStatisticAllProcessors(*(struct _NDIS_MINIPORT_STATS **)(v4 + 3152), 0x20202u, &v12);
          *(_QWORD *)(v9 + 64) = v12;
          *(_DWORD *)(v9 + 4) = 639;
          ndisOidGetStatisticAllProcessors(*(struct _NDIS_MINIPORT_STATS **)(v4 + 3152), 0x20204u, &v12);
          *(_QWORD *)(v9 + 72) = v12;
          *(_DWORD *)(v9 + 4) = 767;
          ndisOidGetStatisticAllProcessors(*(struct _NDIS_MINIPORT_STATS **)(v4 + 3152), 0x20206u, &v12);
          v11 = v12;
          *(_DWORD *)(v9 + 4) = 1023;
          *(_QWORD *)(v9 + 80) = v11;
          *(_QWORD *)(v9 + 88) = *(_QWORD *)(*(_QWORD *)(v1 + 144) + 48LL);
          *(_DWORD *)(v9 + 4) = 2047;
          *(_QWORD *)(v9 + 96) = 0LL;
          ndisOidGetStatisticAllProcessors(*(struct _NDIS_MINIPORT_STATS **)(v4 + 3152), 0x20207u, &v12);
          *(_QWORD *)(v9 + 104) = v12;
          *(_DWORD *)(v9 + 4) = 67583;
          ndisOidGetStatisticAllProcessors(*(struct _NDIS_MINIPORT_STATS **)(v4 + 3152), 0x20209u, &v12);
          *(_QWORD *)(v9 + 112) = v12;
          *(_DWORD *)(v9 + 4) = 198655;
          ndisOidGetStatisticAllProcessors(*(struct _NDIS_MINIPORT_STATS **)(v4 + 3152), 0x2020Bu, &v12);
          *(_QWORD *)(v9 + 120) = v12;
          *(_DWORD *)(v9 + 4) = 460799;
          ndisOidGetStatisticAllProcessors(*(struct _NDIS_MINIPORT_STATS **)(v4 + 3152), 0x20201u, &v12);
          *(_QWORD *)(v9 + 128) = v12;
          *(_DWORD *)(v9 + 4) = 985087;
          ndisOidGetStatisticAllProcessors(*(struct _NDIS_MINIPORT_STATS **)(v4 + 3152), 0x20203u, &v12);
          *(_QWORD *)(v9 + 136) = v12;
          *(_DWORD *)(v9 + 4) = 2033663;
          ndisOidGetStatisticAllProcessors(*(struct _NDIS_MINIPORT_STATS **)(v4 + 3152), 0x20205u, &v12);
          *(_QWORD *)(v9 + 144) = v12;
          *(_DWORD *)(v9 + 4) = 4130815;
          *(_DWORD *)(v1 + 52) = 152;
          *((_DWORD *)a1 + 10) = 0;
          ExFreePoolWithTag(*(PVOID *)(v1 + 144), 0);
          v3 = 1;
          *(_QWORD *)(v1 + 144) = 0LL;
          return v3;
        }
        *((_DWORD *)a1 + 10) = v8;
        v7 = *(_DWORD **)(v1 + 144);
      }
      ExFreePoolWithTag(v7, 0);
      *(_QWORD *)(v1 + 144) = 0LL;
    }
    else
    {
      *((_DWORD *)a1 + 10) = -1073741670;
    }
    return 1;
  }
}
