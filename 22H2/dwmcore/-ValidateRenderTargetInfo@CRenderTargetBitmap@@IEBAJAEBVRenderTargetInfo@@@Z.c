/*
 * XREFs of ?ValidateRenderTargetInfo@CRenderTargetBitmap@@IEBAJAEBVRenderTargetInfo@@@Z @ 0x180063F9C
 * Callers:
 *     ?GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180063EB4 (-GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?GetD2DBitmap@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1800D2660 (-GetD2DBitmap@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetBitmap::ValidateRenderTargetInfo(
        CRenderTargetBitmap *this,
        const struct RenderTargetInfo *a2)
{
  unsigned int v2; // edi
  char *v6; // rcx
  __int64 v7; // rcx
  int v8; // ebx
  char *v9; // rcx
  char *v10; // rcx
  __int64 v11; // rcx
  char v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( *((_QWORD *)this + 17) )
  {
    if ( *((_BYTE *)this + 144) )
    {
      v6 = (char *)this + *(int *)(*((_QWORD *)this + 2) + 12LL) + 16;
      v7 = (*(__int64 (__fastcall **)(char *, char *))(*(_QWORD *)v6 + 32LL))(v6, &v12);
      if ( *(_DWORD *)a2 == *(_DWORD *)v7
        && *((_DWORD *)a2 + 1) == *(_DWORD *)(v7 + 4)
        && ((v8 = *((_DWORD *)a2 + 2),
             v9 = (char *)this + *(int *)(*((_QWORD *)this + 2) + 20LL) + 16,
             v7 = *(unsigned int *)(*(__int64 (__fastcall **)(char *, char *))(*(_QWORD *)v9 + 16LL))(v9, &v12),
             (_DWORD)v7 == v8)
         || (_DWORD)v7 == DisplayId::None
         || v8 == DisplayId::All) )
      {
        v10 = (char *)this + *(int *)(*((_QWORD *)this + 2) + 12LL) + 16;
        if ( (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v10 + 24LL))(v10) && !*((_BYTE *)a2 + 20) )
        {
          v2 = -2147024891;
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024891, 0x19Eu, 0LL);
        }
      }
      else
      {
        v2 = -2003304287;
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2003304287, 0x199u, 0LL);
      }
    }
  }
  else
  {
    v2 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003292412, 0x1A4u, 0LL);
  }
  return v2;
}
