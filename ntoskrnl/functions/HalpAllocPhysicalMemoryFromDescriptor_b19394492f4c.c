unsigned __int64 __fastcall HalpAllocPhysicalMemoryFromDescriptor(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rbx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  bool v12; // zf
  __int64 v13; // rcx
  char v14; // r8
  char v15; // dl
  __int64 v16; // rcx
  int v17; // ecx
  __int64 v18; // rcx

  result = 0LL;
  v6 = *(_QWORD *)(a1 + 32);
  v8 = (unsigned __int64)a5 >> 12;
  v9 = v6 + *(_QWORD *)(a1 + 40);
  if ( v8 << 12 == a5 )
  {
    v12 = !_BitScanReverse64((unsigned __int64 *)&v13, v8);
    v14 = -1;
    v15 = -1;
    if ( !v12 )
      v15 = v13;
    v12 = !_BitScanForward64((unsigned __int64 *)&v16, v8);
    if ( !v12 )
      v14 = v16;
    if ( v15 == v14 )
    {
      v17 = *(_DWORD *)(a1 + 24);
      if ( v17 == 2 || v17 == 5 )
      {
        if ( v6 )
        {
          if ( v6 < a3 )
            v6 = a3;
          if ( v8 )
          {
            v18 = ~(v8 - 1);
            if ( (v18 & (v6 + v8 - 1)) < v6 )
              return result;
            v6 = v18 & (v6 + v8 - 1);
          }
          if ( v9 > a2 )
            v9 = a2;
          if ( v6 < v9 && a4 <= v9 - v6 )
            return v6 << 12;
        }
      }
    }
  }
  return result;
}
