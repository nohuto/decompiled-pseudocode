__int64 __fastcall GreCreateDIBitmapReal(
        HDC a1,
        unsigned int a2,
        __int64 a3,
        unsigned int *a4,
        int a5,
        unsigned int a6,
        unsigned int a7,
        void *a8,
        unsigned int a9,
        void *a10,
        char a11,
        unsigned __int64 a12,
        _QWORD *a13)
{
  __int64 v14[3]; // [rsp+60h] [rbp-28h] BYREF
  __int16 v15; // [rsp+78h] [rbp-10h]

  v14[2] = 0LL;
  v14[1] = a7;
  v14[0] = a3;
  v15 = 0;
  return GreCreateDIBitmapReal(a1, a2, v14, a4, a5, a6, a8, a9, a10, a11, a12, a13);
}
