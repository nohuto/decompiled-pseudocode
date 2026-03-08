/*
 * XREFs of WmipMRCleanup @ 0x1409DE7C0
 * Callers:
 *     <none>
 * Callees:
 *     WmipGenerateMofResourceNotification @ 0x14084DD30 (WmipGenerateMofResourceNotification.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall WmipMRCleanup(__int64 a1)
{
  _WORD *v2; // rcx
  _WORD *v3; // rdx
  void *v4; // rcx
  void *v5; // rcx

  v2 = *(_WORD **)(a1 + 40);
  if ( v2 )
  {
    v3 = *(_WORD **)(a1 + 48);
    if ( v3 )
    {
      if ( (*(_DWORD *)(a1 + 16) & 1) == 0 )
        WmipGenerateMofResourceNotification(v2, v3, &GUID_MOF_RESOURCE_REMOVED_NOTIFICATION, 1);
    }
  }
  v4 = *(void **)(a1 + 40);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  v5 = *(void **)(a1 + 48);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0);
    *(_QWORD *)(a1 + 48) = 0LL;
  }
}
