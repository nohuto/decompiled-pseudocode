__int64 __fastcall HalpInterruptRemap(
        unsigned int a1,
        unsigned int a2,
        __int64 a3,
        char a4,
        unsigned int *a5,
        unsigned int a6)
{
  unsigned int *v6; // r14
  char v8; // al
  _DWORD *v9; // rsi
  unsigned int *v10; // r15
  unsigned __int64 v11; // rdx
  char v13; // r12
  __int64 v14; // r9
  __int64 v15; // rcx
  unsigned int v16; // edi
  int BestRouting; // ebx
  unsigned int v18; // eax
  unsigned int v19; // r13d
  int v20; // eax
  int v22; // edx
  int v23; // r8d
  unsigned int v24; // r12d
  _DWORD *v25; // rbx
  __int64 v26; // rdx
  int v27; // r8d
  int v28; // r9d
  int v29; // r10d
  int v30; // r11d
  int v31; // eax
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rcx
  ULONG_PTR *v35; // r13
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  ULONG_PTR v39; // rcx
  int v40; // edx
  int v41; // eax
  int v42; // eax
  int v43; // [rsp+28h] [rbp-79h]
  int v44; // [rsp+48h] [rbp-59h] BYREF
  int v45; // [rsp+50h] [rbp-51h] BYREF
  _BYTE v46[12]; // [rsp+54h] [rbp-4Dh]
  unsigned int *v47; // [rsp+60h] [rbp-41h]
  __int128 v48; // [rsp+68h] [rbp-39h] BYREF
  __int128 v49; // [rsp+78h] [rbp-29h] BYREF
  __int128 v50; // [rsp+88h] [rbp-19h]
  __int64 v51; // [rsp+98h] [rbp-9h]
  __int64 v54; // [rsp+108h] [rbp+67h]

  v54 = a3;
  v6 = a5;
  v48 = 0LL;
  v45 = 1;
  *(_QWORD *)v46 = 0LL;
  v8 = *((_BYTE *)a5 + 8);
  v9 = a5 + 10;
  v10 = a5 + 6;
  v11 = (unsigned __int64)*((unsigned __int8 *)a5 + 4) >> 4;
  v47 = a5 + 10;
  v49 = 0LL;
  v13 = a4;
  *(_QWORD *)&v46[4] = a5 + 6;
  *((_BYTE *)&HalpHwToSwIrqlMap + v11) = v8;
  v14 = 0xFFFFFFFFLL;
  v44 = -1;
  v51 = 0LL;
  v15 = 1LL;
  v16 = -1;
  LODWORD(v48) = v6[3];
  BestRouting = -1073741823;
  DWORD2(v48) = v6[4];
  LODWORD(v51) = v6[1];
  v18 = *v6;
  HIDWORD(v48) = 16;
  *(_QWORD *)&v49 = 0x1FFFFFFFFLL;
  v50 = 0LL;
  if ( !v18 )
  {
    v33 = v6[14];
    a5 = 0LL;
    if ( (int)HalpInterruptGsiToLine(v33, &a5) >= 0 )
    {
      HalpInterruptApplyOverrides(&a5, &v48, (char *)&v48 + 8);
      if ( (_DWORD)v48 == 3 )
      {
        BYTE4(v48) = 1;
        DWORD2(v48) = 0;
        LODWORD(v48) = 2;
      }
      else if ( (_DWORD)v48 == 4 )
      {
        BYTE4(v48) = 1;
        DWORD2(v48) = 0;
        LODWORD(v48) = 1;
      }
      else
      {
        BYTE4(v48) = 0;
      }
      v35 = HalpInterruptLookupController((int)a5);
      if ( v35 )
      {
        BestRouting = HalpInterruptDestinationToTarget(v34, (__int64)&v45, (__int64)&v49 + 8);
        if ( BestRouting < 0 )
        {
          v43 = 2894;
          goto LABEL_17;
        }
        BestRouting = HalpInterruptFindBestRouting(&a5, v49, &v49);
        if ( BestRouting < 0 )
          return (unsigned int)BestRouting;
        HalpInterruptRemapUpdateDeliveryMode((__int64)v6, (__int64)&v48);
        v39 = HalpInterruptController;
        if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x100) != 0 && (unsigned int)HalpInterruptModel() == 1 )
        {
          v40 = *v9;
          if ( (*v9 & 0x40000000) == 0 )
          {
            v41 = HalpIrtAllocateIndex(&v44, 1LL, a1, a2, v54, v13, v6);
            BestRouting = v41;
            if ( v41 < 0 )
            {
              HalpInterruptSetProblemEx(
                0,
                31,
                v41,
                (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c",
                2935);
              goto LABEL_8;
            }
            v16 = v44;
            *v9 ^= (*v9 ^ v44) & 0x3FFFFFFF;
            v40 = *v9;
          }
          HalpIommuUpdateRemappingTableEntry(0, v40 & 0x3FFFFFFF, (__int64)&v48);
          v42 = *v9 & 0x3FFFFFFF;
          DWORD2(v49) = 7;
          LODWORD(v50) = v42;
          v10 = v6 + 6;
        }
        if ( (unsigned __int8)HalpInterruptIsHvMsiRemappingSupported(v39, v36, v37, v38) )
        {
          v31 = HalpHvMapIoApicDeviceInterrupt(*((unsigned int *)v35 + 64), &v48, v10);
          BestRouting = v31;
          if ( v31 < 0 )
          {
            v43 = 2965;
            goto LABEL_26;
          }
        }
        HIDWORD(v48) &= ~0x10u;
        v32 = HalpInterruptSetRemappedLineStateInternal(v35, &a5, &v48);
        goto LABEL_52;
      }
      HalpInterruptSetProblemEx(0, 17, 1, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 2879);
    }
    else
    {
      HalpInterruptSetProblemEx(0, 18, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 2834);
    }
    return (unsigned int)-1073741811;
  }
  if ( v18 != 3 )
  {
    HalpInterruptSetProblemEx(0, 19, 2, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 2990);
    return (unsigned int)BestRouting;
  }
  v19 = a6;
  if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x100) == 0 )
  {
LABEL_23:
    if ( (unsigned __int8)HalpInterruptIsHvMsiRemappingSupported(v15, v11, a3, v14) )
    {
      LOBYTE(v28) = v13;
      v31 = HalpHvMapDeviceMsiRange(v30, v29, v27, v28, (__int64)v6, v19);
      BestRouting = v31;
      if ( v31 < 0 )
      {
        v43 = 2791;
LABEL_26:
        v23 = v31;
        v22 = 31;
        goto LABEL_18;
      }
      return 0;
    }
    v32 = HalpPopulateMsiMessages(&v45, v6, v19);
LABEL_52:
    BestRouting = v32;
    if ( v32 < 0 )
      goto LABEL_9;
    return 0;
  }
  if ( (*v9 & 0x40000000) != 0 )
  {
    v16 = *v9 & 0x3FFFFFFF;
    goto LABEL_15;
  }
  v20 = HalpIrtAllocateIndex(&v44, a6, a1, a2, a3, v13, v6);
  BestRouting = v20;
  if ( v20 >= 0 )
  {
    v16 = v44;
LABEL_15:
    BestRouting = HalpInterruptDestinationToTarget(v15, (__int64)&v45, (__int64)&v49 + 8);
    if ( BestRouting < 0 )
    {
      v43 = 2758;
LABEL_17:
      v22 = 19;
      v23 = 1;
LABEL_18:
      HalpInterruptSetProblemEx(0, v22, v23, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", v43);
      goto LABEL_9;
    }
    HalpInterruptRemapUpdateDeliveryMode((__int64)v6, (__int64)&v48);
    v24 = 0;
    if ( v19 )
    {
      v25 = v9;
      do
      {
        *v25 ^= (*v25 ^ (v24 + v16)) & 0x3FFFFFFF;
        v26 = *v25 & 0x3FFFFFFF;
        LODWORD(v51) = *(v25 - 9);
        HalpIommuUpdateRemappingTableEntry(1, v26, (__int64)&v48);
        ++v24;
        v25 += 22;
      }
      while ( v24 < v19 );
    }
    a3 = v54;
    v13 = a4;
    goto LABEL_23;
  }
  HalpInterruptSetProblemEx(0, 31, v20, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 2742);
LABEL_8:
  v16 = v44;
LABEL_9:
  if ( v16 != -1 && (*v9 & 0x40000000) == 0 )
    HalpIrtFreeIndex(v16, a6, *v6);
  return (unsigned int)BestRouting;
}
