void __fastcall AMLIRemoveNativeObjectsFromNamespace(__int64 *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  KIRQL v4; // di
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  v2 = 0LL;
  v6 = 0LL;
  if ( (int)NewObjOwner(gpheapGlobal, &v5) >= 0 )
  {
    if ( (int)NewObjOwner(gpheapGlobal, &v6) < 0 )
    {
      v2 = v6;
    }
    else
    {
      v3 = *a1;
      v4 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
      MarkNativeObjectsDefunct(v3, 0LL);
      v2 = v6;
      MigrateDefunctObjectsToNewOwner(gpNativeNameSpaceOwner, v6);
      MigrateDefunctObjectsToNewOwner(v2, v5);
      ExReleaseSpinLockExclusive(&ACPINamespaceLock, v4);
    }
  }
  if ( v5 )
  {
    FreeOwnedObjects(v5);
    FreeObjOwner(0LL, v5);
  }
  if ( v2 )
  {
    FreeOwnedObjects(v2);
    FreeObjOwner(0LL, v2);
  }
}
