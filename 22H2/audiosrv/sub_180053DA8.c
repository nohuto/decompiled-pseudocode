/*
 * XREFs of sub_180053DA8 @ 0x180053DA8
 * Callers:
 *     sub_1800017B0 @ 0x1800017B0 (sub_1800017B0.c)
 * Callees:
 *     sub_180010FD8 @ 0x180010FD8 (sub_180010FD8.c)
 */

int *sub_180053DA8()
{
  int v0; // eax
  char v1; // cl
  bool v2; // sf
  int *result; // rax

  dword_18019E6E0 = 96;
  qword_18019E730 = 0LL;
  dword_18019E738 = 0;
  dword_18019E73C = 0;
  stru_18019E708.SpinCount = 0LL;
  qword_18019E6F0 = (__int64)&_ImageBase;
  qword_18019E6E8 = (__int64)&_ImageBase;
  qword_18019E700 = (__int64)&unk_18015C450;
  *(_OWORD *)&stru_18019E708.DebugInfo = 0LL;
  byte_18019E6F8 = 1;
  *(_OWORD *)&stru_18019E708.OwningThread = 0LL;
  dword_18019E6FC = 2048;
  v0 = sub_180010FD8(&stru_18019E708);
  v1 = byte_18019E5E0;
  v2 = v0 < 0;
  result = &dword_18019E6E0;
  if ( v2 )
    v1 = 1;
  byte_18019E5E0 = v1;
  return result;
}
