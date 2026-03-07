__int64 __fastcall IoCreateSymbolicLink2(__int64 a1, int *a2)
{
  int v2; // eax
  __int128 v3; // xmm0
  bool v4; // zf
  int v5; // eax
  int v6; // ebx
  int v8; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v9[20]; // [rsp+34h] [rbp-4Ch]
  _DWORD v10[2]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v11; // [rsp+50h] [rbp-30h]
  __int64 v12; // [rsp+58h] [rbp-28h]
  int v13; // [rsp+60h] [rbp-20h]
  int v14; // [rsp+64h] [rbp-1Ch]
  __int64 v15; // [rsp+68h] [rbp-18h]
  __int64 v16; // [rsp+70h] [rbp-10h]
  HANDLE Handle; // [rsp+98h] [rbp+18h] BYREF

  v14 = 0;
  Handle = 0LL;
  v10[1] = 0;
  v2 = *a2;
  *(_OWORD *)v9 = 0LL;
  if ( (v2 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  v3 = *(_OWORD *)(a2 + 2);
  v4 = (v2 & 1) == 0;
  v12 = a1;
  v5 = 0;
  v10[0] = 48;
  v13 = 592;
  if ( !v4 )
    v5 = 2;
  v11 = 0LL;
  v16 = 0LL;
  v8 = v5;
  v15 = SePublicDefaultUnrestrictedSd;
  *(_OWORD *)&v9[4] = v3;
  v6 = ObCreateSymbolicLink(&Handle, 983041, (__int64)v10, (__int64)&v8, 0);
  if ( v6 >= 0 )
    ZwClose(Handle);
  return (unsigned int)v6;
}
