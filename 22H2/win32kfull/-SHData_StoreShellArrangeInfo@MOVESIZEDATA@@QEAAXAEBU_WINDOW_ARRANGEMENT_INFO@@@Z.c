/*
 * XREFs of ?SHData_StoreShellArrangeInfo@MOVESIZEDATA@@QEAAXAEBU_WINDOW_ARRANGEMENT_INFO@@@Z @ 0x1C023AD04
 * Callers:
 *     ?xxxGetArrangeRectFromShell@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindowKind@@PEAUtagRECT@@@Z @ 0x1C01ED340 (-xxxGetArrangeRectFromShell@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindowKind.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C005F1AC (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     PtInRect @ 0x1C00D0A58 (PtInRect.c)
 *     ?SetPreviewInsertAfter@DWM_ARRANGEMENT_DATA@@QEAAXPEAUHWND__@@PEBUMOVESIZEDATA@@@Z @ 0x1C023B000 (-SetPreviewInsertAfter@DWM_ARRANGEMENT_DATA@@QEAAXPEAUHWND__@@PEBUMOVESIZEDATA@@@Z.c)
 *     ?SetShrinkWidth@DWM_ARRANGEMENT_DATA@@QEAAXIPEBUMOVESIZEDATA@@@Z @ 0x1C023B1A8 (-SetShrinkWidth@DWM_ARRANGEMENT_DATA@@QEAAXIPEBUMOVESIZEDATA@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddds @ 0x1C023B264 (WPP_RECORDER_AND_TRACE_SF_dddddds.c)
 */

void __fastcall MOVESIZEDATA::SHData_StoreShellArrangeInfo(
        MOVESIZEDATA *this,
        const struct _WINDOW_ARRANGEMENT_INFO *a2)
{
  DWM_ARRANGEMENT_DATA *v2; // rbx
  HWND v5; // rdx
  bool v6; // zf
  _UNKNOWN **v7; // r10
  unsigned __int64 v8; // rdx
  BOOL v9; // eax
  int v10; // edx
  int v11; // r8d
  int v12; // r8d
  char v13; // dl
  char v14; // r10
  const char *v15; // rax

  v2 = (MOVESIZEDATA *)((char *)this + 344);
  *((_DWORD *)this + 80) = *((_DWORD *)a2 + 18);
  DWM_ARRANGEMENT_DATA::SetShrinkWidth((MOVESIZEDATA *)((char *)this + 344), *((_DWORD *)a2 + 14), this);
  v5 = (HWND)*((_QWORD *)a2 + 8);
  if ( v5 )
    DWM_ARRANGEMENT_DATA::SetPreviewInsertAfter(v2, v5, this);
  v6 = (*((_BYTE *)a2 + 36) & 1) == 0;
  v7 = &WPP_RECORDER_INITIALIZED;
  *((_BYTE *)this + 316) = *((_BYTE *)a2 + 36) & 1;
  if ( !v6 )
  {
    v8 = *(_QWORD *)((char *)this + 268);
    *(_OWORD *)((char *)this + 300) = *(_OWORD *)((char *)a2 + 40);
    v9 = PtInRect((_DWORD *)this + 75, v8);
    *((_BYTE *)this + 317) = v9;
    LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)v7 )
    {
      LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)v7;
      WPP_RECORDER_AND_TRACE_SF_dddddds(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        v11,
        *((_DWORD *)this + 78) - *((_DWORD *)this + 76));
      v7 = &WPP_RECORDER_INITIALIZED;
    }
  }
  v12 = *((_DWORD *)a2 + 4);
  *((_DWORD *)this + 74) = v12;
  v13 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)v7;
  if ( v13 || v14 )
  {
    if ( v12 )
    {
      v15 = "Arrange";
      if ( v12 != 1 )
        v15 = "Cancel";
    }
    else
    {
      v15 = "Default";
    }
    WPP_RECORDER_AND_TRACE_SF_s(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v13,
      v14,
      (__int64)gFullLog,
      4u,
      1u,
      0xCu,
      (__int64)&WPP_0bf01d38e7493d5599743f09d218946b_Traceguids,
      v15);
  }
  *((_BYTE *)this + 336) = 1;
}
