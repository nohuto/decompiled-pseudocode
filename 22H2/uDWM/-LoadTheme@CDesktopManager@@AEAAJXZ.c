/*
 * XREFs of ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x1800485B8
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180036538 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180025F00 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?ForceAtlasInitialize@CContactManager@@QEAAX_K@Z @ 0x180047C48 (-ForceAtlasInitialize@CContactManager@@QEAAX_K@Z.c)
 *     ?EnsureImages@CTopLevelWindow@@SAJXZ @ 0x180048948 (-EnsureImages@CTopLevelWindow@@SAJXZ.c)
 *     ?InitializeHighContrast@CDesktopManager@@AEAAXXZ @ 0x180049B08 (-InitializeHighContrast@CDesktopManager@@AEAAXXZ.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x180049E8C (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x180053C0C (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180053C7C (_Init_thread_header.c)
 *     IsOpenThemeDataPresent @ 0x180054084 (IsOpenThemeDataPresent.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180084FF8 (McGenEventWrite_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CDesktopManager::LoadTheme(CDesktopManager *this)
{
  int v2; // r8d
  HTHEME v3; // rax
  HTHEME v4; // rax
  HTHEME v5; // rax
  HTHEME v6; // rax
  HTHEME v7; // rax
  HRESULT CurrentThemeName; // eax
  signed int v9; // ebx
  HMODULE Library; // rax
  const wchar_t *v11; // rax
  void *Theme; // rax
  int BitmapsFromAtlasImageStrip; // eax
  HRESULT ThemeInt; // eax
  CContactManager *v15; // rcx
  int v16; // r8d
  signed int LastError; // eax
  int v19; // r9d
  signed int v20; // eax
  signed int v21; // eax
  signed int v22; // eax
  signed int v23; // eax
  signed int v24; // eax
  unsigned int piVal; // [rsp+20h] [rbp-248h]
  _BYTE v26[16]; // [rsp+30h] [rbp-238h] BYREF
  WCHAR pszThemeFileName[264]; // [rsp+40h] [rbp-228h] BYREF

  if ( !(unsigned __int8)IsOpenThemeDataPresent() )
    return 0LL;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (unsigned int)&UdwmLoadTheme_Start,
      v2,
      1,
      (__int64)v26);
  if ( dword_1800E6DA0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1800E6DA0);
    if ( dword_1800E6DA0 == -1 )
    {
      dword_1800E3FE4 = -2147024864;
      Init_thread_footer(&dword_1800E6DA0);
    }
  }
  SetLastError(0);
  v3 = OpenThemeData(0LL, L"DWMWindow");
  *((_QWORD *)this + 76) = v3;
  if ( !v3 )
  {
    LastError = GetLastError();
    v9 = LastError;
    if ( LastError > 0 )
      v9 = (unsigned __int16)LastError | 0x80070000;
    piVal = 699;
    goto LABEL_32;
  }
  SetLastError(0);
  v4 = OpenThemeData(0LL, L"DWMTouch");
  *((_QWORD *)this + 78) = v4;
  if ( !v4 )
  {
    v20 = GetLastError();
    v9 = v20;
    if ( v20 > 0 )
      v9 = (unsigned __int16)v20 | 0x80070000;
    piVal = 700;
    goto LABEL_32;
  }
  SetLastError(0);
  v5 = OpenThemeData(0LL, L"DWMPen");
  *((_QWORD *)this + 79) = v5;
  if ( !v5 )
  {
    v21 = GetLastError();
    v9 = v21;
    if ( v21 > 0 )
      v9 = (unsigned __int16)v21 | 0x80070000;
    piVal = 701;
    goto LABEL_32;
  }
  SetLastError(0);
  v6 = OpenThemeData(0LL, L"Animations");
  *((_QWORD *)this + 80) = v6;
  if ( !v6 )
  {
    v22 = GetLastError();
    v9 = v22;
    if ( v22 > 0 )
      v9 = (unsigned __int16)v22 | 0x80070000;
    piVal = 703;
    goto LABEL_32;
  }
  SetLastError(0);
  v7 = OpenThemeData(0LL, L"TimingFunction");
  *((_QWORD *)this + 81) = v7;
  if ( !v7 )
  {
    v23 = GetLastError();
    v9 = v23;
    if ( v23 > 0 )
      v9 = (unsigned __int16)v23 | 0x80070000;
    piVal = 704;
    goto LABEL_32;
  }
  CurrentThemeName = GetCurrentThemeName(pszThemeFileName, 260, 0LL, 0, 0LL, 0);
  v9 = CurrentThemeName;
  if ( CurrentThemeName < 0 )
  {
    piVal = 707;
LABEL_38:
    v19 = CurrentThemeName;
    goto LABEL_40;
  }
  SetLastError(0);
  Library = LoadLibraryExW(pszThemeFileName, 0LL, 2u);
  *((_QWORD *)this + 77) = Library;
  if ( !Library )
  {
    v24 = GetLastError();
    v9 = v24;
    if ( v24 > 0 )
      v9 = (unsigned __int16)v24 | 0x80070000;
    piVal = 708;
LABEL_32:
    if ( v9 >= 0 )
      v9 = -2003304445;
    goto LABEL_36;
  }
  v11 = CharLowerW(pszThemeFileName);
  *((_BYTE *)this + 25) = wcsstr(v11, L"aero.msstyles") != 0LL;
  CDesktopManager::InitializeHighContrast(this);
  CurrentThemeName = CTopLevelWindow::EnsureImages();
  v9 = CurrentThemeName;
  if ( CurrentThemeName < 0 )
  {
    piVal = 717;
    goto LABEL_38;
  }
  Theme = (void *)CDesktopManager::GetTheme(0);
  BitmapsFromAtlasImageStrip = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
                                 Theme,
                                 58,
                                 0x12u,
                                 0LL,
                                 (__int64)&CWindowIconic::s_rgpBitmapPendingImages);
  v9 = BitmapsFromAtlasImageStrip;
  if ( BitmapsFromAtlasImageStrip < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, BitmapsFromAtlasImageStrip, 0x34Bu);
  if ( v9 >= 0 )
  {
    ThemeInt = GetThemeInt(*((HTHEME *)this + 76), 0, 0, 2431, (int *)this + 124);
    v9 = ThemeInt;
    if ( ThemeInt < 0 )
    {
      piVal = 721;
      v19 = ThemeInt;
      goto LABEL_40;
    }
    CurrentThemeName = GetThemeInt(*((HTHEME *)this + 76), 46, 1, 2431, (int *)this + 125);
    v9 = CurrentThemeName;
    if ( CurrentThemeName < 0 )
    {
      piVal = 722;
    }
    else
    {
      CurrentThemeName = GetThemeInt(*((HTHEME *)this + 76), 46, 3, 2431, (int *)this + 126);
      v9 = CurrentThemeName;
      if ( CurrentThemeName >= 0 )
      {
        if ( GetSystemMetrics(95) > 0 )
          CContactManager::ForceAtlasInitialize(v15, 0xFFFFFFFFFFFFFFFFuLL);
        goto LABEL_23;
      }
      piVal = 723;
    }
    goto LABEL_38;
  }
  piVal = 718;
LABEL_36:
  v19 = v9;
LABEL_40:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800E3FE4, 1LL, v19, piVal);
LABEL_23:
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (unsigned int)&UdwmLoadTheme_End,
      v16,
      1,
      (__int64)v26);
  if ( v9 < 0 )
  {
    if ( *((_BYTE *)this + 24) )
    {
      v9 = -2003302654;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800E3FE4, 1LL, -2003302654, 0x2E2u);
    }
  }
  return (unsigned int)v9;
}
