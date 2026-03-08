/*
 * XREFs of MiLockRetpolineStubs @ 0x140B967E0
 * Callers:
 *     MiInitializeRetpoline @ 0x140B39F78 (MiInitializeRetpoline.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x140242114 (MiProbeAndLockPages.c)
 *     MmCreateMdl @ 0x1402CCD20 (MmCreateMdl.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 MiLockRetpolineStubs()
{
  PMDL Mdl; // rax
  __int64 v1; // rbx

  Mdl = MmCreateMdl(0LL, Base, (unsigned int)(dword_140C65500 << 12));
  v1 = (__int64)Mdl;
  if ( !Mdl )
    return 3221225626LL;
  MiProbeAndLockPages(Mdl, 0, 0);
  qword_140C654C8 = v1;
  return 0LL;
}
