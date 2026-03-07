__int64 __fastcall HsaQueryAcpiDeviceMapping(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // r11
  __int64 *v5; // r9
  __int64 v6; // rdi
  unsigned __int8 *v7; // rax
  __int64 v8; // rdx
  int v9; // r10d
  int v10; // ecx
  __int64 result; // rax

  v3 = (__int64 *)(a1 + 224);
  *(_OWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 16) = 0LL;
  v5 = *(__int64 **)(a1 + 224);
  if ( v5 == (__int64 *)(a1 + 224) )
    return 3221226021LL;
  v6 = *(_QWORD *)(a2 + 8);
  while ( 1 )
  {
    v7 = (unsigned __int8 *)v5[2];
    v8 = v6 - (_QWORD)v7;
    do
    {
      v9 = v7[v8];
      v10 = *v7 - v9;
      if ( v10 )
        break;
      ++v7;
    }
    while ( v9 );
    if ( !v10 )
      break;
    v5 = (__int64 *)*v5;
    if ( v5 == v3 )
      return 3221226021LL;
  }
  *(_WORD *)(a3 + 8) = *(_WORD *)(a1 + 160);
  *(_WORD *)(a3 + 12) = *((_WORD *)v5 + 12);
  result = 0LL;
  *(_DWORD *)a3 = 1;
  return result;
}
