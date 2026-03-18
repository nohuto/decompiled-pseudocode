/*
 * XREFs of ?GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z @ 0x1C0116B70
 * Callers:
 *     ?SetBitMask@@YAXPEAUtagWND@@IH@Z @ 0x1C01166B0 (-SetBitMask@@YAXPEAUtagWND@@IH@Z.c)
 *     ?_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z @ 0x1C01168D0 (-_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z.c)
 *     SetGestureConfigSettings @ 0x1C0116A34 (SetGestureConfigSettings.c)
 *     GetGestureConfigSettings @ 0x1C0221144 (GetGestureConfigSettings.c)
 * Callees:
 *     VWPLGetData @ 0x1C00A76BC (VWPLGetData.c)
 */

struct tagVWPLGESTUREDATA *__fastcall GetGCData(struct tagWND *a1)
{
  __int64 v1; // rax
  int v2; // eax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 2);
  v4 = 0LL;
  v2 = VWPLGetData(*(_DWORD **)(*(_QWORD *)(v1 + 424) + 872LL), (__int64)a1, &v4);
  return (struct tagVWPLGESTUREDATA *)(v4 & -(__int64)(v2 != 0));
}
