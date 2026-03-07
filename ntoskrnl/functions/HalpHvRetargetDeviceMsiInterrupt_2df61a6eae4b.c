__int64 __fastcall HalpHvRetargetDeviceMsiInterrupt(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  __int64 v5; // rcx
  _DWORD v7[4]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v8; // [rsp+40h] [rbp-28h] BYREF

  v2 = *(_DWORD *)(a1 + 48);
  v7[1] = 0;
  v7[2] = v2;
  v3 = *(_DWORD *)(a1 + 4);
  v8 = 0LL;
  LODWORD(v8) = v3;
  v4 = *(_DWORD *)(a1 + 52);
  v5 = *(_QWORD *)(a1 + 64);
  v7[3] = v4;
  v7[0] = 1;
  return ((__int64 (__fastcall *)(__int64, _DWORD *, __int128 *, __int64, _QWORD))qword_140C62158)(v5, v7, &v8, a2, 0LL);
}
