__int64 __fastcall EtwpCCSwapFlush(_DWORD *a1, int a2)
{
  int v3; // eax
  __int64 result; // rax
  unsigned int v5; // ebx
  unsigned int v6; // edi
  __int64 v7; // r8
  unsigned int v9; // ecx
  __int64 v10; // r8
  __int64 v11; // rcx
  _BYTE v12[8]; // [rsp+30h] [rbp-28h] BYREF
  _DWORD *v13; // [rsp+38h] [rbp-20h] BYREF
  int v14; // [rsp+40h] [rbp-18h]
  int v15; // [rsp+44h] [rbp-14h]

  v12[0] = 0;
  v13 = a1 + 4;
  v3 = *a1 - 16;
  v15 = 0;
  v14 = v3;
  result = EtwpHostSiloState;
  v5 = *(_DWORD *)(EtwpHostSiloState + 4248);
  while ( _BitScanForward(&v9, v5) )
  {
    v5 &= v5 - 1;
    v10 = v9;
    result = 32LL * v9;
    v11 = result + EtwpHostSiloState + 4284;
    if ( v11 )
    {
      result = *(unsigned int *)(v11 + 4);
      if ( (result & 4) != 0 && (result & 0x100) != 0 )
      {
        v6 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * v10 + 4232);
        result = EtwpOpenLogger(v6, EtwpHostSiloState, 0, v12);
        if ( result )
        {
          if ( *(_DWORD *)(result + 200) == a2 )
            EtwpLogKernelEvent((__int64)&v13, EtwpHostSiloState, v6, 1u, 0x525u, 0x202u);
          LOBYTE(v7) = v12[0];
          result = EtwpCloseLogger(v6, EtwpHostSiloState, v7);
        }
      }
    }
  }
  return result;
}
