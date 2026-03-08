/*
 * XREFs of PpmInitPolicyConfiguration @ 0x140B5CAC0
 * Callers:
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 * Callees:
 *     PpmReleaseLock @ 0x1402D1F40 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402D1F90 (PpmAcquireLock.c)
 *     qsort @ 0x1403D48B0 (qsort.c)
 *     PpmBeginProfileAccumulation @ 0x14079C7F8 (PpmBeginProfileAccumulation.c)
 *     PpmEnableProfile @ 0x140825808 (PpmEnableProfile.c)
 */

void PpmInitPolicyConfiguration()
{
  char *v0; // rdx
  __int64 v1; // r8
  __int64 v2; // rax
  _QWORD *v3; // rcx

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  v0 = (char *)&unk_140D1E040;
  v1 = 62LL;
  do
  {
    v2 = 1LL << v0[4];
    if ( (v0[5] & 4) != 0 )
      *(_DWORD *)v0 >>= 1;
    v3 = &unk_140C390C8;
    do
    {
      *v3 |= v2;
      v3 += 55;
    }
    while ( (__int64)v3 < (__int64)qword_140C39438 );
    v0 += 40;
    --v1;
  }
  while ( v1 );
  qword_140C39450 = -1LL;
  PpmDefaultProfile[0] = (__int64)PpmInfoDefaultProfileName;
  xmmword_140C390AC = (__int128)NullGuid;
  dword_140C390BC = 2;
  PpmEnableProfile((__int64)PpmDefaultProfile);
  PpmBeginProfileAccumulation((__int64)PpmDefaultProfile, MEMORY[0xFFFFF78000000008]);
  qsort(&PpmPolicyConfigTable, 0x3EuLL, 0x28uLL, PpmInfoConfigComparer);
  PpmReleaseLock(&PpmPerfPolicyLock);
}
