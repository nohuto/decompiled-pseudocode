/*
 * XREFs of ?xxxCloseApplication@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C023F3A8
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0067528 (xxxRealDefWindowProc.c)
 * Callees:
 *     GetNonChildAncestor @ 0x1C00825AC (GetNonChildAncestor.c)
 *     _PostMessage @ 0x1C00A5270 (_PostMessage.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00A79AC (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

void __fastcall xxxCloseApplication(struct tagTHREADINFO *a1)
{
  __int64 v1; // r8
  struct tagTHREADINFO *v2; // r9
  struct tagWND *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_QWORD *)a1 + 54);
  v2 = a1;
  v3 = *(struct tagWND **)(v1 + 120);
  if ( v3 && (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v3 + 17) + 8LL) + 9LL) & 2) == 0 )
  {
    v4 = *(_QWORD *)(v1 + 112);
    if ( v4 )
    {
      if ( (struct tagWND *)GetNonChildAncestor(v4) == v3 )
        goto LABEL_6;
    }
    v5 = *((_QWORD *)v2 + 52);
    v12[2] = 0LL;
    v12[0] = v5;
    *((_QWORD *)v2 + 52) = v12;
    v12[1] = v3;
    HMLockObject(v3);
    xxxSetFocus(v3, v6, v7);
    v11 = ThreadUnlock1(v9, v8, v10);
    LODWORD(v3) = v11;
    if ( v11 )
LABEL_6:
      PostMessage((int)v3, 274, 61536, 0);
  }
}
