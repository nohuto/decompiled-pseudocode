void __fastcall EtwTraceKernelEvent(__int64 a1, unsigned int a2, unsigned int a3, unsigned __int16 a4, unsigned int a5)
{
  unsigned __int64 v6; // rsi
  unsigned int v9; // ebx
  bool i; // zf
  __int64 v11; // r10
  __int64 v12; // rcx

  v6 = a3;
  v9 = *(_DWORD *)(EtwpHostSiloState + 4248);
  for ( i = !_BitScanForward((unsigned int *)&v11, v9); !i; i = !_BitScanForward((unsigned int *)&v11, v9) )
  {
    v9 &= v9 - 1;
    v12 = 32LL * (unsigned int)v11 + EtwpHostSiloState + 4284;
    if ( v12 )
    {
      if ( ((unsigned int)v6 & *(_DWORD *)(v12 + 4 * (v6 >> 29)) & 0x1FFFFFFF) != 0 )
        EtwpLogKernelEvent(a1, EtwpHostSiloState, *(unsigned __int8 *)(EtwpHostSiloState + 2 * v11 + 4232), a2, a4, a5);
    }
  }
}
