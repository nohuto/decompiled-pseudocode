__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ConstructFromFirmwareRecommendedVidPn(CCD_TOPOLOGY **this)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v3; // rcx
  struct CCD_BTL *v4; // rax
  int v5; // edi
  int v7; // [rsp+20h] [rbp-48h] BYREF
  __int128 v8; // [rsp+28h] [rbp-40h]
  __int64 v9; // [rsp+38h] [rbp-30h]
  __int16 v10; // [rsp+40h] [rbp-28h]
  __int128 v11; // [rsp+48h] [rbp-20h]

  Global = DXGGLOBAL::GetGlobal();
  if ( (int)DXGGLOBAL::IterateAdaptersWithCallback(
              (__int64)Global,
              (__int64 (__fastcall *)(_QWORD *, __int64))BtlPreAcquireSharedAccess__BTL_TOPOLOGY_CONSTRUCTOR::_AddFirmwareRecommendedPathsToTopology_0_1_,
              (__int64)this,
              4) < 0 )
    return 3221226021LL;
  v3 = *((_QWORD *)*this + 8);
  if ( !v3 || !*(_WORD *)(v3 + 20) )
    return 3221226021LL;
  v7 = 0;
  v8 = 0LL;
  v9 = 0LL;
  v11 = 0LL;
  v10 = 0;
  v4 = CCD_BTL::Global();
  v5 = (**(__int64 (__fastcall ***)(struct CCD_BTL *, int *))v4)(v4, &v7);
  if ( v5 >= 0 )
    v5 = CCD_TOPOLOGY::SetConnectivityHash(*this, (const struct CCD_SET_STRING_ID *)&v7);
  CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v7);
  return (unsigned int)v5;
}
