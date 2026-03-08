/*
 * XREFs of GreAnimatePalette @ 0x1C02D3250
 * Callers:
 *     <none>
 * Callees:
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C007CA7C (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x1C02DA948 (-ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z.c)
 */

__int64 __fastcall GreAnimatePalette(HPALETTE a1, unsigned int a2, unsigned int a3, struct tagPALETTEENTRY *a4)
{
  unsigned int v7; // edi
  __int64 v8; // rbx
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  v7 = 0;
  EPALOBJ::EPALOBJ((EPALOBJ *)v10, a1);
  v8 = v10[0];
  if ( v10[0] )
  {
    if ( (*(_DWORD *)(v10[0] + 24LL) & 0x100) != 0 )
      v7 = XEPALOBJ::ulAnimatePalette((XEPALOBJ *)v10, a2, a3, a4);
    if ( v8 )
      DEC_SHARE_REF_CNT(v8);
  }
  return v7;
}
