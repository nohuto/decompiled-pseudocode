__int64 __fastcall bScanFamilyAndFace(
        struct FHOBJ *a1,
        struct FHOBJ *a2,
        struct FHOBJ *a3,
        struct FHOBJ *a4,
        struct EFSOBJ *a5,
        unsigned int a6,
        struct _EFFILTER_INFO *a7,
        unsigned __int16 *a8)
{
  unsigned int v8; // ebx

  v8 = 0;
  if ( bScanFamily(a3, 0, a1, 0, 0LL, 0, a5, a6, a7, a8) )
  {
    if ( *(_QWORD *)(*(_QWORD *)a5 + 40LL) == *(_QWORD *)a5 + 68LL )
      return (unsigned int)bScanFamily(a4, 0, a2, 0, 0LL, 0, a5, a6, a7, a8);
    else
      return 1;
  }
  return v8;
}
