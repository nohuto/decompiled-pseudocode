__int64 __fastcall SepDesktopAppModifyTokenBreakaway(__int64 a1, int *a2, char a3)
{
  int v4; // r8d
  unsigned int v5; // eax
  int v6; // r8d
  __int64 v7; // rcx
  _DWORD v9[2]; // [rsp+20h] [rbp-40h] BYREF
  int *v10; // [rsp+28h] [rbp-38h]
  int v11; // [rsp+30h] [rbp-30h] BYREF
  const wchar_t *v12; // [rsp+38h] [rbp-28h]
  __int128 v13; // [rsp+40h] [rbp-20h]
  int *v14; // [rsp+50h] [rbp-10h]
  int v15; // [rsp+80h] [rbp+20h] BYREF

  v14 = a2;
  v4 = *a2;
  v12 = L"WIN://PKG";
  v11 = 1310738;
  v5 = v4 & 0xFFFFFFDF;
  v15 = 4;
  v6 = v4 | 0x20;
  v9[0] = 1;
  v9[1] = 1;
  if ( a3 != 1 )
    v6 = v5;
  *a2 = v6;
  v7 = *(_QWORD *)(a1 + 776);
  v13 = 0LL;
  LOWORD(v13) = 2;
  v10 = &v11;
  DWORD2(v13) = 1;
  return AuthzBasepSetSecurityAttributesToken(v7, &v15, (__int64)v9);
}
