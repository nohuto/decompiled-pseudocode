__int64 *HalpMmAllocCtxInit()
{
  __int64 *result; // rax

  qword_140C63A50 = 0LL;
  result = &HalpNPPoolAllocCtx;
  qword_140C63A48 = (__int64)&HalpNPPoolAllocCtx;
  HalpNPPoolAllocCtx = (__int64)&HalpNPPoolAllocCtx;
  return result;
}
