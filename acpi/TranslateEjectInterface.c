__int64 __fastcall TranslateEjectInterface(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // r14
  __int64 v5; // rsi
  int v6; // ebx
  unsigned int v7; // r8d
  unsigned int v8; // r9d
  char *v9; // rdx
  __int64 Pool2; // rax
  void *v12; // rdi
  PVOID P[2]; // [rsp+50h] [rbp-10h] BYREF
  int v14; // [rsp+98h] [rbp+38h] BYREF
  PVOID v15; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+48h]

  v15 = 0LL;
  P[0] = 0LL;
  v14 = 0;
  v16 = 0LL;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 24LL);
  if ( (int)ACPIGet(DeviceExtension, 0x5352435Fu, 268501000, 0LL, 0, 0LL, 0LL, (__int64)P, (__int64)&v14) < 0 )
    goto LABEL_11;
  v6 = PnpBiosResourcesToNtResources(a1, (ULONG_PTR)P[0], 1u, (__int64 *)&v15);
  if ( v6 < 0 )
    goto LABEL_12;
  if ( v15 && (v7 = 0, (v8 = *((_DWORD *)v15 + 9)) != 0) )
  {
    v9 = (char *)v15 + 44;
    while ( 1 )
    {
      if ( *(v9 - 3) == -127 && (*(_WORD *)v9 & 0x6000) != 0 )
      {
        v16 = *((_QWORD *)v9 + 1);
        if ( *((_DWORD *)v9 + 1) != *((unsigned __int8 *)v15 + 32 * v7 + 9) || v16 != *(_QWORD *)(v9 - 20) )
          break;
      }
      ++v7;
      v9 += 32;
      if ( v7 >= v8 )
        goto LABEL_11;
    }
    Pool2 = ExAllocatePool2(256LL, 32LL, 1483760449LL);
    v12 = (void *)Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)Pool2 = *(_QWORD *)(DeviceExtension + 760);
      *(_QWORD *)(Pool2 + 24) = v15;
      v6 = BuildTranslatorRanges(Pool2, (_DWORD *)(Pool2 + 8), (_QWORD *)(Pool2 + 16));
      if ( v6 < 0 )
      {
        ExFreePoolWithTag(v12, 0);
      }
      else
      {
        *(_DWORD *)v5 = 65584;
        *(_QWORD *)(v5 + 16) = PciConfigPinToLine;
        v6 = 0;
        *(_QWORD *)(v5 + 24) = PciConfigPinToLine;
        *(_QWORD *)(v5 + 32) = TranslateBridgeResources;
        *(_QWORD *)(v5 + 40) = TranslateBridgeRequirements;
        *(_QWORD *)(v5 + 8) = v12;
      }
    }
    else
    {
      v6 = -1073741670;
    }
  }
  else
  {
LABEL_11:
    v6 = *(_DWORD *)(a2 + 48);
  }
LABEL_12:
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0);
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  return (unsigned int)v6;
}
