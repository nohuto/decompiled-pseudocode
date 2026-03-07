__int64 __fastcall AMLIReadNamespaceOverrideObject(__int64 a1, __int64 a2, __int64 a3)
{
  int Object; // edi
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0LL;
  Object = AMLIGetNamespaceOverrideObject(a2, &v9);
  if ( Object >= 0 )
  {
    v6 = v9;
    Object = ReadObject(a1, v9 + 64, a3);
    DereferenceObjectEx(v6, v7);
  }
  return (unsigned int)Object;
}
