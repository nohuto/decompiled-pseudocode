__int64 __fastcall xxxClientCopyDDEOut1(__int64 a1)
{
  int v2; // ebx
  __int64 *v3; // rbx
  ULONG64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rcx
  ULONG64 v7; // rcx
  _BYTE v9[4]; // [rsp+30h] [rbp-148h] BYREF
  _DWORD v10[3]; // [rsp+34h] [rbp-144h] BYREF
  unsigned __int64 v11; // [rsp+40h] [rbp-138h] BYREF
  __int64 v12; // [rsp+48h] [rbp-130h]
  __int128 v13; // [rsp+60h] [rbp-118h] BYREF
  __int128 v14; // [rsp+70h] [rbp-108h]
  __int128 v15; // [rsp+80h] [rbp-F8h]
  __int128 v16; // [rsp+90h] [rbp-E8h]
  __int64 v17; // [rsp+A0h] [rbp-D8h]
  __int128 v18; // [rsp+B0h] [rbp-C8h]
  __int128 v19; // [rsp+C0h] [rbp-B8h]
  volatile void *Address[2]; // [rsp+D0h] [rbp-A8h]
  volatile void *v21[2]; // [rsp+E0h] [rbp-98h]
  __int64 v22; // [rsp+F0h] [rbp-88h]
  _OWORD v23[4]; // [rsp+110h] [rbp-68h] BYREF
  __int64 v24; // [rsp+150h] [rbp-28h]

  memset_0(&v13, 0, 0x48uLL);
  v11 = 0LL;
  v10[0] = 0;
  v23[0] = *(_OWORD *)a1;
  v23[1] = *(_OWORD *)(a1 + 16);
  v23[2] = *(_OWORD *)(a1 + 32);
  v23[3] = *(_OWORD *)(a1 + 48);
  v24 = *(_QWORD *)(a1 + 64);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v9);
  EtwTraceBeginCallback(62LL);
  v2 = KeUserModeCallback(62LL, v23, 72LL, &v11, v10);
  EtwTraceEndCallback(62LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v9);
  if ( v2 >= 0 && v10[0] == 24 )
  {
    v3 = (__int64 *)v11;
    v4 = v11 + 8;
    if ( v11 + 8 < v11 || v4 > MmUserProbeAddress )
      v3 = (__int64 *)MmUserProbeAddress;
    v5 = *v3;
    v12 = v5;
    if ( !v5 )
      return v5;
    v6 = *((_QWORD *)PtiCurrentShared(v4) + 64);
    if ( !v6 || (*(_DWORD *)(v6 + 84) & 1) == 0 || *(__int128 **)(v6 + 96) != &v13 )
    {
      v7 = *(_QWORD *)(v11 + 16);
      if ( v7 + 72 < v7 || v7 + 72 > MmUserProbeAddress )
        v7 = MmUserProbeAddress;
      v18 = *(_OWORD *)v7;
      v19 = *(_OWORD *)(v7 + 16);
      *(_OWORD *)Address = *(_OWORD *)(v7 + 32);
      *(_OWORD *)v21 = *(_OWORD *)(v7 + 48);
      v22 = *(_QWORD *)(v7 + 64);
      v13 = v18;
      v14 = v19;
      v15 = *(_OWORD *)Address;
      v16 = *(_OWORD *)v21;
      v17 = v22;
      if ( *(_DWORD *)(a1 + 40) )
      {
        ProbeForWrite(Address[0], *(int *)(a1 + 40), 1u);
        memmove((void *)Address[0], (const void *)(a1 + 72), *(int *)(a1 + 40));
      }
      if ( *(_DWORD *)(a1 + 64) )
      {
        ProbeForWrite(v21[1], *(int *)(a1 + 64), 1u);
        memmove((void *)v21[1], (const void *)(*(int *)(a1 + 40) + a1 + 72), *(int *)(a1 + 64));
      }
      if ( *((_QWORD *)&v19 + 1) && (unsigned int)xxxClientCopyDDEOut2((struct tagINTDDEINFO *)&v13) )
      {
        if ( (v14 & 0x800) != 0 )
          v5 = *((_QWORD *)&v14 + 1);
        v12 = v5;
      }
      *(_OWORD *)a1 = v13;
      *(_OWORD *)(a1 + 16) = v14;
      *(_OWORD *)(a1 + 32) = v15;
      *(_OWORD *)(a1 + 48) = v16;
      *(_QWORD *)(a1 + 64) = v17;
      return v5;
    }
  }
  return 0LL;
}
