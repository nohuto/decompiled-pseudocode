__int64 __fastcall HalpGetProcessorBrandString(unsigned int a1, __int64 a2, _DWORD *a3)
{
  unsigned int v6; // ebx
  unsigned int v7; // ebp
  unsigned int v8; // esi
  __int64 v9; // r14
  _DWORD *v11; // rdi
  unsigned int v12[14]; // [rsp+30h] [rbp-38h] BYREF
  int v13; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0;
  v12[0] = 0;
  v13 = 0;
  HalpCpuID(0x80000000, v12, &v13, &v13, &v13);
  v7 = v12[0];
  v8 = -2147483646;
  if ( v12[0] < 0x80000002 )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    if ( v12[0] > 0x80000004 )
      v7 = -2147483644;
    v9 = 16 * (v7 + 0x7FFFFFFF);
    *a3 = v9 + 1;
    if ( a1 >= (int)v9 + 1 )
    {
      if ( v7 >= 0x80000002 )
      {
        v11 = (_DWORD *)(a2 + 8);
        do
        {
          HalpCpuID(v8, v11 - 2, v11 - 1, v11, v11 + 1);
          v11 += 4;
          ++v8;
        }
        while ( v8 <= v7 );
      }
      *(_BYTE *)(v9 + a2) = 0;
    }
    else
    {
      return (unsigned int)-1073741820;
    }
  }
  return v6;
}
