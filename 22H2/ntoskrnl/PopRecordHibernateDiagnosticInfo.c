/*
 * XREFs of PopRecordHibernateDiagnosticInfo @ 0x140AA3B50
 * Callers:
 *     PopRequestWrite @ 0x140AA4070 (PopRequestWrite.c)
 *     PopWriteHiberPages @ 0x140AA5AA4 (PopWriteHiberPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopRecordHibernateDiagnosticInfo(__int64 a1)
{
  int v1; // edx
  int v3; // r10d
  unsigned int v4; // r8d
  __int64 result; // rax
  __int64 v6; // rcx

  v1 = 0;
  LOBYTE(PopHibernateDiagnosticInfo) = byte_140C3DAD6;
  v3 = 0;
  qword_140C3E728 = qword_140C3D530;
  v4 = 0;
  qword_140C3E730 = qword_140C3D538;
  qword_140C3E738 = qword_140C3D558;
  qword_140C3E740 = qword_140C3D548;
  qword_140C3E748 = qword_140C3D540;
  qword_140C3E750 = qword_140C3D560;
  qword_140C3E758 = qword_140C3D550;
  qword_140C3E760 = qword_140C3D568;
  dword_140C3E768 = dword_140C3D570;
  result = (unsigned int)dword_140C3D044;
  dword_140C3E774 = dword_140C3D044;
  for ( qword_140C3E76C = 0LL; v4 < *(_DWORD *)(a1 + 256); HIDWORD(qword_140C3E76C) = v3 )
  {
    v6 = v4++;
    v6 <<= 7;
    v1 += *(_DWORD *)(*(_QWORD *)(a1 + 264) + v6 + 120);
    LODWORD(qword_140C3E76C) = v1;
    result = *(_QWORD *)(a1 + 264);
    v3 += *(_DWORD *)(result + v6 + 124);
  }
  return result;
}
