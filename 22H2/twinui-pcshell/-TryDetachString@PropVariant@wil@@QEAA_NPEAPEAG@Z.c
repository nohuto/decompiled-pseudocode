/*
 * XREFs of ?TryDetachString@PropVariant@wil@@QEAA_NPEAPEAG@Z @ 0x1804D6864
 * Callers:
 *     ??$GetAsString@U_tagpropertykey@@@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpropertykey@@PEAPEAG@Z @ 0x18012A2F4 (--$GetAsString@U_tagpropertykey@@@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpro.c)
 *     ??$GetString@U_tagpropertykey@@@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpropertykey@@PEAPEAG@Z @ 0x1804D62EC (--$GetString@U_tagpropertykey@@@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagprope.c)
 * Callees:
 *     <none>
 */

char __fastcall wil::PropVariant::TryDetachString(wil::PropVariant *this, unsigned __int16 **a2)
{
  char result; // al
  unsigned __int16 *v3; // r8

  result = 0;
  *a2 = 0LL;
  if ( *(_WORD *)this == 31 )
  {
    v3 = (unsigned __int16 *)*((_QWORD *)this + 1);
    if ( v3 )
    {
      *a2 = v3;
      *(_OWORD *)this = 0LL;
      *((_QWORD *)this + 2) = 0LL;
      return 1;
    }
  }
  return result;
}
