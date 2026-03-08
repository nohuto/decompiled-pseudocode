/*
 * XREFs of MiSoftFaultMappedView @ 0x14034A9A0
 * Callers:
 *     MiMapViewOfImageSection @ 0x1407D3750 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiLockProtoPoolPage @ 0x140283CA0 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402861D0 (MiUnlockProtoPoolPage.c)
 *     MiCompleteRestrictedImageFault @ 0x14028D690 (MiCompleteRestrictedImageFault.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402C9870 (KeShouldYieldProcessor.c)
 *     MiUnlockFaultWorkingSet @ 0x1402F7444 (MiUnlockFaultWorkingSet.c)
 *     MiMakeSystemAddressValid @ 0x140321770 (MiMakeSystemAddressValid.c)
 *     MiVadMapsLargeImage @ 0x140327280 (MiVadMapsLargeImage.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     MiLockLeafPage @ 0x14034AF20 (MiLockLeafPage.c)
 *     MiImagePageOk @ 0x14034B09C (MiImagePageOk.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall MiSoftFaultMappedView(__int64 a1)
{
  int v1; // edx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // r12
  int v6; // r14d
  unsigned __int64 *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int64 v10; // rdi
  __int64 v11; // r15
  ULONG_PTR v12; // rsi
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rbx
  _DWORD *v15; // rax
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rbx
  volatile signed __int64 *v19; // r15
  unsigned __int64 v20; // rbx
  unsigned int v21; // ecx
  unsigned __int64 v22; // r15
  __int64 v23; // rbx
  int v24; // ebx
  int v25; // ebx
  unsigned int v26; // edi
  unsigned __int64 v27; // r15
  unsigned __int64 v28; // rcx
  unsigned __int8 v29[4]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v30; // [rsp+34h] [rbp-CCh]
  __int64 v31; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v32; // [rsp+40h] [rbp-C0h]
  __int128 v33; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v34; // [rsp+58h] [rbp-A8h]
  unsigned __int64 *v35; // [rsp+60h] [rbp-A0h]
  ULONG_PTR v36; // [rsp+68h] [rbp-98h]
  __int64 v37[16]; // [rsp+70h] [rbp-90h] BYREF

  v1 = *(_DWORD *)(a1 + 48);
  v34 = 0LL;
  v33 = 0LL;
  if ( (v1 & 0xF80) == 0x80 || (v1 & 0x200000) == 0 && (v1 & 0x70) == 0x20 && (v1 & 0x400000) != 0 )
    return;
  if ( (unsigned int)MiVadMapsLargeImage(a1) )
    return;
  v4 = *(_QWORD *)(v3 + 72);
  if ( (*(_DWORD *)(*(_QWORD *)v4 + 56LL) & 0x8000000) != 0 )
    return;
  v5 = *(_QWORD *)(*(_QWORD *)v4 + 32LL);
  v6 = 0;
  v7 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  v30 = 0;
  v32 = 0LL;
  v35 = v7;
  if ( !v5 )
    return;
  v8 = *(unsigned __int8 *)(a1 + 32);
  v9 = *(unsigned int *)(a1 + 24);
  v10 = *(_QWORD *)(a1 + 80);
  v11 = 0LL;
  v31 = 0LL;
  v29[0] = 17;
  v12 = 8 * ((v9 | (v8 << 32)) & 0xFFFFFFFFFLL) - 0x98000000000LL;
  v13 = (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) & 0xFFFFFFFFFLL;
  BYTE13(v33) |= 4u;
  v14 = 8 * v13 - 0x98000000000LL;
  v36 = v14;
  *(_QWORD *)&v33 = v7;
  BYTE12(v33) = MiLockWorkingSetShared((__int64)v7);
  if ( v12 > v14 )
    goto LABEL_65;
  while ( 1 )
  {
    if ( v10 > *(_QWORD *)(a1 + 88) || !v5 )
    {
      v23 = v31;
LABEL_59:
      v26 = v30;
      goto LABEL_60;
    }
    if ( v6
      && (v6 & 8) == 0
      && ((v35[23] & 7) == 2 ? (v15 = &unk_140C69E00) : (v15 = v35 + 24),
          (*v15 & 0x40000000) != 0 || KeShouldYieldProcessor()) )
    {
      v24 = 1;
    }
    else
    {
      if ( v34 && (v12 & 0xFFF) != 0 )
        goto LABEL_19;
      v24 = 2;
    }
    if ( v11 )
    {
      MiUnlockProtoPoolPage(v11, v29[0]);
      v11 = 0LL;
      v31 = 0LL;
    }
    if ( v30 )
    {
      if ( (unsigned int)MiCompleteRestrictedImageFault((__int64)&v33, v32, v37, v30) )
      {
        v30 = 0;
        goto LABEL_48;
      }
      v23 = v31;
      v26 = 0;
LABEL_60:
      v27 = v32;
      goto LABEL_61;
    }
LABEL_48:
    if ( v34 )
    {
      MiUnlockPageTableInternal((__int64)v35, v34);
      v34 = 0LL;
    }
    if ( v24 == 1 )
    {
      MiUnlockFaultWorkingSet((__int64)&v33);
      v25 = (*(_DWORD *)(a1 + 48) >> 12) & 0x7F;
      MiLockWorkingSetShared((__int64)v35);
    }
    else
    {
      v25 = (*(_DWORD *)(a1 + 48) >> 12) & 0x7F;
    }
    MiMakeSystemAddressValid(v12, 0LL, v25, BYTE12(v33), 0);
    v34 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
LABEL_19:
    ++v6;
    if ( *(_QWORD *)v12 )
      goto LABEL_36;
    if ( (v10 & 0xFFF) != 0 )
    {
      if ( v11 )
        goto LABEL_22;
LABEL_38:
      v23 = v31;
      goto LABEL_39;
    }
    if ( !v11 )
      goto LABEL_38;
    MiUnlockProtoPoolPage(v11, v29[0]);
    v23 = 0LL;
LABEL_39:
    if ( !v30 )
      goto LABEL_40;
    v27 = v32;
    if ( !(unsigned int)MiCompleteRestrictedImageFault((__int64)&v33, v32, v37, v30) )
      break;
    v30 = 0;
LABEL_40:
    v31 = MiLockProtoPoolPage(v10, v29);
    if ( !v31 )
    {
      v28 = (4096 - (v10 & 0xFFF)) & 0xFFFFFFF8;
      v10 += v28;
      v12 += v28;
      if ( v34 && v34 != ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
      {
        MiUnlockPageTableInternal((__int64)v35, v34);
        v34 = 0LL;
      }
      goto LABEL_37;
    }
LABEL_22:
    if ( (*(_BYTE *)v10 & 1) == 0 )
      goto LABEL_36;
    v16 = MiLockLeafPage(v10, 0LL);
    v18 = v16;
    if ( !v16 )
      goto LABEL_36;
    v19 = (volatile signed __int64 *)(v16 + 24);
    if ( (*(_BYTE *)v10 & 1) == 0
      || (--v5, (*(_DWORD *)(v16 + 16) & 0x400LL) == 0)
      || (*(_BYTE *)(v16 + 35) & 0x40) != 0
      || !(unsigned int)MiImagePageOk((__int64)(v12 << 25) >> 16, v16, v17, a1) )
    {
      _InterlockedAnd64(v19, 0x7FFFFFFFFFFFFFFFuLL);
LABEL_36:
      v10 += 8LL;
      v12 += 8LL;
LABEL_37:
      v23 = v31;
      goto LABEL_34;
    }
    v20 = 0xAAAAAAAAAAAAAAABuLL * ((v18 + 0x220000000000LL) >> 4);
    *v19 ^= (*v19 ^ (*v19 + 1)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64(v19, 0x7FFFFFFFFFFFFFFFuLL);
    if ( v20 == -1LL )
      goto LABEL_32;
    v21 = v30;
    v22 = v12;
    if ( v30 )
      v22 = v32;
    v37[v30] = v20;
    v32 = v22;
    v30 = v21 + 1;
    if ( v21 == 15 )
    {
      MiUnlockProtoPoolPage(v31, v29[0]);
      v23 = 0LL;
      v31 = 0LL;
      if ( !(unsigned int)MiCompleteRestrictedImageFault((__int64)&v33, v22, v37, 0x10u) )
        goto LABEL_65;
      v30 = 0;
      v32 = v22;
    }
    else
    {
LABEL_32:
      v23 = v31;
    }
    v10 += 8LL;
    v12 += 8LL;
LABEL_34:
    if ( v12 > v36 )
      goto LABEL_59;
    v11 = v31;
  }
  v26 = 0;
LABEL_61:
  if ( v23 )
    MiUnlockProtoPoolPage(v23, v29[0]);
  if ( v26 )
    MiCompleteRestrictedImageFault((__int64)&v33, v27, v37, v26);
LABEL_65:
  if ( v34 )
  {
    MiUnlockPageTableInternal((__int64)v35, v34);
    v34 = 0LL;
  }
  MiUnlockFaultWorkingSet((__int64)&v33);
}
