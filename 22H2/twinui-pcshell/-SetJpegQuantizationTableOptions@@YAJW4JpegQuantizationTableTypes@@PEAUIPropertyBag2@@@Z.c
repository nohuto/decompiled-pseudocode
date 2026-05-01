/*
 * XREFs of ?SetJpegQuantizationTableOptions@@YAJW4JpegQuantizationTableTypes@@PEAUIPropertyBag2@@@Z @ 0x18028CCBC
 * Callers:
 *     ?AddFrameToWICBitmap@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapEncoder@@PEAUIWICBitmapSource@@U_GUID@@W4EncodingOptions@@@Z @ 0x18028C258 (-AddFrameToWICBitmap@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapEncoder@@PEAUIWICBitmapSource@@U_.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     memset_0 @ 0x180090958 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     memcpy_s_2 @ 0x18028CEE0 (memcpy_s_2.c)
 */

__int64 __fastcall SetJpegQuantizationTableOptions(__int64 a1, __int64 a2)
{
  HRESULT v3; // ebx
  SAFEARRAY *v4; // rax
  SAFEARRAY *v5; // rax
  SAFEARRAY *v6; // rcx
  rsize_t v7; // rdx
  rsize_t v8; // r9
  rsize_t v9; // rdx
  rsize_t v10; // r9
  void *ppvData; // [rsp+38h] [rbp-59h] BYREF
  SAFEARRAYBOUND rgsabound; // [rsp+40h] [rbp-51h] BYREF
  SAFEARRAYBOUND v14; // [rsp+48h] [rbp-49h] BYREF
  SAFEARRAY *psa[2]; // [rsp+50h] [rbp-41h] BYREF
  __int128 v16; // [rsp+60h] [rbp-31h]
  SAFEARRAY *v17[2]; // [rsp+70h] [rbp-21h]
  _BYTE v18[4]; // [rsp+88h] [rbp-9h] BYREF
  __int16 v19; // [rsp+8Ch] [rbp-5h]
  const wchar_t *v20; // [rsp+98h] [rbp+7h]
  __int16 v21; // [rsp+B4h] [rbp+23h]
  const wchar_t *v22; // [rsp+C0h] [rbp+2Fh]

  if ( (_DWORD)JpegQuantizationTables )
  {
    return (unsigned int)-2147418113;
  }
  else
  {
    memset_0(v18, 0, 0x50uLL);
    rgsabound.lLbound = 0;
    v20 = L"Luminance";
    rgsabound.cElements = 64;
    v19 = 8195;
    v22 = L"Chrominance";
    v21 = 8195;
    *(_OWORD *)psa = 0LL;
    v16 = 0LL;
    *(_OWORD *)v17 = 0LL;
    v4 = SafeArrayCreate(3u, 1u, &rgsabound);
    v14.lLbound = 0;
    psa[1] = v4;
    LOWORD(psa[0]) = 8195;
    v14.cElements = 64;
    v5 = SafeArrayCreate(3u, 1u, &v14);
    v6 = psa[1];
    v17[0] = v5;
    WORD4(v16) = 8195;
    if ( psa[1] && v5 )
    {
      v3 = SafeArrayAccessData(psa[1], &ppvData);
      if ( v3 >= 0 )
      {
        memcpy_s_2(ppvData, v7, &unk_18064EA84, v8);
        v3 = SafeArrayUnaccessData(psa[1]);
        if ( v3 >= 0 )
        {
          v3 = SafeArrayAccessData(v17[0], &ppvData);
          if ( v3 >= 0 )
          {
            memcpy_s_2(ppvData, v9, &unk_18064EB84, v10);
            v3 = SafeArrayUnaccessData(v17[0]);
            if ( v3 >= 0 )
              v3 = (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *, SAFEARRAY **))(*(_QWORD *)a2 + 32LL))(
                     a2,
                     2LL,
                     v18,
                     psa);
          }
        }
      }
      v5 = v17[0];
      v6 = psa[1];
    }
    else
    {
      v3 = -2147024882;
    }
    if ( v6 )
    {
      SafeArrayDestroy(v6);
      v5 = v17[0];
    }
    if ( v5 )
      SafeArrayDestroy(v5);
  }
  return (unsigned int)v3;
}
