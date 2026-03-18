/*
 * XREFs of PsInitializeQuotaSystem @ 0x140B0A8A8
 * Callers:
 *     InitBootProcessor @ 0x140AFB264 (InitBootProcessor.c)
 *     MiInitSystem @ 0x140B07C00 (MiInitSystem.c)
 * Callees:
 *     PspRegisterResource @ 0x1403C3F68 (PspRegisterResource.c)
 *     PspSanitizeResourceLimits @ 0x14082CD48 (PspSanitizeResourceLimits.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
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
    qword_140C1BF10 = 0LL;
    dword_140C1BF38 = 0;
    qword_140C1BF48 = 0LL;
    qword_140C1BF30 = (__int64)&qword_140C1BF28;
    qword_140C1BF28 = (__int64)&qword_140C1BF28;
    qword_140C1BF68 = (__int64)&qword_140C1BF60;
    qword_140C1BF60 = (__int64)&qword_140C1BF60;
    qword_140C1BF08[0] = 0x10000LL;
    qword_140C1BF18 = (__int64)MmRaisePoolQuota;
    qword_140C1BF20 = (__int64)MmReturnPoolQuota;
    PspQuotaExpansionDescriptors[0] = 1;
    qword_140C1BF40 = 0x80000LL;
    qword_140C1BF50 = (__int64)MmRaisePoolQuota;
    qword_140C1BF58 = (__int64)MmReturnPoolQuota;
LABEL_9:
    LOBYTE(PoolWithTag) = 1;
    return (char)PoolWithTag;
  }
  dword_140C5A540 = 1;
  v1 = &unk_140C5A380;
  dword_140C5A544 = 1;
  v2 = PspResourceFlags;
  do
  {
    if ( (*v2 & 2) == 0 )
      *v1 = -1LL;
    v2 += 8;
    v1 += 16;
  }
  while ( (__int64)v2 < (__int64)&KiKernelCetLogging );
  KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[27] = (unsigned __int64)&PspSystemQuotaBlock;
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
