/*
 * XREFs of PopRecordHibernateDiagnosticInfo @ 0x1409B2694
 * Callers:
 *     PopWriteHiberPages @ 0x140991EBC (PopWriteHiberPages.c)
 *     PopRequestWrite @ 0x140994DB4 (PopRequestWrite.c)
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
  LOBYTE(PopHibernateDiagnosticInfo) = byte_140C23436;
  v3 = 0;
  qword_140C24328 = qword_140C24150;
  v4 = 0;
  qword_140C24330 = qword_140C24158;
  qword_140C24338 = qword_140C24178;
  qword_140C24340 = qword_140C24168;
  qword_140C24348 = qword_140C24160;
  qword_140C24350 = qword_140C24180;
  qword_140C24358 = qword_140C24170;
  qword_140C24360 = qword_140C24188;
  dword_140C24368 = dword_140C24190;
  result = (unsigned int)dword_140C23EA4;
  dword_140C24374 = dword_140C23EA4;
  for ( qword_140C2436C = 0LL; v4 < *(_DWORD *)(a1 + 256); HIDWORD(qword_140C2436C) = v3 )
  {
    v6 = v4++;
    v6 <<= 7;
    v1 += *(_DWORD *)(*(_QWORD *)(a1 + 264) + v6 + 120);
    LODWORD(qword_140C2436C) = v1;
    result = *(_QWORD *)(a1 + 264);
    v3 += *(_DWORD *)(result + v6 + 124);
  }
  return result;
}
