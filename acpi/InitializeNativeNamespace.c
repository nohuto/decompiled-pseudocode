/*
 * XREFs of InitializeNativeNamespace @ 0x1C0049FD4
 * Callers:
 *     AMLIInitialize @ 0x1C00AAAB0 (AMLIInitialize.c)
 * Callees:
 *     CreateNativeNameSpaceObject @ 0x1C0049D38 (CreateNativeNameSpaceObject.c)
 *     InsertOwnerObjList @ 0x1C004BDF0 (InsertOwnerObjList.c)
 *     NewObjOwner @ 0x1C004C324 (NewObjOwner.c)
 *     NewNameSpaceObject @ 0x1C004FDF0 (NewNameSpaceObject.c)
 */

__int64 InitializeNativeNamespace()
{
  __int64 v0; // rcx
  __int64 v1; // rax
  __int64 v2; // r9
  unsigned int v3; // edi
  __int64 v4; // rbx
  int v5; // eax
  __int64 v7; // [rsp+20h] [rbp-28h]
  __int64 v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+30h] [rbp-18h]
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v10 = 0LL;
  LODWORD(v0) = NewObjOwner(gpheapGlobal, &gpNativeNameSpaceOwner);
  if ( (int)v0 >= 0 )
  {
    v1 = NewNameSpaceObject(gpheapGlobal);
    gpnsNativeNameSpaceOverrideRoot = v1;
    if ( v1 )
    {
      *(_DWORD *)(v1 + 40) = 1600085852;
      InsertOwnerObjList(gpNativeNameSpaceOwner, v1);
      v3 = 0;
      v4 = 0LL;
      do
      {
        v5 = CreateNativeNameSpaceObject(v0, apszDefinedRootObjs[v4], 0LL, v2, v7, v8, v9, &v10);
        v0 = (unsigned int)v5;
        if ( v5 < 0 )
          break;
        ++v3;
        *(_QWORD *)((char *)&AmliNativePreDefinedRootObjects + v4 * 8) = v10;
        ++v4;
      }
      while ( v3 < 5 );
    }
    else
    {
      LODWORD(v0) = -1073741670;
    }
  }
  return (unsigned int)v0;
}
