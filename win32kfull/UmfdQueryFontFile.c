/*
 * XREFs of UmfdQueryFontFile @ 0x1C011D990
 * Callers:
 *     <none>
 * Callees:
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1C011E760 (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C011ED74 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 */

__int64 __fastcall UmfdQueryFontFile(__int64 a1, int a2, int a3, __int64 a4)
{
  int v8; // eax
  unsigned int v9; // ecx
  _QWORD v11[6]; // [rsp+20h] [rbp-58h] BYREF
  int v12; // [rsp+50h] [rbp-28h]
  int v13; // [rsp+54h] [rbp-24h]
  __int64 v14; // [rsp+58h] [rbp-20h]
  int v15; // [rsp+60h] [rbp-18h]
  __int64 v16; // [rsp+68h] [rbp-10h]

  FontDriverDdiRequest::FontDriverDdiRequest(v11, 6LL);
  v16 = 0LL;
  v12 = a2;
  v11[0] = &QueryFontFileRequest::`vftable';
  v15 = -1;
  v11[5] = a1;
  v13 = a3;
  v14 = a4;
  v8 = UmfdClientSendAndWaitForCompletion(*(unsigned int *)(a1 + 8), v11);
  v9 = v15;
  if ( v8 < 0 )
    return (unsigned int)-1;
  return v9;
}
