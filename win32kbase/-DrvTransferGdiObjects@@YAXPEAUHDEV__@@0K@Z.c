void __fastcall DrvTransferGdiObjects(struct SURFACE **a1, HDEV a2)
{
  __int64 v4; // rcx
  unsigned int v5; // esi
  SURFACE *v6; // rax
  unsigned int v7; // esi
  unsigned int v8; // esi
  __int64 v9; // rcx
  SURFACE *v10; // [rsp+40h] [rbp+20h] BYREF
  struct SURFACE **v11; // [rsp+48h] [rbp+28h] BYREF
  struct PDEV *v12; // [rsp+58h] [rbp+38h] BYREF

  WdLogSingleEntry3(4LL, a1, a2, 15LL);
  v11 = a1;
  v12 = (struct PDEV *)a2;
  GreAcquireHmgrSemaphore(v4);
  v5 = 0;
  v10 = 0LL;
  while ( 1 )
  {
    v5 = HmgSafeNextObjt(v5, 1, &v10);
    if ( !v5 )
      break;
    v6 = v10;
    if ( *((HDEV *)v10 + 6) == a2 )
    {
      *((_QWORD *)v10 + 6) = a1;
      *((_DWORD *)v6 + 9) &= ~0x2000u;
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v11);
      PDEVOBJ::vUnreferencePdev(&v12);
    }
  }
  v7 = 0;
  v10 = 0LL;
  while ( 1 )
  {
    v7 = HmgSafeNextObjt(v7, 5, &v10);
    if ( !v7 )
      break;
    if ( *((HDEV *)v10 + 6) == a2 )
      SURFACE::hdev(v10, (HDEV)a1);
  }
  v8 = 0;
  v10 = 0LL;
  while ( 1 )
  {
    v8 = HmgSafeNextObjt(v8, 28, &v10);
    if ( !v8 )
      break;
    if ( *((HDEV *)v10 + 5) == a2 )
    {
      *((_QWORD *)v10 + 5) = a1;
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v11);
      PDEVOBJ::vUnreferencePdev(&v12);
    }
  }
  vTransferWndObjs(a1[316], a2, (HDEV)a1);
  GreReleaseHmgrSemaphore(v9);
}
