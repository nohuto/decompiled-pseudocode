/*
 * XREFs of ?CitpParameterGetString@@YAJPEAXPEBGPEAPEBG@Z @ 0x1C00A5814
 * Callers:
 *     ?CitpPostUpdateUseInfoGetUpdateKey@@YAJPEAI@Z @ 0x1C00A5660 (-CitpPostUpdateUseInfoGetUpdateKey@@YAJPEAI@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z @ 0x1C00A5E10 (-CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z.c)
 *     ?CitpRegistryGetValue@@YAJPEAXPEBGPEAPEAU_KEY_VALUE_PARTIAL_INFORMATION@@@Z @ 0x1C00A5EDC (-CitpRegistryGetValue@@YAJPEAXPEBGPEAPEAU_KEY_VALUE_PARTIAL_INFORMATION@@@Z.c)
 */

__int64 __fastcall CitpParameterGetString(void *a1, const unsigned __int16 *a2, unsigned __int16 **a3)
{
  int Value; // eax
  char *v5; // rdi
  int v6; // ebx
  unsigned __int16 *v7; // rdx
  unsigned __int16 *v9; // [rsp+38h] [rbp+10h] BYREF
  void *v10; // [rsp+48h] [rbp+20h] BYREF

  v10 = 0LL;
  v9 = 0LL;
  Value = CitpRegistryGetValue(a1, a2, (struct _KEY_VALUE_PARTIAL_INFORMATION **)&v10);
  v5 = (char *)v10;
  v6 = Value;
  if ( Value >= 0 )
  {
    v6 = CitpStringDuplicate(&v9, (const unsigned __int16 *)v10 + 6, (unsigned __int64)*((unsigned int *)v10 + 2) >> 1);
    if ( v6 < 0 )
    {
      v7 = v9;
    }
    else
    {
      v7 = 0LL;
      *a3 = v9;
      v6 = 0;
    }
    if ( v7 )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        (char *)v7);
  }
  if ( v5 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v5);
  return (unsigned int)v6;
}
