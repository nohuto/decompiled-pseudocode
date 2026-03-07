CD2DTarget *__fastcall CD2DTarget::CD2DTarget(
        CD2DTarget *this,
        const struct ID2DContextOwner *a2,
        struct CD2DFactory *a3,
        struct IDeviceTarget *a4,
        struct ID2D1Bitmap1 *a5,
        struct ID2D1PrivateDepthBuffer *a6)
{
  char *v7; // rcx

  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 18) = 0;
  *(_QWORD *)this = a2;
  *((_QWORD *)this + 1) = a3;
  *((_QWORD *)this + 3) = a4;
  if ( a4 )
  {
    v7 = (char *)a4 + *(int *)(*((_QWORD *)a4 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  *((_QWORD *)this + 4) = a5;
  if ( a5 )
    (*(void (__fastcall **)(struct ID2D1Bitmap1 *))(*(_QWORD *)a5 + 8LL))(a5);
  *((_QWORD *)this + 5) = a6;
  if ( a6 )
    (*(void (__fastcall **)(struct ID2D1PrivateDepthBuffer *))(*(_QWORD *)a6 + 8LL))(a6);
  return this;
}
