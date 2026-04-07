/*
 * XREFs of ?GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x18003C264
 * Callers:
 *     ?s_CalculateWindowMetrics@CSecondaryWindowRepresentation@@CA_NPEBVCWindowData@@U?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@_NPEAUtagSIZE@@PEAU_MARGINS@@@Z @ 0x180015AFC (-s_CalculateWindowMetrics@CSecondaryWindowRepresentation@@CA_NPEBVCWindowData@@U-$TMILFlagsEnum@.c)
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x18001F780 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetExtendedFrameBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x180045878 (-GetExtendedFrameBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800927D0 (-_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptur.c)
 *     ?_UpdateCaptureControllerTransformFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z @ 0x180092E10 (-_UpdateCaptureControllerTransformFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCap.c)
 *     ?SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ @ 0x180095514 (-SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?IsSheetOfGlass@CTopLevelWindow@@AEAA_NXZ @ 0x180026D20 (-IsSheetOfGlass@CTopLevelWindow@@AEAA_NXZ.c)
 *     IsOpenThemeDataPresent @ 0x180054134 (IsOpenThemeDataPresent.c)
 */

void __fastcall CTopLevelWindow::GetOutsideMargins(CTopLevelWindow *this, struct _MARGINS *a2)
{
  int v2; // esi
  char v5; // r9
  __int64 v6; // rax
  int v7; // eax
  bool IsSheetOfGlass; // al
  int v9; // r8d
  char v10; // r9
  int v11; // r10d
  int v12; // r11d
  __int64 v13; // rdx
  int v14; // esi
  int v15; // r14d
  int v16; // r15d

  v2 = *((_DWORD *)this + 148);
  *a2 = 0LL;
  if ( (unsigned __int8)IsOpenThemeDataPresent() && (v2 & 6) != 0 || (*((_DWORD *)this + 148) & 0x200000) != 0 )
  {
    v5 = *((_BYTE *)this + 240) & 4;
    v6 = *((_QWORD *)this + 91);
    if ( !v6 || (*(_BYTE *)(v6 + 608) & 8) != 0 )
    {
      IsSheetOfGlass = CTopLevelWindow::IsSheetOfGlass(this);
      v14 = *(_DWORD *)((char *)this + v13 + 628);
      if ( IsSheetOfGlass )
      {
        v15 = *(_DWORD *)((char *)this + (v10 != 0 ? 0x10 : 0) + 632);
        v16 = *(_DWORD *)((char *)this + (v10 != 0 ? 0x10 : 0) + 640);
      }
      else
      {
        v15 = *(_DWORD *)((char *)this + (v10 != 0 ? 0x10 : 0) + 632);
        v16 = *(_DWORD *)((char *)this + (v10 != 0 ? 0x10 : 0) + 640);
        if ( *((_DWORD *)this + 153) - *(_DWORD *)(*((_QWORD *)this + 41) + 24LL) - v14 >= 0 )
          v12 = *((_DWORD *)this + 153) - *(_DWORD *)(*((_QWORD *)this + 41) + 24LL) - v14;
        v9 = v11;
        if ( *((_DWORD *)this + 154) - *(_DWORD *)(*((_QWORD *)this + 42) + 24LL) - v15 >= 0 )
          v9 = *((_DWORD *)this + 154) - *(_DWORD *)(*((_QWORD *)this + 42) + 24LL) - v15;
        if ( *((_DWORD *)this + 156) - *(_DWORD *)(*((_QWORD *)this + 44) + 28LL) - v16 >= 0 )
          v11 = *((_DWORD *)this + 156) - *(_DWORD *)(*((_QWORD *)this + 44) + 28LL) - v16;
      }
      a2->cxLeftWidth = v14 + v12;
      a2->cyTopHeight = *(_DWORD *)((char *)this + (v10 != 0 ? 0x10 : 0) + 636);
      a2->cxRightWidth = v15 + v9;
      v7 = v16 + v11;
    }
    else
    {
      a2->cxLeftWidth = *(_DWORD *)((char *)this + ((*((_BYTE *)this + 240) & 4) != 0 ? 0x10 : 0) + 628);
      a2->cyTopHeight = *(_DWORD *)((char *)this + (v5 != 0 ? 0x10 : 0) + 636);
      a2->cxRightWidth = *(_DWORD *)((char *)this + (v5 != 0 ? 0x10 : 0) + 632);
      v7 = *(_DWORD *)((char *)this + (v5 != 0 ? 0x10 : 0) + 640);
    }
    a2->cyBottomHeight = v7;
  }
}
