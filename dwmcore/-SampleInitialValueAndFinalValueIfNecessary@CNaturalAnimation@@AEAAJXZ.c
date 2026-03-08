/*
 * XREFs of ?SampleInitialValueAndFinalValueIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x18023A498
 * Callers:
 *     ?SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x18023AC9C (-SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ResolveTargetNoRef@CBaseExpression@@IEAAPEAVCResource@@XZ @ 0x1800C1854 (-ResolveTargetNoRef@CBaseExpression@@IEAAPEAVCResource@@XZ.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E0830 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z @ 0x180213E30 (-ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z.c)
 */

__int64 __fastcall CNaturalAnimation::SampleInitialValueAndFinalValueIfNecessary(CNaturalAnimation *this)
{
  struct CResource *v2; // rax
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // edi
  __int64 v6; // rdx
  char v7; // cl
  int v8; // eax
  char v9; // al
  int v10; // xmm0_4
  int v11; // xmm1_4
  char v12; // al
  int v13; // xmm0_4
  unsigned int v15; // [rsp+20h] [rbp-19h]
  __int64 v16; // [rsp+30h] [rbp-9h] BYREF
  int v17; // [rsp+38h] [rbp-1h]
  __int64 v18; // [rsp+70h] [rbp+37h] BYREF
  int v19; // [rsp+78h] [rbp+3Fh]
  char v20; // [rsp+7Ch] [rbp+43h]

  if ( (*((_BYTE *)this + 588) & 0x30) == 0x30 )
    return 0;
  memset_0(&v16, 0, 0x40uLL);
  v18 = 0LL;
  v19 = 18;
  v20 = 0;
  v2 = CBaseExpression::ResolveTargetNoRef(this);
  v3 = (*(__int64 (__fastcall **)(struct CResource *, _QWORD, __int64 *))(*(_QWORD *)v2 + 136LL))(
         v2,
         *((unsigned int *)this + 48),
         &v16);
  v5 = v3;
  if ( v3 < 0 )
  {
    v15 = 691;
    goto LABEL_7;
  }
  v6 = *((_QWORD *)this + 25);
  if ( !v6
    || !*(_BYTE *)(v6 + 4)
    || (v3 = CExpressionValue::ApplyMaskToValue((CExpressionValue *)&v16, (struct SubchannelMaskInfo *)v6),
        v5 = v3,
        v3 >= 0) )
  {
    if ( *((_DWORD *)this + 38) != 17 )
    {
      switch ( *((_DWORD *)this + 38) )
      {
        case 0x12:
          v12 = *((_BYTE *)this + 588);
          v13 = v16;
          if ( (v12 & 0x10) == 0 )
            *((_DWORD *)this + 84) = v16;
          if ( (v12 & 0x20) == 0 )
            *((_DWORD *)this + 90) = v13;
          break;
        case 0x23:
          v9 = *((_BYTE *)this + 588);
          v10 = HIDWORD(v16);
          v11 = v16;
          if ( (v9 & 0x10) == 0 )
          {
            *((_DWORD *)this + 84) = v16;
            *((_DWORD *)this + 85) = v10;
          }
          if ( (v9 & 0x20) == 0 )
          {
            *((_DWORD *)this + 90) = v11;
            *((_DWORD *)this + 91) = v10;
          }
          break;
        case 0x34:
          v7 = *((_BYTE *)this + 588);
          v8 = v17;
          if ( (v7 & 0x10) == 0 )
          {
            *((_QWORD *)this + 42) = v16;
            *((_DWORD *)this + 86) = v8;
          }
          if ( (v7 & 0x20) == 0 )
          {
            *((_QWORD *)this + 45) = v16;
            *((_DWORD *)this + 92) = v8;
          }
          break;
        default:
          v5 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(
            (unsigned int)(*((_DWORD *)this + 38) - 35),
            0LL,
            0,
            -2147024809,
            0x2EDu,
            0LL);
          goto LABEL_8;
      }
    }
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v18);
    return 0;
  }
  v15 = 702;
LABEL_7:
  MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, v15, 0LL);
LABEL_8:
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v18);
  return v5;
}
