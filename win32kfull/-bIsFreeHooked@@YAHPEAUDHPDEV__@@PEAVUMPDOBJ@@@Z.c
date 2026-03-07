_BOOL8 __fastcall bIsFreeHooked(struct DHPDEV__ *a1, struct UMPDOBJ *a2)
{
  _BOOL8 result; // rax

  result = 1LL;
  if ( !*((_DWORD *)a2 + 106) )
    return *(_QWORD *)(*(_QWORD *)a1 + 408LL) != 0LL;
  return result;
}
