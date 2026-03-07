__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtendSecondPath(BTL_TOPOLOGY_CONSTRUCTOR *this, char a2)
{
  struct DXGGLOBAL *Global; // rax
  int v5; // eax
  __int64 v6; // rbx
  int v7; // eax

  Global = DXGGLOBAL::GetGlobal();
  v5 = DXGGLOBAL::IterateAdaptersWithCallback(
         (__int64)Global,
         (__int64 (__fastcall *)(_QWORD *, __int64))BtlPreAcquireSharedAccess__BTL_TOPOLOGY_CONSTRUCTOR::_AddExternalPathsAdaptersCallback_0_1_,
         (__int64)this,
         4);
  v6 = v5;
  if ( v5 < 0
    || *((_WORD *)this + 4) < 2u
    && a2
    && (v7 = BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology(
               (CCD_TOPOLOGY **)this,
               1,
               (const struct _LUID *)((char *)this + 12),
               0xFFFFFFFF),
        v6 = v7,
        v7 < 0) )
  {
    WdLogSingleEntry3(2LL, v6, *(_QWORD *)this, *(_QWORD *)(*(_QWORD *)this + 64LL));
  }
  return (unsigned int)v6;
}
