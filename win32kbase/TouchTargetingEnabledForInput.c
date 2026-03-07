__int64 __fastcall TouchTargetingEnabledForInput(__int64 a1, _DWORD *a2)
{
  int v3; // ebx
  unsigned int v4; // esi
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // r8d
  int v10; // [rsp+34h] [rbp+Ch]

  v10 = HIDWORD(a1);
  v3 = a1;
  if ( *a2 != 2 )
    return 0;
  if ( (a2[3] & 0x10000) == 0 )
    return 0;
  v4 = 1;
  if ( (a2[25] & 1) != 0 && (unsigned int)IsPseudoDevice(a2) && a2[26] == a2[28] && a2[27] == a2[29] )
    return 0;
  v5 = a2[28];
  v6 = a2[26];
  if ( v5 < v6 )
    return 0;
  v7 = a2[29];
  v8 = a2[27];
  if ( v7 < v8 || v6 > v3 || v5 < v3 || v8 > v10 || v7 < v10 )
    return 0;
  return v4;
}
