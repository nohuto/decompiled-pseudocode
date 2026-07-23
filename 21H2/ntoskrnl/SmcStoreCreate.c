/*
 * XREFs of SmcStoreCreate @ 0x14092DCB0
 * Callers:
 *     SmcProcessStoreCreateRequest @ 0x14092AEDC (SmcProcessStoreCreateRequest.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     SSHSupportAllocateNonPaged @ 0x1402483BC (SSHSupportAllocateNonPaged.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     memset @ 0x140414300 (memset.c)
 *     SmStoreCreate @ 0x14092A4E4 (SmStoreCreate.c)
 *     SmKmKeyGenGenerate @ 0x14092B860 (SmKmKeyGenGenerate.c)
 *     SmKmRegParamsLoad @ 0x14092BEA8 (SmKmRegParamsLoad.c)
 *     SmcCacheReference @ 0x14092D864 (SmcCacheReference.c)
 *     SmcStoreSlotAbort @ 0x14092E484 (SmcStoreSlotAbort.c)
 *     SmcStoreSlotCommit @ 0x14092E518 (SmcStoreSlotCommit.c)
 *     SmcStoreSlotReserve @ 0x14092E5C0 (SmcStoreSlotReserve.c)
 */

__int64 __fastcall SmcStoreCreate(__int64 a1, unsigned int a2, _DWORD *a3, unsigned int a4, unsigned int *a5)
{
  struct _PRIVILEGE_SET *v9; // r15
  struct _EX_RUNDOWN_REF v10; // rsi
  int v11; // edi
  __int64 v12; // r14
  int v13; // eax
  __int128 v14; // xmm0
  unsigned __int16 v15; // bx
  int v16; // ebx
  int v17; // eax
  int v18; // eax
  unsigned int v19; // ebx
  struct _PRIVILEGE_SET *NonPaged; // rax
  __int64 v21; // rcx
  unsigned int v22; // ebx
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
  unsigned __int64 v36; // [rsp+80h] [rbp-29h]
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
  v10.Count = SmcCacheReference(a1, a4).Count;
  if ( !v10.Count )
    return (unsigned int)-1073741672;
  if ( !a3[3] )
  {
    v11 = -1073741811;
    goto LABEL_23;
  }
  if ( *(_DWORD *)(v10.Count + 24) != a3[2] || (unsigned __int8)*a3 != 1 )
  {
    v11 = -1073741637;
    goto LABEL_23;
  }
  v12 = SmcStoreSlotReserve(v10.Count);
  if ( v12 )
  {
    v13 = *(_DWORD *)(v10.Count + 8);
    v14 = *(_OWORD *)a3;
    v15 = (unsigned __int16)*(_DWORD *)(v10.Count + 28) << 13;
    v27 = v14;
    HIDWORD(v27) = v13;
    v16 = v14 ^ ((unsigned __int16)v14 ^ v15) & 0x6000;
    v30 = *(_DWORD *)(v10.Count + 4);
    v17 = *(_DWORD *)(v10.Count + 32);
    HIDWORD(v38[3]) = 0;
    v28 = v17;
    v38[2] = 0LL;
    v38[0] = *(_OWORD *)(v10.Count + 40);
    v38[1] = *(_OWORD *)(v10.Count + 56);
    *(_QWORD *)&v38[3] = *(_QWORD *)(v10.Count + 88);
    DWORD2(v38[3]) = *(_DWORD *)(v10.Count + 96);
    v35 = v38;
    LODWORD(v27) = v16;
    v11 = SmKmRegParamsLoad((__int64)&NumberOfBytes);
    if ( v11 >= 0 )
    {
      if ( (*(_DWORD *)(v10.Count + 28) & 1) == 0 )
      {
        v18 = BYTE4(NumberOfBytes) & 3;
        if ( v18 == 2 || v18 == 1 && (v16 & 0x800) != 0 )
        {
          v19 = 0;
          goto LABEL_19;
        }
      }
      v19 = NumberOfBytes;
      NonPaged = (struct _PRIVILEGE_SET *)SSHSupportAllocateNonPaged((unsigned int)NumberOfBytes, 0x4B456D73u);
      v9 = NonPaged;
      if ( NonPaged )
      {
        v11 = SmKmKeyGenGenerate((signed __int64 *)(a1 + 512), (void *)(v10.Count + 552), NonPaged, v19);
        if ( v11 >= 0 )
        {
LABEL_19:
          v21 = *(_QWORD *)(v12 + 8);
          LODWORD(v26) = *(_DWORD *)(v10.Count + 8);
          v37 = &v26;
          *((_QWORD *)&v26 + 1) = v21;
          v36 = v10.Count + 104;
          v32 = v9;
          v33 = v19;
          v11 = SmStoreCreate(a2, &v27, &v24);
          if ( v11 >= 0 )
          {
            v22 = v24;
            SmcStoreSlotCommit(v10.Count, v12, v24, a2);
            v12 = 0LL;
            v11 = 0;
            *a5 = v22;
          }
        }
      }
      else
      {
        v11 = -1073741670;
      }
    }
    if ( v12 )
      SmcStoreSlotAbort(v10.Count, v12, 0LL);
    goto LABEL_23;
  }
  v11 = -1073741697;
LABEL_23:
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)(32LL * (v39 & 0xF) + a1 + 8));
  if ( v9 )
    CmSiFreeMemory(v9);
  return (unsigned int)v11;
}
