/*
 * XREFs of NVMeHwBuildIo @ 0x1C0004360
 * Callers:
 *     <none>
 * Callees:
 *     IoctlToNVMe @ 0x1C0002DE0 (IoctlToNVMe.c)
 *     ScsiToNVMe @ 0x1C0004650 (ScsiToNVMe.c)
 *     NVMeZeroMemory @ 0x1C0005100 (NVMeZeroMemory.c)
 *     GetNamespaceId @ 0x1C00051C8 (GetNamespaceId.c)
 *     ProcessCommandNvmePacket @ 0x1C000DB08 (ProcessCommandNvmePacket.c)
 *     NVMeSetSenseData @ 0x1C000E3C0 (NVMeSetSenseData.c)
 *     memset @ 0x1C00109C0 (memset.c)
 *     ProtocolCommandToNVMe @ 0x1C001FAF4 (ProtocolCommandToNVMe.c)
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
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  int v18; // eax
  bool v19; // zf
  char v20; // bl
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // r8
  int v24; // eax
  char v25; // cl
  __int64 v26; // r8
  __int64 v27; // rax

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
        v12 = *(_DWORD *)(a1 + 32);
        if ( (v12 & 1) == 0 )
        {
          LOBYTE(v6) = 37;
          LOBYTE(v11) = 5;
          LOBYTE(v7) = 8;
          goto LABEL_71;
        }
        if ( (v12 & 0x10) != 0 )
          goto LABEL_70;
        IoctlToNVMe(a1, a2);
        break;
      case 8:
        *(_BYTE *)(a2 + 3) = 1;
        break;
      case 9:
        v18 = *(_DWORD *)(a1 + 32);
        if ( (v18 & 1) == 0 )
        {
          LOBYTE(v6) = 37;
          LOBYTE(v11) = 5;
          LOBYTE(v7) = 8;
          goto LABEL_71;
        }
        if ( (v18 & 0x10) != 0 )
          goto LABEL_70;
        ProtocolCommandToNVMe(a1, a2);
        break;
      case 10:
        v13 = *(_DWORD *)(a1 + 32);
        if ( (v13 & 1) == 0 )
        {
          LOBYTE(v6) = 37;
          LOBYTE(v11) = 5;
          LOBYTE(v7) = 8;
          goto LABEL_71;
        }
        if ( (v13 & 0x10) != 0 )
          goto LABEL_70;
        ProcessCommandNvmePacket(a1, a2);
        break;
      case 36:
        if ( (_BYTE)v7 == 40 )
          v19 = *(_BYTE *)(*(unsigned int *)(a2 + 120) + a2 + 8) == 1;
        else
          v19 = *(_BYTE *)(a2 + 4) == 1;
        v20 = 1;
        if ( !v19 )
          v20 = 6;
        *(_BYTE *)(a2 + 3) = v20;
        break;
      case 38:
        if ( (_BYTE)v7 == 40 )
        {
          v14 = *(_QWORD *)(a2 + 64);
          v15 = 60LL;
        }
        else
        {
          v14 = *(_QWORD *)(a2 + 24);
          v15 = 16LL;
        }
        if ( v14 && *(_DWORD *)(a2 + v15) >= 0x48u && (*(_DWORD *)(a1 + 64) & 0x10) != 0 )
          goto LABEL_32;
        goto LABEL_26;
      case 39:
        if ( (_BYTE)v7 == 40 )
        {
          v21 = *(_QWORD *)(a2 + 64);
          v22 = 60LL;
        }
        else
        {
          v21 = *(_QWORD *)(a2 + 24);
          v22 = 16LL;
        }
        if ( !v21 || *(_DWORD *)(a2 + v22) < 0x48u )
          goto LABEL_59;
        v23 = *(_QWORD *)(v21 + 64);
        goto LABEL_56;
      case 42:
        if ( (_BYTE)v7 == 40 )
        {
          v16 = *(_QWORD *)(a2 + 64);
          v17 = 60LL;
        }
        else
        {
          v16 = *(_QWORD *)(a2 + 24);
          v17 = 16LL;
        }
        if ( v16 && *(_DWORD *)(a2 + v17) >= 0x20u && *(_DWORD *)(v16 + 8) == 1196246089 )
        {
LABEL_32:
          StorPortExtendedFunction(0LL, a1, 144LL, 1701672526LL);
          *(_BYTE *)(a2 + 3) = 4;
        }
        else
        {
LABEL_26:
          *(_BYTE *)(a2 + 3) = 6;
        }
        break;
      case 43:
        if ( (_BYTE)v7 == 40 )
        {
          v26 = *(_QWORD *)(a2 + 64);
          v27 = 60LL;
        }
        else
        {
          v26 = *(_QWORD *)(a2 + 24);
          v27 = 16LL;
        }
        if ( v26 && *(_DWORD *)(a2 + v27) >= 0x18u && *(_DWORD *)(v26 + 8) == 1179468873 )
        {
          v23 = *(_QWORD *)(v26 + 16);
LABEL_56:
          v24 = StorPortExtendedFunction(1LL, a1, v23, v6);
          v25 = 4;
          if ( !v24 )
            v25 = 1;
        }
        else
        {
LABEL_59:
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
LABEL_70:
        v6 = 0LL;
        LOBYTE(v7) = 14;
        v11 = 0LL;
LABEL_71:
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
  StorPortNotification(0LL, a1, a2, v6);
  return 0;
}
