int __fastcall bScanTheList(
        struct FHOBJ *a1,
        int a2,
        struct EFSOBJ *a3,
        unsigned int a4,
        struct _EFFILTER_INFO *a5,
        unsigned __int16 *a6)
{
  int result; // eax
  int v8; // esi

  if ( a6 )
    return FHOBJ::bScanLists(a1, a3, a6, a4, a5);
  v8 = 0;
  if ( a2 == 1 )
  {
    v8 = *((_DWORD *)a5 + 4);
    *((_DWORD *)a5 + 4) = 1;
  }
  else if ( a2 == 2 )
  {
    *((_DWORD *)a5 + 3) = 1;
  }
  result = FHOBJ::bScanLists(a1, a3, a4, a5);
  if ( a2 == 1 )
  {
    *((_DWORD *)a5 + 4) = v8;
  }
  else if ( a2 == 2 )
  {
    *((_DWORD *)a5 + 3) = 0;
  }
  return result;
}
