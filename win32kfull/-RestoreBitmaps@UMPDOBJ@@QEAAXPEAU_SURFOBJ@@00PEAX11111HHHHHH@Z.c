void __fastcall UMPDOBJ::RestoreBitmaps(
        UMPDOBJ *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        void *a5,
        void *a6,
        void *a7,
        void *a8,
        void *a9,
        void *a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16)
{
  if ( a11 || a13 || a15 )
  {
    UMPDOBJ::bDeleteLargeBitmaps(
      this,
      (struct _SURFOBJ *)(a2 & -(__int64)(a12 != 0)),
      (struct _SURFOBJ *)(a3 & -(__int64)(a14 != 0)),
      (struct _SURFOBJ *)(a4 & -(__int64)(a16 != 0)));
    if ( a11 )
    {
      *(_QWORD *)(a2 + 48) = a5;
      *(_QWORD *)(a2 + 56) = a6;
    }
    if ( a13 )
    {
      *(_QWORD *)(a3 + 48) = a7;
      *(_QWORD *)(a3 + 56) = a8;
    }
    if ( a15 )
    {
      *(_QWORD *)(a4 + 48) = a9;
      *(_QWORD *)(a4 + 56) = a10;
    }
  }
}
