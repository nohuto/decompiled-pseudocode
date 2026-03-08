/*
 * XREFs of SepGetSidManagementActionName @ 0x1409C6BF4
 * Callers:
 *     SepLogTokenSidManagement @ 0x1409C6C70 (SepLogTokenSidManagement.c)
 * Callees:
 *     <none>
 */

wchar_t *__fastcall SepGetSidManagementActionName(int a1, _DWORD *a2)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx

  *a2 = 0;
  if ( a1 )
  {
    v2 = a1 - 1;
    if ( v2 )
    {
      v3 = v2 - 1;
      if ( v3 )
      {
        v4 = v3 - 1;
        if ( v4 )
        {
          if ( v4 == 1 )
          {
            *a2 = 60;
            return aUnassignedFrom;
          }
          else
          {
            *a2 = 24;
            return aDeallocated;
          }
        }
        else
        {
          *a2 = 44;
          return aUnassignedFrom_0;
        }
      }
      else
      {
        *a2 = 50;
        return aAssignedExisti;
      }
    }
    else
    {
      *a2 = 34;
      return aAssignedNewOwn;
    }
  }
  else
  {
    *a2 = 40;
    return aAssignedNewSha;
  }
}
