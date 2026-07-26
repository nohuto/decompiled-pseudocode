/*
 * XREFs of ?ndisSetNDKHandlers@@YAHPEAXPEAU_NDIS_DRIVER_OPTIONAL_HANDLERS@@@Z @ 0x1C0100980
 * Callers:
 *     NdisSetOptionalHandlers @ 0x1C0024530 (NdisSetOptionalHandlers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisSetNDKHandlers(_QWORD *a1, struct _NDIS_DRIVER_OPTIONAL_HANDLERS *a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( *(_BYTE *)a1 == 2 )
  {
    if ( a2->Header.Revision != 1 || a2->Header.Size < 0x18u || *(_DWORD *)&a2[1] )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      a1[102] = *(_QWORD *)&a2[2].Header.Type;
      a1[103] = *(_QWORD *)&a2[4].Header.Type;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v2;
}
