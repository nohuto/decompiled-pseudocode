void __fastcall vSrcOpaqCopyS4D32(
        const unsigned __int8 *a1,
        int a2,
        int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        unsigned int a10,
        struct SURFACE *a11)
{
  __int64 v15; // [rsp+60h] [rbp-18h] BYREF

  v15 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 32) + 13280LL);
  GreAcquireSemaphore(v15);
  vSrcOpaqCopyS4D32Unsave(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
  SEMOBJ::vUnlock((SEMOBJ *)&v15);
}
