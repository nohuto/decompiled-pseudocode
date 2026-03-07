__int64 __fastcall ACPIBusIommuBusInterface(ULONG_PTR a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 DeviceExtension; // rdx
  __int64 v4; // r9
  int v5; // ebx
  int v6; // r15d
  unsigned __int16 v7; // bp
  __int64 v8; // rax
  unsigned __int16 *v9; // r12
  _BYTE *v10; // r14
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 Pool2; // rax
  __int64 v14; // rsi
  void (__fastcall *v15)(__int64); // rax
  void *Src; // [rsp+58h] [rbp+10h] BYREF

  Src = 0LL;
  v2 = *(_QWORD *)(a2 + 184);
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v4 = *(_QWORD *)(DeviceExtension + 760);
  if ( !v4 )
    return (unsigned int)-1073741823;
  v6 = *(unsigned __int16 *)(v2 + 18);
  if ( (unsigned __int16)(v6 - 1) > 1u )
    return (unsigned int)-1073741811;
  if ( v6 == 1 )
  {
    v7 = 72;
    goto LABEL_8;
  }
  if ( v6 != 2 )
    return (unsigned int)-1073741811;
  v7 = 80;
LABEL_8:
  if ( *(_WORD *)(v2 + 16) < v7 )
    return (unsigned int)-1073741811;
  v8 = *(_QWORD *)(v2 + 32);
  if ( !v8 || v8 != *(_QWORD *)(DeviceExtension + 784) )
    return (unsigned int)-1073741811;
  v9 = *(unsigned __int16 **)(v2 + 24);
  v5 = ACPIAmliBuildObjectPathname(v4, &Src, 3);
  if ( v5 >= 0 )
  {
    v10 = Src;
    v11 = -1LL;
    v12 = -1LL;
    do
      ++v12;
    while ( *((_BYTE *)Src + v12) );
    Pool2 = ExAllocatePool2(256LL, (unsigned int)(v12 + 113), 1181770561LL);
    v14 = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 88) = 2;
      *(_QWORD *)(Pool2 + 96) = Pool2 + 112;
      do
        ++v11;
      while ( v10[v11] );
      memmove((void *)(Pool2 + 112), v10, v11 + 1);
      ExFreePoolWithTag(v10, 0x53706341u);
      memmove(v9, &AcpiIommuBusInterface, v7);
      v15 = (void (__fastcall *)(__int64))*((_QWORD *)v9 + 2);
      *v9 = v7;
      v9[1] = v6;
      *((_QWORD *)v9 + 1) = v14;
      v15(v14);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v5;
}
