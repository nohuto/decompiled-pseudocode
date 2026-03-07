__int64 __fastcall Simulator_EvaluateNode(__int64 a1)
{
  unsigned int NameSpaceObject; // esi
  __int64 v2; // rdx

  NameSpaceObject = GetNameSpaceObject(*(void **)(a1 + 16));
  DereferenceObjectEx(0LL, v2);
  return NameSpaceObject;
}
