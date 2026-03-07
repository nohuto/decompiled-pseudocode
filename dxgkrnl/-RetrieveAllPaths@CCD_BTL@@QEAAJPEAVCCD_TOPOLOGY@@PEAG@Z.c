__int64 __fastcall CCD_BTL::RetrieveAllPaths(
        __int64 (__fastcall ***this)(CCD_BTL *, int *),
        struct CCD_TOPOLOGY *a2,
        unsigned __int16 *a3)
{
  struct DXGGLOBAL *Global; // rax
  int active; // ebx
  __int64 v8; // rax
  unsigned __int16 v9; // cx
  __int64 (__fastcall **v10)(CCD_BTL *, int *); // rax
  __int64 (__fastcall *v11)(CCD_BTL *, int *); // rax
  int v12; // eax
  int v13; // eax
  CCD_TOPOLOGY *v15; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int16 v16; // [rsp+38h] [rbp-48h]
  int v17; // [rsp+40h] [rbp-40h] BYREF
  __int128 v18; // [rsp+48h] [rbp-38h]
  __int64 v19; // [rsp+58h] [rbp-28h]
  __int16 v20; // [rsp+60h] [rbp-20h]
  __int128 v21; // [rsp+68h] [rbp-18h]
  CCD_TOPOLOGY *v22; // [rsp+A8h] [rbp+28h] BYREF

  CCD_TOPOLOGY::Clear(a2);
  v15 = a2;
  v16 = 0;
  CCD_TOPOLOGY::SetUsedReservedFields((__int64)a2, &v22, 96);
  Global = DXGGLOBAL::GetGlobal();
  active = DXGGLOBAL::IterateAdaptersWithCallback(
             (__int64)Global,
             (__int64 (__fastcall *)(_QWORD *, __int64))BtlPreAcquireSharedAccess__CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_0_1_,
             (__int64)&v15,
             4);
  if ( active < 0 )
  {
    AUTO_CCD_TOPOLOGY_CLEAR_RESERVED::~AUTO_CCD_TOPOLOGY_CLEAR_RESERVED((AUTO_CCD_TOPOLOGY_CLEAR_RESERVED *)&v22);
  }
  else
  {
    CCD_BTL_ACTIVE_PATHS_COLLECTOR::_SortPathsModalityByPriorityOrder((CCD_BTL_ACTIVE_PATHS_COLLECTOR *)&v15);
    active = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_FillActiveDWMCloneGroupInfo(&v15, 1);
    if ( v22 )
      CCD_TOPOLOGY::ClearReservedFields(v22);
    if ( active >= 0 )
    {
      v8 = *((_QWORD *)a2 + 8);
      if ( v8 )
        v9 = *(_WORD *)(v8 + 20);
      else
        v9 = 0;
      if ( v16 > v9 )
        active = -1073741789;
      if ( a3 )
        *a3 = v16;
      if ( active >= 0 )
      {
        v10 = *this;
        v17 = 0;
        v19 = 0LL;
        v18 = 0LL;
        v11 = *v10;
        v20 = 0;
        v21 = 0LL;
        v12 = v11((CCD_BTL *)this, &v17);
        active = v12;
        if ( v12 < 0 )
        {
          WdLogSingleEntry4(2LL, v12, &v17, a2, *((_QWORD *)a2 + 8));
        }
        else
        {
          v13 = CCD_TOPOLOGY::SetConnectivityHash(a2, (const struct CCD_SET_STRING_ID *)&v17);
          active = v13;
          if ( v13 < 0 )
            WdLogSingleEntry4(2LL, v13, &v17, a2, *((_QWORD *)a2 + 8));
        }
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v17);
      }
    }
  }
  return (unsigned int)active;
}
