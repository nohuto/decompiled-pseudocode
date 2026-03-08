/*
 * XREFs of UmfdGetTrueTypeFile @ 0x1C0308010
 * Callers:
 *     <none>
 * Callees:
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1C011E760 (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C011ED74 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 */

__int64 __fastcall UmfdGetTrueTypeFile(__int64 a1, _DWORD *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  _QWORD v7[7]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v8; // [rsp+58h] [rbp-20h]
  __int64 v9; // [rsp+60h] [rbp-18h]

  *a2 = 0;
  FontDriverDdiRequest::FontDriverDdiRequest((__int64)v7, 12);
  v9 = 0LL;
  v7[0] = &GetTrueTypeFileRequest::`vftable';
  v7[5] = a1;
  v7[6] = a2;
  v8 = 0LL;
  v4 = UmfdClientSendAndWaitForCompletion(*(unsigned int *)(a1 + 8), (__int64)v7);
  v5 = v8;
  if ( v4 < 0 )
    return 0LL;
  return v5;
}
