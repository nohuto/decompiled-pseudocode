__int64 __fastcall xxxClientCallDevCallbackSimple(__int64 a1, __int128 *a2)
{
  __int64 *v4; // rcx
  __int64 v5; // rdx
  ULONG64 v6; // rcx
  __int64 v7; // xmm0_8
  int v9; // [rsp+30h] [rbp-118h] BYREF
  _QWORD v10[5]; // [rsp+38h] [rbp-110h] BYREF
  _BYTE v11[40]; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v12; // [rsp+88h] [rbp-C0h]
  __int128 v13; // [rsp+90h] [rbp-B8h]
  __int128 v14; // [rsp+A0h] [rbp-A8h]
  __int128 v15; // [rsp+B0h] [rbp-98h]
  __int128 v16; // [rsp+C0h] [rbp-88h]
  __int128 v17; // [rsp+D0h] [rbp-78h]
  __int128 v18; // [rsp+E0h] [rbp-68h]
  __int128 v19; // [rsp+F0h] [rbp-58h]
  __int128 v20; // [rsp+100h] [rbp-48h]
  __int128 v21; // [rsp+110h] [rbp-38h]
  __int128 v22; // [rsp+120h] [rbp-28h]

  v10[0] = 0LL;
  v9 = 0;
  memset_0(v11, 0, 0xD0uLL);
  v12 = a1;
  v13 = *a2;
  v14 = a2[1];
  v15 = a2[2];
  v16 = a2[3];
  v17 = a2[4];
  v18 = a2[5];
  v19 = a2[6];
  v20 = a2[7];
  v21 = a2[8];
  v22 = a2[9];
  EtwTraceBeginCallback(122LL);
  LODWORD(a1) = KeUserModeCallback(122LL, v11, 208LL, v10, &v9);
  EtwTraceEndCallback(122LL);
  if ( (int)a1 < 0 || v9 != 24 )
    return 0LL;
  v4 = (__int64 *)v10[0];
  if ( (unsigned __int64)(v10[0] + 8LL) < v10[0] || v10[0] + 8LL > MmUserProbeAddress )
    v4 = (__int64 *)MmUserProbeAddress;
  v5 = *v4;
  v10[1] = *v4;
  if ( *((_DWORD *)a2 + 1) == 1 )
  {
    v6 = *(_QWORD *)(v10[0] + 16LL);
    if ( v6 + 24 < v6 || v6 + 24 > MmUserProbeAddress )
      v6 = MmUserProbeAddress;
    v7 = *(_QWORD *)(v6 + 16);
    *(__int128 *)((char *)a2 + 56) = *(_OWORD *)v6;
    *((_QWORD *)a2 + 9) = v7;
  }
  return (unsigned int)v5;
}
