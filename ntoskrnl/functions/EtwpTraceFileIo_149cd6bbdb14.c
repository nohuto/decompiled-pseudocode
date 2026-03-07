void __fastcall EtwpTraceFileIo(
        __int64 a1,
        struct _EVENT_DATA_DESCRIPTOR *a2,
        ULONG a3,
        unsigned int a4,
        unsigned __int16 a5)
{
  unsigned __int64 v5; // rdi
  __int64 EffectiveServerSilo; // rbp
  unsigned int v9; // ebx
  bool i; // zf
  unsigned int v11; // ecx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rbx
  unsigned int v15; // ebp
  unsigned int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // rcx

  v5 = a4;
  if ( a1 )
  {
    if ( *(_QWORD *)(a1 + 1624) == -3LL )
      EffectiveServerSilo = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 2160LL);
    else
      EffectiveServerSilo = PsGetEffectiveServerSilo(*(_QWORD *)(a1 + 1624));
  }
  else
  {
    EffectiveServerSilo = 0LL;
  }
  if ( EtwpHostSiloState != -4540 && (*(_DWORD *)(EtwpHostSiloState + 4540) & 0x6000000) != 0 )
    EtwpFileProvTrace(a2, a3);
  if ( a5 != 1102 )
  {
    v9 = *(_DWORD *)(EtwpHostSiloState + 4248);
    for ( i = !_BitScanForward(&v11, v9); !i; i = !_BitScanForward(&v11, v9) )
    {
      v9 &= v9 - 1;
      v12 = v11;
      v13 = 32LL * v11 + EtwpHostSiloState + 4284;
      if ( v13 && ((unsigned int)v5 & *(_DWORD *)(v13 + 4 * (v5 >> 29)) & 0x1FFFFFFF) != 0 )
        EtwpLogKernelEvent(
          (__int64)a2,
          EtwpHostSiloState,
          *(unsigned __int8 *)(EtwpHostSiloState + 2 * v12 + 4232),
          a3,
          a5,
          0x501903u);
    }
    if ( EffectiveServerSilo )
    {
      v14 = *(_QWORD *)(*(_QWORD *)(EffectiveServerSilo + 1488) + 864LL);
      if ( v14 )
      {
        v15 = *(_DWORD *)(v14 + 4248);
        for ( i = !_BitScanForward(&v16, v15); !i; i = !_BitScanForward(&v16, v15) )
        {
          v17 = v16;
          v15 &= v15 - 1;
          v18 = 32LL * v16 + v14 + 4284;
          if ( v18 )
          {
            if ( ((unsigned int)v5 & *(_DWORD *)(v18 + 4 * (v5 >> 29)) & 0x1FFFFFFF) != 0 )
              EtwpLogKernelEvent((__int64)a2, v14, *(unsigned __int8 *)(v14 + 2 * v17 + 4232), a3, a5, 0x501903u);
          }
        }
      }
    }
  }
}
