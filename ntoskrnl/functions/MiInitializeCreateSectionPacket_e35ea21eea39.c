NTSTATUS __fastcall MiInitializeCreateSectionPacket(
        int *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        char a6,
        __int64 a7,
        unsigned __int8 a8,
        void *a9,
        __int64 a10,
        KPROCESSOR_MODE a11,
        int a12)
{
  unsigned int v12; // edi
  unsigned int v14; // ecx
  int ProtectionMask; // eax
  __int64 v16; // r8
  unsigned int v17; // ecx
  NTSTATUS result; // eax
  int v19; // edx
  int v20; // ecx
  int v21; // eax
  unsigned int v22; // edi
  int v23; // eax
  char v24; // al
  int v25; // eax
  _BYTE *v26; // r8
  unsigned __int16 **v27; // [rsp+30h] [rbp-18h] BYREF

  v12 = a5;
  if ( (a5 & 0x7F) != 0 )
    return -1073741811;
  *((_QWORD *)a1 + 19) = a3;
  *((_QWORD *)a1 + 20) = a7;
  a1[42] = a12;
  a1[5] = a5;
  *((_QWORD *)a1 + 1) = a2;
  a1[7] = a4;
  *((_BYTE *)a1 + 72) = a11;
  *((_BYTE *)a1 + 24) = a8;
  if ( (a6 & 1) != 0 )
    *a1 |= 0x800u;
  if ( (a6 & 2) != 0 )
  {
    v19 = *a1;
    *a1 |= 1u;
    if ( (a6 & 4) != 0 )
    {
      if ( (v19 & 0x8000000) != 0 )
        return -1073739503;
      *a1 = v19 | 0x10001;
    }
  }
  if ( (a6 & 0x10) != 0 )
  {
    if ( a11 )
      return -1073741811;
    if ( (a5 & 0x2100000) != 0 )
      return -1073741811;
    if ( (a5 & 0x11000000) == 0x11000000 )
      return -1073741811;
    if ( (a5 & 0x1000000) == 0 )
      return -1073741811;
    if ( a8 > 0xEu )
      return -1073741811;
    v25 = 20944;
    if ( !_bittest(&v25, a8) )
      return -1073741811;
    *a1 |= 0x10000000u;
  }
  a1[35] ^= (a1[35] ^ a4) & 0xFFF;
  *((_QWORD *)a1 + 6) = a10;
  *((_QWORD *)a1 + 5) = a9;
  if ( (a5 & 0x1100000) == 0x1100000 )
  {
    *a1 |= 0x200u;
    v12 = a5 & 0xFFEFFFFF;
  }
  if ( (v12 & 0x100000) == 0 )
  {
    if ( (v12 & 0x2000000) == 0 )
      goto LABEL_10;
    *a1 |= 0x10u;
    if ( (v12 & 0x400000) != 0 )
    {
      v12 &= ~0x400000u;
      v24 = 12;
    }
    else
    {
      v24 = 4;
    }
    v22 = v12 & 0xFDFFFFFF;
    goto LABEL_48;
  }
  if ( (v12 & 0x200000) != 0 )
  {
    v12 &= ~0x200000u;
    *a1 |= 0x40u;
  }
  v22 = v12 & 0xFFEFFFFF;
  v23 = *a1 | 0x20;
  *a1 = v23;
  if ( (v22 & 0x400000) == 0 )
  {
    v24 = 1;
LABEL_48:
    v12 = v22 | 0x1000000;
    *((_BYTE *)a1 + 24) = v24;
    goto LABEL_10;
  }
  *a1 = v23 | 0x100;
  v12 = v22 & 0xFEBFFFFF | 0x1000000;
  *((_BYTE *)a1 + 24) = 12;
LABEL_10:
  v27 = 0LL;
  if ( (v12 & 0x40000) == 0 )
    goto LABEL_11;
  if ( !a9 || *((_QWORD *)a1 + 6) )
    return -1073741811;
  result = PsReferencePartitionByHandle(a9, 2u, a11, 0x70434D4Du, (PVOID *)&v27);
  if ( result >= 0 )
  {
    if ( *v27 == MiSystemPartition )
      PsDereferencePartition((__int64)v27);
    else
      *((_QWORD *)a1 + 22) = v27;
    *((_QWORD *)a1 + 5) = 0LL;
    v12 &= ~0x40000u;
LABEL_11:
    if ( (v12 & 0x1000000) != 0 )
    {
      if ( (a6 & 8) != 0 )
        *a1 |= 0x100000u;
      if ( (KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle & 1) != 0 )
        *a1 |= 0x900000u;
      if ( (v12 & 0x11000000) == 0x11000000 )
      {
        if ( a1[7] != 2 )
          return -1073741755;
        v12 &= ~0x10000000u;
      }
      else
      {
        v20 = *a1;
        v21 = *a1 | 0x400;
        *a1 = v21;
        if ( (v21 & 0x20) != 0 && (MiFlags & 0x8000) != 0 )
        {
          *a1 = v20 | 0x100400;
        }
        else if ( (v20 & 0x60) == 0x60 && (MiFlags & 0x4000) != 0 )
        {
          *a1 = v20 | 0x100400;
        }
        else if ( (MiFlags & 0x80000) != 0 )
        {
          *a1 = v20 | 0x100400;
        }
      }
    }
    else if ( (v12 & 0x10000000) != 0 )
    {
      a1[7] |= 0x200u;
    }
    else if ( (v12 & 0x40000000) != 0 )
    {
      a1[7] |= 0x400u;
    }
    if ( (v12 & 0x20000) != 0 )
    {
      if ( !(unsigned int)MiHugePagesSupported() )
        return -1073741637;
      if ( !v26 || !*v26 )
        return -1073741811;
    }
    v14 = a1[7];
    a1[4] = v12;
    ProtectionMask = MiMakeProtectionMask(v14);
    a1[8] = ProtectionMask;
    if ( ProtectionMask != -1 )
    {
      if ( !v16 )
        return 0;
      *((_BYTE *)a1 + 192) = *(_BYTE *)v16;
      a1[49] = *(_DWORD *)(v16 + 4);
      v17 = *(_DWORD *)(v16 + 8);
      if ( v17 <= (unsigned __int16)KeNumberNodes )
      {
        a1[43] = v17;
        if ( (*(_DWORD *)(v16 + 20) & 1) != 0 )
          *a1 |= 0x8000000u;
        return 0;
      }
      return -1073741811;
    }
    return -1073741755;
  }
  return result;
}
