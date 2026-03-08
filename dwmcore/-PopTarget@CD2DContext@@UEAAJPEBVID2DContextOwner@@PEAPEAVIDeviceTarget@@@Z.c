/*
 * XREFs of ?PopTarget@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z @ 0x180284470
 * Callers:
 *     gsl::final_action__lambda_d4d69d0dd690f9a056e445a8894bc90a___::_final_action__lambda_d4d69d0dd690f9a056e445a8894bc90a___ @ 0x180275AE0 (gsl--final_action__lambda_d4d69d0dd690f9a056e445a8894bc90a___--_final_action__lambda_d4d69d0dd69.c)
 * Callees:
 *     ?FlushD2DInternal@CD2DContext@@AEAAJXZ @ 0x18001A18C (-FlushD2DInternal@CD2DContext@@AEAAJXZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x18008DE30 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?EndDraw@CD2DContext@@AEAAJXZ @ 0x1800906C4 (-EndDraw@CD2DContext@@AEAAJXZ.c)
 *     ?ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z @ 0x180091E58 (-ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z.c)
 *     ?D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z @ 0x180091EBC (-D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_GCD2DTarget@@QEAAPEAXI@Z @ 0x1800E5B40 (--_GCD2DTarget@@QEAAPEAXI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CacheTarget@CD2DTarget@@QEBA_NXZ @ 0x180299850 (-CacheTarget@CD2DTarget@@QEBA_NXZ.c)
 */

__int64 __fastcall CD2DContext::PopTarget(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        struct IDeviceTarget **a3)
{
  int v5; // eax
  CD2DTarget *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rbp
  struct IDeviceTarget *v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // esi
  int v15; // eax
  __int64 v16; // rcx

  if ( a3 )
    *a3 = 0LL;
  CD2DContext::FlushDrawList(this);
  v5 = *((_DWORD *)this + 88);
  v6 = 0LL;
  v7 = (unsigned int)(v5 - 1);
  if ( v5 )
    v6 = *(CD2DTarget **)(*((_QWORD *)this + 41) + 8 * v7);
  *((_DWORD *)this + 88) = v7;
  if ( v5 == 1 )
  {
    v15 = CD2DContext::EndDraw(this);
    v14 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x2EEu, 0LL);
    if ( CD2DTarget::CacheTarget(v6) )
    {
      *((_QWORD *)this + 53) = v6;
      return CD3DDevice::TranslateDXGIorD3DErrorInContext(
               ((unsigned __int64)this - 16) & -(__int64)(this != 0LL),
               v14,
               0);
    }
    CD2DContext::D2DSetTargetInternal(this, 0LL);
  }
  else
  {
    v8 = *(_QWORD *)(*((_QWORD *)this + 41) + 8LL * (unsigned int)(v5 - 2));
    if ( a3 )
    {
      v9 = *(struct IDeviceTarget **)(v8 + 24);
      *a3 = v9;
      v10 = (__int64)v9 + *(int *)(*((_QWORD *)v9 + 1) + 4LL) + 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    }
    if ( *((_BYTE *)this + 437) )
    {
      CD2DTarget::ApplyState((CD2DTarget *)v8, this);
      if ( *((_BYTE *)v6 + 75) )
      {
        if ( *((_BYTE *)v6 + 74) )
        {
          v11 = CD2DContext::FlushD2DInternal(this);
          if ( v11 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x2DDu, 0LL);
        }
        else
        {
          *(_BYTE *)(v8 + 75) = 1;
        }
      }
    }
    v13 = (__int64)this + 1072;
    if ( !this )
      v13 = 1088LL;
    v14 = *(_DWORD *)v13;
    if ( *(int *)v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(1088LL, 0LL, 0, v14, 0x2E6u, 0LL);
  }
  if ( v6 )
    CD2DTarget::`scalar deleting destructor'(v6);
  return CD3DDevice::TranslateDXGIorD3DErrorInContext(((unsigned __int64)this - 16) & -(__int64)(this != 0LL), v14, 0);
}
