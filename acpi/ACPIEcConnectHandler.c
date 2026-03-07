__int64 __fastcall ACPIEcConnectHandler(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int8 *v4; // rsi
  unsigned __int64 v6; // r14
  int v7; // ebp
  unsigned __int64 v8; // r14
  unsigned int v9; // edi
  int v10; // ecx
  unsigned __int8 v11; // al
  __int64 v12; // r12
  void *Pool2; // rax
  void *v14; // r15
  const void *v15; // rdx
  unsigned __int8 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r10
  __int64 v19; // r8
  unsigned __int8 v20; // al
  __int64 v21; // rcx
  __int64 v22; // rdx
  KIRQL NewIrql; // [rsp+68h] [rbp+10h]
  PVOID ImageSectionHandle; // [rsp+78h] [rbp+20h]

  v2 = *(_QWORD *)(a2 + 184);
  v4 = *(unsigned __int8 **)(v2 + 32);
  if ( *(_DWORD *)(v2 + 16) < 0x20u )
    return 3221225507LL;
  v6 = *v4;
  v7 = 1 << (*v4 & 0x1F);
  ImageSectionHandle = MmLockPagableDataSection(ACPIEcConnectHandler);
  v8 = v6 >> 5;
  v9 = -1073741823;
  NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  v10 = *(_DWORD *)(a1 + 4 * v8 + 156);
  if ( (v10 & v7) == 0 )
  {
    v9 = 0;
    *(_DWORD *)(a1 + 4 * v8 + 156) = v7 | v10;
    v11 = *(_BYTE *)(a1 + 446);
    if ( !v11 )
    {
      v12 = *(unsigned __int8 *)(a1 + 447);
      Pool2 = (void *)ExAllocatePool2(64LL, 24LL * (unsigned int)(v12 + 4), 1164993345LL);
      v14 = Pool2;
      if ( !Pool2 )
      {
        v9 = -1073741670;
        goto LABEL_19;
      }
      v15 = *(const void **)(a1 + 448);
      if ( v15 )
      {
        memmove(Pool2, v15, 24 * v12);
        ExFreePoolWithTag(*(PVOID *)(a1 + 448), 0);
      }
      *(_BYTE *)(a1 + 447) += 4;
      v16 = 0;
      *(_QWORD *)(a1 + 448) = v14;
      do
      {
        *(_BYTE *)(*(_QWORD *)(a1 + 448) + 24LL * ((unsigned int)v12 + v16)) = *(_BYTE *)(a1 + 446);
        v11 = v12 + v16++;
        *(_BYTE *)(a1 + 446) = v11;
      }
      while ( v16 < 4u );
    }
    v17 = *(_QWORD *)(a1 + 448);
    v18 = v11;
    v19 = 3LL * v11;
    *(_BYTE *)(a1 + 446) = *(_BYTE *)(v17 + 24LL * v11);
    if ( *(_BYTE *)(*v4 + a1 + 188) )
    {
      *(_DWORD *)(a1 + 4 * v8 + 124) &= ~v7;
      v20 = *(_BYTE *)(a1 + 444);
      if ( v20 )
      {
        v21 = *v4;
        while ( 1 )
        {
          v22 = v20;
          v20 = *(_BYTE *)(v20 + a1 + 188);
          if ( v20 == (_BYTE)v21 )
            break;
          if ( !v20 )
            goto LABEL_18;
        }
        *(_BYTE *)(v22 + a1 + 188) = *(_BYTE *)(v21 + a1 + 188);
      }
    }
LABEL_18:
    *(_BYTE *)(*v4 + a1 + 188) = v18;
    *(_BYTE *)(v17 + 8 * v19) = 0;
    *(_BYTE *)(v17 + 8 * v19 + 1) = *v4;
    *(_QWORD *)(v17 + 8 * v19 + 8) = *((_QWORD *)v4 + 1);
    *(_QWORD *)(v17 + 8 * v19 + 16) = *((_QWORD *)v4 + 2);
    *((_QWORD *)v4 + 3) = v18;
  }
LABEL_19:
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), NewIrql);
  MmUnlockPagableImageSection(ImageSectionHandle);
  return v9;
}
