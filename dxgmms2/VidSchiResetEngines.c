char __fastcall VidSchiResetEngines(__int64 a1, unsigned __int64 a2)
{
  __int64 v5; // rsi
  __int64 v6; // r12
  char v7; // di
  unsigned int v8; // eax
  unsigned int v9; // r15d
  unsigned __int64 v10; // rbx
  unsigned int i; // r13d
  unsigned int v12; // eax
  unsigned __int64 *v13; // r14
  unsigned __int64 v14; // r14
  char v15; // al
  int v16; // ebp
  unsigned int v17; // eax
  __int64 *v18; // rcx

  if ( TdrAllowToDebugEngineTimeout((struct _VIDSCH_NODE *)a1, *(struct DXGADAPTER **)(*(_QWORD *)(a1 + 24) + 16LL)) )
    return 1;
  v5 = *(_QWORD *)(a1 + 24);
  v6 = a2;
  v7 = 1;
  v8 = VidSchiSchedulerNodeToDriverEngine(v5, *(unsigned __int16 *)(a1 + 4));
  *(_QWORD *)(v5 + 3024) = a1;
  v9 = 0;
  v10 = 0LL;
  for ( i = v8; a2; a2 >>= 1 )
  {
    if ( (a2 & 1) != 0 )
    {
      v12 = VidSchiDriverNodeEngineToSchedulerNode(v5, v9, i);
      v13 = *(unsigned __int64 **)(v5 + 632);
      if ( v12 < *(_DWORD *)(v5 + 704) )
        v13 += v12;
      v14 = *v13;
      if ( (*(_DWORD *)(v14 + 12) & 2) != 0 )
        v15 = VidSchiResetHwEngine(v14, v6);
      else
        v15 = VidSchiResetEngine(v14, v6);
      v7 = v15;
      if ( !v15 )
        break;
      if ( (*(_DWORD *)(v14 + 12) & 2) == 0 )
        _bittestandset64((__int64 *)&v10, v9);
    }
    ++v9;
  }
  *(_QWORD *)(v5 + 3024) = 0LL;
  if ( v7 )
  {
    v16 = 0;
    if ( v10 )
    {
      while ( 1 )
      {
        if ( (v10 & 1) != 0 )
        {
          v17 = VidSchiDriverNodeEngineToSchedulerNode(v5, v16, i);
          v18 = *(__int64 **)(v5 + 632);
          if ( v17 < *(_DWORD *)(v5 + 704) )
            v18 += v17;
          VidSchiCompletePreemption(*v18);
          if ( VidSchIsTDRPending(v5) )
            break;
        }
        ++v16;
        v10 >>= 1;
        if ( !v10 )
          return v7;
      }
      return 0;
    }
  }
  return v7;
}
