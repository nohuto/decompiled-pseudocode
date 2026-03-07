__int64 __fastcall GreSetBitmapContentOwner(__int64 a1, __int64 a2, int a3)
{
  unsigned int v6; // edi
  __int64 v7; // rdx
  SURFACE *v8; // rax
  SURFACE *v9; // rbx
  int v10; // edx
  __int64 v12; // [rsp+20h] [rbp-10h] BYREF
  SURFACE *v13; // [rsp+68h] [rbp+38h] BYREF

  v6 = 0;
  if ( (unsigned int)GreSetBitmapOwner(a1, 0LL) )
  {
    LOBYTE(v7) = 5;
    v8 = (SURFACE *)HmgShareLockCheck(a1, v7);
    v13 = v8;
    if ( v8 )
    {
      if ( (*((_DWORD *)v8 + 28) & 0x800) != 0 )
      {
        v9 = 0LL;
        if ( v8 != (SURFACE *)-24LL )
        {
          v10 = *((_DWORD *)v8 + 28);
          if ( (v10 & 0x80004000) != 0 && (v10 & 0x200) == 0 )
          {
            v9 = v8;
            GreLockDisplayDevice(*((_QWORD *)v8 + 6));
            v8 = v13;
          }
        }
        W32PIDLOCK::vLockSingleThread((SURFACE *)((char *)v8 + 272));
        v12 = *((_QWORD *)v13 + 6);
        PDEVOBJ::vSync((PDEVOBJ *)&v12, (struct _SURFOBJ *)((char *)v13 + 24), 0LL, 2u);
        if ( a2 != -1 )
          *((_QWORD *)v13 + 81) = a2;
        *((_DWORD *)v13 + 164) = a3;
        W32PIDLOCK::vUnlockSingleThread((SURFACE *)((char *)v13 + 272));
        v6 = 1;
        if ( a3 && (unsigned int)SURFACE::Map(v13, &v13) <= 1 )
          SURFACE::bUnMap(v13, &v13, 0LL);
        if ( v9 )
          GreUnlockDisplayDevice(*((_QWORD *)v9 + 6));
        v8 = v13;
      }
      if ( v8 )
        DEC_SHARE_REF_CNT(v8);
    }
  }
  return v6;
}
