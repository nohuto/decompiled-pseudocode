/*
 * XREFs of TR_EnsureInputBufferForTrbs @ 0x1C0041850
 * Callers:
 *     Isoch_PrepareStage @ 0x1C0004AD0 (Isoch_PrepareStage.c)
 *     Control_Transfer_Map @ 0x1C0007318 (Control_Transfer_Map.c)
 *     Bulk_PrepareStage @ 0x1C001239C (Bulk_PrepareStage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TR_EnsureInputBufferForTrbs(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  void *v5; // rcx
  unsigned int v6; // ecx
  unsigned int v7; // edx
  bool v8; // cf
  __int64 v9; // rdx
  __int64 Pool2; // rax

  v2 = 0;
  if ( a2 >= *(_DWORD *)(a1 + 312) )
  {
    v5 = *(void **)(a1 + 304);
    if ( v5 )
      ExFreePoolWithTag(v5, 0x49434858u);
    v6 = -1;
    v7 = 16 * a2 + 88;
    v8 = v7 < 16 * a2;
    if ( v7 >= 16 * a2 )
      v6 = 16 * a2 + 88;
    v9 = 0LL;
    if ( !v8 )
      v9 = v6;
    Pool2 = ExAllocatePool2(64LL, v9, 1229146200LL);
    *(_QWORD *)(a1 + 304) = Pool2;
    if ( Pool2 )
      *(_DWORD *)(a1 + 312) = a2;
    else
      return (unsigned int)-1073741670;
  }
  return v2;
}
