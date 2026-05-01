/*
 * XREFs of ?DrawThemeTextExPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHKPEAUtagRECT@@PEAU_DTTOPTS@@@Z @ 0x1804ED450
 * Callers:
 *     s_DrawThemeTextPPIAware @ 0x1804EAD30 (s_DrawThemeTextPPIAware.c)
 *     ?GetThemeTextExtentPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHKPEAU_DTTOPTS@@PEAUtagRECT@@7@Z @ 0x1804ED588 (-GetThemeTextExtentPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHK.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     memset_0 @ 0x180090958 (memset_0.c)
 *     DPIToPPIHelpers::DrawThemeTextExLambda__lambda_2ae8870d6bc816a04ba0e39f1c502364___ @ 0x1804ED150 (DPIToPPIHelpers--DrawThemeTextExLambda__lambda_2ae8870d6bc816a04ba0e39f1c502364___.c)
 */

HRESULT __fastcall DPIToPPIHelpers::DrawThemeTextExPPI(
        __int64 a1,
        int a2,
        __int64 a3,
        void *a4,
        HDC hdc,
        __int64 a6,
        int a7,
        LPCWSTR a8,
        int a9,
        DWORD a10,
        LPRECT a11,
        DTTOPTS *a12)
{
  HDC v12; // rdi
  const WCHAR *v13; // r14
  struct tagRECT *v14; // r15
  DTTOPTS *v16; // r12
  HGDIOBJ CurrentObject; // rbx
  __int64 v19; // r8
  int v20; // [rsp+58h] [rbp-A9h] BYREF
  __int64 v21[6]; // [rsp+68h] [rbp-99h] BYREF
  _DWORD pv[24]; // [rsp+98h] [rbp-69h] BYREF
  __int64 v23; // [rsp+148h] [rbp+47h] BYREF
  int v24; // [rsp+150h] [rbp+4Fh] BYREF
  __int64 v25; // [rsp+158h] [rbp+57h] BYREF

  v25 = a3;
  v24 = a2;
  v23 = a1;
  v12 = hdc;
  v13 = a8;
  v14 = a11;
  v16 = a12;
  CurrentObject = GetCurrentObject(hdc, 6u);
  if ( !CurrentObject )
    return -2147024882;
  memset_0(pv, 0, 0x5CuLL);
  if ( GetObjectW(CurrentObject, 92, pv) <= 0 )
    return -2147467259;
  v20 = pv[0];
  v21[0] = (__int64)&v24;
  v21[1] = (__int64)&v20;
  v21[2] = (__int64)pv;
  v21[3] = (__int64)&v23;
  v21[4] = (__int64)&v25;
  return DPIToPPIHelpers::DrawThemeTextExLambda__lambda_2ae8870d6bc816a04ba0e39f1c502364___(
           a4,
           v12,
           v19,
           a7,
           v13,
           a9,
           a10,
           v14,
           v16,
           (LPARAM)v21);
}
