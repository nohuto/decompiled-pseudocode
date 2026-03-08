/*
 * XREFs of FsRtlSetDriverBacking @ 0x14086FA20
 * Callers:
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1408535C0 (IoRegisterFsRegistrationChangeMountAware.c)
 *     IoRegisterFileSystem @ 0x14086F860 (IoRegisterFileSystem.c)
 * Callees:
 *     MmBackSystemImageWithPagefile @ 0x14086FA4C (MmBackSystemImageWithPagefile.c)
 */

__int64 __fastcall FsRtlSetDriverBacking(__int64 a1, char a2)
{
  __int64 result; // rax
  ULONG_PTR v3; // rcx

  result = 0LL;
  if ( (a2 & 1) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 88);
    if ( v3 )
      return MmBackSystemImageWithPagefile(v3);
    else
      return 3221226083LL;
  }
  return result;
}
