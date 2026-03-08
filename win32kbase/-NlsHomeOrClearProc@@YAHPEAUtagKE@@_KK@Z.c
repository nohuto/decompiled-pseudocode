/*
 * XREFs of ?NlsHomeOrClearProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C021C460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NlsHomeOrClearProc(struct tagKE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 v4; // ax
  char v6; // cl
  __int16 v7; // ax
  __int16 v8; // ax

  v4 = *((_WORD *)a1 + 1);
  if ( (v4 & 0x800) == 0 )
  {
    *((_WORD *)a1 + 1) = v4 & 0x8F00;
    v6 = *(_BYTE *)(SGDGetUserSessionState(36608LL, a2, a3, a4) + 13989);
    v7 = *((_WORD *)a1 + 1);
    if ( (v6 & 4) != 0 )
      v8 = v7 | 0x24;
    else
      v8 = v7 | 0xC;
    *((_WORD *)a1 + 1) = v8;
  }
  return 1LL;
}
