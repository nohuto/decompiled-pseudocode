void __fastcall vLoadFontFileView(
        unsigned __int16 *a1,
        unsigned int a2,
        struct _FONTFILEVIEW **a3,
        unsigned int a4,
        void **a5,
        unsigned int *a6,
        struct tagDESIGNVECTOR *a7,
        unsigned int a8,
        unsigned __int64 *a9,
        struct PDEV **a10,
        struct _FNTCHECKSUM *a11,
        int a12,
        int *a13)
{
  Gre::Base *v17; // rcx
  __int64 v18; // [rsp+70h] [rbp-18h] BYREF

  UmfdHostLifeTimeManager::EnsureUmfdHost((__int64)a1);
  v18 = *((_QWORD *)Gre::Base::Globals(v17) + 8);
  GreAcquireSemaphore(v18);
  *((_DWORD *)a11 + 1) = 0;
  *(_DWORD *)a11 = 0;
  UmfdLoadFontFileView(a1, a2, a3, a4, (char)a5, (char)a6, a7, a8, (__int64 *)a9, a10, (unsigned int *)a11, a12, a13);
  SEMOBJ::vUnlock((SEMOBJ *)&v18);
}
