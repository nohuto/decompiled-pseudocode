/*
 * XREFs of _lambda_2ae8870d6bc816a04ba0e39f1c502364_::operator() @ 0x1804ED5B4
 * Callers:
 *     ??$Adapt@V_lambda_2ae8870d6bc816a04ba0e39f1c502364_@@@?$CCLambdaAdapter@P6AHPEAUHDC__@@PEAGHPEAUtagRECT@@I_J@Z$05@@SAHPEAUHDC__@@PEAGHPEAUtagRECT@@I_J@Z @ 0x1804ED4B0 (--$Adapt@V_lambda_2ae8870d6bc816a04ba0e39f1c502364_@@@-$CCLambdaAdapter@P6AHPEAUHDC__@@PEAGHPEAU.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     memset_0 @ 0x180090978 (memset_0.c)
 *     ?ScaleByPPI@DPIToPPIHelpers@@YAHHPEAUHWND__@@W4ScaleModifier@1@@Z @ 0x1804EDA60 (-ScaleByPPI@DPIToPPIHelpers@@YAHHPEAUHWND__@@W4ScaleModifier@1@@Z.c)
 *     ?ScaleBySpecificDPI@DPIToPPIHelpers@@YAHHHW4ScaleModifier@1@@Z @ 0x1804EDB18 (-ScaleBySpecificDPI@DPIToPPIHelpers@@YAHHHW4ScaleModifier@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_2ae8870d6bc816a04ba0e39f1c502364_::operator()(
        int **a1,
        HDC a2,
        WCHAR *a3,
        int a4,
        struct tagRECT *lprc,
        UINT format)
{
  HGDIOBJ CurrentObject; // rdi
  int v11; // ecx
  int v12; // eax
  unsigned int *v13; // rcx
  __int64 v14; // rdi
  unsigned int v15; // ebp
  __int64 WindowDpiAwarenessContext; // rax
  unsigned int DpiForWindow; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  int *v20; // r11
  int v21; // r10d
  HFONT FontIndirectW; // rax
  HFONT v23; // rbx
  HGDIOBJ v24; // rdi
  _DWORD pv[24]; // [rsp+40h] [rbp-A8h] BYREF

  CurrentObject = GetCurrentObject(a2, 6u);
  if ( !CurrentObject )
    return 1LL;
  memset_0(pv, 0, 0x5CuLL);
  if ( GetObjectW(CurrentObject, 92, pv) <= 0 )
    return 1LL;
  v11 = **a1;
  if ( v11 == 1 )
  {
    v12 = DPIToPPIHelpers::ScaleByPPI((unsigned int)*a1[2], *(_QWORD *)a1[3], 1LL);
LABEL_13:
    *a1[1] = v12;
    goto LABEL_14;
  }
  if ( !v11 )
  {
    v13 = *(unsigned int **)a1[4];
    if ( v13 )
    {
      v18 = *v13;
      v19 = (unsigned int)*a1[2];
    }
    else
    {
      v14 = *(_QWORD *)a1[3];
      v15 = *a1[2];
      WindowDpiAwarenessContext = GetWindowDpiAwarenessContext(v14);
      if ( (unsigned int)AreDpiAwarenessContextsEqual(WindowDpiAwarenessContext, -4LL) )
        DpiForWindow = GetDpiForWindow(v14);
      else
        DpiForWindow = GetDpiForSystem();
      v18 = DpiForWindow;
      v19 = v15;
    }
    v12 = DPIToPPIHelpers::ScaleBySpecificDPI(v19, v18, 1LL);
    goto LABEL_13;
  }
LABEL_14:
  v20 = a1[2];
  v21 = *a1[1];
  if ( v21 == *v20 && v21 == pv[0] )
  {
    DrawTextExW(a2, a3, a4, lprc, format, 0LL);
  }
  else
  {
    *v20 = v21;
    FontIndirectW = CreateFontIndirectW((const LOGFONTW *)a1[2]);
    v23 = FontIndirectW;
    if ( FontIndirectW )
    {
      v24 = SelectObject(a2, FontIndirectW);
      DrawTextExW(a2, a3, a4, lprc, format, 0LL);
      SelectObject(a2, v24);
    }
    if ( v23 )
      DeleteObject(v23);
  }
  return 1LL;
}
