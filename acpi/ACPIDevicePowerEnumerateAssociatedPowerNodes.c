__int64 __fastcall ACPIDevicePowerEnumerateAssociatedPowerNodes(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, __int64, __int64, __int64),
        __int64 a3)
{
  __int64 v3; // r15
  __int64 v4; // r9
  int v8; // ecx
  int v9; // r10d
  int v10; // edx
  int v11; // ecx
  int v12; // ebx
  int v13; // ebx
  signed int v14; // ebp
  _QWORD *v15; // r14
  _QWORD *i; // rsi
  __int64 result; // rax
  __int64 v18; // rax
  __int64 v19; // rcx

  v3 = *(_QWORD *)(a1 + 40);
  v4 = 0LL;
  v8 = *(_DWORD *)(v3 + 384);
  v9 = ((*(_DWORD *)(v3 + 8) & 0x800) != 0LL) + 3;
  if ( !v8 )
    v8 = *(_DWORD *)(a1 + 108);
  v10 = 0;
  if ( (unsigned int)(v8 - 1) > 3 )
  {
    v13 = (1 << (((*(_DWORD *)(v3 + 8) & 0x800) != 0LL) + 4)) - 1;
  }
  else
  {
    if ( v8 <= v9 )
      v10 = 1 << v8;
    v11 = *(_DWORD *)(a1 + 104);
    if ( v11 >= 1 && v11 <= v9 )
      v10 |= 1 << v11;
    v12 = v10 | 2;
    if ( (*(_DWORD *)(a1 + 56) & 0x30) == 0 )
      v12 = v10;
    v13 = v12 | 1;
  }
  v14 = 0;
  v15 = (_QWORD *)(v3 + 408);
  do
  {
    if ( _bittest(&v13, v14) )
    {
      for ( i = (_QWORD *)*v15; i; i = (_QWORD *)*i )
      {
        result = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))a2)(i[1], (unsigned int)v14, a3);
        v4 = (unsigned int)result;
        if ( (int)result < 0 )
          return result;
      }
    }
    ++v14;
    ++v15;
  }
  while ( v14 < 5 );
  v18 = *(_QWORD *)(v3 + 448);
  if ( !v18 )
    return (unsigned int)v4;
  v19 = *(_QWORD *)(v18 + 8);
  if ( (*(_DWORD *)(v19 + 16) & 0x2000LL) == 0 )
    return (unsigned int)v4;
  result = a2(v19, 5LL, a3, v4);
  LODWORD(v4) = result;
  if ( (int)result >= 0 )
    return (unsigned int)v4;
  return result;
}
