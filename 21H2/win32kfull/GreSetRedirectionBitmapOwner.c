/*
 * XREFs of GreSetRedirectionBitmapOwner @ 0x1C01182CC
 * Callers:
 *     CreateOrGetRedirectionBitmap @ 0x1C00BF148 (CreateOrGetRedirectionBitmap.c)
 *     ChangeRedirectionBitmapOwner @ 0x1C01E7CB4 (ChangeRedirectionBitmapOwner.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C008393C (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetRedirectionBitmapOwner(HSURF a1, __int64 a2, int a3)
{
  unsigned int v6; // edi
  __int64 v7; // rdx
  SURFACE *v8; // rcx
  SURFACE *v9; // rbx
  int v10; // edx
  _BYTE v12[32]; // [rsp+20h] [rbp-30h] BYREF
  SURFACE *v13; // [rsp+40h] [rbp-10h]
  __int64 v14; // [rsp+88h] [rbp+38h] BYREF

  v6 = 0;
  if ( (unsigned int)GreSetBitmapOwner(a1, 0LL) )
  {
    SURFREF::SURFREF((SURFREF *)v12, a1);
    v8 = v13;
    if ( v13 )
    {
      if ( (*((_DWORD *)v13 + 28) & 0x800) != 0 )
      {
        v9 = 0LL;
        if ( v13 != (SURFACE *)-24LL )
        {
          v10 = *((_DWORD *)v13 + 28);
          if ( (v10 & 0x80004000) != 0 && (v10 & 0x200) == 0 )
          {
            v9 = v13;
            GreLockDisplayDevice(*((_QWORD *)v13 + 6));
            v8 = v13;
          }
        }
        W32PIDLOCK::vLockSingleThread((SURFACE *)((char *)v8 + 272));
        v14 = *((_QWORD *)v13 + 6);
        PDEVOBJ::vSync((PDEVOBJ *)&v14, (struct _SURFOBJ *)((char *)v13 + 24), 0LL, 2u);
        if ( a2 != -1 )
          *((_QWORD *)v13 + 81) = a2;
        *((_DWORD *)v13 + 164) = a3;
        W32PIDLOCK::vUnlockSingleThread((SURFACE *)((char *)v13 + 272));
        v6 = 1;
        if ( a3 && (unsigned int)SURFACE::Map(v13, v12) <= 1 )
          SURFACE::bUnMap(v13, v12, 0LL);
        if ( v9 )
          GreUnlockDisplayDevice(*((_QWORD *)v9 + 6));
        v8 = v13;
      }
      if ( v8 )
        DEC_SHARE_REF_CNT(v8, v7);
    }
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v12);
  }
  return v6;
}
