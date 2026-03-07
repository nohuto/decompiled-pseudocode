__int64 __fastcall SmcStoreCreate(__int64 a1, unsigned int a2, _DWORD *a3, unsigned int a4, unsigned int *a5)
{
  struct _PRIVILEGE_SET *v9; // r14
  __int64 v10; // rsi
  int v11; // edi
  __int64 v12; // r15
  int v13; // eax
  __int128 v14; // xmm0
  unsigned __int16 v15; // bx
  int v16; // ebx
  int v17; // eax
  int v18; // eax
  unsigned int v19; // ebx
  struct _PRIVILEGE_SET *NonPaged; // rax
  __int64 v22; // rdx
  unsigned int v23; // ebx
  __int64 v24; // [rsp+20h] [rbp-91h] BYREF
  __int128 v25; // [rsp+28h] [rbp-89h] BYREF
  __int128 v26[5]; // [rsp+40h] [rbp-71h] BYREF
  _OWORD v27[7]; // [rsp+90h] [rbp-21h] BYREF
  unsigned int v28; // [rsp+110h] [rbp+5Fh] BYREF
  unsigned int v29; // [rsp+128h] [rbp+77h]

  v29 = a4;
  memset(v27, 0, 0x40uLL);
  v24 = 0LL;
  v25 = 0LL;
  memset(v26, 0, 0x48uLL);
  v9 = 0LL;
  v28 = 0;
  v10 = SmcCacheReference(a1, a4);
  if ( !v10 )
    return (unsigned int)-1073741672;
  if ( !a3[3] )
  {
    v11 = -1073741811;
    goto LABEL_19;
  }
  if ( *(_DWORD *)(v10 + 24) != a3[2] || (unsigned __int8)*a3 != 1 )
  {
    v11 = -1073741637;
    goto LABEL_19;
  }
  v12 = SmcStoreSlotReserve(v10);
  if ( !v12 )
  {
    v11 = -1073741697;
    goto LABEL_19;
  }
  v13 = *(_DWORD *)(v10 + 8);
  v14 = *(_OWORD *)a3;
  v15 = (unsigned __int16)*(_DWORD *)(v10 + 28) << 13;
  v26[0] = v14;
  HIDWORD(v26[0]) = v13;
  v16 = v14 ^ ((unsigned __int16)v14 ^ v15) & 0x6000;
  DWORD2(v26[1]) = *(_DWORD *)(v10 + 4);
  v17 = *(_DWORD *)(v10 + 32);
  HIDWORD(v27[3]) = 0;
  LODWORD(v26[1]) = v17;
  v27[2] = 0LL;
  v27[0] = *(_OWORD *)(v10 + 40);
  v27[1] = *(_OWORD *)(v10 + 56);
  *(_QWORD *)&v27[3] = *(_QWORD *)(v10 + 88);
  DWORD2(v27[3]) = *(_DWORD *)(v10 + 96);
  *(_QWORD *)&v26[3] = v27;
  LODWORD(v26[0]) = v16;
  v11 = SmKmRegParamsLoad((__int64)&v24);
  if ( v11 < 0 )
    goto LABEL_18;
  if ( (*(_DWORD *)(v10 + 28) & 1) == 0 )
  {
    v18 = BYTE4(v24) & 3;
    if ( v18 == 2 || v18 == 1 && (v16 & 0x800) != 0 )
    {
      v19 = 0;
      goto LABEL_23;
    }
  }
  v19 = v24;
  NonPaged = (struct _PRIVILEGE_SET *)SSHSupportAllocateNonPaged((unsigned int)v24, 0x4B456D73u);
  v9 = NonPaged;
  if ( !NonPaged )
  {
    v11 = -1073741670;
LABEL_18:
    SmcStoreSlotAbort(v10, v12, 0LL);
    goto LABEL_19;
  }
  v11 = SmKmKeyGenGenerate((signed __int64 *)(a1 + 512), (void *)(v10 + 552), NonPaged, v19);
  if ( v11 < 0 )
    goto LABEL_18;
LABEL_23:
  v22 = *(_QWORD *)(v12 + 8);
  LODWORD(v25) = *(_DWORD *)(v10 + 8);
  *((_QWORD *)&v25 + 1) = v22;
  *(_QWORD *)&v26[4] = &v25;
  *(_QWORD *)&v26[2] = v9;
  *((_QWORD *)&v26[3] + 1) = v10 + 104;
  DWORD2(v26[2]) = v19;
  v11 = SmStoreCreate(a1 - 2128, a2, v26, &v28);
  if ( v11 < 0 )
    goto LABEL_18;
  v23 = v28;
  SmcStoreSlotCommit(v10, v12, v28, a2);
  v11 = 0;
  *a5 = v23;
LABEL_19:
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(32LL * (v29 & 0xF) + a1 + 8));
  if ( v9 )
    CmSiFreeMemory(v9);
  return (unsigned int)v11;
}
