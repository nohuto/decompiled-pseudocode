/*
 * XREFs of DWP_GetEnabledPopup @ 0x1C00071D0
 * Callers:
 *     xxxActivateEnabledPopup @ 0x1C000710C (xxxActivateEnabledPopup.c)
 *     GetActiveTrackPwnd @ 0x1C01E16AC (GetActiveTrackPwnd.c)
 *     DWP_GetEnabledPopupOffset @ 0x1C0243620 (DWP_GetEnabledPopupOffset.c)
 *     xxxFlashEnabledPopup @ 0x1C02436A4 (xxxFlashEnabledPopup.c)
 * Callees:
 *     _GhostWindowFromHungWindow @ 0x1C003B510 (_GhostWindowFromHungWindow.c)
 */

_QWORD *__fastcall DWP_GetEnabledPopup(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // r8
  __int64 v3; // r9
  _QWORD *i; // rax
  __int64 v5; // rax

  v1 = (_QWORD *)a1[11];
  v2 = 0LL;
  v3 = a1[2];
  while ( v1 != a1 )
  {
    if ( v1 )
    {
      if ( *(_QWORD *)(v1[2] + 432LL) == *(_QWORD *)(v3 + 432) && (*(_BYTE *)(v1[5] + 31LL) & 0x18) == 0x10 )
      {
        for ( i = (_QWORD *)v1[15]; i; i = (_QWORD *)i[15] )
        {
          if ( i == a1 )
            goto LABEL_11;
        }
      }
      v1 = (_QWORD *)v1[11];
    }
    else
    {
      if ( (_DWORD)v2 )
        return 0LL;
      v2 = 1LL;
      v1 = *(_QWORD **)(a1[13] + 112LL);
    }
  }
  v1 = 0LL;
LABEL_11:
  if ( v1 )
  {
    v5 = GhostWindowFromHungWindow(v1, a1, v2, v3);
    if ( v5 )
      return (_QWORD *)v5;
  }
  return v1;
}
