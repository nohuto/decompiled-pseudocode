/*
 * XREFs of ProcessCommandNvmePacket @ 0x1C000DB08
 * Callers:
 *     NVMeHwBuildIo @ 0x1C0004360 (NVMeHwBuildIo.c)
 * Callees:
 *     NVMeSplitIoCommand @ 0x1C00011E4 (NVMeSplitIoCommand.c)
 *     SetPrpFromSrb @ 0x1C0002DA8 (SetPrpFromSrb.c)
 *     SrbAssignQueueId @ 0x1C0005238 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C00053D0 (GetSrbExtension.c)
 *     NVMeSetSenseData @ 0x1C000E3C0 (NVMeSetSenseData.c)
 */

__int64 __fastcall ProcessCommandNvmePacket(__int64 a1, __int64 a2)
{
  unsigned int v3; // r12d
  __int64 v5; // rdx
  __int64 SrbExtension; // rbp
  __int64 v7; // r11
  bool v8; // r15
  __int64 v9; // rdi
  int v10; // r13d
  __int64 v11; // r14
  char v12; // dl
  char v13; // cl
  char v14; // al
  char v15; // al
  int v16; // ecx
  int v18; // eax
  __int64 v19; // rax
  unsigned int v20; // ecx
  unsigned int v21; // r9d
  unsigned int v22; // r8d
  unsigned int v23; // eax

  v3 = 0;
  SrbExtension = GetSrbExtension(a2);
  v8 = v7;
  if ( *(_BYTE *)(v5 + 2) != 40 )
    goto LABEL_19;
  if ( *(_DWORD *)(v5 + 20) != 10 )
    goto LABEL_19;
  v9 = v5 + *(unsigned int *)(v5 + 120);
  if ( !v9 )
    goto LABEL_19;
  v10 = *(_DWORD *)(v9 + 12);
  v11 = (unsigned int)(v7 + 60);
  if ( (*(_DWORD *)(v5 + 24) & 0xC0) == 0 )
    goto LABEL_19;
  v12 = *(_BYTE *)(SrbExtension + 4253) & 0xFE | (*(_BYTE *)(v9 + 72) == 1);
  *(_BYTE *)(SrbExtension + 4253) = v12;
  v13 = v12 & 0xFD | ((*(_BYTE *)(v9 + 73) & 3) != 0 ? 2 : 0);
  *(_BYTE *)(SrbExtension + 4253) = v13;
  v14 = v13 ^ (*(_BYTE *)(v9 + 73) ^ v13) & 4;
  *(_BYTE *)(SrbExtension + 4253) = v14;
  v15 = v14 & 1;
  if ( !v15 && *(_WORD *)(a1 + 304) == (_WORD)v7 )
    goto LABEL_19;
  v5 = 0xFFFFFFFFLL;
  if ( v15 )
  {
    v16 = *(_DWORD *)(v9 + 76);
    if ( v16 != -1 && v16 != *(unsigned __int16 *)(a1 + 352) )
    {
LABEL_19:
      LOBYTE(v5) = 40;
      goto LABEL_20;
    }
  }
  if ( *(_DWORD *)(v9 + 76) == -1 )
  {
    SrbAssignQueueId(a1, a2);
    v7 = 0LL;
    v5 = 0xFFFFFFFFLL;
  }
  else
  {
    *(_WORD *)(SrbExtension + 4244) = *(_WORD *)(v9 + 76);
  }
  *(_OWORD *)(SrbExtension + 4096) = *(_OWORD *)(v9 + 8);
  *(_OWORD *)(SrbExtension + 4112) = *(_OWORD *)(v9 + 24);
  *(_OWORD *)(SrbExtension + 4128) = *(_OWORD *)(v9 + 40);
  *(_OWORD *)(SrbExtension + 4144) = *(_OWORD *)(v9 + 56);
  if ( (unsigned int)(unsigned __int8)*(_DWORD *)(v9 + 8) - 1 <= 1 && (unsigned int)(v10 - 1) <= 0xFFFFFFFD )
  {
    v18 = *(_DWORD *)(v9 + 12);
    if ( !v18
      || (v19 = (unsigned int)(v18 - 1), (_DWORD)v19 == -1)
      || (v5 = *(_QWORD *)(a1 + 8 * v19 + 1752)) == 0
      || (v20 = *(_DWORD *)(v5 + 52)) == 0 )
    {
      LOBYTE(v5) = 8;
      NVMeSetSenseData(a2, v5, 0LL, 0LL);
      return 3238002695LL;
    }
    if ( *(_QWORD *)(v5 + 56) != v7 )
    {
      v21 = *(unsigned __int16 *)(v5 + 92);
      v5 = *(unsigned int *)(v11 + a2);
      if ( (_DWORD)v5 )
      {
        if ( ((v20 - 1) & (unsigned int)v5) == 0 )
        {
          v22 = *(_DWORD *)(a1 + 60);
          if ( v22 >= v20 && !(v22 % v20) || (_WORD)v21 )
          {
            if ( (_WORD)v21 )
              v23 = v21;
            else
              v23 = v22 / v20;
            v8 = *(_QWORD *)(SrbExtension + 4136) / (__int64)v23 != (*(_QWORD *)(SrbExtension + 4136)
                                                                   + (unsigned int)(unsigned __int16)*(_DWORD *)(SrbExtension + 4144)
                                                                   + 1
                                                                   - 1LL)
                                                                  / v23;
          }
          else
          {
            v8 = v7;
          }
          goto LABEL_12;
        }
      }
    }
    LOBYTE(v5) = 6;
LABEL_20:
    NVMeSetSenseData(a2, v5, 0LL, 0LL);
    return 3238002694LL;
  }
LABEL_12:
  if ( *(_BYTE *)(a2 + 3) == (_BYTE)v7 )
  {
    v3 = SetPrpFromSrb(a1);
    if ( v3 )
    {
      *(_BYTE *)(a2 + 3) = 4;
    }
    else if ( v8 )
    {
      NVMeSplitIoCommand(a1, a2);
    }
  }
  return v3;
}
