/*
 * XREFs of ?ndisFDoDirectOidRequestInternal@@YAXPEAX@Z @ 0x1C00AF650
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x1C001A398 (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C001B820 (WPP_RECORDER_SF_qqLd.c)
 *     ndisFInvokeDirectOidRequest @ 0x1C00AF818 (ndisFInvokeDirectOidRequest.c)
 */

void __fastcall ndisFDoDirectOidRequestInternal(_QWORD *Parameter)
{
  struct _NDIS_FILTER_BLOCK *v1; // rbx
  __int64 v3; // rbp
  int v4; // edi
  unsigned int Flags; // eax
  KSPIN_LOCK *p_Lock; // rcx
  KIRQL v7; // dl
  char v8[4]; // [rsp+40h] [rbp-28h]
  KIRQL NewIrql; // [rsp+70h] [rbp+8h] BYREF

  v1 = (struct _NDIS_FILTER_BLOCK *)Parameter[1];
  v3 = Parameter[3];
  NewIrql = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x19u,
      (struct _GUID *)&WPP_d0b1dc830796367683bcada1b083b794_Traceguids,
      (char)v1,
      v3);
  NDIS_ACQUIRE_FILTER_SPIN_LOCK(v1, &NewIrql);
  if ( v1->DirectOidRequestCount < 0x4E20 )
  {
    Flags = v1->Flags;
    v1->LockThread = 0LL;
    p_Lock = &v1->Lock;
    v7 = NewIrql;
    if ( (Flags & 0x10000) != 0 )
    {
      v4 = -1073676286;
    }
    else
    {
      ++v1->DirectOidRequestCount;
      KeReleaseSpinLock(p_Lock, v7);
      *(_DWORD *)(v3 + 88) |= 0x20000u;
      v4 = ndisFInvokeDirectOidRequest(&v1->Header, (struct _NDIS_OID_REQUEST *)v3);
      if ( v4 == 259 )
        goto LABEL_12;
      NDIS_ACQUIRE_FILTER_SPIN_LOCK(v1, &NewIrql);
      --v1->DirectOidRequestCount;
      p_Lock = &v1->Lock;
      v1->LockThread = 0LL;
      v7 = NewIrql;
    }
    KeReleaseSpinLock(p_Lock, v7);
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v8 = v1->DirectOidRequestCount;
      WPP_RECORDER_SF_qqLd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xBu,
        0x1Au,
        (struct _GUID *)&WPP_d0b1dc830796367683bcada1b083b794_Traceguids,
        (char)v1,
        v3,
        32,
        *(_DWORD *)v8);
    }
    v1->LockThread = 0LL;
    v4 = -1073741670;
    KeReleaseSpinLock(&v1->Lock, NewIrql);
  }
LABEL_12:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x1Bu,
      (struct _GUID *)&WPP_d0b1dc830796367683bcada1b083b794_Traceguids,
      (char)v1,
      v3);
  *(_DWORD *)Parameter = v4;
}
