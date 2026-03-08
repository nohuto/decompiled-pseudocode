/*
 * XREFs of ?xxxCloseApplication@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C02251D8
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00A8800 (xxxRealDefWindowProc.c)
 * Callees:
 *     GetNonChildAncestor @ 0x1C0027014 (GetNonChildAncestor.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C009A3E0 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     _PostMessage @ 0x1C00EF0A0 (_PostMessage.c)
 */

void __fastcall xxxCloseApplication(struct tagTHREADINFO *a1)
{
  __int64 v1; // r8
  struct tagTHREADINFO *v2; // r9
  struct tagWND *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax
  PDEVICE_OBJECT v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_QWORD *)a1 + 54);
  v2 = a1;
  v3 = *(struct tagWND **)(v1 + 128);
  if ( v3 && (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v3 + 17) + 8LL) + 9LL) & 2) == 0 )
  {
    v4 = *(_QWORD *)(v1 + 120);
    if ( v4 )
    {
      if ( (struct tagWND *)GetNonChildAncestor(v4) == v3 )
        goto LABEL_6;
    }
    v5 = *((_QWORD *)v2 + 52);
    v11[2] = 0LL;
    v11[0] = v5;
    *((_QWORD *)v2 + 52) = v11;
    v11[1] = v3;
    HMLockObject(v3);
    xxxSetFocus(v3, v6, v7);
    v3 = (struct tagWND *)ThreadUnlock1(v9, v8, v10);
    if ( v3 )
LABEL_6:
      PostMessage((unsigned __int64)v3, 0x112u, 0xF060uLL, 0LL);
  }
}
