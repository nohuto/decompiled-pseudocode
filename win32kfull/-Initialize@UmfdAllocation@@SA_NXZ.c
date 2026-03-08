/*
 * XREFs of ?Initialize@UmfdAllocation@@SA_NXZ @ 0x1C00E7460
 * Callers:
 *     UmfdSessionInitialize @ 0x1C00E6FB0 (UmfdSessionInitialize.c)
 * Callees:
 *     ?Uninitialize@UmfdAllocation@@SAXXZ @ 0x1C0092938 (-Uninitialize@UmfdAllocation@@SAXXZ.c)
 *     ?Create@CPointerHashTable@NSInstrumentation@@SAPEAV12@_N@Z @ 0x1C00E74C4 (-Create@CPointerHashTable@NSInstrumentation@@SAPEAV12@_N@Z.c)
 */

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
