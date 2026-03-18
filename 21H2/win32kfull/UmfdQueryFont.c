/*
 * XREFs of UmfdQueryFont @ 0x1C0105750
 * Callers:
 *     <none>
 * Callees:
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1C001B9B8 (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C001BC7C (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     UmfdDrvFreeInternal @ 0x1C010AD68 (UmfdDrvFreeInternal.c)
 */

__int64 __fastcall UmfdQueryFont(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  __int64 result; // rax
  struct _SLIST_ENTRY v9[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v10; // [rsp+48h] [rbp-38h]
  __int64 v11; // [rsp+50h] [rbp-30h]
  int v12; // [rsp+58h] [rbp-28h]
  _QWORD *v13; // [rsp+60h] [rbp-20h]
  __int64 v14; // [rsp+68h] [rbp-18h]
  __int128 v15; // [rsp+70h] [rbp-10h]

  *a4 = 0LL;
  FontDriverDdiRequest::FontDriverDdiRequest((__int64)v9, 0);
  v14 = 0LL;
  v9[0].Next = (struct _SLIST_ENTRY *)&QueryFontRequest::`vftable';
  v15 = 0LL;
  v10 = a1;
  v11 = a2;
  v12 = a3;
  v13 = a4;
  if ( (int)UmfdClientSendAndWaitForCompletion(*(_DWORD *)(a2 + 8), v9) < 0 )
    return 0LL;
  result = v14;
  if ( !v14 )
  {
    if ( *((_QWORD *)&v15 + 1) )
      UmfdDrvFreeInternal(*((_QWORD *)&v15 + 1), *v13, *(unsigned int *)(v11 + 8));
    return 0LL;
  }
  return result;
}
