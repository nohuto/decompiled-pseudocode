/*
 * XREFs of ?GetD2DGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z @ 0x1801AFEDC
 * Callers:
 *     ?TransformGeometry@CTransformedGeometryHelper@@SAJPEBVCMILMatrix@@PEAUID2D1Geometry@@PEAPEAU3@@Z @ 0x1800D2EFC (-TransformGeometry@CTransformedGeometryHelper@@SAJPEBVCMILMatrix@@PEAUID2D1Geometry@@PEAPEAU3@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ReleaseInterface@UID2D1GeometrySink@@@@YAXAEAPEAUID2D1GeometrySink@@@Z @ 0x1800E73CC (--$ReleaseInterface@UID2D1GeometrySink@@@@YAXAEAPEAUID2D1GeometrySink@@@Z.c)
 *     ??$ReleaseInterface@UID2D1PathGeometry@@@@YAXAEAPEAUID2D1PathGeometry@@@Z @ 0x1800E73F0 (--$ReleaseInterface@UID2D1PathGeometry@@@@YAXAEAPEAUID2D1PathGeometry@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FlattenGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@@Z @ 0x1801AFC34 (-FlattenGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@@Z.c)
 */

__int64 __fastcall CTransformedGeometryHelper::GetD2DGeometry(
        CTransformedGeometryHelper *this,
        const struct ID2D1Geometry *a2,
        struct ID2D1Geometry **a3)
{
  _QWORD *v6; // rsi
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 *v10; // rbx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx

  v6 = (_QWORD *)((char *)this + 24);
  v7 = (*(__int64 (__fastcall **)(_QWORD, char *))(*g_DeviceManager + 80LL))(g_DeviceManager, (char *)this + 24);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xC8u, 0LL);
    v10 = (__int64 *)((char *)this + 32);
  }
  else
  {
    v10 = (__int64 *)((char *)this + 32);
    v11 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v6 + 136LL))(*v6, (char *)this + 32);
    v9 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xCAu, 0LL);
    }
    else
    {
      v13 = CTransformedGeometryHelper::FlattenGeometry(this, a2);
      v9 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xCCu, 0LL);
      }
      else
      {
        v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v10 + 72LL))(*v10);
        v9 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xCEu, 0LL);
        }
        else
        {
          *a3 = (struct ID2D1Geometry *)*v6;
          *v6 = 0LL;
        }
      }
    }
  }
  ReleaseInterface<ID2D1PathGeometry>((__int64 *)this + 3);
  ReleaseInterface<ID2D1GeometrySink>(v10);
  return v9;
}
