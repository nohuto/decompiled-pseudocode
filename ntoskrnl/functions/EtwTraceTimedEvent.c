__int64 __fastcall EtwTraceTimedEvent(__int16 a1, unsigned int a2, __int64 a3, int a4, int a5, __int64 a6)
{
  __int64 result; // rax
  unsigned __int64 v8; // rdi
  unsigned int v9; // ebx
  bool v10; // zf
  __int64 v11; // rcx
  __int64 v12; // rax
  _QWORD v13[3]; // [rsp+38h] [rbp-40h] BYREF
  int v14; // [rsp+50h] [rbp-28h]
  int i; // [rsp+54h] [rbp-24h]

  result = EtwpHostSiloState;
  v13[2] = a3;
  v8 = a2;
  v14 = a4;
  v9 = *(_DWORD *)(EtwpHostSiloState + 4248);
  v10 = !_BitScanForward((unsigned int *)&a3, v9);
  for ( i = 0; !v10; v10 = !_BitScanForward((unsigned int *)&a3, v9) )
  {
    v9 &= v9 - 1;
    result = 32LL * (unsigned int)a3;
    v11 = result + EtwpHostSiloState + 4284;
    if ( v11 )
    {
      result = v8 >> 29;
      if ( ((unsigned int)v8 & *(_DWORD *)(v11 + 4 * (v8 >> 29)) & 0x1FFFFFFF) != 0 )
      {
        v12 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * a3 + 4233) - 1LL;
        v13[1] = 8LL;
        v13[0] = a6 + 8 * v12;
        result = EtwpLogKernelEvent(
                   (unsigned int)v13,
                   EtwpHostSiloState,
                   *(unsigned __int8 *)(EtwpHostSiloState + 2 * a3 + 4232),
                   2,
                   a1,
                   a5);
      }
    }
  }
  return result;
}
