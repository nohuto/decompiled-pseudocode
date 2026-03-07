__int64 __fastcall PopRecordHibernateDiagnosticInfo(__int64 a1)
{
  int v1; // edx
  int v3; // r10d
  unsigned int v4; // r8d
  __int64 result; // rax
  __int64 v6; // rcx

  v1 = 0;
  LOBYTE(PopHibernateDiagnosticInfo) = byte_140C3D6F6;
  v3 = 0;
  qword_140C3E308 = qword_140C3D170;
  v4 = 0;
  qword_140C3E310 = qword_140C3D178;
  qword_140C3E318 = qword_140C3D198;
  qword_140C3E320 = qword_140C3D188;
  qword_140C3E328 = qword_140C3D180;
  qword_140C3E330 = qword_140C3D1A0;
  qword_140C3E338 = qword_140C3D190;
  qword_140C3E340 = qword_140C3D1A8;
  dword_140C3E348 = dword_140C3D1B0;
  result = (unsigned int)dword_140C3CAA4;
  dword_140C3E354 = dword_140C3CAA4;
  for ( qword_140C3E34C = 0LL; v4 < *(_DWORD *)(a1 + 256); HIDWORD(qword_140C3E34C) = v3 )
  {
    v6 = v4++;
    v6 <<= 7;
    v1 += *(_DWORD *)(*(_QWORD *)(a1 + 264) + v6 + 120);
    LODWORD(qword_140C3E34C) = v1;
    result = *(_QWORD *)(a1 + 264);
    v3 += *(_DWORD *)(result + v6 + 124);
  }
  return result;
}
