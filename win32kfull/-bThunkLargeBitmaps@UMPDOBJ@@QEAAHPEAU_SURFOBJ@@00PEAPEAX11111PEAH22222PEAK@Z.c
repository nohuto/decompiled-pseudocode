__int64 __fastcall UMPDOBJ::bThunkLargeBitmaps(
        UMPDOBJ *this,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _SURFOBJ *a4,
        void **a5,
        void **a6,
        void **a7,
        void **a8,
        void **a9,
        void **a10,
        int *a11,
        int *a12,
        int *a13,
        int *a14,
        int *a15,
        int *a16,
        unsigned int *a17)
{
  struct _SURFOBJ *v17; // rdi
  struct _SURFOBJ *v18; // rbx
  struct _SURFOBJ *v19; // rsi
  unsigned int v22; // ebp

  v17 = a4;
  v18 = a3;
  v19 = a2;
  if ( !a2 && !a3 && !a4 )
    return 1LL;
  v22 = UMPDOBJ::bThunkLargeBitmap(this, a2, a5, a6, a11, a12, a17);
  if ( !v22
    || (v22 = UMPDOBJ::bThunkLargeBitmap(this, v18, a7, a8, a13, a14, a17)) == 0
    || (v22 = UMPDOBJ::bThunkLargeBitmap(this, v17, a9, a10, a15, a16, a17)) == 0 )
  {
    if ( !a16 || !*a16 )
      v17 = 0LL;
    if ( !a14 || !*a14 )
      v18 = 0LL;
    if ( !a12 || !*a12 )
      v19 = 0LL;
    UMPDOBJ::bDeleteLargeBitmaps(this, v19, v18, v17);
  }
  return v22;
}
