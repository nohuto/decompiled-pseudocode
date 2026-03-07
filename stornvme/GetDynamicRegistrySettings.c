__int64 __fastcall GetDynamicRegistrySettings(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // r11d
  int v4; // r11d
  void *v5; // r10
  unsigned int v6; // ecx
  char *v7; // rax
  int v8; // edi
  int v9; // r8d
  unsigned int v10; // [rsp+50h] [rbp+17h] BYREF
  unsigned int v11; // [rsp+54h] [rbp+1Bh] BYREF
  unsigned int v12; // [rsp+58h] [rbp+1Fh] BYREF
  __int64 v13; // [rsp+60h] [rbp+27h] BYREF
  char v14[32]; // [rsp+68h] [rbp+2Fh] BYREF

  strcpy(v14, "VEN_vvvv&DEV_dddd&REV_rr");
  v10 = 512;
  result = StorPortAllocateRegistryBuffer(a1, &v10);
  v13 = result;
  if ( result )
  {
    UlongToHex(&v14[4], *(unsigned __int16 *)(a1 + 4), 4LL);
    UlongToHex(&v14[13], *(unsigned __int16 *)(a1 + 6), v3);
    UlongToHex(&v14[22], *(unsigned __int8 *)(a1 + 8), (unsigned int)(v4 - 2));
    v6 = 0;
    v7 = v14;
    v8 = 29;
    while ( *v7 )
    {
      ++v6;
      ++v7;
      if ( v6 >= 0x1D )
        goto LABEL_7;
    }
    v8 = v6;
LABEL_7:
    v12 = v10;
    NVMeZeroMemory(v5, v10);
    v11 = 0;
    result = ReadMultiSzRegistryValueAndCompareId(
               a1,
               (unsigned int)"ControllerResetWaitTimeCushion",
               v9,
               (unsigned int)&v13,
               (__int64)&v10,
               (__int64)&v12,
               (__int64)v14,
               v8,
               (__int64)&v11);
    if ( (_BYTE)result == 1 )
    {
      result = v11;
      *(_DWORD *)(a1 + 168) = v11;
    }
    if ( v13 )
      return StorPortFreeRegistryBuffer(a1);
  }
  return result;
}
