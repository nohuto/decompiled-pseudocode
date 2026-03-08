/*
 * XREFs of ExpandAV_CY @ 0x1C025F6B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExpandAV_CY(__int64 a1)
{
  __int64 v1; // r8
  unsigned __int16 *v4; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 312);
  if ( (*(_DWORD *)(v1 + 232))-- == 1 )
  {
    v4 = *(unsigned __int16 **)(v1 + 216);
    *(_DWORD *)(v1 + 232) = *v4;
    *(_QWORD *)(v1 + 216) = v4 + 1;
    (*(void (**)(void))(a1 + 232))();
    result = *(int *)(a1 + 260);
    *(_QWORD *)(a1 + 248) += result;
  }
  return result;
}
