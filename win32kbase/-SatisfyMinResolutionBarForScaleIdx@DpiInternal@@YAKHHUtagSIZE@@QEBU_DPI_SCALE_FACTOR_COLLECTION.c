__int64 __fastcall DpiInternal::SatisfyMinResolutionBarForScaleIdx(
        DpiInternal *this,
        int a2,
        __int64 a3,
        struct tagSIZE a4,
        const struct _DPI_SCALE_FACTOR_COLLECTION *a5)
{
  int v5; // r10d
  struct tagSIZE v6; // r11
  int v8; // ebx
  int v9; // ecx
  int v10; // r9d
  unsigned int v11; // esi
  unsigned int v12; // ebx
  _DWORD *v13; // r10
  __int64 v14; // r8
  __int64 v15; // r10
  __int64 v17; // [rsp+40h] [rbp+18h]
  __int64 v18; // [rsp+48h] [rbp+20h] BYREF

  v5 = a3;
  v6 = a4;
  if ( (int)a3 >= SHIDWORD(a3) )
  {
    v8 = HIDWORD(a3);
  }
  else
  {
    v8 = a3;
    v5 = HIDWORD(a3);
  }
  v9 = a2 + (_DWORD)this;
  if ( v9 >= 0 )
  {
    v10 = *(_DWORD *)(*(_QWORD *)&a4 + 8LL) - 1;
    if ( v9 <= v10 )
      v10 = v9;
    if ( v10 > 0 )
    {
      v11 = 100 * v5;
      v12 = 100 * v8;
      v13 = (_DWORD *)(*(_QWORD *)(*(_QWORD *)&v6 + 16LL) + 4LL * v10);
      do
      {
        LODWORD(v17) = v11 / *v13;
        HIDWORD(v17) = v12 / *v13;
        v18 = v17;
        if ( DpiInternal::operator>=(&v18, *(_DWORD **)&v6) )
          break;
        --v10;
        v13 = (_DWORD *)(v15 - 4);
      }
      while ( v14 - 1 > 0 );
    }
  }
  else
  {
    v10 = 0;
  }
  if ( !(_DWORD)a5
    && !a2
    && v10 > 0
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v6 + 24LL) + 4LL * v10) == *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v6 + 24LL)
                                                                                + 4LL * v10
                                                                                - 4) )
  {
    --v10;
  }
  return *(unsigned int *)(*(_QWORD *)(*(_QWORD *)&v6 + 16LL) + 4LL * v10);
}
