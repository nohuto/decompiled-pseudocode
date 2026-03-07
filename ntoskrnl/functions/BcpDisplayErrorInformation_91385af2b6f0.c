__int64 __fastcall BcpDisplayErrorInformation(unsigned int a1, int a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  int v6; // r15d
  __int64 v7; // rbp
  unsigned __int64 *v9; // r14
  __int64 v10; // r8
  int v11; // ecx
  int v12; // ebx
  int v13; // edx
  __int64 v14; // r8
  int v15; // esi
  int v16; // edx
  __int64 v17; // r8
  __int16 v18; // cx
  __int64 v19; // r8
  __int64 v20; // r8
  __int64 v21; // rbx
  int v22; // edx
  int v23; // edx
  __int16 v24; // cx
  __int64 v25; // r8
  __int64 v26; // rsi
  __int64 v27; // r12
  int v28; // r13d
  __int64 v29; // r8
  __int64 result; // rax
  int v31; // [rsp+20h] [rbp-F8h] BYREF
  int v32; // [rsp+24h] [rbp-F4h]
  __int64 v33; // [rsp+28h] [rbp-F0h]
  unsigned int v34; // [rsp+30h] [rbp-E8h]
  _DWORD v35[2]; // [rsp+38h] [rbp-E0h] BYREF
  char *v36; // [rsp+40h] [rbp-D8h]
  __int64 v37; // [rsp+48h] [rbp-D0h]
  char v38; // [rsp+50h] [rbp-C8h] BYREF

  v6 = BcpCursor;
  v7 = a1;
  v35[1] = 0;
  v32 = a2;
  v37 = a5;
  v31 = BcpCursor;
  BcpTextBoxLeftEdgeOverride = (__int64)&v31;
  v9 = (unsigned __int64 *)a3;
  BcpDisplayCriticalString(&stru_140C707C0.Length, dword_140C0B590[18 * a1 + 1], a3, a1);
  BcpDisplayCriticalString(&stru_140C707D0.Length, dword_140C0B590[18 * v7 + 1], v10, v7);
  v11 = dword_140C0B590[18 * v7 + 11];
  LODWORD(BcpCursor) = v6;
  HIDWORD(BcpCursor) = v11 + dword_140C646C0;
  v13 = dword_140C0B590[18 * v7];
  dword_140C646C0 += v11 + v11;
  v12 = dword_140C646C0;
  BcpDisplayCriticalString(&stru_140C70710.Length, v13, v14, v7);
  v15 = v12 + dword_140C0B590[18 * v7 + 11];
  HIDWORD(BcpCursor) = v12;
  LODWORD(BcpCursor) = v6;
  v16 = dword_140C0B590[18 * v7];
  dword_140C646C0 = v15;
  BcpDisplayCriticalString(&stru_140C707B0.Length, v16, v17, v7);
  BcpDisplayCriticalCharacter(v18, dword_140C0B590[18 * v7]);
  BcpDisplayCriticalString((unsigned __int16 *)(a5 + 16), dword_140C0B590[18 * v7], v19, v7);
  v21 = 0LL;
  if ( a4 )
  {
    v22 = dword_140C0B590[18 * v7 + 11];
    LODWORD(BcpCursor) = v6;
    dword_140C646C0 = v15 + v22;
    v23 = dword_140C0B590[18 * v7];
    HIDWORD(BcpCursor) = v15;
    BcpDisplayCriticalString(&stru_140C707A0.Length, v23, v20, v7);
    BcpDisplayCriticalCharacter(v24, dword_140C0B590[18 * v7]);
    v35[0] = 0x800000;
    v36 = &v38;
    BcpSanitizeDriverName(a4, v35);
    BcpDisplayCriticalString((unsigned __int16 *)v35, dword_140C0B590[18 * v7], v25, v7);
  }
  v26 = 4LL;
  v33 = BcpCursor;
  v27 = v37;
  v28 = v32;
  v34 = dword_140C646C0;
  BcpCursor = 0LL;
  dword_140C646C0 = 0;
  do
  {
    BcpConvertBugDataToString(*v9, v21 + v27 + 32);
    if ( BcpDisplayParameters || (a6 & 8) != 0 && v28 == 317 )
    {
      BcpDisplayCriticalString((unsigned __int16 *)(v21 + v27 + 32), dword_140C0B590[18 * v7], v29, v7);
      LODWORD(BcpCursor) = 0;
      HIDWORD(BcpCursor) = dword_140C646C0;
    }
    v21 += 16LL;
    ++v9;
    --v26;
  }
  while ( v26 );
  result = v34;
  BcpTextBoxLeftEdgeOverride = 0LL;
  BcpCursor = v33;
  dword_140C646C0 = v34;
  return result;
}
