/*
 * XREFs of PpmInitPolicyConfiguration @ 0x140B5EF90
 * Callers:
 *     PoInitSystem @ 0x140B50B30 (PoInitSystem.c)
 * Callees:
 *     PpmReleaseLock @ 0x14032C0A0 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x14032C0F0 (PpmAcquireLock.c)
 *     qsort @ 0x1403D9DD0 (qsort.c)
 *     PpmBeginProfileAccumulation @ 0x1407EB568 (PpmBeginProfileAccumulation.c)
 *     PpmEnableProfile @ 0x14082D878 (PpmEnableProfile.c)
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
    v3 = &unk_140C394C8;
    do
    {
      *v3 |= v2;
      v3 += 55;
    }
    while ( (__int64)v3 < (__int64)qword_140C39838 );
    v0 += 40;
    --v1;
  }
  while ( v1 );
  qword_140C39850 = -1LL;
  PpmDefaultProfile[0] = (__int64)PpmInfoDefaultProfileName;
  xmmword_140C394AC = (__int128)NullGuid;
  dword_140C394BC = 2;
  PpmEnableProfile((__int64)PpmDefaultProfile);
  PpmBeginProfileAccumulation((__int64)PpmDefaultProfile, MEMORY[0xFFFFF78000000008]);
  qsort(&PpmPolicyConfigTable, 0x3EuLL, 0x28uLL, PpmInfoConfigComparer);
  PpmReleaseLock(&PpmPerfPolicyLock);
}
