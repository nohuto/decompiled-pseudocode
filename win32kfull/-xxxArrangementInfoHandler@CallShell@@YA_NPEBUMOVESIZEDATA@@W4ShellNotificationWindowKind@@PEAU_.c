/*
 * XREFs of ?xxxArrangementInfoHandler@CallShell@@YA_NPEBUMOVESIZEDATA@@W4ShellNotificationWindowKind@@PEAU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z @ 0x1C0220CBC
 * Callers:
 *     ?xxxGetArrangeRectFromShell@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindowKind@@PEAUtagRECT@@@Z @ 0x1C01EE504 (-xxxGetArrangeRectFromShell@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindowKind.c)
 * Callees:
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     _anonymous_namespace_::xxxCallIAMWindowManagementHandler @ 0x1C0220E14 (_anonymous_namespace_--xxxCallIAMWindowManagementHandler.c)
 *     WPP_RECORDER_AND_TRACE_SF_dds @ 0x1C02220B4 (WPP_RECORDER_AND_TRACE_SF_dds.c)
 */

bool __fastcall CallShell::xxxArrangementInfoHandler(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v6; // r9
  __int64 v7; // rax
  char v8; // r8
  unsigned __int16 v9; // dx
  unsigned __int16 v10; // ax
  int v11; // edx

  memset_0(a3, 0, 0x68uLL);
  v6 = **(_QWORD **)(a1 + 16);
  *a3 = v6;
  LOWORD(v6) = 1;
  v7 = *(_QWORD *)(a1 + 268);
  *((_DWORD *)a3 + 8) = 0;
  *((_DWORD *)a3 + 13) = 0;
  *((_DWORD *)a3 + 18) = 0;
  a3[10] = 0LL;
  a3[2] = v7;
  *((_DWORD *)a3 + 7) = *(_DWORD *)(gptiCurrent + 1288LL);
  v8 = *(_BYTE *)(*(_QWORD *)(gptiCurrent + 432LL) + 240LL);
  v9 = (4 * (v8 & 1)) | 1;
  if ( (v8 & 0x10) == 0 )
    v9 = 4 * (v8 & 1);
  v10 = v9 | 2;
  if ( (v8 & 4) == 0 )
    v10 = v9;
  *((_DWORD *)a3 + 6) = v10;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    LOBYTE(v6) = 0;
  }
  if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = 24;
    LOBYTE(v11) = v6;
    WPP_RECORDER_AND_TRACE_SF_dds(
      WPP_GLOBAL_Control->AttachedDevice,
      v11,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      v6);
  }
  return (unsigned int)anonymous_namespace_::xxxCallIAMWindowManagementHandler(a3, a2) != 0;
}
