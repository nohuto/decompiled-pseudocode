/*
 * XREFs of ?EnsureD2DGeometry@CRegionShape@@AEBAJXZ @ 0x180014534
 * Callers:
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180014490 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ??$AppendAllRectangles@V?$DynArrayIA@UtagRECT@@$0BA@$0A@@@@CRegion@@QEBAXPEAV?$DynArrayIA@UtagRECT@@$0BA@$0A@@@@Z @ 0x180014678 (--$AppendAllRectangles@V-$DynArrayIA@UtagRECT@@$0BA@$0A@@@@CRegion@@QEBAXPEAV-$DynArrayIA@UtagRE.c)
 *     ??0?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@QEAA@XZ @ 0x18001472C (--0-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniquen.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180017820 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002D180 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180065C00 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRegionShape::EnsureD2DGeometry(CRegionShape *this)
{
  int v1; // edi
  void (__fastcall ***v4)(_QWORD, GUID *, signed __int64 *); // rbx
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  __int64 v9; // rcx
  signed __int64 v10; // [rsp+30h] [rbp-D0h] BYREF
  void (__fastcall ***v11)(_QWORD, GUID *, signed __int64 *); // [rsp+38h] [rbp-C8h] BYREF
  void (__fastcall ***v12)(_QWORD, GUID *, signed __int64 *); // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v13[3]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v14; // [rsp+68h] [rbp-98h]

  v1 = 0;
  if ( !*((_QWORD *)this + 11) )
  {
    v10 = 0LL;
    DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,Mil3DRectL,RectUniqueness::_CMilRectL_>,16,0>::DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,Mil3DRectL,RectUniqueness::_CMilRectL_>,16,0>(v13);
    v14 = 0;
    CRegion::AppendAllRectangles<DynArrayIA<tagRECT,16,0>>((char *)this + 16, v13);
    v4 = 0LL;
    v11 = 0LL;
    v5 = *(_QWORD *)*(&g_DeviceManager + 1);
    v12 = 0LL;
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, void (__fastcall ****)(_QWORD, GUID *, signed __int64 *)))(v5 + 24))(
           *(&g_DeviceManager + 1),
           v13[0],
           v14,
           &v11);
    v1 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x84u, 0LL);
    }
    else
    {
      v4 = v11;
      v11 = 0LL;
      v12 = v4;
    }
    ReleaseInterface<ID2D1Geometry>(&v11);
    if ( v1 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v1, 0x126u, 0LL);
    }
    else
    {
      (**v4)(v4, &GUID_e7fda62a_6a94_4f17_9f7c_26a950c74010, &v10);
      v9 = -(__int64)(_InterlockedCompareExchange64((volatile signed __int64 *)this + 11, v10, 0LL) != 0);
      v10 &= v9;
    }
    DynArrayImpl<0>::~DynArrayImpl<0>(v13);
    wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>(&v10);
    wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>(&v12);
  }
  return (unsigned int)v1;
}
