__int64 __fastcall bScanFamily(
        struct FHOBJ *a1,
        unsigned int a2,
        struct FHOBJ *a3,
        unsigned int a4,
        struct FHOBJ *a5,
        unsigned int a6,
        struct EFSOBJ *a7,
        unsigned int a8,
        struct _EFFILTER_INFO *a9,
        unsigned __int16 *a10)
{
  unsigned int v10; // ebx

  v10 = 0;
  if ( (!a1 || bScanTheList(a1, a2, a7, a8, a9, a10))
    && (!a3 || bScanTheList(a3, a4, a7, a8, a9, a10))
    && (!a5 || bScanTheList(a5, a6, a7, a8, a9, a10)) )
  {
    return 1;
  }
  return v10;
}
