/*
 * XREFs of ?ndisDoOidRequests@@YAXPEAX@Z @ 0x1C00085C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006D8C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C000BB00 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x1C001A398 (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005F6B0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0069F8C (-ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00BEEA0 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00BF024 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     NdisFreeRefCount @ 0x1C00BF1D0 (NdisFreeRefCount.c)
 */

void __fastcall ndisDoOidRequests(_QWORD *P)
{
  __int64 v1; // rbx
  KIRQL v3; // al
  ULONG_PTR v4; // r8
  KIRQL v5; // r14
  __int64 v6; // rcx
  unsigned __int8 v7; // r10
  unsigned __int8 v8; // dl
  bool v9; // zf
  char v10; // al
  KIRQL v11; // dl
  ULONG_PTR v12; // rsi
  unsigned int v13; // edx
  int v14; // ecx
  KIRQL NewIrql; // [rsp+60h] [rbp+8h] BYREF

  v1 = P[7];
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      18,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      (char)P,
      P[7]);
  if ( *(_BYTE *)v1 == 17 )
  {
    ndisMDoOidRequest((struct _NDIS_MINIPORT_BLOCK *)v1);
    ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)v1, 0x47u);
    goto LABEL_19;
  }
  if ( *(_BYTE *)v1 != 5 )
    goto LABEL_19;
  if ( KeExpandKernelStackAndCalloutEx(ndisFDoOidRequestInternal, (PVOID)v1, 0x4CCCuLL, 0, 0LL) < 0 )
  {
    NewIrql = 0;
    NDIS_ACQUIRE_FILTER_SPIN_LOCK((struct _NDIS_FILTER_BLOCK *)v1, &NewIrql);
    *(_BYTE *)(v1 + 232) = 1;
    ndisQueueStackExpansionFallbackWorkItem((struct _NDIS_FILTER_BLOCK *)v1);
    v11 = NewIrql;
    *(_QWORD *)(v1 + 152) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 144), v11);
  }
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 312));
  v4 = *(_QWORD *)(v1 + 328);
  v5 = v3;
  if ( v4 - 2 <= 1 )
  {
    v4 = 0LL;
  }
  else if ( v4 < 2 )
  {
    ndisBugCheckEx(0x1EuLL, 3uLL, v4, 0LL);
  }
  if ( !v4 )
    goto LABEL_17;
  if ( *(_BYTE *)(v4 + 2) <= 0xCu )
    ndisBugCheckEx(0x1EuLL, 2uLL, v4, 0xCuLL);
  if ( *(_BYTE *)(v4 + 1) )
  {
    if ( *(_BYTE *)(v4 + 1) != 1 )
      goto LABEL_17;
    v12 = v4 + 776;
    v13 = *(_DWORD *)(v4 + 832);
    v14 = (unsigned __int16)v13 >> 1;
    if ( v13 >> 17 < 0x3FFE && v14 == (v13 >> 17) + 1 )
    {
      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v4 + 776));
      *(_DWORD *)(v12 + 56) &= 0x10001u;
      goto LABEL_17;
    }
    if ( v14 != 0 || (v13 & 1) != 0 )
    {
      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v4 + 776), 0);
      goto LABEL_17;
    }
LABEL_36:
    ndisBugCheckEx(0x1EuLL, 0LL, v4, 0xCuLL);
  }
  v6 = *(_QWORD *)(v4 + 8);
  if ( v6 )
  {
    v7 = *(_BYTE *)(v4 + 3);
    v8 = 0;
    if ( v7 )
    {
      while ( 1 )
      {
        if ( *(_BYTE *)(v6 + 2LL * v8) == 12 )
        {
          v10 = *(_BYTE *)(v6 + 2LL * v8 + 1);
          if ( v10 )
            break;
        }
        if ( ++v8 >= v7 )
          goto LABEL_16;
      }
      *(_BYTE *)(v6 + 2LL * v8 + 1) = v10 - 1;
      goto LABEL_17;
    }
  }
LABEL_16:
  if ( !_bittestandreset((signed __int32 *)(v4 + 16), 0xCu) )
    goto LABEL_36;
LABEL_17:
  v9 = (*(_WORD *)(v1 + 320))-- == 1;
  if ( v9 && !*(_BYTE *)(v1 + 323) )
  {
    NdisFreeRefCount(*(_QWORD *)(v1 + 328));
    *(_QWORD *)(v1 + 328) = 1LL;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 312), v5);
LABEL_19:
  ExFreePoolWithTag(P, 0);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      19,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      0,
      v1);
}
