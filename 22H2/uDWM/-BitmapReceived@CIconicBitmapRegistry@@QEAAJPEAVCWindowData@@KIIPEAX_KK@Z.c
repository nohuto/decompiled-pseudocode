/*
 * XREFs of ?BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z @ 0x180089480
 * Callers:
 *     ?SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x1800999FC (-SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOT.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x180010F0C (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z @ 0x180044EC0 (-DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z.c)
 *     ?CanAcceptBitmap@CIconicBitmapRegistry@@AEAA_NPEAVCWindowData@@@Z @ 0x180045780 (-CanAcceptBitmap@CIconicBitmapRegistry@@AEAA_NPEAVCWindowData@@@Z.c)
 *     ?IsWindowTab@@YA_NPEAVCWindowData@@@Z @ 0x180057000 (-IsWindowTab@@YA_NPEAVCWindowData@@@Z.c)
 *     ?Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z @ 0x180085230 (-Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x180085490 (McTemplateU0qp_EtwEventWriteTransfer.c)
 *     ?AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x180089368 (-AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 */

__int64 __fastcall CIconicBitmapRegistry::BitmapReceived(
        CIconicBitmapRegistry *this,
        HWND *a2,
        int a3,
        unsigned int a4,
        unsigned int nNumber,
        void *a6,
        unsigned __int64 a7,
        char a8)
{
  __int64 v9; // r14
  unsigned int v11; // ebx
  unsigned __int64 v13; // rcx
  bool v14; // bp
  HWND ShellWindowForDesktop; // rax
  unsigned int v16; // r15d
  int v17; // esi
  unsigned int v18; // r12d
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // ebx
  int v23; // ebp
  int v24; // eax
  CBaseObject *v25; // rsi
  char v26; // al
  CBaseObject *v27; // r8
  int nNumerator[2]; // [rsp+30h] [rbp-48h] BYREF
  CBaseObject *v30; // [rsp+38h] [rbp-40h] BYREF
  DWORD v31; // [rsp+88h] [rbp+10h] BYREF
  DWORD dwProcessId; // [rsp+98h] [rbp+20h] BYREF

  v9 = a4;
  v11 = 0;
  v30 = 0LL;
  if ( GetWindowThreadProcessId(a2[5], &v31) && a3 == v31 )
  {
    v14 = 1;
  }
  else
  {
    v14 = 0;
    ShellWindowForDesktop = CWindowList::GetShellWindowForDesktop(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                                  + 61));
    if ( ShellWindowForDesktop )
    {
      dwProcessId = 0;
      GetWindowThreadProcessId(ShellWindowForDesktop, &dwProcessId);
      v14 = dwProcessId == a3;
    }
  }
  v16 = v9;
  v17 = nNumber;
  v18 = nNumber;
  if ( (*((_BYTE *)a2 + 610) & 4) != 0
    && (v13 = nNumber * v9, v13 <= 0xFFFFFFFF)
    && (v19 = 4LL * (unsigned int)v13, v19 <= 0xFFFFFFFF)
    && a7 >= (unsigned int)v19
    && v14 )
  {
    if ( !CIconicBitmapRegistry::CanAcceptBitmap(this, (struct CWindowData *)a2) )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0qp_EtwEventWriteTransfer(v20, (__int64)&UdwmManageIconicThumbnail_Info, 1LL, a2[5]);
      return v11;
    }
    if ( !IsWindowTab((struct CWindowData *)a2) )
    {
      if ( !(unsigned int)DwmGetIdealIconicThumbnailSize(1, (struct tagSIZE *)nNumerator) )
      {
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          McTemplateU0qp_EtwEventWriteTransfer(v21, (__int64)&UdwmManageIconicThumbnail_Info, 1LL, a2[5]);
        v11 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800CBFE0, 1LL, -2147467259, 0x2B2u);
        return v11;
      }
      v22 = nNumerator[0];
      v23 = nNumerator[1];
      if ( (int)v9 <= nNumerator[0] || (int)v9 * nNumerator[1] > v17 * nNumerator[0] )
      {
        if ( v17 > nNumerator[1] && (int)v9 * nNumerator[1] > v17 * nNumerator[0] )
        {
          v16 = MulDiv(v9, nNumerator[1], v17);
          v18 = v23;
        }
      }
      else
      {
        v18 = MulDiv(v17, nNumerator[0], v9);
        v16 = v22;
      }
    }
    v24 = CBitmapSource::Create(v9, v17, v16, v18, a6, &v30);
    v25 = v30;
    v11 = v24;
    if ( v24 >= 0 )
    {
      v26 = a8;
      v27 = v30;
      *((_BYTE *)a2 + 610) &= ~8u;
      *((_BYTE *)a2 + 610) |= 8 * (v26 & 1);
      CIconicBitmapRegistry::AcceptBitmap((CWindowIconic ****)this, (struct CWindowData *)a2, v27);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800CBFE0, 1LL, v24, 0x2C1u);
    }
    if ( v25 )
      CBaseObject::Release(v25);
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0qp_EtwEventWriteTransfer(v13, (__int64)&UdwmManageIconicThumbnail_Info, 1LL, a2[5]);
    v11 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800CBFE0, 1LL, -2147024809, 0x2A0u);
  }
  return v11;
}
