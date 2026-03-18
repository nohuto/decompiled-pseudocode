/*
 * XREFs of SmcStoreCreate @ 0x1409D8074
 * Callers:
 *     SmcProcessStoreCreateRequest @ 0x1409D52C0 (SmcProcessStoreCreateRequest.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     SmAlloc @ 0x140260C2C (SmAlloc.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SmStoreCreate @ 0x1409D4754 (SmStoreCreate.c)
 *     SmKmKeyGenGenerate @ 0x1409D5C3C (SmKmKeyGenGenerate.c)
 *     SmKmRegParamsLoad @ 0x1409D624C (SmKmRegParamsLoad.c)
 *     SmcCacheReference @ 0x1409D7C2C (SmcCacheReference.c)
 *     SmcStoreSlotAbort @ 0x1409D8810 (SmcStoreSlotAbort.c)
 *     SmcStoreSlotCommit @ 0x1409D88A4 (SmcStoreSlotCommit.c)
 *     SmcStoreSlotReserve @ 0x1409D894C (SmcStoreSlotReserve.c)
 */

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
  struct _PRIVILEGE_SET *v20; // rax
  __int64 v22; // rcx
  unsigned int v23; // ebx
  unsigned int v24; // [rsp+28h] [rbp-81h] BYREF
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-79h] BYREF
  __int128 v26; // [rsp+38h] [rbp-71h] BYREF
  __int128 v27; // [rsp+48h] [rbp-61h] BYREF
  int v28; // [rsp+58h] [rbp-51h]
  int v29; // [rsp+5Ch] [rbp-4Dh]
  int v30; // [rsp+60h] [rbp-49h]
  int v31; // [rsp+64h] [rbp-45h]
  struct _PRIVILEGE_SET *v32; // [rsp+68h] [rbp-41h]
  unsigned int v33; // [rsp+70h] [rbp-39h]
  int v34; // [rsp+74h] [rbp-35h]
  _OWORD *v35; // [rsp+78h] [rbp-31h]
  __int64 v36; // [rsp+80h] [rbp-29h]
  __int128 *v37; // [rsp+88h] [rbp-21h]
  _OWORD v38[4]; // [rsp+98h] [rbp-11h] BYREF
  char v39; // [rsp+120h] [rbp+77h]

  v39 = a4;
  memset(v38, 0, sizeof(v38));
  NumberOfBytes = 0LL;
  v29 = 0;
  v26 = 0LL;
  v31 = 0;
  v9 = 0LL;
  v34 = 0;
  v24 = 0;
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
  v27 = v14;
  HIDWORD(v27) = v13;
  v16 = v14 ^ ((unsigned __int16)v14 ^ v15) & 0x6000;
  v30 = *(_DWORD *)(v10 + 4);
  v17 = *(_DWORD *)(v10 + 32);
  HIDWORD(v38[3]) = 0;
  v28 = v17;
  v38[2] = 0LL;
  v38[0] = *(_OWORD *)(v10 + 40);
  v38[1] = *(_OWORD *)(v10 + 56);
  *(_QWORD *)&v38[3] = *(_QWORD *)(v10 + 88);
  DWORD2(v38[3]) = *(_DWORD *)(v10 + 96);
  v35 = v38;
  LODWORD(v27) = v16;
  v11 = SmKmRegParamsLoad((__int64)&NumberOfBytes);
  if ( v11 < 0 )
    goto LABEL_18;
  if ( (*(_DWORD *)(v10 + 28) & 1) == 0 )
  {
    v18 = BYTE4(NumberOfBytes) & 3;
    if ( v18 == 2 || v18 == 1 && (v16 & 0x800) != 0 )
    {
      v19 = 0;
      goto LABEL_23;
    }
  }
  v19 = NumberOfBytes;
  v20 = (struct _PRIVILEGE_SET *)SmAlloc((unsigned int)NumberOfBytes, 0x4B456D73u);
  v9 = v20;
  if ( !v20 )
  {
    v11 = -1073741670;
LABEL_18:
    SmcStoreSlotAbort(v10, v12, 0LL);
    goto LABEL_19;
  }
  v11 = SmKmKeyGenGenerate((signed __int64 *)(a1 + 512), (void *)(v10 + 552), v20, v19);
  if ( v11 < 0 )
    goto LABEL_18;
LABEL_23:
  v22 = *(_QWORD *)(v12 + 8);
  LODWORD(v26) = *(_DWORD *)(v10 + 8);
  v37 = &v26;
  *((_QWORD *)&v26 + 1) = v22;
  v36 = v10 + 104;
  v32 = v9;
  v33 = v19;
  v11 = SmStoreCreate(a2, &v27, &v24);
  if ( v11 < 0 )
    goto LABEL_18;
  v23 = v24;
  SmcStoreSlotCommit(v10, v12, v24, a2);
  v11 = 0;
  *a5 = v23;
LABEL_19:
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)(32LL * (v39 & 0xF) + a1 + 8));
  if ( v9 )
    CmSiFreeMemory(v9);
  return (unsigned int)v11;
}
