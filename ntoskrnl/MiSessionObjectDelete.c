/*
 * XREFs of MiSessionObjectDelete @ 0x140A2F890
 * Callers:
 *     <none>
 * Callees:
 *     KeRemoveSchedulingGroup @ 0x1402F1480 (KeRemoveSchedulingGroup.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x14072665C (MiReleaseProcessReferenceToSessionDataPage.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiSessionObjectDelete(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int16 *v3; // rcx

  v2 = *(_QWORD *)(a1 + 24);
  if ( (*(_DWORD *)(v2 + 4) & 8) != 0 )
    MiReleaseProcessReferenceToSessionDataPage((_QWORD *)v2);
  v3 = *(unsigned __int16 **)(a1 + 32);
  if ( v3 )
  {
    KeRemoveSchedulingGroup(v3);
    ExFreePoolWithTag(*(PVOID *)(a1 + 32), 0);
  }
}
