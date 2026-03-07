void __fastcall DpiInternal::CalculateMinMaxOverride(
        DpiInternal *this,
        __int64 a2,
        struct tagSIZE a3,
        int *a4,
        int *a5)
{
  int v6; // esi
  int v7; // r10d
  int *v8; // r11
  __int64 v9; // r9
  unsigned int v10; // ecx
  __int64 v11; // r8
  __int64 v12; // rdi
  unsigned int v13; // r10d
  unsigned int v14; // esi
  unsigned int v15; // ecx
  int v16; // r8d
  unsigned int v17; // r9d
  int *v18; // [rsp+38h] [rbp+10h]

  *(_DWORD *)a3.cx = 0;
  *a4 = 0;
  v6 = (int)this;
  v7 = a2;
  if ( (int)a2 < SHIDWORD(a2) )
    v7 = HIDWORD(a2);
  else
    LODWORD(a2) = HIDWORD(a2);
  v8 = a5;
  v9 = 0LL;
  v10 = a5[2];
  if ( v10 )
  {
    while ( *(_DWORD *)(*((_QWORD *)a5 + 2) + 4 * v9) != v6 )
    {
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= v10 )
        return;
    }
    *(_DWORD *)a3.cx = -(int)v9;
    v11 = (unsigned int)(v8[2] - 1);
    if ( (unsigned int)v11 > (unsigned int)v9 )
    {
      v12 = *((_QWORD *)v8 + 2);
      v13 = 100 * v7;
      v14 = 100 * a2;
      while ( 1 )
      {
        v15 = *(_DWORD *)(v12 + 4 * v11);
        LODWORD(v18) = v13 / v15;
        HIDWORD(v18) = v14 / v15;
        a5 = v18;
        if ( (unsigned __int8)DpiInternal::operator>=(&a5, v8) )
          break;
        v11 = (unsigned int)(v16 - 1);
        if ( (unsigned int)v11 <= v17 )
          return;
      }
      *a4 = v16 - v17;
    }
  }
}
