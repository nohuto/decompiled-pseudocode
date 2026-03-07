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
  unsigned int v12; // esi
  unsigned int v13; // ebx
  _DWORD *v14; // r10
  __int64 v15; // r8
  __int64 v16; // r10
  __int64 v17; // [rsp+40h] [rbp+18h]
  __int64 v18; // [rsp+48h] [rbp+20h] BYREF

  v5 = a3;
  v6 = a4;
  if ( (int)a3 < SHIDWORD(a3) )
  {
    v8 = a3;
    v5 = HIDWORD(a3);
  }
  else
  {
    v8 = HIDWORD(a3);
  }
  v9 = a2 + (_DWORD)this;
  if ( v9 < 0 )
  {
    v10 = 0;
  }
  else
  {
    v10 = *(_DWORD *)(*(_QWORD *)&a4 + 8LL) - 1;
    if ( v9 <= v10 )
      v10 = v9;
    if ( v10 > 0 )
    {
      v12 = 100 * v5;
      v13 = 100 * v8;
      v14 = (_DWORD *)(*(_QWORD *)(*(_QWORD *)&v6 + 16LL) + 4LL * v10);
      do
      {
        LODWORD(v17) = v12 / *v14;
        HIDWORD(v17) = v13 / *v14;
        v18 = v17;
        if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD))DpiInternal::operator>=)(&v18, v6) )
          break;
        --v10;
        v14 = (_DWORD *)(v16 - 4);
      }
      while ( v15 - 1 > 0 );
    }
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
