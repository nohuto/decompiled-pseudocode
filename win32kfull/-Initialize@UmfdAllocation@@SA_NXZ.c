char __fastcall UmfdAllocation::Initialize(__int64 a1)
{
  struct NSInstrumentation::CPointerHashTable **v1; // rbx
  bool v2; // cl
  struct NSInstrumentation::CPointerHashTable *v3; // rax
  struct NSInstrumentation::CPointerHashTable *v4; // rax
  __int64 v5; // rcx

  v1 = *(struct NSInstrumentation::CPointerHashTable ***)(SGDGetSessionState(a1) + 40);
  v3 = NSInstrumentation::CPointerHashTable::Create(v2);
  *v1 = v3;
  if ( v3 )
  {
    v4 = (struct NSInstrumentation::CPointerHashTable *)EngAllocMem(0, 8u, 0x61646647u);
    v1[1] = v4;
    if ( v4 )
    {
      *(_QWORD *)v4 = 0LL;
      return 1;
    }
    UmfdAllocation::Uninitialize(v5);
  }
  return 0;
}
