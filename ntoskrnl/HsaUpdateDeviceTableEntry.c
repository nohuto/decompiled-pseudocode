/*
 * XREFs of HsaUpdateDeviceTableEntry @ 0x14052E900
 * Callers:
 *     HalpHsapInitializeReservedDomain @ 0x14052BEA8 (HalpHsapInitializeReservedDomain.c)
 *     HsaAttachDeviceDomainInternal @ 0x14052CC78 (HsaAttachDeviceDomainInternal.c)
 *     HsaProcessDeviceExceptions @ 0x14052E418 (HsaProcessDeviceExceptions.c)
 *     HsaSetDevicePasidTable @ 0x14052E770 (HsaSetDevicePasidTable.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14030C850 (MmGetPhysicalAddress.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     HsaBuildDeviceTableEntry @ 0x14052CE78 (HsaBuildDeviceTableEntry.c)
 *     HsaGetBlockedDomain @ 0x14052DB9C (HsaGetBlockedDomain.c)
 *     HsaIommuSendCommand @ 0x14052E1A8 (HsaIommuSendCommand.c)
 */

__int64 *__fastcall HsaUpdateDeviceTableEntry(
        KSPIN_LOCK a1,
        int *a2,
        __int64 a3,
        char a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 *a10)
{
  __int64 v11; // r10
  __int64 v12; // rsi
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  unsigned __int64 v15; // rbx
  char v16; // di
  char v17; // r13
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  __int64 v19; // rcx
  int v20; // edx
  int v21; // r14d
  __int16 BlockedDomain; // ax
  KSPIN_LOCK *v23; // r15
  int *v24; // r11
  int v25; // ecx
  unsigned int v26; // r14d
  __int64 v27; // rdi
  __int64 v28; // r9
  __int128 v29; // rax
  __int128 v30; // rt0
  unsigned __int8 v31; // tt
  int v32; // ebx
  __int64 *result; // rax
  char v34; // [rsp+60h] [rbp-69h]
  char v35; // [rsp+61h] [rbp-68h]
  unsigned __int64 v36[2]; // [rsp+68h] [rbp-61h] BYREF
  __int128 v37; // [rsp+78h] [rbp-51h]
  KSPIN_LOCK v38[2]; // [rsp+88h] [rbp-41h] BYREF
  __int64 v39; // [rsp+98h] [rbp-31h]
  __int64 *v40; // [rsp+A0h] [rbp-29h]
  __int128 v41; // [rsp+A8h] [rbp-21h] BYREF
  __int128 v42; // [rsp+B8h] [rbp-11h] BYREF

  v11 = a1;
  v12 = *(_QWORD *)(a1 + 24) + 32LL * (unsigned int)*a2;
  *(_QWORD *)&v37 = a2;
  v38[0] = a1;
  v40 = a10;
  v13 = *(_OWORD *)v12;
  v35 = 0;
  v14 = *(_OWORD *)(v12 + 16);
  v39 = 0x10000LL;
  v41 = v13;
  v42 = v14;
  if ( (v13 & 1) != 0 && !a7 )
  {
    v39 = WORD4(v13);
    v35 = 1;
  }
  v15 = 0LL;
  v16 = 0;
  v17 = 0;
  v34 = 0;
  if ( a4 )
  {
    if ( (v13 & 0x80000000000000LL) != 0 )
    {
      v17 = 1;
      v15 = (DWORD2(v13) & 0xFFFF0000 | ((*((_QWORD *)&v13 + 1) & 0xFFFFF80000FFFFFFuLL | ((unsigned __int64)v13 >> 34) & 0x7000000) >> 11)) >> 13;
    }
    v16 = BYTE12(v13) & 1;
  }
  else if ( a3 )
  {
    v17 = 1;
    PhysicalAddress = MmGetPhysicalAddress(*(PVOID *)(a3 + 40));
    v16 = *(_BYTE *)(a3 + 65);
    v11 = v38[0];
    a2 = (int *)v37;
    v34 = *(_BYTE *)(a3 + 64);
    v15 = (unsigned __int64)PhysicalAddress.QuadPart >> 12;
  }
  v19 = 0LL;
  v36[0] = 0LL;
  if ( !a5 )
  {
    LOWORD(v20) = WORD4(v13);
    if ( (v13 & 0xE00) != 0x800 )
    {
      v21 = 0;
      goto LABEL_19;
    }
    v21 = 2;
    v19 = (__int64)((_QWORD)v13 << 12) >> 24;
    goto LABEL_18;
  }
  v21 = *(_DWORD *)(a5 + 4);
  if ( v21 == 1 )
  {
    BlockedDomain = HsaGetBlockedDomain(v11, a2, v36);
    v19 = v36[0];
    LOWORD(v20) = BlockedDomain;
    goto LABEL_19;
  }
  v20 = *(_DWORD *)(a5 + 48);
  if ( v21 == 2 )
  {
    v19 = *(_QWORD *)(a5 + 40) >> 12;
LABEL_18:
    v36[0] = v19;
  }
LABEL_19:
  v23 = (KSPIN_LOCK *)v38[0];
  HsaBuildDeviceTableEntry(v38[0], v15, v17, v34, v16, v20, v21, v19, &v42, 0LL, (__int64)&v41);
  v24 = (int *)v37;
  v25 = *(_DWORD *)(v37 + 4);
  v26 = 1 << (3 - v25);
  v27 = (unsigned int)(1 << v25);
  if ( 1 << v25 )
  {
    v28 = (unsigned int)v27;
    do
    {
      *((_QWORD *)&v29 + 1) = *(_QWORD *)(v12 + 8);
      *(_QWORD *)&v37 = *(_QWORD *)v12;
      *(_QWORD *)&v29 = v37;
      *((_QWORD *)&v37 + 1) = *((_QWORD *)&v29 + 1);
      do
      {
        v30 = v29;
        v31 = _InterlockedCompareExchange128(
                (volatile signed __int64 *)v12,
                *((signed __int64 *)&v41 + 1),
                v41,
                (signed __int64 *)&v30);
        v29 = v30;
        v37 = v30;
      }
      while ( !v31 );
      v12 += 32LL * v26;
      --v28;
    }
    while ( v28 );
  }
  if ( v35 )
  {
    v32 = *v24;
    if ( 1 << v25 )
    {
      do
      {
        v38[1] = 0LL;
        v38[0] = (unsigned __int16)v32 | 0x2000000000000000LL;
        HsaIommuSendCommand(v23, v38, a6);
        v36[1] = 0LL;
        v36[0] = 0x1000000000000000LL;
        HsaIommuSendCommand(v23, v36, a6);
        v32 += v26;
        --v27;
      }
      while ( v27 );
    }
  }
  result = v40;
  if ( v40 )
    *v40 = v39;
  return result;
}
