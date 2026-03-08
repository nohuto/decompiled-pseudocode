/*
 * XREFs of UmfdQueryAdvanceWidths @ 0x1C0121100
 * Callers:
 *     <none>
 * Callees:
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1C011E760 (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C011ED74 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 */

__int64 __fastcall UmfdQueryAdvanceWidths(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, int a6)
{
  _QWORD v11[7]; // [rsp+28h] [rbp-29h] BYREF
  int v12; // [rsp+60h] [rbp+Fh]
  __int64 v13; // [rsp+68h] [rbp+17h]
  __int64 v14; // [rsp+70h] [rbp+1Fh]
  int v15; // [rsp+78h] [rbp+27h]
  __int64 v16; // [rsp+7Ch] [rbp+2Bh]
  int v17; // [rsp+84h] [rbp+33h]
  __int128 v18; // [rsp+88h] [rbp+37h]

  FontDriverDdiRequest::FontDriverDdiRequest((__int64)v11, 8);
  v11[5] = a1;
  v17 = 0;
  v11[0] = &QueryAdvanceWidthsRequest::`vftable';
  v14 = a5;
  v18 = 0LL;
  v16 = (unsigned int)(a3 != 1) - 1;
  v11[6] = a2;
  v12 = a3;
  v13 = a4;
  v15 = a6;
  UmfdClientSendAndWaitForCompletion(*(unsigned int *)(*(_QWORD *)(a2 + 24) + 8LL), (__int64)v11);
  return (unsigned int)v16;
}
