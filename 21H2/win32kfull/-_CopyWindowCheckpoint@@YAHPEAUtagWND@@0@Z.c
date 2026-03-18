/*
 * XREFs of ?_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z @ 0x1C01454C0
 * Callers:
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0144D6C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C014501C (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 * Callees:
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 *     CkptRestore @ 0x1C007C97C (CkptRestore.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall _CopyWindowCheckpoint(struct tagWND *a1, struct tagWND *a2)
{
  unsigned int v3; // ebx
  __int64 Prop; // rax
  struct tagRECT v6; // xmm1
  struct tagRECT v7; // xmm0
  LONG v8; // eax
  struct tagRECT *v9; // rax
  struct tagRECT v11; // [rsp+20h] [rbp-40h] BYREF
  struct tagRECT v12; // [rsp+30h] [rbp-30h]
  struct tagRECT v13; // [rsp+40h] [rbp-20h] BYREF
  LONG v14; // [rsp+50h] [rbp-10h]

  v3 = 0;
  Prop = GetProp((__int64)a1, LOWORD(WPP_MAIN_CB.Dpc.TargetInfoAsUlong), 1u);
  if ( Prop )
  {
    v6 = *(struct tagRECT *)(Prop + 16);
    v11 = *(struct tagRECT *)Prop;
    v7 = *(struct tagRECT *)(Prop + 32);
    v8 = *(_DWORD *)(Prop + 48);
    v12 = v6;
    v14 = v8;
    v13 = v7;
    if ( (unsigned int)IsWindowDesktopComposed(a1) )
    {
      TransformRectBetweenCoordinateSpaces(&v11, &v11, a2, a1);
      TransformPointBetweenCoordinateSpaces(&v13, &v13, a2, a1);
      TransformPointBetweenCoordinateSpaces(&v13.right, &v13.right, a2, a1);
    }
    v9 = CkptRestore(a2, &v11);
    if ( v9 )
    {
      v3 = 1;
      *v9 = v11;
      v9[1] = v12;
      v9[2] = v13;
      v9[3].left = v14;
    }
  }
  return v3;
}
