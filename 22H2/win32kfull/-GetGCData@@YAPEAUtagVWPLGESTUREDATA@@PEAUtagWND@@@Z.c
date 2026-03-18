/*
 * XREFs of ?GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z @ 0x1C0050984
 * Callers:
 *     SetGestureConfigSettings @ 0x1C00509F8 (SetGestureConfigSettings.c)
 *     ?_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z @ 0x1C0051080 (-_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z.c)
 *     ?SetBitMask@@YAXPEAUtagWND@@IH@Z @ 0x1C0051460 (-SetBitMask@@YAXPEAUtagWND@@IH@Z.c)
 *     GetGestureConfigSettings @ 0x1C02045D0 (GetGestureConfigSettings.c)
 * Callees:
 *     VWPLGetData @ 0x1C004FA84 (VWPLGetData.c)
 */

struct tagVWPLGESTUREDATA *__fastcall GetGCData(struct tagWND *a1)
{
  __int64 v1; // rax
  int v2; // eax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 2);
  v4 = 0LL;
  v2 = VWPLGetData(*(_DWORD **)(*(_QWORD *)(v1 + 424) + 880LL), (__int64)a1, &v4);
  return (struct tagVWPLGESTUREDATA *)(v4 & -(__int64)(v2 != 0));
}
