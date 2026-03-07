__int64 __fastcall EtwpTraceRegistry(unsigned __int8 a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  unsigned int v11; // ebx
  bool i; // zf
  __int64 v13; // r10
  _DWORD *v14; // rcx

  result = EtwpHostSiloState;
  v11 = *(_DWORD *)(EtwpHostSiloState + 4248);
  for ( i = !_BitScanForward((unsigned int *)&v13, v11); !i; i = !_BitScanForward((unsigned int *)&v13, v11) )
  {
    v11 &= v11 - 1;
    result = 32LL * (unsigned int)v13;
    v14 = (_DWORD *)(result + EtwpHostSiloState + 4284);
    if ( v14 )
    {
      if ( (*v14 & 0x20000) != 0 )
        result = EtwpLogRegistryEvent(
                   *(unsigned __int8 *)(EtwpHostSiloState + 2 * v13 + 4232),
                   a1,
                   a3,
                   a4,
                   a5,
                   (__int64 *)(a2 + 8 * (*(unsigned __int8 *)(EtwpHostSiloState + 2 * v13 + 4233) - 1LL)),
                   a6);
    }
  }
  return result;
}
