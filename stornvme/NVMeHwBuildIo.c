/*
 * XREFs of NVMeHwBuildIo @ 0x1C0001010
 * Callers:
 *     <none>
 * Callees:
 *     ScsiToNVMe @ 0x1C00010C0 (ScsiToNVMe.c)
 *     memset @ 0x1C0004580 (memset.c)
 *     GetNamespaceId @ 0x1C0007A8C (GetNamespaceId.c)
 *     GetSrbDataBuffer @ 0x1C0007AB8 (GetSrbDataBuffer.c)
 *     NVMeZeroMemory @ 0x1C0009218 (NVMeZeroMemory.c)
 *     IoctlToNVMe @ 0x1C0014800 (IoctlToNVMe.c)
 *     ProtocolCommandToNVMe @ 0x1C00187F4 (ProtocolCommandToNVMe.c)
 *     NVMeSetSenseData @ 0x1C0024238 (NVMeSetSenseData.c)
 *     ProcessCommandNvmePacket @ 0x1C00244D0 (ProcessCommandNvmePacket.c)
 */

char __fastcall NVMeHwBuildIo(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // eax
  int v9; // eax
  unsigned __int64 v11; // r8
  int v12; // eax
  int v13; // eax
  int v14; // eax
  bool v15; // zf
  char v16; // bl
  __int64 SrbDataBuffer; // r14
  unsigned __int8 v18; // cl
  int NamespaceId; // ebx
  _OWORD *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r9
  __int64 v23; // r8
  int v24; // eax
  char v25; // cl
  __int64 v26; // rax
  __int64 v27; // rbx
  unsigned int *v28; // r14
  _OWORD *v29; // rcx
  int v30; // eax
  __int64 v31; // rbx
  __int64 v32; // rax
  void *v33; // [rsp+50h] [rbp+20h] BYREF
  unsigned int *v34; // [rsp+58h] [rbp+28h] BYREF

  if ( *(_BYTE *)(a2 + 2) == 40 )
    v4 = *(_QWORD *)(a2 + 104);
  else
    v4 = *(_QWORD *)(a2 + 56);
  if ( (v4 & 0xFFF) != 0 )
    v4 = v4 - (v4 & 0xFFF) + 4096;
  memset((void *)(v4 + 4096), 0, 0xA0uLL);
  v7 = *(unsigned __int8 *)(a2 + 2);
  if ( (_BYTE)v7 == 40 )
    v8 = *(_DWORD *)(a2 + 20);
  else
    v8 = *(unsigned __int8 *)(a2 + 2);
  if ( v8 )
  {
    v11 = 0x1C0000000uLL;
    switch ( v8 )
    {
      case 2:
        v13 = *(_DWORD *)(a1 + 32);
        if ( (v13 & 1) == 0 )
        {
          LOBYTE(v6) = 37;
          LOBYTE(v11) = 5;
          LOBYTE(v7) = 8;
          goto LABEL_74;
        }
        if ( (v13 & 0x10) != 0 )
          goto LABEL_73;
        IoctlToNVMe(a1, a2);
        break;
      case 8:
        goto LABEL_43;
      case 9:
        v14 = *(_DWORD *)(a1 + 32);
        if ( (v14 & 1) == 0 )
        {
          LOBYTE(v6) = 37;
          LOBYTE(v11) = 5;
          LOBYTE(v7) = 8;
          goto LABEL_74;
        }
        if ( (v14 & 0x10) != 0 )
          goto LABEL_73;
        ProtocolCommandToNVMe(a1, a2);
        break;
      case 10:
        v12 = *(_DWORD *)(a1 + 32);
        if ( (v12 & 1) == 0 )
        {
          LOBYTE(v6) = 37;
          LOBYTE(v11) = 5;
          LOBYTE(v7) = 8;
          goto LABEL_74;
        }
        if ( (v12 & 0x10) != 0 )
          goto LABEL_73;
        ProcessCommandNvmePacket(a1, a2);
        break;
      case 36:
        if ( (_BYTE)v7 == 40 )
          v15 = *(_BYTE *)(*(unsigned int *)(a2 + 120) + a2 + 8) == 1;
        else
          v15 = *(_BYTE *)(a2 + 4) == 1;
        v16 = 1;
        if ( !v15 )
          v16 = 6;
        *(_BYTE *)(a2 + 3) = v16;
        break;
      case 38:
        v34 = 0LL;
        v33 = 0LL;
        SrbDataBuffer = GetSrbDataBuffer(a2, &v34);
        if ( !SrbDataBuffer || *v34 < 0x48 || (*(_DWORD *)(a1 + 64) & 0x10) == 0 )
          goto LABEL_45;
        if ( (unsigned int)StorPortExtendedFunction(0LL, a1, 152LL, 1701672526LL) || !v33 )
          goto LABEL_44;
        if ( *(_BYTE *)(a2 + 2) == 40 )
          v18 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
        else
          v18 = *(_BYTE *)(a2 + 7);
        NamespaceId = GetNamespaceId(a1, v18);
        memset(v33, 0, 0x98uLL);
        *(_DWORD *)SrbDataBuffer = 7340288;
        *(_QWORD *)(SrbDataBuffer + 64) = v33;
        *(_WORD *)v33 = *(_WORD *)(a1 + 4);
        *((_WORD *)v33 + 1) = *(_WORD *)(a1 + 6);
        *((_BYTE *)v33 + 4) = *(_BYTE *)(a1 + 8);
        v20 = v33;
        *((_OWORD *)v33 + 1) = *(_OWORD *)(a1 + 40);
        v20[2] = *(_OWORD *)(a1 + 56);
        v20[3] = *(_OWORD *)(a1 + 72);
        v20[4] = *(_OWORD *)(a1 + 88);
        v20[5] = *(_OWORD *)(a1 + 104);
        v20[6] = *(_OWORD *)(a1 + 120);
        v20[7] = *(_OWORD *)(a1 + 136);
        v20[8] = *(_OWORD *)(a1 + 152);
        *((_DWORD *)v20 + 36) = *(_DWORD *)(a1 + 168);
        *((_DWORD *)v33 + 10) &= ~8u;
        *((_QWORD *)v33 + 1) = *(_QWORD *)(a1 + 176);
        *((_DWORD *)v33 + 37) = NamespaceId;
LABEL_43:
        *(_BYTE *)(a2 + 3) = 1;
        break;
      case 39:
        v33 = 0LL;
        v21 = GetSrbDataBuffer(a2, &v33);
        if ( !v21 || *(_DWORD *)v33 < 0x48u )
          goto LABEL_52;
        v23 = *(_QWORD *)(v21 + 64);
        goto LABEL_49;
      case 42:
        v34 = 0LL;
        v33 = 0LL;
        v26 = GetSrbDataBuffer(a2, &v34);
        v27 = v26;
        if ( v26 && (v28 = v34, *v34 >= 0x20) && *(_DWORD *)(v26 + 8) == 1196246089 )
        {
          if ( (unsigned int)StorPortExtendedFunction(0LL, a1, 152LL, 1701672526LL) || !v33 )
          {
LABEL_44:
            *(_BYTE *)(a2 + 3) = 4;
          }
          else
          {
            NVMeZeroMemory(v33, 152LL);
            *(_WORD *)v33 = *(_WORD *)(a1 + 4);
            *((_WORD *)v33 + 1) = *(_WORD *)(a1 + 6);
            *((_BYTE *)v33 + 4) = *(_BYTE *)(a1 + 8);
            v29 = v33;
            *((_OWORD *)v33 + 1) = *(_OWORD *)(a1 + 40);
            v29[2] = *(_OWORD *)(a1 + 56);
            v29[3] = *(_OWORD *)(a1 + 72);
            v29[4] = *(_OWORD *)(a1 + 88);
            v29[5] = *(_OWORD *)(a1 + 104);
            v29[6] = *(_OWORD *)(a1 + 120);
            v29[7] = *(_OWORD *)(a1 + 136);
            v29[8] = *(_OWORD *)(a1 + 152);
            *((_DWORD *)v29 + 36) = *(_DWORD *)(a1 + 168);
            *((_DWORD *)v33 + 10) &= ~8u;
            *((_QWORD *)v33 + 1) = *(_QWORD *)(a1 + 176);
            *(_BYTE *)(a2 + 3) = 1;
            if ( *(_WORD *)(v27 + 16) == 1 && *(_DWORD *)(v27 + 20) >= 4u )
            {
              v30 = GetNamespaceId(a1, *(unsigned __int8 *)(v27 + 26));
              *((_DWORD *)v33 + 37) = v30;
            }
            else
            {
              *(_BYTE *)(a2 + 3) = 6;
            }
            if ( *(_BYTE *)(a2 + 3) == 1 )
            {
              if ( *(_BYTE *)(a2 + 2) == 40 )
                v31 = *(_QWORD *)(a2 + 64);
              else
                v31 = *(_QWORD *)(a2 + 24);
              NVMeZeroMemory(v31, *v28);
              *(_DWORD *)v31 = 24;
              *(_DWORD *)(v31 + 4) = 24;
              *(_DWORD *)(v31 + 8) = 1297105993;
              *(_QWORD *)(v31 + 16) = v33;
            }
          }
        }
        else
        {
LABEL_45:
          *(_BYTE *)(a2 + 3) = 6;
        }
        break;
      case 43:
        v33 = 0LL;
        v32 = GetSrbDataBuffer(a2, &v33);
        if ( v32 && *(_DWORD *)v33 >= 0x18u && *(_DWORD *)(v32 + 8) == 1179468873 )
        {
          v23 = *(_QWORD *)(v32 + 16);
LABEL_49:
          v24 = StorPortExtendedFunction(1LL, a1, v23, v22);
          v25 = 4;
          if ( !v24 )
            v25 = 1;
        }
        else
        {
LABEL_52:
          v25 = 6;
        }
        *(_BYTE *)(a2 + 3) = v25;
        break;
      default:
        break;
    }
  }
  else
  {
    v9 = *(_DWORD *)(a1 + 32);
    if ( (v9 & 1) != 0 )
    {
      if ( (v9 & 0x10) != 0 )
      {
LABEL_73:
        v6 = 0LL;
        LOBYTE(v7) = 14;
        v11 = 0LL;
LABEL_74:
        NVMeSetSenseData(a2, v7, v11, v6);
      }
      else
      {
        ScsiToNVMe(a1, a2);
      }
    }
    else
    {
      LOBYTE(v6) = 37;
      LOBYTE(v5) = 5;
      LOBYTE(v7) = 8;
      NVMeSetSenseData(a2, v7, v5, v6);
    }
  }
  if ( !*(_BYTE *)(a2 + 3) )
    return 1;
  StorPortNotification(0LL, a1, a2);
  return 0;
}
