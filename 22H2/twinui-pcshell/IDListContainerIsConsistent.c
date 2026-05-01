/*
 * XREFs of IDListContainerIsConsistent @ 0x1801465E4
 * Callers:
 *     PropVariantToIDList @ 0x180146634 (PropVariantToIDList.c)
 * Callees:
 *     <none>
 */

BOOL __stdcall IDListContainerIsConsistent(LPCITEMIDLIST pidl, UINT cbAlloc)
{
  BOOL v2; // r8d
  UINT v3; // r9d
  UINT cb; // r10d

  v2 = 0;
  v3 = 2;
  if ( cbAlloc >= 2 )
  {
    do
    {
      if ( pidl->mkid.cb < 2u )
        break;
      cb = pidl->mkid.cb;
      if ( cb > cbAlloc - v3 )
        break;
      v3 += cb;
      pidl = (LPCITEMIDLIST)((char *)pidl + pidl->mkid.cb);
    }
    while ( v3 <= cbAlloc );
    if ( v3 <= cbAlloc && !pidl->mkid.cb )
      return 1;
  }
  return v2;
}
