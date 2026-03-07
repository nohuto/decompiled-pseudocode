__int64 __fastcall HalpInterruptUnmap(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
        unsigned int a6)
{
  _DWORD *v6; // r12
  unsigned int v7; // ebx
  unsigned int v8; // eax
  int v9; // eax
  int v10; // edx
  int v11; // r8d
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  _DWORD *v16; // rbx
  _DWORD *v17; // r14
  __int64 v18; // r15
  __int64 result; // rax
  __int64 v20; // rcx
  ULONG_PTR *v21; // r14
  _QWORD *Lines; // rsi
  unsigned int v23; // ecx
  unsigned int v24; // [rsp+20h] [rbp-50h]
  __int64 v25; // [rsp+30h] [rbp-40h] BYREF
  __int128 v26; // [rsp+38h] [rbp-38h] BYREF
  __int128 v27; // [rsp+48h] [rbp-28h]
  __int128 v28; // [rsp+58h] [rbp-18h]
  __int64 v29; // [rsp+68h] [rbp-8h]

  v29 = 0LL;
  v26 = 0LL;
  v6 = a5 + 1;
  v7 = a5[3];
  *((_QWORD *)&v26 + 1) = a5[4];
  v8 = a5[1];
  v27 = 0LL;
  *(_QWORD *)&v27 = 0x1FFFFFFFFLL;
  LODWORD(v29) = v8;
  v9 = *a5;
  LODWORD(v26) = v7;
  v28 = 0LL;
  if ( v9 )
  {
    if ( v9 != 3 )
    {
      v24 = 3225;
      v10 = 19;
      v11 = 2;
      return HalpInterruptSetProblemEx(
               0LL,
               v10,
               v11,
               (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c",
               v24);
    }
    if ( HalpInterruptIsHvMsiRemappingSupported() )
      HalpHvUnmapDeviceMsiRange(v13, v12, v14, v15, (__int64)a5);
    if ( HalpInterruptIsRemappingRequired() )
    {
      v16 = a5 + 10;
      if ( a6 )
      {
        v17 = a5 + 10;
        v18 = a6;
        do
        {
          LODWORD(v29) = *v6;
          HalpSetIrtEntry(1, v17, (__int64)&v26);
          v17 += 22;
          v6 += 22;
          --v18;
        }
        while ( v18 );
      }
      if ( (*v16 & 0x40000000) == 0 )
        HalpIrtFreeIndex(*v16 & 0x3FFFFFFF, a6, *a5);
    }
    return xHalUnmaskInterrupt();
  }
  else
  {
    v20 = a5[14];
    v25 = 0LL;
    if ( (int)HalpInterruptGsiToLine(v20, &v25) < 0 )
    {
      v11 = 0;
      v24 = 3140;
      v10 = 18;
      return HalpInterruptSetProblemEx(
               0LL,
               v10,
               v11,
               (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c",
               v24);
    }
    if ( v7 - 3 <= 1 )
    {
      BYTE4(v26) = 1;
      DWORD2(v26) = 0;
    }
    v21 = HalpInterruptLookupController(v25);
    if ( !v21 )
    {
      v24 = 3172;
      v10 = 17;
      v11 = 1;
      return HalpInterruptSetProblemEx(
               0LL,
               v10,
               v11,
               (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c",
               v24);
    }
    Lines = HalpInterruptFindLines((unsigned int *)&v25);
    if ( Lines )
    {
      if ( HalpInterruptIsHvMsiRemappingSupported() )
      {
        *(_DWORD *)(Lines[5] + 12LL) |= 0x10u;
        HalpHvUnmapIoApicDeviceInterrupt(*((unsigned int *)v21 + 64), Lines[5]);
        *(_DWORD *)(Lines[5] + 12LL) &= ~0x10u;
      }
      if ( HalpInterruptIsRemappingRequired() )
      {
        if ( (unsigned int)HalpInterruptModel() == 1 )
        {
          LODWORD(v29) = *v6;
          HalpSetIrtEntry(0, a5 + 10, (__int64)&v26);
          v23 = a5[10];
          if ( (v23 & 0x40000000) == 0 )
            HalpIrtFreeIndex(v23 & 0x3FFFFFFF, 1LL, *a5);
        }
      }
      result = Lines[6];
      *(_BYTE *)(result + 12) = 0;
    }
    else
    {
      return HalpInterruptSetProblemEx(
               (__int64)v21,
               18,
               0,
               (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c",
               0xC6Cu);
    }
  }
  return result;
}
