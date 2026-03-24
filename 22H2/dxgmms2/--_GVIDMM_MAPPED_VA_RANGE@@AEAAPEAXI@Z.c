/*
 * XREFs of ??_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z @ 0x1C0001484
 * Callers:
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0001454 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ?ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C005F094 (-ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0072874 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 * Callees:
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0001FF4 (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 */

_QWORD *__fastcall VIDMM_MAPPED_VA_RANGE::`scalar deleting destructor'(_QWORD *P)
{
  _QWORD *v1; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rdx
  _QWORD *v5; // rax
  __int64 v6; // rcx
  int v7; // ecx
  char *v8; // rsi
  _QWORD *v10; // rdx
  __int64 VidMmGlobalAllocFromOwner; // rbx
  __int64 v12; // rdx
  char **v13; // rax

  v1 = P + 3;
  v3 = P[3];
  if ( v3 )
  {
    if ( *(_QWORD **)(v3 + 8) != v1 )
      goto LABEL_3;
    v4 = (_QWORD *)v1[1];
    if ( (_QWORD *)*v4 != v1 )
      goto LABEL_3;
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    *v1 = 0LL;
  }
  v5 = P + 1;
  v6 = P[1];
  if ( v6 )
  {
    if ( *(_QWORD **)(v6 + 8) != v5 )
      goto LABEL_3;
    v10 = (_QWORD *)P[2];
    if ( (_QWORD *)*v10 != v5 )
      goto LABEL_3;
    *v10 = v6;
    *(_QWORD *)(v6 + 8) = v10;
    *v5 = 0LL;
  }
  v7 = *((_DWORD *)P + 16);
  if ( (v7 & 0x1000) == 0 )
  {
    v8 = (char *)(P + 5);
    if ( P[5] )
    {
      VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner((unsigned int)(v7 << 28 >> 28), P[7]);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(VidMmGlobalAllocFromOwner + 344, 0LL);
      v12 = *(_QWORD *)v8;
      if ( *(char **)(*(_QWORD *)v8 + 8LL) == v8 )
      {
        v13 = (char **)P[6];
        if ( *v13 == v8 )
        {
          *v13 = (char *)v12;
          *(_QWORD *)(v12 + 8) = v13;
          *(_QWORD *)v8 = 0LL;
          ExReleasePushLockExclusiveEx(VidMmGlobalAllocFromOwner + 344, 0LL);
          KeLeaveCriticalRegion();
          goto LABEL_9;
        }
      }
LABEL_3:
      __fastfail(3u);
    }
  }
LABEL_9:
  ExFreePoolWithTag(P, 0);
  return P;
}
