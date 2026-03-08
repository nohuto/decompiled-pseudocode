/*
 * XREFs of ?DoesPointSnapToBorder@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x1C01E5134
 * Callers:
 *     ?CanPointStartResize@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x1C01E4FFC (-CanPointStartResize@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z.c)
 * Callees:
 *     _TTPixelsToHm @ 0x1C014AE60 (_TTPixelsToHm.c)
 */

_BOOL8 __fastcall DoesPointSnapToBorder(struct tagWND *a1, struct tagTOUCHTARGETINGCONTACT *a2, struct tagPOINT a3)
{
  int v4; // edi
  __int64 v5; // kr00_8
  int v6; // r10d
  __int64 v7; // r11
  __int64 v8; // r11
  LONG y; // [rsp+44h] [rbp+1Ch]

  y = a3.y;
  v4 = *((_DWORD *)a2 + 46);
  v5 = a3.x - *(_DWORD *)(*((_QWORD *)a1 + 5) + 104LL);
  return (int)TTPixelsToHm((HIDWORD(v5) ^ (unsigned int)v5) - HIDWORD(v5), v4) < 120
      || (int)TTPixelsToHm(abs32(v6 - *(_DWORD *)(v7 + 112)), v4) < 120
      || (int)TTPixelsToHm(abs32(y - *(_DWORD *)(v8 + 116)), *((_DWORD *)a2 + 47)) < 120;
}
