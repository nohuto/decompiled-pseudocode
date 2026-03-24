/*
 * XREFs of ?GetWidenedBounds@CShape@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@MPEAUID2D1StrokeStyle1@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18025DA54
 * Callers:
 *     ?GetWidenedBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@MPEAUID2D1StrokeStyle1@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801ED68C (-GetWidenedBounds@CShapePtr@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 * Callees:
 *     ?HasValidValues@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800171A8 (-HasValidValues@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C915C (-InternalRelease@-$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsWellOrdered@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800C97B4 (-IsWellOrdered@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShape::GetWidenedBounds(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v8)(__int64 *, _QWORD, __int64 *); // rbx
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  float *v12; // rcx
  unsigned int v14; // [rsp+20h] [rbp-60h]
  __int64 v15; // [rsp+40h] [rbp-40h] BYREF
  _OWORD v16[2]; // [rsp+48h] [rbp-38h] BYREF

  v4 = *a1;
  v15 = 0LL;
  v8 = *(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v4 + 24);
  Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(&v15);
  v9 = v8(a1, 0LL, &v15);
  v11 = v9;
  if ( v9 < 0 )
  {
    v14 = 909;
    goto LABEL_9;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, _OWORD *, __int64, _QWORD, _DWORD, _OWORD *))(*(_QWORD *)v15 + 40LL))(
         v15,
         v16,
         a4,
         0LL,
         LODWORD(FLOAT_0_25),
         v16);
  v11 = v9;
  if ( v9 < 0 )
  {
    v14 = 918;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, v14, 0LL);
    goto LABEL_10;
  }
  v16[1] = v16[0];
  *(_OWORD *)a2 = v16[0];
  if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::HasValidValues() )
  {
    if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsWellOrdered(v12) )
    {
      *(_DWORD *)(a2 + 12) = 0;
      *(_DWORD *)(a2 + 8) = 0;
      *(_DWORD *)(a2 + 4) = 0;
      *(_DWORD *)a2 = 0;
    }
  }
  else
  {
    v11 = -2003304438;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v12, 0LL, 0, -2003304438, 0x39Cu, 0LL);
  }
LABEL_10:
  Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(&v15);
  return v11;
}
