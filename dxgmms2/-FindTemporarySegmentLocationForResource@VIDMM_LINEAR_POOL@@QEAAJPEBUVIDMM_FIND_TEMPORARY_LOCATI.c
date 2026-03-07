__int64 __fastcall VIDMM_LINEAR_POOL::FindTemporarySegmentLocationForResource(
        VIDMM_LINEAR_POOL *this,
        const struct VIDMM_FIND_TEMPORARY_LOCATION_ARGS *a2,
        __int64 a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5)
{
  char *v5; // r13
  unsigned __int64 v6; // r15
  char *v7; // r14
  unsigned __int64 v8; // rbx
  __int64 v9; // r12
  char v10; // bp
  char *v12; // rsi
  unsigned __int64 v13; // rcx
  char v14; // cl
  __int64 v15; // rcx
  _QWORD v17[5]; // [rsp+20h] [rbp-68h] BYREF
  char *v18; // [rsp+48h] [rbp-40h] BYREF
  char v19; // [rsp+58h] [rbp-30h]

  v17[2] = 0LL;
  v5 = (char *)this + 72;
  v6 = 0LL;
  v7 = (char *)*((_QWORD *)this + 9);
  v8 = 0LL;
  v9 = *((_QWORD *)a2 + 3) - 1LL;
  v19 = 2;
  v10 = a3;
  while ( v7 != v5 )
  {
    v12 = v7 - 40;
    v13 = *((_QWORD *)v7 - 5);
    if ( v13 != v8 )
    {
      v18 = v7;
      v17[1] = v13 - v8;
      v12 = (char *)v17;
      v13 = v8;
      v17[0] = v8;
      v7 = (char *)&v18;
    }
    v8 = v13 + *((_QWORD *)v12 + 1);
    if ( v8 > *((_QWORD *)a2 + 1) )
      break;
    if ( v13 < *(_QWORD *)a2
      || (v14 = v12[56], (unsigned __int8)(v14 - 2) > 1u)
      || v10 && v14 != 2
      || (v15 = *((_QWORD *)v12 + 2)) != 0
      && !(*((unsigned __int8 (__fastcall **)(__int64, const struct VIDMM_FIND_TEMPORARY_LOCATION_ARGS *, __int64))a2 + 4))(
            v15,
            a2,
            a3)
      || *(_QWORD *)v12 < *((_QWORD *)a2 + 6) && v8 > *((_QWORD *)a2 + 5) )
    {
      v6 = ~v9 & (v9 + v8);
    }
    else if ( v6 + *((_QWORD *)a2 + 2) <= v8 )
    {
      *a4 = v6;
      *a5 = v8;
      return 0LL;
    }
    v7 = *(char **)v7;
  }
  if ( !v10 )
    WdLogSingleEntry1(3LL, *((_QWORD *)a2 + 2));
  return 3221225473LL;
}
