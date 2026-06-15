/*
 * XREFs of sub_18011F504 @ 0x18011F504
 * Callers:
 *     sub_180048910 @ 0x180048910 (sub_180048910.c)
 * Callees:
 *     sub_18004B9B4 @ 0x18004B9B4 (sub_18004B9B4.c)
 *     sub_18005A750 @ 0x18005A750 (sub_18005A750.c)
 *     sub_180119F84 @ 0x180119F84 (sub_180119F84.c)
 *     sub_18011A35C @ 0x18011A35C (sub_18011A35C.c)
 *     sub_18011AC0C @ 0x18011AC0C (sub_18011AC0C.c)
 *     sub_18011B0C8 @ 0x18011B0C8 (sub_18011B0C8.c)
 *     sub_18011C810 @ 0x18011C810 (sub_18011C810.c)
 *     sub_18011CA64 @ 0x18011CA64 (sub_18011CA64.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18011F504(__int64 a1, unsigned __int16 *a2)
{
  int v3; // r12d
  int v4; // edi
  _BYTE *v5; // rbx
  char v6; // r15
  unsigned int v7; // r13d
  int *v8; // rax
  __int64 v9; // r14
  unsigned __int16 *v10; // r13
  __int64 v11; // rcx
  __int128 **v12; // rax
  __int128 *v13; // rdi
  int v14; // eax
  int v15; // eax
  int v17; // [rsp+60h] [rbp-39h]
  int v18; // [rsp+64h] [rbp-35h] BYREF
  int v19; // [rsp+68h] [rbp-31h] BYREF
  int v20; // [rsp+6Ch] [rbp-2Dh] BYREF
  int v21; // [rsp+70h] [rbp-29h] BYREF
  int v22; // [rsp+74h] [rbp-25h] BYREF
  LPVOID pv; // [rsp+78h] [rbp-21h] BYREF
  _DWORD v24[2]; // [rsp+80h] [rbp-19h] BYREF
  int *v25; // [rsp+88h] [rbp-11h]
  signed __int64 v26; // [rsp+90h] [rbp-9h]
  __int128 v27[5]; // [rsp+A0h] [rbp+7h] BYREF
  int pvData; // [rsp+100h] [rbp+67h] BYREF
  unsigned __int16 *v29; // [rsp+108h] [rbp+6Fh]
  unsigned int v30; // [rsp+110h] [rbp+77h]
  DWORD pcbData; // [rsp+118h] [rbp+7Fh] BYREF

  v29 = a2;
  v3 = 0;
  pv = 0LL;
  v24[0] = 0;
  v24[1] = 3;
  v4 = sub_18011CA64(*(_QWORD *)(a1 + 40), (LPVOID **)&pv);
  if ( v4 == -2147023728 )
    v4 = 0;
  v5 = pv;
  if ( v4 >= 0 )
  {
    pvData = 0;
    pcbData = 4;
    RegGetValueW(
      HKEY_LOCAL_MACHINE,
      L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
      L"ProbeForMinimumPeriod",
      0x18u,
      0LL,
      &pvData,
      &pcbData);
    v26 = sub_18011C810(a1);
    v6 = 0;
    v7 = 0;
    v30 = 0;
    v8 = v24;
    v25 = v24;
    do
    {
      v17 = *v8;
      v9 = 232LL;
      if ( *v8 != 3 )
        v9 = 224LL;
      if ( *(_QWORD *)(v9 + a1) )
      {
        v10 = v29;
        while ( 1 )
        {
          v11 = *(_QWORD *)(v9 + a1);
          if ( v3 >= *(_DWORD *)(v11 + 8) )
            break;
          v12 = (__int128 **)sub_18004B9B4(v11, v3);
          v13 = *v12;
          v27[0] = **v12;
          v14 = sub_18011B0C8(a1, v17, v27, (__int64)v10, v5, pvData != 0, v26, &v22, &v21, &v20, &v19, &v18);
          if ( v14 < 0 )
          {
            if ( sub_18011AC0C(v14) )
            {
              sub_180119F84((__int64)v13, v10);
              *(_DWORD *)(a1 + 220) = 1;
            }
            v4 = 0;
          }
          else
          {
            v15 = sub_18005A750((__int64)v13, v10, v22, v21, v20, v19, v18);
            v4 = v15;
            if ( v6 || v15 >= 0 )
              v6 = 1;
          }
          ++v3;
        }
        v7 = v30;
        v8 = v25;
        v3 = 0;
      }
      v30 = ++v7;
      v25 = ++v8;
    }
    while ( v7 < 2 );
    if ( v6 && !*(_DWORD *)(a1 + 220) )
      sub_18011A35C(a1);
  }
  CoTaskMemFree(v5);
  return (unsigned int)v4;
}
