__int64 __fastcall hbmCreateDriverSurface(
        int a1,
        struct DHSURF__ *a2,
        struct tagSIZE a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        void *a7)
{
  __int64 v7; // rbx
  _QWORD v9[3]; // [rsp+40h] [rbp-18h] BYREF

  CreateDriverSurfMem((__int64)v9, a1, (__int64)a2, *(_QWORD *)&a3, a4, a5, a6, a7);
  v7 = 0LL;
  if ( v9[0] )
    v7 = *(_QWORD *)(v9[0] + 32LL);
  SURFMEM::~SURFMEM((SURFMEM *)v9);
  return v7;
}
