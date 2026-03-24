/*
 * XREFs of MiCleanupPageTablePages @ 0x14027D96C
 * Callers:
 *     MiMakeZeroedPageTablesEx @ 0x14027D47C (MiMakeZeroedPageTablesEx.c)
 *     MmCreateShadowMapping @ 0x1407A04DC (MmCreateShadowMapping.c)
 * Callees:
 *     MiFreeLargeZeroPages @ 0x14027D9D4 (MiFreeLargeZeroPages.c)
 *     MiReturnCommit @ 0x140298920 (MiReturnCommit.c)
 *     MiReturnSystemCharges @ 0x140311238 (MiReturnSystemCharges.c)
 */

__int64 __fastcall MiCleanupPageTablePages(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // rdi

  result = MiFreeLargeZeroPages(*(_QWORD *)(a1 + 32), a1, 0LL);
  v3 = *(_QWORD *)(a1 + 40);
  if ( v3 )
  {
    result = *(_QWORD *)(a1 + 48);
    if ( result != v3 )
    {
      v4 = v3 - result;
      MiReturnCommit(*(_QWORD *)(a1 + 32), v4);
      result = MiReturnSystemCharges(*(_QWORD *)(a1 + 32), v4, *(unsigned int *)(a1 + 56));
    }
  }
  *(_QWORD *)(a1 + 40) = 0LL;
  return result;
}
