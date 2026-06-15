/*
 * XREFs of sub_18005AAD0 @ 0x18005AAD0
 * Callers:
 *     sub_180059458 @ 0x180059458 (sub_180059458.c)
 * Callees:
 *     sub_1800229D0 @ 0x1800229D0 (sub_1800229D0.c)
 *     sub_1800384A4 @ 0x1800384A4 (sub_1800384A4.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18005B960 @ 0x18005B960 (sub_18005B960.c)
 *     sub_18005BB40 @ 0x18005BB40 (sub_18005BB40.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18005AAD0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, int *a5, _DWORD *a6)
{
  __int64 v9; // rax
  unsigned int v10; // r14d
  int v11; // esi
  const WCHAR *v12; // r8
  bool v13; // zf
  int v14; // eax
  int v16; // eax
  unsigned int v17; // r14d
  unsigned int pvData[4]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v19; // [rsp+50h] [rbp-20h] BYREF
  DWORD pcbData; // [rsp+60h] [rbp-10h] BYREF
  _DWORD v21[3]; // [rsp+64h] [rbp-Ch] BYREF
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+38h]

  v9 = *a4 - 0x48B1B9CD98951333LL;
  if ( *a4 == 0x48B1B9CD98951333LL )
    v9 = a4[1] + 0x88CD297BF005C60LL;
  v10 = v9 == 0;
  pvData[0] = 0;
  v11 = 4;
  pcbData = 4;
  v12 = L"InboxAECPolicyCommsTmp";
  if ( v9 )
    v12 = L"InboxAECPolicy";
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
          v12,
          0x18u,
          0LL,
          pvData,
          &pcbData)
    && pvData[0] < 4 )
  {
    v10 = pvData[0];
    a6[1] = pvData[0];
  }
  if ( v10 == 1 )
  {
    *a5 = 0;
LABEL_14:
    a6[16] = 0;
    goto LABEL_12;
  }
  if ( v10 == 3 )
  {
    *a5 = 1;
    goto LABEL_14;
  }
  v13 = *(_DWORD *)(a1 + 32) == 3;
  a6[2] = v13;
  if ( v13 )
  {
    *a5 = 1;
    a6[16] = 1;
    goto LABEL_12;
  }
  v19 = *(_OWORD *)a4;
  a6[3] = sub_1800229D0(a1, *(_DWORD *)(a3 + 48), &v19);
  v19 = *(_OWORD *)a4;
  v14 = sub_18005BB40(a1, &v19, *(unsigned int *)(a3 + 48));
  a6[4] = v14;
  if ( !a6[3] && !v14 )
  {
    *a5 = 2;
    a6[16] = 3;
LABEL_12:
    a6[15] = *a5;
    return 0LL;
  }
  v19 = 0uLL;
  v16 = sub_18005B960(a3, &v19, v21, 0LL);
  v17 = v16;
  if ( v16 >= 0 )
  {
    if ( !v21[0] )
    {
      a6[9] = 0;
      v11 = 2;
    }
    *a5 = v11;
    a6[16] = v11;
    sub_1800384A4((__int64 *)&v19);
    goto LABEL_12;
  }
  sub_18004BD84((int)retaddr, 252, (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpolicy.cpp", v16);
  sub_1800384A4((__int64 *)&v19);
  return v17;
}
