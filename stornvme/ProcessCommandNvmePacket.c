__int64 __fastcall ProcessCommandNvmePacket(__int64 a1, __int64 a2)
{
  unsigned int v3; // r15d
  __int64 SrbExtension; // rax
  __int64 v6; // rdx
  bool v7; // zf
  __int64 v8; // rsi
  bool v9; // r14
  __int64 v10; // rdi
  int v11; // r13d
  int v12; // eax
  char v13; // dl
  char v14; // cl
  char v15; // al
  char v16; // al
  int v17; // ecx
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned int v21; // ecx
  unsigned int v22; // r9d
  unsigned int v23; // r8d
  unsigned int v24; // eax
  char v25; // dl
  __int64 v27; // [rsp+68h] [rbp+10h] BYREF

  v3 = 0;
  SrbExtension = GetSrbExtension(a2);
  v7 = *(_BYTE *)(v6 + 2) == 40;
  v8 = SrbExtension;
  v27 = 0LL;
  v9 = 0;
  if ( !v7 )
    goto LABEL_40;
  if ( *(_DWORD *)(v6 + 20) != 10 )
    goto LABEL_40;
  v10 = v6 + *(unsigned int *)(v6 + 120);
  if ( !v10 )
    goto LABEL_40;
  GetSrbDataBuffer(a2, &v27);
  v11 = *(_DWORD *)(v10 + 12);
  v12 = *(_BYTE *)(a2 + 2) == 40 ? *(_DWORD *)(a2 + 24) : *(_DWORD *)(a2 + 12);
  if ( (v12 & 0xC0) == 0 )
    goto LABEL_40;
  v13 = *(_BYTE *)(v8 + 4253) & 0xFE | (*(_BYTE *)(v10 + 72) == 1);
  *(_BYTE *)(v8 + 4253) = v13;
  v14 = v13 & 0xFD | ((*(_BYTE *)(v10 + 73) & 3) != 0 ? 2 : 0);
  *(_BYTE *)(v8 + 4253) = v14;
  v15 = v14 ^ (*(_BYTE *)(v10 + 73) ^ v14) & 4;
  *(_BYTE *)(v8 + 4253) = v15;
  v16 = v15 & 1;
  if ( !v16 && !*(_WORD *)(a1 + 336) )
    goto LABEL_40;
  if ( v16 )
  {
    v17 = *(_DWORD *)(v10 + 76);
    if ( v17 != -1 && v17 != *(unsigned __int16 *)(a1 + 384) )
    {
LABEL_40:
      v25 = 40;
      goto LABEL_41;
    }
  }
  if ( *(_DWORD *)(v10 + 76) == -1 )
    SrbAssignQueueId(a1, a2);
  else
    *(_WORD *)(v8 + 4244) = *(_WORD *)(v10 + 76);
  *(_OWORD *)(v8 + 4096) = *(_OWORD *)(v10 + 8);
  *(_OWORD *)(v8 + 4112) = *(_OWORD *)(v10 + 24);
  *(_OWORD *)(v8 + 4128) = *(_OWORD *)(v10 + 40);
  *(_OWORD *)(v8 + 4144) = *(_OWORD *)(v10 + 56);
  if ( (unsigned int)(unsigned __int8)*(_DWORD *)(v10 + 8) - 1 <= 1 && (unsigned int)(v11 - 1) <= 0xFFFFFFFD )
  {
    v18 = *(_DWORD *)(v10 + 12);
    if ( !v18
      || (v19 = (unsigned int)(v18 - 1), (_DWORD)v19 == -1)
      || (v20 = *(_QWORD *)(a1 + 8 * v19 + 1952)) == 0
      || (v21 = *(_DWORD *)(v20 + 52)) == 0 )
    {
      NVMeSetSenseData(a2, 8, 0, 0);
      return 3238002695LL;
    }
    if ( *(_QWORD *)(v20 + 56) )
    {
      v22 = *(unsigned __int16 *)(v20 + 92);
      if ( *(_DWORD *)v27 )
      {
        if ( ((v21 - 1) & *(_DWORD *)v27) == 0 )
        {
          v23 = *(_DWORD *)(a1 + 60);
          if ( v23 >= v21 && !(v23 % v21) || (_WORD)v22 )
          {
            v27 = *(_QWORD *)(v8 + 4136);
            if ( (_WORD)v22 )
              v24 = v22;
            else
              v24 = v23 / v21;
            v9 = v27 / v24 != (v27 + (unsigned int)(unsigned __int16)*(_DWORD *)(v8 + 4144) + 1 - 1LL) / v24;
          }
          goto LABEL_32;
        }
      }
    }
    v25 = 6;
LABEL_41:
    NVMeSetSenseData(a2, v25, 0, 0);
    return 3238002694LL;
  }
LABEL_32:
  if ( !*(_BYTE *)(a2 + 3) )
  {
    v3 = SetPrpFromSrb(a1, a2);
    if ( v3 )
    {
      *(_BYTE *)(a2 + 3) = 4;
    }
    else if ( v9 )
    {
      NVMeSplitIoCommand(a1, a2);
    }
  }
  return v3;
}
