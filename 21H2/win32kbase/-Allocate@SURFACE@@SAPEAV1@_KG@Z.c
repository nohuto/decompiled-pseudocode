/*
 * XREFs of ?Allocate@SURFACE@@SAPEAV1@_KG@Z @ 0x1C007F630
 * Callers:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00267F0 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 * Callees:
 *     ??$FreeIsolatedType@V?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C002A4A0 (--$FreeIsolatedType@V-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z @ 0x1C007F6C0 (-AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

struct _SLIST_ENTRY *__fastcall SURFACE::Allocate()
{
  __int64 v0; // rdi
  struct _SLIST_ENTRY *v1; // rbx

  v0 = (__int64)*gpTypeIsolation;
  if ( *gpTypeIsolation )
  {
    ++*(_DWORD *)(v0 + 68);
    v1 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v0 + 48));
    if ( !v1 )
    {
      ++*(_DWORD *)(v0 + 72);
      v1 = (struct _SLIST_ENTRY *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v0 + 96))(
                                    *(unsigned int *)(v0 + 84),
                                    *(unsigned int *)(v0 + 92),
                                    *(unsigned int *)(v0 + 88),
                                    v0 + 48);
    }
  }
  else
  {
    v1 = 0LL;
  }
  if ( !v1 )
    return 0LL;
  if ( !(unsigned __int8)AcquireReferenceCountedObjectHandle(0LL, v1, &v1[42].Next + 1) )
  {
    FreeIsolatedType<NSInstrumentation::CLookAsideTypeIsolation<180224,704>>(v1);
    return 0LL;
  }
  return v1;
}
