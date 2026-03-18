/*
 * XREFs of ?xxxArrangementRectangleHandler@CallShell@@YA_NPEBUMOVESIZEDATA@@PEAU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z @ 0x1C0237100
 * Callers:
 *     ?xxxGetArrangeRectFromShell@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x1C020CF7C (-xxxGetArrangeRectFromShell@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@.c)
 * Callees:
 *     _anonymous_namespace_::xxxCallIAMWindowManagementHandler @ 0x1C01090A8 (_anonymous_namespace_--xxxCallIAMWindowManagementHandler.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

bool __fastcall CallShell::xxxArrangementRectangleHandler(
        CallShell *this,
        const struct MOVESIZEDATA *a2,
        struct _SHELL_WINDOWMANAGEMENT_CALLOUT_INFO *a3)
{
  char v5; // r8
  unsigned __int16 v6; // dx
  unsigned __int16 v7; // ax

  memset(a2, 0, 0x60uLL);
  *(_QWORD *)a2 = **((_QWORD **)this + 2);
  *(_QWORD *)((char *)a2 + 12) = *((_QWORD *)this + 34);
  *((_DWORD *)a2 + 6) = *(_DWORD *)(gptiCurrent + 1272LL);
  v5 = *(_BYTE *)(*(_QWORD *)(gptiCurrent + 432LL) + 232LL);
  v6 = (4 * (v5 & 1)) | 1;
  if ( (v5 & 0x10) == 0 )
    v6 = 4 * (v5 & 1);
  v7 = v6 | 2;
  if ( (v5 & 4) == 0 )
    v7 = v6;
  *((_DWORD *)a2 + 5) = v7;
  return (unsigned int)anonymous_namespace_::xxxCallIAMWindowManagementHandler((__int64)a2) != 0;
}
