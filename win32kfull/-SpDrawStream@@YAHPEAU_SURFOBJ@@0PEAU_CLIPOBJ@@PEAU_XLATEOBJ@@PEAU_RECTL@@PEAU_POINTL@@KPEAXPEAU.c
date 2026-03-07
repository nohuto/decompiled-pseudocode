__int64 __fastcall SpDrawStream(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _POINTL *a6,
        unsigned int a7,
        void *a8,
        struct _DSSTATE *a9)
{
  int v9; // r13d
  unsigned int v10; // r15d
  HDEV hdev; // rax
  PVOID *p_pvScan0; // rbx
  struct _SURFOBJ *v13; // r14
  PVOID *v14; // rdi
  PVOID *v15; // rsi
  int hsurf; // eax
  HDEV v17; // rcx
  PVOID v18; // rcx
  struct _CLIPOBJ *v20; // [rsp+60h] [rbp-A0h] BYREF
  struct _POINTL v21; // [rsp+68h] [rbp-98h] BYREF
  struct _SURFOBJ *v22; // [rsp+70h] [rbp-90h] BYREF
  PVOID *v23; // [rsp+78h] [rbp-88h] BYREF
  __int64 v24; // [rsp+80h] [rbp-80h]
  __int64 v25; // [rsp+88h] [rbp-78h]
  __int64 v26; // [rsp+90h] [rbp-70h]
  __int64 v27; // [rsp+98h] [rbp-68h]
  __int64 v28; // [rsp+A0h] [rbp-60h]
  _BYTE v29[912]; // [rsp+B0h] [rbp-50h] BYREF

  v9 = (int)a2;
  v21 = 0LL;
  v10 = 1;
  v26 = (__int64)a6;
  v25 = (__int64)a8;
  v24 = (__int64)a9;
  hdev = a2->hdev;
  v28 = (__int64)a4;
  v22 = a1;
  v20 = a3;
  v27 = (__int64)a5;
  if ( !hdev || *((struct _SURFOBJ **)hdev + 14) != a2 )
  {
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v29, a1, a3, a5);
    if ( !(unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v29, &v22, &v21, &v20) )
      return v10;
    while ( 1 )
    {
      v23 = 0LL;
      p_pvScan0 = 0LL;
      v13 = v22;
      v14 = 0LL;
      v15 = 0LL;
      if ( v22 )
      {
        hsurf = (int)v22[1].hsurf;
        if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
        {
          p_pvScan0 = &v22[-1].pvScan0;
          v17 = v22->hdev;
          v14 = &v22[-1].pvScan0;
          v23 = &v22[-1].pvScan0;
          GreLockDisplayDevice(v17);
          v15 = &v13[-1].pvScan0;
        }
      }
      if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v23, &v20) )
      {
        v10 &= OffDrawStream((int)EngDrawStream, (int)&v21, (int)v13, v9, v20, v28, v27, v26, a7, v25, v24);
        if ( p_pvScan0 )
        {
          v18 = v15[6];
          goto LABEL_14;
        }
      }
      else if ( p_pvScan0 )
      {
        v18 = v14[6];
LABEL_14:
        GreUnlockDisplayDevice(v18);
      }
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v29, &v22, &v21, &v20) )
        return v10;
    }
  }
  DbgPrint("SpDrawStream: source is the screen, this should never happen\n");
  return v10;
}
