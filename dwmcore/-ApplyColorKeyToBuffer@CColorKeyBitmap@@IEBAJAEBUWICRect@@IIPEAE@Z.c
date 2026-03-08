/*
 * XREFs of ?ApplyColorKeyToBuffer@CColorKeyBitmap@@IEBAJAEBUWICRect@@IIPEAE@Z @ 0x1802B317C
 * Callers:
 *     ?LockForRead@CColorKeyBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1802B40B0 (-LockForRead@CColorKeyBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUnique.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$ApplyRangeColorKey@TGpCC@@@@YAXAEBUWICRect@@IIPEAEAEATGpCC@@2PEBT1@@Z @ 0x1801323F0 (--$ApplyRangeColorKey@TGpCC@@@@YAXAEBUWICRect@@IIPEAEAEATGpCC@@2PEBT1@@Z.c)
 *     ??$ApplyRangeColorKey@TGpCCR@@@@YAXAEBUWICRect@@IIPEAEAEATGpCCR@@2PEBT1@@Z @ 0x1802B2CBC (--$ApplyRangeColorKey@TGpCCR@@@@YAXAEBUWICRect@@IIPEAEAEATGpCCR@@2PEBT1@@Z.c)
 *     ??$ApplyRangeColorKey@UGpCCRf16@@@@YAXAEBUWICRect@@IIPEAEAEAUGpCCRf16@@2PEBU1@@Z @ 0x1802B2D6C (--$ApplyRangeColorKey@UGpCCRf16@@@@YAXAEBUWICRect@@IIPEAEAEAUGpCCRf16@@2PEBU1@@Z.c)
 *     ??$ApplyRangeColorKey@U_D3DCOLORVALUE@@@@YAXAEBUWICRect@@IIPEAEAEAU_D3DCOLORVALUE@@2PEBU1@@Z @ 0x1802B2EDC (--$ApplyRangeColorKey@U_D3DCOLORVALUE@@@@YAXAEBUWICRect@@IIPEAEAEAU_D3DCOLORVALUE@@2PEBU1@@Z.c)
 */

__int64 __fastcall CColorKeyBitmap::ApplyColorKeyToBuffer(
        CColorKeyBitmap *this,
        const struct WICRect *a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int8 *a5)
{
  unsigned int v8; // r14d
  __int64 (__fastcall ***v9)(_QWORD, _BYTE *); // rcx
  _DWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  bool v13; // zf
  int *v14; // r10
  int *v15; // rdx
  int v17; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v18[16]; // [rsp+48h] [rbp-40h] BYREF

  v8 = 0;
  v9 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))(*(int *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 8LL)
                                                 + *((_QWORD *)this + 4)
                                                 + 8LL);
  v10 = (_DWORD *)(**v9)(v9, v18);
  switch ( *v10 )
  {
    case 2:
      ApplyRangeColorKey<_D3DCOLORVALUE>((__int64)a2, a3, v12, (__int64)a5, (float *)this + 25, (float *)this + 33);
      break;
    case 0xA:
      ApplyRangeColorKey<GpCCRf16>((__int64)a2, a3, v12, (__int64)a5, (__int64)this + 92, (__int64)this + 124);
      break;
    case 0x1C:
      v13 = *((_BYTE *)this + 80) == 0;
      v17 = -16777216;
      v15 = &v17;
      if ( !v13 )
        v15 = 0LL;
      ApplyRangeColorKey<GpCCR>(
        (__int64)a2,
        a3,
        v12,
        (__int64)a5,
        (unsigned __int8 *)this + 88,
        (unsigned __int8 *)this + 120,
        (__int64)v15);
      break;
    default:
      if ( (unsigned int)(*v10 - 87) < 2 )
      {
        v13 = *((_BYTE *)this + 80) == 0;
        v17 = -16777216;
        v14 = &v17;
        if ( !v13 )
          v14 = 0LL;
        ApplyRangeColorKey<GpCC>(
          (__int64)a2,
          a3,
          (__int64)this + 84,
          (__int64)a5,
          (unsigned __int8 *)this + 84,
          (unsigned __int8 *)this + 116,
          (__int64)v14);
      }
      else
      {
        v8 = -2003292288;
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003292288, 0x19Bu, 0LL);
      }
      break;
  }
  return v8;
}
