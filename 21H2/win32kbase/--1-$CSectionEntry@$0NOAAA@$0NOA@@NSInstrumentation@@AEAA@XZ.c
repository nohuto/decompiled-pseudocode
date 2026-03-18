/*
 * XREFs of ??1?$CSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@AEAA@XZ @ 0x1C00D9760
 * Callers:
 *     ?Destroy@?$CSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00D9DD8 (-Destroy@-$CSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 * Callees:
 *     ?Destroy@?$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00D9D60 (-Destroy@-$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

int __fastcall NSInstrumentation::CSectionEntry<909312,3552>::~CSectionEntry<909312,3552>(_QWORD *a1)
{
  void *v2; // rcx
  int result; // eax
  void *v4; // rcx
  void *v5; // rcx

  v2 = (void *)a1[4];
  if ( v2 )
  {
    result = NSInstrumentation::CSectionBitmapAllocator<909312,3552>::Destroy(v2);
    a1[4] = 0LL;
  }
  v4 = (void *)a1[3];
  if ( v4 )
  {
    result = MmUnmapViewInSessionSpace(v4);
    a1[3] = 0LL;
  }
  v5 = (void *)a1[2];
  if ( v5 )
  {
    result = ObfDereferenceObject(v5);
    a1[2] = 0LL;
  }
  return result;
}
