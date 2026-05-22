/*
 * XREFs of ?Invoke@HapticsEngine@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x18016D000
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?ShiftTo@HapticsFilter@SpatialInteractions@Internal@Windows@@QEAAJ_JPEANPEA_J@Z @ 0x18016F30C (-ShiftTo@HapticsFilter@SpatialInteractions@Internal@Windows@@QEAAJ_JPEANPEA_J@Z.c)
 *     ?UpdateFeedback@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAXN_J@Z @ 0x18016FF40 (-UpdateFeedback@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAXN_J@Z.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::HapticsEngine::Invoke(
        Windows::Internal::SpatialInteractions::HapticsEngine *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rsi
  int v3; // eax
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // r8
  Windows::Internal::SpatialInteractions::HapticsEngine *v7; // rcx
  Windows::Internal::SpatialInteractions::HapticsFilter *v8; // rcx
  _QWORD *v9; // r14
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  double v14; // [rsp+58h] [rbp+10h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  if ( !*((_BYTE *)this + 223) )
    goto LABEL_10;
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 14) + 48LL))(*((_QWORD *)this + 14), &v13);
  v4 = v3;
  if ( v3 >= 0 )
  {
    if ( *((_BYTE *)this + 221) )
    {
      v6 = v13;
      v7 = (Windows::Internal::SpatialInteractions::HapticsEngine *)((char *)this - 8);
    }
    else
    {
      v8 = (Windows::Internal::SpatialInteractions::HapticsFilter *)*((_QWORD *)this + 13);
      v9 = (_QWORD *)((char *)this + 184);
      v10 = *((_QWORD *)this + 23);
      v14 = 0.0;
      v3 = Windows::Internal::SpatialInteractions::HapticsFilter::ShiftTo(v8, v10, &v14, (__int64 *)this + 23);
      v4 = v3;
      if ( v3 < 0 )
      {
        v5 = 643LL;
        goto LABEL_16;
      }
      v7 = (Windows::Internal::SpatialInteractions::HapticsEngine *)((char *)this - 8);
      v6 = v13;
      if ( *v9 )
      {
        Windows::Internal::SpatialInteractions::HapticsEngine::UpdateFeedback(v7, v14, v13);
        v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 14) + 64LL))(*((_QWORD *)this + 14), *v9);
        v4 = v3;
        if ( v3 < 0 )
        {
          v5 = 653LL;
          goto LABEL_16;
        }
LABEL_10:
        v4 = 0;
        goto LABEL_11;
      }
    }
    Windows::Internal::SpatialInteractions::HapticsEngine::UpdateFeedback(v7, 0.0, v6);
    goto LABEL_10;
  }
  v5 = 631LL;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\HapticsEngine.h",
    (const char *)(unsigned int)v3);
LABEL_11:
  if ( v1 )
    LeaveCriticalSection(v1);
  return v4;
}
