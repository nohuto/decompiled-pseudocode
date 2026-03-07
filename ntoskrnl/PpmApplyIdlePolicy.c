unsigned __int64 __fastcall PpmApplyIdlePolicy(_BYTE *a1)
{
  __int64 *v1; // r9
  unsigned __int64 v2; // r8
  char v3; // dl
  char v4; // al
  unsigned __int64 result; // rax
  __int64 v6; // r11

  v1 = PpmCurrentProfile;
  v2 = 55LL * dword_140C3D48C;
  a1[68] = BYTE4(PpmCurrentProfile[v2 + 23]);
  v3 = BYTE4(v1[v2 + 24]);
  a1[67] = v3;
  v4 = BYTE5(v1[v2 + 24]);
  a1[65] = v3;
  a1[66] = v4;
  a1[64] = v4;
  result = PpmConvertTime(LODWORD(v1[v2 + 24]), 0xF4240uLL, PopQpcFrequency);
  *(_DWORD *)(v6 + 732) = result;
  return result;
}
