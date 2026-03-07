char __fastcall PopDiagSnapPassiveHistogram(__int64 a1, _DWORD *a2)
{
  char v2; // r8
  _QWORD *v3; // r10
  unsigned int i; // r9d
  __int64 v6; // rax
  unsigned __int64 v7; // rcx

  v2 = 0;
  v3 = (_QWORD *)(a1 + 24);
  for ( i = 0; i < 0x15; ++i )
  {
    v6 = v3[21];
    v7 = *v3 - v6;
    *v3 = v6;
    *a2 = v7 / 0x989680;
    if ( i < 0x14 && (unsigned int)(v7 / 0x989680) )
      v2 = 1;
    ++v3;
    ++a2;
  }
  return v2;
}
