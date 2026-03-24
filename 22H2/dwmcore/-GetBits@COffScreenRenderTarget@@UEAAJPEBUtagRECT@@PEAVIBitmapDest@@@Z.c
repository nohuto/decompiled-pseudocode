/*
 * XREFs of ?GetBits@COffScreenRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x1801856F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18003C638 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NA.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COffScreenRenderTarget::GetBits(
        COffScreenRenderTarget *this,
        const struct tagRECT *a2,
        struct IBitmapDest *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // r9
  __int64 v6; // r10
  int v7; // eax
  __int64 v8; // rcx
  struct tagRECT v10; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v11[4]; // [rsp+40h] [rbp-28h] BYREF

  v3 = *((_DWORD *)this + 20);
  v11[0] = 0;
  v11[1] = 0;
  v11[2] = v3;
  v11[3] = *((_DWORD *)this + 21);
  if ( **((_QWORD **)this + 222) )
  {
    v10 = *a2;
    v4 = 0;
    if ( TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IntersectUnsafe(v11, &v10) )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, __int64, _QWORD, _DWORD))(***(_QWORD ***)(v5 + 1776) + 48LL))(
             **(_QWORD **)(v5 + 1776),
             v11,
             v6,
             0LL,
             0);
      v4 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x19Eu, 0LL);
    }
  }
  else
  {
    v4 = -2003304442;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003304442, 0x196u, 0LL);
  }
  return v4;
}
