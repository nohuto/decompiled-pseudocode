__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExternal(BTL_TOPOLOGY_CONSTRUCTOR *this)
{
  struct DXGGLOBAL *Global; // rax
  int v3; // eax
  __int64 v4; // rbx
  int v5; // eax

  *((_WORD *)this + 5) = 0;
  Global = DXGGLOBAL::GetGlobal();
  v3 = DXGGLOBAL::IterateAdaptersWithCallback(
         (__int64)Global,
         (__int64 (__fastcall *)(_QWORD *, __int64))BtlPreAcquireSharedAccess__BTL_TOPOLOGY_CONSTRUCTOR::_AddExternalPathsAdaptersCallback_0_1_,
         (__int64)this,
         4);
  v4 = v3;
  if ( v3 < 0
    || !*((_WORD *)this + 4)
    && (v5 = BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology(
               (CCD_TOPOLOGY **)this,
               1,
               (const struct _LUID *)((char *)this + 12),
               0xFFFFFFFF),
        v4 = v5,
        v5 < 0) )
  {
    WdLogSingleEntry3(2LL, v4, *(_QWORD *)this, *(_QWORD *)(*(_QWORD *)this + 64LL));
  }
  return (unsigned int)v4;
}
