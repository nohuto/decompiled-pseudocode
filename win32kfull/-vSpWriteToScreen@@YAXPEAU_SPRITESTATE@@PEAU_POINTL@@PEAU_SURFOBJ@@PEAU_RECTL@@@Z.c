void __fastcall vSpWriteToScreen(struct _SPRITESTATE *a1, struct _POINTL *a2, struct _SURFOBJ *a3, struct _RECTL *a4)
{
  struct REGION *v4; // rbx
  __int64 v5; // rdi
  struct _CLIPOBJ *v10; // r15
  int v11; // eax
  int hsurf; // eax
  PVOID *p_pvScan0; // rbx
  __int64 v14; // rax
  int v15; // ecx
  struct _SURFOBJ *v16; // rdx
  struct _POINTL v17; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v18[4]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v19[52]; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v20; // [rsp+88h] [rbp-78h]
  __int64 v21; // [rsp+A0h] [rbp-60h]
  int v22; // [rsp+A8h] [rbp-58h]
  int v23; // [rsp+D0h] [rbp-30h]
  __int64 v24; // [rsp+E0h] [rbp-20h]
  int v25; // [rsp+E8h] [rbp-18h]

  v4 = (struct REGION *)*((_QWORD *)a1 + 129);
  v5 = 0LL;
  v21 = 0LL;
  v22 = 0;
  v23 = 1;
  v24 = 0LL;
  v20 = 0LL;
  v10 = 0LL;
  v25 = 0;
  if ( v4 )
  {
    v11 = bConcurrent(a1);
    ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)v18, v11, v4, (struct ERECTL *)a4, 0);
    if ( ERECTL::bEmpty((ERECTL *)v19) )
      goto LABEL_15;
    v10 = (struct _CLIPOBJ *)v18;
  }
  hsurf = (int)a3[1].hsurf;
  p_pvScan0 = 0LL;
  a3->iUniq = 0;
  if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
  {
    p_pvScan0 = &a3[-1].pvScan0;
    GreLockDisplayDevice(a3->hdev);
  }
  v14 = *((_QWORD *)a1 + 4);
  if ( v14 )
  {
    v15 = *(_DWORD *)(v14 + 88);
    if ( (v15 & 0x80004000) != 0 && (v15 & 0x200) == 0 )
    {
      v5 = v14 - 24;
      GreLockDisplayDevice(*(_QWORD *)(v14 - 24 + 48));
    }
  }
  v16 = (struct _SURFOBJ *)*((_QWORD *)a1 + 4);
  v17 = 0LL;
  INVOKEOFFCOPYBITS(&v17, v16, a2, a3, v10, 0LL, a4, (struct _POINTL *)a4);
  if ( v5 )
    GreUnlockDisplayDevice(*(_QWORD *)(v5 + 48));
  if ( p_pvScan0 )
    GreUnlockDisplayDevice(p_pvScan0[6]);
LABEL_15:
  ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED((ECLIPOBJTMPIFNEEDED *)v18);
}
