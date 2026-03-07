void __fastcall vSrcTranCopyS8D16New(
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
        struct SURFACE *a11,
        void (*a12)(const unsigned __int8 *, unsigned __int8 *, unsigned __int8 *, int, unsigned __int16 **),
        unsigned __int8 *a13)
{
  void (*v17)(const unsigned __int8 *, unsigned __int8 *, unsigned __int8 *, int, unsigned __int16 **); // [rsp+58h] [rbp-20h]

  a12 = *(void (**)(const unsigned __int8 *, unsigned __int8 *, unsigned __int8 *, int, unsigned __int16 **))(*(_QWORD *)(SGDGetSessionState(a1) + 32) + 13280LL);
  GreAcquireSemaphore(a12);
  vSrcTranCopyS8D16NewUnsafe(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, v17, a13);
  SEMOBJ::vUnlock((SEMOBJ *)&a12);
}
