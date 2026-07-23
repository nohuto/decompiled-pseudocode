/*
 * XREFs of PsInitializeQuotaSystem @ 0x140A6D13C
 * Callers:
 *     InitBootProcessor @ 0x140A3BAF4 (InitBootProcessor.c)
 *     MiInitSystem @ 0x140A54E5C (MiInitSystem.c)
 * Callees:
 *     PspRegisterResource @ 0x1403C9580 (PspRegisterResource.c)
 *     PspSanitizeResourceLimits @ 0x1407C6D7C (PspSanitizeResourceLimits.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

char __fastcall PsInitializeQuotaSystem(int a1)
{
  _QWORD *v1; // rdx
  char *v2; // rcx
  char *PoolWithTag; // rax
  _QWORD *v4; // rax
  __int64 v5; // rcx
  char v6; // dl
  int v7; // r8d
  int v8; // edx

  if ( a1 )
  {
    PspRegisterResource(0, 5, -1073741756);
    PspRegisterResource(1, v6, v7);
    PspRegisterResource(2, 0, -1073741524);
    PspRegisterResource(v8 + 3, v8, -1073741663);
    qword_140C1E150 = 0LL;
    dword_140C1E178 = 0;
    qword_140C1E188 = 0LL;
    qword_140C1E170 = (__int64)&qword_140C1E168;
    qword_140C1E168 = (__int64)&qword_140C1E168;
    qword_140C1E1A8 = (__int64)&qword_140C1E1A0;
    qword_140C1E1A0 = (__int64)&qword_140C1E1A0;
    qword_140C1E148[0] = 0x10000LL;
    qword_140C1E158 = (__int64)MmRaisePoolQuota;
    qword_140C1E160 = (__int64)MmReturnPoolQuota;
    PspQuotaExpansionDescriptors[0] = 1;
    qword_140C1E180 = 0x80000LL;
    qword_140C1E190 = (__int64)MmRaisePoolQuota;
    qword_140C1E198 = (__int64)MmReturnPoolQuota;
LABEL_9:
    LOBYTE(PoolWithTag) = 1;
    return (char)PoolWithTag;
  }
  dword_140C53CC0 = 1;
  v1 = &unk_140C53B00;
  dword_140C53CC4 = 1;
  v2 = PspResourceFlags;
  do
  {
    if ( (*v2 & 2) == 0 )
      *v1 = -1LL;
    v2 += 8;
    v1 += 16;
  }
  while ( (__int64)v2 < (__int64)&PspSystemMitigationAuditOptions );
  KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[7] = (unsigned __int64)&PspSystemQuotaBlock;
  PspSanitizeResourceLimits((unsigned int *)PspDefaultResourceLimits, 1);
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x300uLL, 0x74517350u);
  PspQuotaBlockTable = (ULONG_PTR)PoolWithTag;
  if ( PoolWithTag )
  {
    v4 = PoolWithTag + 8;
    v5 = 32LL;
    do
    {
      v4[1] = v4;
      *v4 = v4;
      *(v4 - 1) = 0LL;
      v4 += 3;
      --v5;
    }
    while ( v5 );
    goto LABEL_9;
  }
  return (char)PoolWithTag;
}
