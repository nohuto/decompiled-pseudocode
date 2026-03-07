__int64 __fastcall AMLIGetNamespaceOverrideObject(__int64 a1, _QWORD *a2)
{
  int NameSpaceObject; // ebx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  int Src; // [rsp+30h] [rbp-18h] BYREF
  char v10; // [rsp+34h] [rbp-14h]

  v8 = 0LL;
  NameSpaceObject = 0;
  v7 = 0LL;
  if ( a1 == gpnsNameSpaceRoot )
  {
    if ( gpnsNameSpaceOverrideRoot )
    {
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(gpnsNameSpaceOverrideRoot + 112));
      *a2 = gpnsNameSpaceOverrideRoot;
    }
    else
    {
      return (unsigned int)-1073741595;
    }
  }
  else
  {
    NameSpaceObject = GetNameSpaceObject((void *)"^");
    if ( NameSpaceObject >= 0 )
    {
      NameSpaceObject = AMLIGetNamespaceOverrideObject(v8, &v7);
      if ( NameSpaceObject >= 0 )
      {
        Src = *(_DWORD *)(a1 + 40);
        v10 = 0;
        NameSpaceObject = GetNameSpaceObject(&Src);
        DereferenceObjectEx(v7, v5);
      }
      DereferenceObjectEx(v8, v4);
    }
  }
  return (unsigned int)NameSpaceObject;
}
