/*
 * XREFs of ?_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z @ 0x1C01F3EB4
 * Callers:
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F49BC (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F56B0 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 * Callees:
 *     CkptRestore @ 0x1C00C7A4C (CkptRestore.c)
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 */

__int64 __fastcall _CopyWindowCheckpoint(struct tagWND *a1, struct tagWND *a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  __int64 Prop; // rax
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  int v10; // eax
  _DWORD *v11; // rax
  __int128 v13; // [rsp+20h] [rbp-40h] BYREF
  __int128 v14; // [rsp+30h] [rbp-30h]
  __int128 v15; // [rsp+40h] [rbp-20h] BYREF
  int v16; // [rsp+50h] [rbp-10h]

  v5 = 0;
  Prop = GetProp((__int64)a1, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL, a4);
  if ( Prop )
  {
    v8 = *(_OWORD *)(Prop + 16);
    v13 = *(_OWORD *)Prop;
    v9 = *(_OWORD *)(Prop + 32);
    v10 = *(_DWORD *)(Prop + 48);
    v14 = v8;
    v16 = v10;
    v15 = v9;
    if ( (unsigned int)IsWindowDesktopComposed(a1) )
    {
      TransformRectBetweenCoordinateSpaces(&v13, &v13, a2, a1);
      TransformPointBetweenCoordinateSpaces(&v15, &v15, a2, a1);
      TransformPointBetweenCoordinateSpaces((char *)&v15 + 8, (char *)&v15 + 8, a2, a1);
    }
    v11 = CkptRestore(a2, &v13);
    if ( v11 )
    {
      v5 = 1;
      *(_OWORD *)v11 = v13;
      *((_OWORD *)v11 + 1) = v14;
      *((_OWORD *)v11 + 2) = v15;
      v11[12] = v16;
    }
  }
  return v5;
}
