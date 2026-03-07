void __fastcall vSpWriteToExMirror(struct _SPRITESTATE *a1, struct _POINTL *a2, struct _SURFOBJ *a3, struct _RECTL *a4)
{
  struct _CLIPOBJ *v4; // rax
  struct REGION *v9; // r14
  int v10; // eax
  struct _POINTL v11; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v12[4]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v13[52]; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v14; // [rsp+88h] [rbp-78h]
  __int64 v15; // [rsp+A0h] [rbp-60h]
  int v16; // [rsp+A8h] [rbp-58h]
  int v17; // [rsp+D0h] [rbp-30h]
  __int64 v18; // [rsp+E0h] [rbp-20h]
  int v19; // [rsp+E8h] [rbp-18h]

  v15 = 0LL;
  v4 = 0LL;
  v16 = 0;
  v18 = 0LL;
  v14 = 0LL;
  v19 = 0;
  v9 = (struct REGION *)*((_QWORD *)a1 + 129);
  v17 = 1;
  if ( !v9 )
    goto LABEL_4;
  v10 = bConcurrent(a1);
  ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)v12, v10, v9, (struct ERECTL *)a4, 0);
  if ( !ERECTL::bEmpty((ERECTL *)v13) )
  {
    v4 = (struct _CLIPOBJ *)v12;
LABEL_4:
    a3->iUniq = 0;
    v11 = 0LL;
    INVOKEOFFCOPYBITS(&v11, *((struct _SURFOBJ **)a1 + 166), a2, a3, v4, 0LL, a4, (struct _POINTL *)a4);
  }
  ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED((ECLIPOBJTMPIFNEEDED *)v12);
}
