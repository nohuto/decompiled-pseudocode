__int64 __fastcall CCD_BTL::RetrieveActiveTopology(
        __int64 (__fastcall ***this)(CCD_BTL *, int *),
        char a2,
        bool a3,
        struct CCD_TOPOLOGY *a4,
        unsigned __int16 *a5)
{
  __int64 result; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned __int16 v12; // cx
  __int64 (__fastcall **v13)(CCD_BTL *, int *); // rax
  __int64 (__fastcall *v14)(CCD_BTL *, int *); // rax
  int v15; // eax
  int v16; // eax
  struct CCD_TOPOLOGY *v17; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int16 v18; // [rsp+38h] [rbp-48h]
  int v19; // [rsp+40h] [rbp-40h] BYREF
  __int128 v20; // [rsp+48h] [rbp-38h]
  __int64 v21; // [rsp+58h] [rbp-28h]
  __int16 v22; // [rsp+60h] [rbp-20h]
  __int128 v23; // [rsp+68h] [rbp-18h]

  CCD_TOPOLOGY::Clear(a4);
  v17 = a4;
  v18 = 0;
  result = CCD_BTL_ACTIVE_PATHS_COLLECTOR::CollectActivePaths((CCD_BTL_ACTIVE_PATHS_COLLECTOR *)&v17, a3);
  LODWORD(v10) = result;
  if ( (int)result >= 0 )
  {
    v11 = *((_QWORD *)a4 + 8);
    if ( v11 )
      v12 = *(_WORD *)(v11 + 20);
    else
      v12 = 0;
    if ( v18 > v12 )
      LODWORD(v10) = -1073741789;
    if ( a5 )
      *a5 = v18;
    if ( (int)v10 >= 0 && !a2 )
    {
      v13 = *this;
      v19 = 0;
      v21 = 0LL;
      v20 = 0LL;
      v14 = *v13;
      v22 = 0;
      v23 = 0LL;
      v15 = v14((CCD_BTL *)this, &v19);
      v10 = v15;
      if ( v15 < 0
        || (v16 = CCD_TOPOLOGY::SetConnectivityHash(a4, (const struct CCD_SET_STRING_ID *)&v19), v10 = v16, v16 < 0) )
      {
        WdLogSingleEntry4(2LL, v10, &v19, a4, *((_QWORD *)a4 + 8));
      }
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v19);
    }
    return (unsigned int)v10;
  }
  return result;
}
