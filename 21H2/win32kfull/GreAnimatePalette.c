/*
 * XREFs of GreAnimatePalette @ 0x1C02B7D10
 * Callers:
 *     <none>
 * Callees:
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C0019C48 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x1C02BD5A0 (-ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z.c)
 */

__int64 __fastcall GreAnimatePalette(HPALETTE a1, unsigned int a2, unsigned int a3, struct tagPALETTEENTRY *a4)
{
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rbx
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF

  v7 = 0;
  EPALOBJ::EPALOBJ((EPALOBJ *)v11, a1);
  v9 = v11[0];
  if ( v11[0] )
  {
    if ( (*(_DWORD *)(v11[0] + 24LL) & 0x100) != 0 )
      v7 = XEPALOBJ::ulAnimatePalette((XEPALOBJ *)v11, a2, a3, a4);
    DEC_SHARE_REF_CNT(v9, v8);
  }
  return v7;
}
