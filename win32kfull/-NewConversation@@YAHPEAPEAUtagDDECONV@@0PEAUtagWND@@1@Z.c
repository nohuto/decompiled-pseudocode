/*
 * XREFs of ?NewConversation@@YAHPEAPEAUtagDDECONV@@0PEAUtagWND@@1@Z @ 0x1C01FAD3C
 * Callers:
 *     xxxDDETrackSendHook @ 0x1C01FDFB0 (xxxDDETrackSendHook.c)
 * Callees:
 *     ?AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z @ 0x1C01FA810 (-AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z.c)
 */

__int64 __fastcall NewConversation(
        struct tagDDECONV **a1,
        struct tagDDECONV **a2,
        struct tagWND *a3,
        struct tagWND *a4)
{
  struct tagWND *v4; // r15
  struct tagDDECONV *v8; // rbx
  __int64 v9; // r8
  struct tagDDECONV *v11; // rax
  struct tagDDECONV *v12; // rdi

  v4 = a3;
  LOBYTE(a3) = 10;
  v8 = (struct tagDDECONV *)HMAllocObject(*((_QWORD *)v4 + 2), 0LL, a3);
  if ( !v8 )
    return 0LL;
  LOBYTE(v9) = 10;
  v11 = (struct tagDDECONV *)HMAllocObject(*((_QWORD *)a4 + 2), 0LL, v9);
  v12 = v11;
  if ( !v11 )
  {
    HMFreeObject(v8);
    return 0LL;
  }
  AddConvProp(v4, a4, 0, v8, v11);
  AddConvProp(a4, v4, 1, v12, v8);
  if ( a1 )
    *a1 = v8;
  if ( a2 )
    *a2 = v12;
  return 1LL;
}
