__int64 __fastcall HalpVerifyGenericError(_QWORD *a1, _DWORD *a2)
{
  unsigned int v2; // r9d
  unsigned int v3; // ebx
  __int64 v5; // rax
  unsigned int v6; // r8d
  unsigned int v7; // ecx
  unsigned int v8; // edi
  __int64 v9; // r11
  __int64 v10; // rcx
  int v11; // r10d
  int v12; // ecx
  unsigned int v13; // eax

  v2 = 20;
  v3 = a2[3] + 20;
  if ( v3 < 0x14 )
    return (unsigned int)-1073741811;
  v5 = (unsigned int)a2[1];
  v6 = 0;
  if ( (_DWORD)v5 )
  {
    if ( a2[2] && v3 > (unsigned int)v5 )
      return (unsigned int)-1073741811;
  }
  v7 = a2[2];
  v8 = v7 + v5;
  if ( v7 + (unsigned int)v5 < (unsigned int)v5 )
    return (unsigned int)-1073741811;
  if ( v7 < 0x20 )
    return (unsigned int)-1073741811;
  v9 = a1[5];
  v10 = (unsigned int)a2[1];
  if ( *(_QWORD *)((char *)a2 + v5 + 8) != v9
    || (v9 & 0x800000000000000LL) != 0 && *(_QWORD *)((char *)a2 + v10 + 24) != a1[7] )
  {
    return (unsigned int)-1073741811;
  }
  if ( (v9 & 0x400000000000000LL) != 0 && *(_QWORD *)((char *)a2 + v10 + 16) != a1[6] )
    return (unsigned int)-1073741811;
  v11 = (*a2 >> 4) & 0x3FF;
  if ( v11 )
  {
    while ( v2 + 72 >= v2 )
    {
      if ( v2 + 72 > v3 )
        break;
      v12 = *(_DWORD *)((char *)a2 + v2 + 24) + 72;
      if ( *(_DWORD *)((char *)a2 + v2 + 24) >= 0xFFFFFFB8 )
        break;
      v13 = v2 + v12;
      if ( v2 + v12 < v2 )
        break;
      v2 += v12;
      if ( v13 > v8 )
        break;
      if ( !--v11 )
        return v6;
    }
    return (unsigned int)-1073741811;
  }
  return v6;
}
