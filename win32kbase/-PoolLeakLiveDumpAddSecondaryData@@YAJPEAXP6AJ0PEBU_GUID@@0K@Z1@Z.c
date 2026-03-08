/*
 * XREFs of ?PoolLeakLiveDumpAddSecondaryData@@YAJPEAXP6AJ0PEBU_GUID@@0K@Z1@Z @ 0x1C017D5CC
 * Callers:
 *     ?PoolLeakLiveDumpCallback@@YAJPEAXP6AJ0PEBU_GUID@@0K@ZK_K3330@Z @ 0x1C017D6E0 (-PoolLeakLiveDumpCallback@@YAJPEAXP6AJ0PEBU_GUID@@0K@ZK_K3330@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     ?Dump@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAU_DUMP_CONTEXT@2@@Z @ 0x1C019B098 (-Dump@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAU_DUMP_CONTEXT@2@@Z.c)
 */

__int64 __fastcall PoolLeakLiveDumpAddSecondaryData(
        NSInstrumentation::CLeakTrackingAllocator *a1,
        int (*a2)(void *, const struct _GUID *, void *, unsigned int),
        const struct _GUID *a3)
{
  __int128 v5; // xmm0
  int v7; // esi
  __int64 Pool2; // rax
  NSInstrumentation::CLeakTrackingAllocator *v10; // rcx
  _DWORD *v11; // rdi
  unsigned int v12; // ebx
  unsigned int v13; // esi
  _OWORD v14[2]; // [rsp+30h] [rbp-58h] BYREF

  v14[0] = 0LL;
  v5 = (__int128)*a3;
  DWORD2(v14[0]) = 8;
  v14[1] = v5;
  NSInstrumentation::CLeakTrackingAllocator::Dump(a1, (struct NSInstrumentation::_DUMP_CONTEXT *)v14);
  v7 = DWORD2(v14[0]);
  if ( DWORD2(v14[0]) <= 8 )
    return 0LL;
  Pool2 = ExAllocatePool2(262LL, DWORD2(v14[0]), 1953264469LL);
  v11 = (_DWORD *)Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  *(_QWORD *)&v14[0] = Pool2 + 8;
  DWORD2(v14[0]) = v7 - 8;
  NSInstrumentation::CLeakTrackingAllocator::Dump(v10, (struct NSInstrumentation::_DUMP_CONTEXT *)v14);
  if ( DWORD2(v14[0]) < v7 - 8 )
  {
    v13 = v7 - DWORD2(v14[0]);
    *v11 = v13;
    v11[1] = 1;
    v12 = ((__int64 (__fastcall *)(NSInstrumentation::CLeakTrackingAllocator *, const struct _GUID *, _DWORD *, _QWORD))a2)(
            a1,
            a3,
            v11,
            v13);
  }
  else
  {
    v12 = -1073741675;
  }
  ExFreePoolWithTag(v11, 0);
  return v12;
}
