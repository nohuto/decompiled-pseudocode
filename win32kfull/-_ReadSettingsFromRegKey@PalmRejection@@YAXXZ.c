void __fastcall PalmRejection::_ReadSettingsFromRegKey(PalmRejection *this)
{
  __int64 v1; // rcx
  __int128 *v2; // rbx
  __int64 v3; // rdi
  int v4; // edi
  int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rcx
  bool v8; // cf
  int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rcx
  const wchar_t *v12; // [rsp+20h] [rbp-40h] BYREF
  int v13; // [rsp+28h] [rbp-38h]
  unsigned int v14; // [rsp+2Ch] [rbp-34h]
  const wchar_t *v15; // [rsp+30h] [rbp-30h]
  int v16; // [rsp+38h] [rbp-28h]
  unsigned int v17; // [rsp+3Ch] [rbp-24h]
  const wchar_t *v18; // [rsp+40h] [rbp-20h]
  int v19; // [rsp+48h] [rbp-18h]
  unsigned int v20; // [rsp+4Ch] [rbp-14h]

  v1 = 1000LL;
  v12 = L"HorizEdgeThreshold";
  v2 = (__int128 *)&v12;
  v13 = 1000;
  v15 = L"VertEdgeThreshold";
  v3 = 3LL;
  v14 = 1000;
  v16 = 530;
  v17 = 530;
  v18 = L"TopEdgeThreshold";
  v19 = 1000;
  v20 = 1000;
  do
  {
    GetLocalMachineRegistryDWORDValues(
      v1,
      L"\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows\\Input\\EdgePalmRejection",
      v2++);
    --v3;
  }
  while ( v3 );
  v4 = 1500;
  v5 = 1500;
  if ( v14 < 0x5DC )
    v5 = v14;
  v6 = SGDGetUserSessionState(v1);
  v8 = v17 < 0x5DC;
  *(_DWORD *)(v6 + 17356) = v5;
  v9 = 1500;
  if ( v8 )
    v9 = v17;
  v10 = SGDGetUserSessionState(v7);
  if ( v20 < 0x5DC )
    v4 = v20;
  *(_DWORD *)(v10 + 17360) = v9;
  *(_DWORD *)(SGDGetUserSessionState(v11) + 17364) = v4;
}
