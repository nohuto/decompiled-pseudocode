/*
 * XREFs of ?CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z @ 0x1800D303C
 * Callers:
 *     ?EnsureD2DGeometry@CRoundedRectangleShape@@AEBAJXZ @ 0x1800D2F98 (-EnsureD2DGeometry@CRoundedRectangleShape@@AEBAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C8D4 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z @ 0x180082A70 (-AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z.c)
 *     ?GetBaseRect@CRoundedRectangleGeometryData@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800836C0 (-GetBaseRect@CRoundedRectangleGeometryData@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ?HasAnyRoundedCorners@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x180083710 (-HasAnyRoundedCorners@CRoundedRectangleGeometryData@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsEllipse@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x1800D3228 (-IsEllipse@CRoundedRectangleGeometryData@@QEBA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E0830 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRoundedRectangleShape::CreateNonIntersectedD2DGeometry(
        CRoundedRectangleShape *this,
        struct ID2D1Geometry **a2)
{
  __int64 v2; // r11
  unsigned int v5; // ebx
  CRoundedRectangleGeometryData *v6; // rcx
  __int64 v7; // r10
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, struct ID2D1GeometrySink **); // rdi
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v17; // r11
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rcx
  struct ID2D1GeometrySink *v23; // rcx
  struct ID2D1GeometrySink *v24; // [rsp+30h] [rbp-40h] BYREF
  __int128 v25; // [rsp+38h] [rbp-38h] BYREF
  __int128 v26; // [rsp+48h] [rbp-28h] BYREF
  _BYTE v27[16]; // [rsp+58h] [rbp-18h] BYREF

  v2 = *((_QWORD *)this + 2);
  v5 = 0;
  if ( *(float *)(v2 + 64) > 0.0 )
    goto LABEL_4;
  if ( !CRoundedRectangleGeometryData::HasAnyRoundedCorners((CRoundedRectangleGeometryData *)(v2 + 16)) )
  {
    v24 = 0LL;
    v26 = *(_OWORD *)CRoundedRectangleGeometryData::GetBaseRect((__int64)v6, (__int64)v27);
    v20 = *g_DeviceManager;
    v25 = v26;
    v21 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, struct ID2D1GeometrySink **))(v20 + 40))(
            g_DeviceManager,
            &v26,
            &v24);
    v5 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x175u, 0LL);
      goto LABEL_18;
    }
    *a2 = v24;
LABEL_4:
    if ( !*a2 )
    {
      *(_QWORD *)&v25 = 0LL;
      Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v25);
      v8 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(*g_DeviceManager + 80LL))(g_DeviceManager, &v25);
      v5 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x18Du, 0LL);
      }
      else
      {
        v10 = v25;
        v24 = 0LL;
        v11 = *(__int64 (__fastcall **)(__int64, struct ID2D1GeometrySink **))(*(_QWORD *)v25 + 136LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
        v12 = v11(v10, &v24);
        v5 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x190u, 0LL);
        }
        else
        {
          CRoundedRectangleShape::AddNonIntersectedD2DGeometry(this, v24);
          v14 = (*(__int64 (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v24 + 72LL))(v24);
          v5 = v14;
          if ( v14 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x192u, 0LL);
          }
          else
          {
            *a2 = (struct ID2D1Geometry *)v25;
            *(_QWORD *)&v25 = 0LL;
          }
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
      }
      Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v25);
    }
    return v5;
  }
  if ( !CRoundedRectangleGeometryData::IsEllipse(v6) )
    goto LABEL_4;
  CRoundedRectangleGeometryData::GetBaseRect(v7, (__int64)&v25);
  *((float *)&v26 + 1) = (float)(*((float *)&v25 + 1) + *((float *)&v25 + 3)) * 0.5;
  *(float *)&v26 = (float)(*(float *)&v25 + *((float *)&v25 + 2)) * 0.5;
  *((_QWORD *)&v26 + 1) = *(_QWORD *)(v17 + 32);
  v24 = 0LL;
  v18 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, struct ID2D1GeometrySink **))(*g_DeviceManager + 56LL))(
          g_DeviceManager,
          &v26,
          &v24);
  v5 = v18;
  if ( v18 >= 0 )
  {
    *a2 = v24;
    goto LABEL_4;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x184u, 0LL);
LABEL_18:
  v23 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v23 + 16LL))(v23);
  }
  return v5;
}
