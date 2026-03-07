void __fastcall EtwTraceSiloKernelEvent(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int16 a5,
        unsigned int a6)
{
  unsigned __int64 v9; // rdi
  unsigned int v10; // ebx
  bool i; // zf
  __int64 v12; // r10
  __int64 v13; // rcx
  __int64 v14; // rbx
  unsigned int v15; // esi
  unsigned int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // rcx

  v9 = a4;
  v10 = *(_DWORD *)(EtwpHostSiloState + 4248);
  for ( i = !_BitScanForward((unsigned int *)&v12, v10); !i; i = !_BitScanForward((unsigned int *)&v12, v10) )
  {
    v10 &= v10 - 1;
    v13 = 32LL * (unsigned int)v12 + EtwpHostSiloState + 4284;
    if ( v13 && ((unsigned int)v9 & *(_DWORD *)(v13 + 4 * (v9 >> 29)) & 0x1FFFFFFF) != 0 )
      EtwpLogKernelEvent(a2, EtwpHostSiloState, *(unsigned __int8 *)(EtwpHostSiloState + 2 * v12 + 4232), a3, a5, a6);
  }
  if ( a1 )
  {
    v14 = *(_QWORD *)(*(_QWORD *)(a1 + 1488) + 864LL);
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
          if ( ((unsigned int)v9 & *(_DWORD *)(v18 + 4 * (v9 >> 29)) & 0x1FFFFFFF) != 0 )
            EtwpLogKernelEvent(a2, v14, *(unsigned __int8 *)(v14 + 2 * v17 + 4232), a3, a5, a6);
        }
      }
    }
  }
}
