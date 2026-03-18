/*
 * XREFs of MiInitializePartitions @ 0x140B48A18
 * Callers:
 *     MiCreatePfnDatabase @ 0x140B487C8 (MiCreatePfnDatabase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializePartitions(int a1)
{
  if ( !a1 )
  {
    qword_140C67480 = 0LL;
    qword_140C67488 = 0LL;
    qword_140C674A8 = (PRTL_BITMAP)&dword_140C674B0;
    dword_140C674B0 = 1;
    byte_140C67490 |= 1u;
    qword_140C674A0 = (__int64)&qword_140C67498;
    qword_140C67498 = (__int64)&qword_140C67498;
    qword_140C674C0 = (__int64)MiSystemPartition;
    qword_140C674C8 = (__int64)&qword_140C674C0;
    qword_140C674B8 = (__int64)&byte_140C67490;
  }
  return 1LL;
}
