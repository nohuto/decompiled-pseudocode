/*
 * XREFs of PopRecordHibernateDiagnosticInfo @ 0x1409B1764
 * Callers:
 *     PopWriteHiberPages @ 0x140990EBC (PopWriteHiberPages.c)
 *     PopRequestWrite @ 0x140993DB4 (PopRequestWrite.c)
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
  LOBYTE(PopHibernateDiagnosticInfo) = byte_140C24076;
  v3 = 0;
  qword_140C242E8 = qword_140C23B30;
  v4 = 0;
  qword_140C242F0 = qword_140C23B38;
  qword_140C242F8 = qword_140C23B58;
  qword_140C24300 = qword_140C23B48;
  qword_140C24308 = qword_140C23B40;
  qword_140C24310 = qword_140C23B60;
  qword_140C24318 = qword_140C23B50;
  qword_140C24320 = qword_140C23B68;
  dword_140C24328 = dword_140C23B70;
  result = (unsigned int)dword_140C23884;
  dword_140C24334 = dword_140C23884;
  for ( qword_140C2432C = 0LL; v4 < *(_DWORD *)(a1 + 256); HIDWORD(qword_140C2432C) = v3 )
  {
    v6 = v4++;
    v6 <<= 7;
    v1 += *(_DWORD *)(*(_QWORD *)(a1 + 264) + v6 + 120);
    LODWORD(qword_140C2432C) = v1;
    result = *(_QWORD *)(a1 + 264);
    v3 += *(_DWORD *)(result + v6 + 124);
  }
  return result;
}
