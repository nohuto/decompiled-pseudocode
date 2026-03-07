__int64 __fastcall PiDqQueryGetNextIoctlInfo(__int64 a1, unsigned int a2, unsigned int a3, _DWORD *a4)
{
  __int64 result; // rax
  int v6; // ecx
  unsigned int v7; // ecx

  if ( !*(_QWORD *)(a1 + 184) && *(_QWORD *)(a1 + 192) == a1 + 192 && (*(_DWORD *)(a1 + 216) & 0x20) != 0 )
  {
    result = *(_QWORD *)(a1 + 24);
    if ( (*(_DWORD *)(result + 40) & 1) != 0 )
    {
      *a4 = 4653064;
      a4[1] = 16;
    }
    else
    {
      *(_QWORD *)a4 = 0LL;
    }
  }
  else
  {
    *a4 = 4653063;
    if ( (*(_DWORD *)(a1 + 216) & 0x20) != 0 )
    {
      v6 = *(_DWORD *)(a1 + 208);
      if ( *(_QWORD *)(a1 + 184) )
        ++v6;
    }
    else
    {
      v6 = 4;
    }
    if ( a3 )
      v7 = a3 * v6 + 16;
    else
      v7 = v6 << 10;
    a4[1] = v7;
    if ( v7 > 0x10000 )
    {
      a4[1] = 0x10000;
      v7 = 0x10000;
    }
    if ( v7 < a3 )
    {
      a4[1] = a3;
      v7 = a3;
    }
    result = (unsigned int)a4[1];
    if ( v7 < a2 )
      result = a2;
    a4[1] = result;
  }
  return result;
}
