__int64 AMLIAddNamespaceOverride()
{
  int NamespaceOverride; // ebx
  int v1; // eax
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  if ( (gOverrideFlags & 0x20) == 0 )
    return 0;
  v1 = OSOpenAMLINamespaceOverrideHandle(&v5);
  NamespaceOverride = v1;
  if ( v1 == -1073741772 )
  {
    return 0;
  }
  else if ( v1 >= 0 )
  {
    if ( gpnsNameSpaceOverrideRoot )
    {
      return (unsigned int)-1073741637;
    }
    else
    {
      NamespaceOverride = NewObjOwner(gpheapGlobal, &gpNameSpaceOverrideOwner);
      if ( NamespaceOverride >= 0 )
      {
        v2 = NewNameSpaceObject(gpheapGlobal);
        gpnsNameSpaceOverrideRoot = v2;
        if ( v2 )
        {
          *(_DWORD *)(v2 + 40) = 1600085852;
          InsertOwnerObjList(gpNameSpaceOverrideOwner, v2);
          NamespaceOverride = AMLIAddNextNamespaceOverride(v5, gpnsNameSpaceOverrideRoot);
          OSCloseHandle(v5);
          DereferenceObjectEx(gpnsNameSpaceOverrideRoot, v3);
          if ( NamespaceOverride < 0 )
          {
            *(_WORD *)(gpnsNameSpaceOverrideRoot + 64) |= 4u;
            FreeOwnedObjects(gpNameSpaceOverrideOwner);
            FreeObjOwner(0LL, gpNameSpaceOverrideOwner);
            gpNameSpaceOverrideOwner = 0LL;
            gpnsNameSpaceOverrideRoot = 0LL;
          }
        }
        else
        {
          NamespaceOverride = -1073741670;
          LogError(3221225626LL);
          CatError("AMLIAddNamespaceOverride: fail to allocate name space object for override root");
        }
      }
    }
  }
  return (unsigned int)NamespaceOverride;
}
