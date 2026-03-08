/*
 * XREFs of ?_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z @ 0x1C01F50B4
 * Callers:
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F5BBC (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F687C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 * Callees:
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 *     CkptRestore @ 0x1C0100A4C (CkptRestore.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall _CopyWindowCheckpoint(struct tagWND *a1, struct tagWND *a2)
{
  unsigned int v3; // ebx
  __int64 Prop; // rax
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  int v8; // eax
  _DWORD *v9; // rax
  __int128 v11; // [rsp+20h] [rbp-40h] BYREF
  __int128 v12; // [rsp+30h] [rbp-30h]
  __int128 v13; // [rsp+40h] [rbp-20h] BYREF
  int v14; // [rsp+50h] [rbp-10h]

  v3 = 0;
  Prop = GetProp((__int64)a1, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1u);
  if ( Prop )
  {
    v6 = *(_OWORD *)(Prop + 16);
    v11 = *(_OWORD *)Prop;
    v7 = *(_OWORD *)(Prop + 32);
    v8 = *(_DWORD *)(Prop + 48);
    v12 = v6;
    v14 = v8;
    v13 = v7;
    if ( (unsigned int)IsWindowDesktopComposed(a1) )
    {
      TransformRectBetweenCoordinateSpaces(&v11, &v11, a2, a1);
      TransformPointBetweenCoordinateSpaces(&v13, &v13, a2, a1);
      TransformPointBetweenCoordinateSpaces((char *)&v13 + 8, (char *)&v13 + 8, a2, a1);
    }
    v9 = CkptRestore(a2, &v11);
    if ( v9 )
    {
      v3 = 1;
      *(_OWORD *)v9 = v11;
      *((_OWORD *)v9 + 1) = v12;
      *((_OWORD *)v9 + 2) = v13;
      v9[12] = v14;
    }
  }
  return v3;
}
