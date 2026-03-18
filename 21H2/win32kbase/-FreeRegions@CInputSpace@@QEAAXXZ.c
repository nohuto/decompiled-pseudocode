/*
 * XREFs of ?FreeRegions@CInputSpace@@QEAAXXZ @ 0x1C00A0D30
 * Callers:
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C009F724 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 *     ?_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00A0CC4 (-_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     NtConfigureInputSpace @ 0x1C0153670 (NtConfigureInputSpace.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall CInputSpace::FreeRegions(CInputSpace *this)
{
  char **v2; // rdi
  char *v3; // rdx
  __int64 v4; // rcx
  char **v5; // rax

  v2 = (char **)((char *)this + 1456);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == (char *)v2 )
      break;
    v4 = *(_QWORD *)v3;
    if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 || (v5 = (char **)*((_QWORD *)v3 + 1), *v5 != v3) )
      __fastfail(3u);
    *v5 = (char *)v4;
    *(_QWORD *)(v4 + 8) = v5;
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v3);
  }
  *((_DWORD *)this + 363) = 0;
}
