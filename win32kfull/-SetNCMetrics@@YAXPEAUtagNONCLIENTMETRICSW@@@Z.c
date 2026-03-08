/*
 * XREFs of ?SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C00E14E8
 * Callers:
 *     xxxSetWindowNCMetrics @ 0x1C010CBC8 (xxxSetWindowNCMetrics.c)
 * Callees:
 *     bSetDevDragWidth @ 0x1C00E1CD0 (bSetDevDragWidth.c)
 *     SortMonitorsInSpatialOrder @ 0x1C00E1D30 (SortMonitorsInSpatialOrder.c)
 */

void __fastcall SetNCMetrics(struct tagNONCLIENTMETRICSW *a1)
{
  int v2; // ecx
  int v3; // ecx
  unsigned int v4; // ebx
  INT v5; // esi
  __int64 SessionDpiServerInfo; // r14
  __int64 v7; // rdi
  __int64 v8; // r15
  INT v9; // eax
  INT v10; // edx
  INT v11; // ebx
  INT v12; // edx
  INT v13; // eax
  INT v14; // edx
  INT v15; // edx
  INT v16; // eax
  INT v17; // edx
  INT v18; // ebx
  __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // ebx
  int v22; // ecx
  int v23; // r8d
  int v24; // edi
  int v25; // esi
  int v26; // ebx

  SetDpiDepSysMet(0LL, *((unsigned int *)a1 + 2));
  SetDpiDepSysMet(1LL, *((unsigned int *)a1 + 2));
  SetDpiDepSysMet(10LL, *((unsigned int *)a1 + 3));
  SetDpiDepSysMet(11LL, *((unsigned int *)a1 + 3));
  SetDpiDepSysMet(3LL, *((unsigned int *)a1 + 3));
  SetDpiDepSysMet(4LL, *((unsigned int *)a1 + 3));
  SetDpiDepSysMet(12LL, *((unsigned int *)a1 + 4));
  SetDpiDepSysMet(13LL, *((unsigned int *)a1 + 5));
  SetDpiDepSysMet(2LL, (unsigned int)(*(_DWORD *)(gpsi + 2336LL) + 1));
  if ( *(_DWORD *)a1 == 504 )
    SetDpiDepSysMet(29LL, *((unsigned int *)a1 + 125));
  v2 = *(_DWORD *)(gpsi + 2332LL) - 2;
  if ( v2 >= *(_DWORD *)(gpsi + 2304LL) / 2 )
    v2 = *(_DWORD *)(gpsi + 2304LL) / 2;
  SetDpiDepSysMet(20LL, v2 & 0xFFFFFFFE);
  v3 = *(_DWORD *)(gpsi + 2336LL) - 2;
  if ( v3 >= *(_DWORD *)(gpsi + 2308LL) / 2 )
    v3 = *(_DWORD *)(gpsi + 2308LL) / 2;
  SetDpiDepSysMet(21LL, v3 & 0xFFFFFFFE);
  v4 = *(_DWORD *)(gpsi + 2364LL);
  if ( (signed int)v4 >= *(_DWORD *)(gpsi + 2368LL) )
    v4 = *(_DWORD *)(gpsi + 2368LL);
  SetDpiDepSysMet(20LL, v4);
  SetDpiDepSysMet(21LL, v4);
  SetDpiDepSysMet(23LL, *((unsigned int *)a1 + 29));
  SetDpiDepSysMet(24LL, *((unsigned int *)a1 + 30));
  SetDpiDepSysMet(22LL, (unsigned int)(*(_DWORD *)(gpsi + 2380LL) + 1));
  SetDpiDepSysMet(25LL, *((unsigned int *)a1 + 54));
  SetDpiDepSysMet(26LL, *((unsigned int *)a1 + 55));
  SetDpiDepSysMet(9LL, (unsigned int)(*(_DWORD *)(gpsi + 2388LL) + 1));
  v5 = *((_DWORD *)a1 + 1);
  SessionDpiServerInfo = GetSessionDpiServerInfo();
  *(_DWORD *)(SessionDpiServerInfo + 4) = v5;
  SetDpiDepSysMet(14LL, (unsigned int)(v5 + 3));
  SetDpiDepSysMet(15LL, (unsigned int)(v5 + 3));
  v7 = Get96DpiMetrics();
  v8 = Get96DpiServerInfo();
  v9 = EngMulDiv(*(_DWORD *)(gpsi + 2336LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  v10 = *(_DWORD *)(v8 + 20) + 2;
  if ( v9 > v10 )
    v10 = EngMulDiv(*(_DWORD *)(gpsi + 2336LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2456LL) = v10;
  v11 = 8;
  if ( EngMulDiv(*(_DWORD *)(gpsi + 2332LL), 96, *(unsigned __int16 *)(gpsi + 6998LL)) <= 8 )
    v12 = 8;
  else
    v12 = EngMulDiv(*(_DWORD *)(gpsi + 2332LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2452LL) = v12;
  v13 = EngMulDiv(*(_DWORD *)(gpsi + 2380LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  v14 = *(_DWORD *)(v7 + 44) + 2;
  if ( v13 > v14 )
    v14 = EngMulDiv(*(_DWORD *)(gpsi + 2380LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2500LL) = v14;
  if ( EngMulDiv(*(_DWORD *)(gpsi + 2376LL), 96, *(unsigned __int16 *)(gpsi + 6998LL)) <= 8 )
    v15 = 8;
  else
    v15 = EngMulDiv(*(_DWORD *)(gpsi + 2376LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2496LL) = v15;
  v16 = EngMulDiv(*(_DWORD *)(gpsi + 2388LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  v17 = *(_DWORD *)(v7 + 28);
  if ( v16 > v17 )
    v17 = EngMulDiv(*(_DWORD *)(gpsi + 2388LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2508LL) = v17;
  if ( EngMulDiv(*(_DWORD *)(gpsi + 2384LL), 96, *(unsigned __int16 *)(gpsi + 6998LL)) > 8 )
    v11 = EngMulDiv(*(_DWORD *)(gpsi + 2384LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2504LL) = v11;
  *(_DWORD *)(gpsi + 2440LL) = *(_DWORD *)(gpsi + 2508LL) + 1;
  *(_DWORD *)(gpsi + 2412LL) = *(_DWORD *)(gpsi + 2456LL) + 1;
  *(_DWORD *)(gpsi + 2492LL) = *(_DWORD *)(gpsi + 2500LL) + 1;
  *(_DWORD *)(gpsi + 2520LL) = EngMulDiv(*(_DWORD *)(gpsi + 2400LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2448LL) = EngMulDiv(*(_DWORD *)(gpsi + 2328LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2420LL) = EngMulDiv(*(_DWORD *)(gpsi + 2300LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2404LL) = EngMulDiv(*(_DWORD *)(gpsi + 2284LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2408LL) = EngMulDiv(*(_DWORD *)(gpsi + 2288LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2444LL) = EngMulDiv(*(_DWORD *)(gpsi + 2324LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2416LL) = EngMulDiv(*(_DWORD *)(gpsi + 2296LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  v18 = EngMulDiv(v5, 96, *(unsigned __int16 *)(gpsi + 6998LL));
  v19 = Get96DpiServerInfo();
  v20 = 2460LL;
  *(_DWORD *)(v19 + 4) = v18;
  v21 = v18 + 3;
  do
  {
    *(_DWORD *)(v20 + gpsi) = v21;
    v20 += 4LL;
  }
  while ( v20 < 2468 );
  v22 = *(_DWORD *)(gpsi + 2520LL);
  v23 = *(_DWORD *)(gpsi + 2400LL);
  v24 = v22 + *(_DWORD *)(gpsi + 2460LL);
  v25 = v22 + *(_DWORD *)(gpsi + 2464LL);
  v26 = v23 + *(_DWORD *)(gpsi + 2344LL);
  SetDpiDepSysMet(
    16LL,
    (unsigned int)(*(_DWORD *)(gpsi + 2336LL)
                 + 3 * *(_DWORD *)(gpsi + 2332LL)
                 + 2 * (v23 + 2 + *(_DWORD *)(gpsi + 2340LL) + 2 * *(_DWORD *)(SessionDpiServerInfo + 16))));
  SetDpiDepSysMet(17LL, (unsigned int)(*(_DWORD *)(gpsi + 2292LL) + 2 * v26));
  *(_DWORD *)(gpsi + 2468LL) = *(_DWORD *)(gpsi + 2456LL)
                             + 3 * *(_DWORD *)(gpsi + 2452LL)
                             + 2 * (v24 + 2 + 2 * *(_DWORD *)(v8 + 16));
  *(_DWORD *)(gpsi + 2472LL) = *(_DWORD *)(gpsi + 2412LL) + 2 * v25;
  *(_DWORD *)(gpsi + 2128LL) = *(_DWORD *)(gpsi + 2336LL) + 6;
  bSetDevDragWidth(*(_QWORD *)(gpDispInfo + 40LL), (unsigned int)(*((_DWORD *)a1 + 1) + 3));
  SortMonitorsInSpatialOrder();
}
