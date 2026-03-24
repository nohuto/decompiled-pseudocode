/*
 * XREFs of ?SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C00DB810
 * Callers:
 *     xxxSetWindowNCMetrics @ 0x1C00E262C (xxxSetWindowNCMetrics.c)
 * Callees:
 *     bSetDevDragWidth @ 0x1C00DB7BC (bSetDevDragWidth.c)
 *     UpdateDesktopThresholds @ 0x1C00DC370 (UpdateDesktopThresholds.c)
 */

void __fastcall SetNCMetrics(struct tagNONCLIENTMETRICSW *a1)
{
  int v2; // r8d
  int v3; // r8d
  unsigned int v4; // ebx
  INT v5; // r13d
  __int64 SessionDpiServerInfo; // r14
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r15
  int v12; // ebx
  INT v13; // ebx
  INT v14; // edx
  int v15; // edi
  INT v16; // edx
  INT v17; // edi
  INT v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rcx
  int v24; // ebx
  int v25; // ecx
  int v26; // r8d
  int v27; // edi
  int v28; // esi
  int v29; // ebx

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
  v11 = Get96DpiServerInfo(v9, v8, v10);
  v12 = *(_DWORD *)(v11 + 20) + 2;
  if ( EngMulDiv(*(_DWORD *)(gpsi + 2336LL), 96, *(unsigned __int16 *)(gpsi + 6998LL)) > v12 )
    v12 = EngMulDiv(*(_DWORD *)(gpsi + 2336LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2456LL) = v12;
  v13 = 8;
  if ( EngMulDiv(*(_DWORD *)(gpsi + 2332LL), 96, *(unsigned __int16 *)(gpsi + 6998LL)) <= 8 )
    v14 = 8;
  else
    v14 = EngMulDiv(*(_DWORD *)(gpsi + 2332LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2452LL) = v14;
  v15 = *(_DWORD *)(v7 + 44) + 2;
  if ( EngMulDiv(*(_DWORD *)(gpsi + 2380LL), 96, *(unsigned __int16 *)(gpsi + 6998LL)) > v15 )
    v15 = EngMulDiv(*(_DWORD *)(gpsi + 2380LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2500LL) = v15;
  if ( EngMulDiv(*(_DWORD *)(gpsi + 2376LL), 96, *(unsigned __int16 *)(gpsi + 6998LL)) <= 8 )
    v16 = 8;
  else
    v16 = EngMulDiv(*(_DWORD *)(gpsi + 2376LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2496LL) = v16;
  v17 = *(_DWORD *)(v7 + 28);
  if ( EngMulDiv(*(_DWORD *)(gpsi + 2388LL), 96, *(unsigned __int16 *)(gpsi + 6998LL)) > v17 )
    v17 = EngMulDiv(*(_DWORD *)(gpsi + 2388LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2508LL) = v17;
  if ( EngMulDiv(*(_DWORD *)(gpsi + 2384LL), 96, *(unsigned __int16 *)(gpsi + 6998LL)) > 8 )
    v13 = EngMulDiv(*(_DWORD *)(gpsi + 2384LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2504LL) = v13;
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
  v22 = Get96DpiServerInfo(v20, v19, v21);
  v23 = 2460LL;
  *(_DWORD *)(v22 + 4) = v18;
  v24 = v18 + 3;
  do
  {
    *(_DWORD *)(v23 + gpsi) = v24;
    v23 += 4LL;
  }
  while ( v23 < 2468 );
  v25 = *(_DWORD *)(gpsi + 2520LL);
  v26 = *(_DWORD *)(gpsi + 2400LL);
  v27 = v25 + *(_DWORD *)(gpsi + 2460LL);
  v28 = v25 + *(_DWORD *)(gpsi + 2464LL);
  v29 = v26 + *(_DWORD *)(gpsi + 2344LL);
  SetDpiDepSysMet(
    16LL,
    (unsigned int)(*(_DWORD *)(gpsi + 2336LL)
                 + 3 * *(_DWORD *)(gpsi + 2332LL)
                 + 2 * (v26 + 2 + *(_DWORD *)(gpsi + 2340LL) + 2 * *(_DWORD *)(SessionDpiServerInfo + 16))));
  SetDpiDepSysMet(17LL, (unsigned int)(*(_DWORD *)(gpsi + 2292LL) + 2 * v29));
  *(_DWORD *)(gpsi + 2468LL) = *(_DWORD *)(gpsi + 2456LL)
                             + 3 * *(_DWORD *)(gpsi + 2452LL)
                             + 2 * (v27 + 2 + 2 * *(_DWORD *)(v11 + 16));
  *(_DWORD *)(gpsi + 2472LL) = *(_DWORD *)(gpsi + 2412LL) + 2 * v28;
  *(_DWORD *)(gpsi + 2128LL) = *(_DWORD *)(gpsi + 2336LL) + 6;
  bSetDevDragWidth(*(_QWORD *)(gpDispInfo + 40LL), *((_DWORD *)a1 + 1) + 3);
  UpdateDesktopThresholds();
}
