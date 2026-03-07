char __fastcall KdpTrap(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, char a6)
{
  char v6; // r10
  bool v8; // zf
  unsigned __int64 v10; // r9
  __int64 v11; // rsi
  __int64 v12; // rdi
  int v13; // r9d
  int v14; // r9d
  int v15; // r9d
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // [rsp+20h] [rbp-28h]
  char v21; // [rsp+60h] [rbp+18h] BYREF

  v6 = 0;
  v8 = *(_DWORD *)a3 == -2147483645;
  v21 = 0;
  if ( !v8 )
    return KdpReport(a1, a2, (int *)a3, a4, v20, a6);
  v10 = *(_QWORD *)(a3 + 32);
  if ( !v10 )
    return KdpReport(a1, a2, (int *)a3, a4, v20, a6);
  v11 = *(_QWORD *)(a4 + 248);
  v12 = 0LL;
  if ( (*(_DWORD *)(a4 + 48) & 0x100080) == 0x100080 )
    v12 = *(_QWORD *)(*(int *)(a4 + 1256) + a4 + 1240);
  if ( v10 <= 5 )
  {
    v13 = v10 - 1;
    if ( !v13 )
    {
      v17 = KdpPrint(
              *(_DWORD *)(a4 + 184),
              *(_DWORD *)(a4 + 192),
              *(_QWORD *)(a4 + 128),
              *(unsigned __int16 *)(a4 + 136),
              a5,
              a1,
              a2,
              (__int64)&v21);
      v6 = v21;
      *(_QWORD *)(a4 + 120) = v17;
      goto LABEL_13;
    }
    v14 = v13 - 1;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        if ( --v15 )
        {
          if ( v15 != 1 )
            goto LABEL_13;
          LOBYTE(a3) = a5;
          KdpCommandString(*(_QWORD *)(a4 + 128), *(_QWORD *)(a4 + 136), a3, a4, a1, a2);
          goto LABEL_12;
        }
        v6 = 1;
      }
      LOBYTE(v15) = a5;
      LOBYTE(a3) = v6;
      KdpSymbol(*(_QWORD *)(a4 + 128), *(_QWORD *)(a4 + 136), a3, v15, a4, a1, a2);
    }
    else
    {
      *(_QWORD *)(a4 + 120) = (unsigned __int16)KdpPrompt(
                                                  *(_QWORD *)(a4 + 128),
                                                  *(unsigned __int16 *)(a4 + 136),
                                                  *(_QWORD *)(a4 + 184),
                                                  *(unsigned __int16 *)(a4 + 192),
                                                  a5,
                                                  a1,
                                                  a2);
    }
LABEL_12:
    v6 = 1;
  }
LABEL_13:
  v16 = *(_QWORD *)(a4 + 248);
  if ( v16 == v11 )
    *(_QWORD *)(a4 + 248) = v16 + 1;
  if ( (*(_DWORD *)(a4 + 48) & 0x100080) == 0x100080 )
  {
    v18 = *(int *)(a4 + 1256);
    v19 = *(_QWORD *)(v18 + a4 + 1240);
    if ( v19 == v12 )
      *(_QWORD *)(v18 + a4 + 1240) = v19 + 1;
  }
  return v6;
}
