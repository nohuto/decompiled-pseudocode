/*
 * XREFs of NdisAllocateNetBufferListPool @ 0x1C00270F0
 * Callers:
 *     ?ndisInitializePeriodicReceives@@YAHXZ @ 0x1C01441F0 (-ndisInitializePeriodicReceives@@YAHXZ.c)
 *     DriverEntry @ 0x1C01448F0 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008B64 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_d @ 0x1C001935C (WPP_RECORDER_SF_d.c)
 *     ?ndisPplCreatePool@@YAPEAUPPL_POOL_HANDLE__@@K_KKGE@Z @ 0x1C0027380 (-ndisPplCreatePool@@YAPEAUPPL_POOL_HANDLE__@@K_KKGE@Z.c)
 *     WPP_RECORDER_SF_PP @ 0x1C00AE46C (WPP_RECORDER_SF_PP.c)
 */

NDIS_HANDLE __stdcall NdisAllocateNetBufferListPool(
        NDIS_HANDLE NdisHandle,
        PNET_BUFFER_LIST_POOL_PARAMETERS Parameters)
{
  unsigned __int16 v2; // r9
  NDIS_HANDLE v3; // rsi
  unsigned int v4; // ecx
  KSPIN_LOCK *v5; // rbx
  int v6; // r12d
  unsigned __int8 fAllocateNetBuffer; // r13
  int ContextSize; // r15d
  unsigned int DataSize; // esi
  int v11; // r14d
  unsigned int v12; // r14d
  struct PPL_POOL_HANDLE__ *Pool; // rax
  KIRQL v14; // al
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  char v18[8]; // [rsp+28h] [rbp-40h]
  KSPIN_LOCK retaddr; // [rsp+68h] [rbp+0h]

  v3 = NdisHandle;
  v4 = 0;
  v5 = 0LL;
  v6 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x15u,
      0xAu,
      (struct _GUID *)&WPP_381cd7f30aef377c921a11f3e56e6a78_Traceguids,
      v3);
  if ( Parameters->Header.Type != 0x80 || !Parameters->Header.Revision )
    goto LABEL_17;
  fAllocateNetBuffer = Parameters->fAllocateNetBuffer;
  ContextSize = Parameters->ContextSize;
  DataSize = Parameters->DataSize;
  v11 = fAllocateNetBuffer != 0 ? 560 : 384;
  if ( (_WORD)ContextSize )
  {
    if ( (ContextSize & 7) != 0 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return v5;
      *(_DWORD *)v18 = Parameters->ContextSize;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x15u,
        0xBu,
        (struct _GUID *)&WPP_381cd7f30aef377c921a11f3e56e6a78_Traceguids,
        *(_QWORD *)v18);
      goto LABEL_16;
    }
    v11 += ContextSize + 16;
  }
  if ( DataSize )
  {
    if ( !fAllocateNetBuffer )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return v5;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x15u,
        0xCu,
        (struct _GUID *)&WPP_381cd7f30aef377c921a11f3e56e6a78_Traceguids);
      goto LABEL_16;
    }
    if ( DataSize > 0x100000 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        return v5;
      WPP_RECORDER_SF_PP(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (unsigned int)&WPP_RECORDER_INITIALIZED,
        (unsigned int)&WPP_381cd7f30aef377c921a11f3e56e6a78_Traceguids,
        13,
        (__int64)&WPP_381cd7f30aef377c921a11f3e56e6a78_Traceguids,
        Parameters->DataSize);
      goto LABEL_16;
    }
    v6 = (MmSizeOfMdl((PVOID)0xFFF, Parameters->DataSize) + 7) & 0xFFFFFFF8;
    v11 += v6 + DataSize;
  }
  v12 = (v11 + 7) & 0xFFFFFFF8;
  Pool = ndisPplCreatePool(v4, v12, Parameters->PoolTag, v2, 1u);
  v5 = (KSPIN_LOCK *)Pool;
  if ( Pool )
  {
    *(_WORD *)Pool = 269;
    *((_WORD *)Pool + 1) = 384;
    *((_QWORD *)Pool + 5) = NdisHandle;
    *((_DWORD *)Pool + 14) = Parameters->PoolTag;
    *((_BYTE *)Pool + 32) = Parameters->ProtocolId;
    if ( fAllocateNetBuffer )
      *((_DWORD *)Pool + 15) |= 1u;
    if ( (_WORD)ContextSize )
    {
      *((_DWORD *)Pool + 15) |= 2u;
      *((_WORD *)Pool + 17) = ContextSize;
    }
    if ( DataSize )
    {
      *((_DWORD *)Pool + 15) |= 4u;
      *((_DWORD *)Pool + 22) = DataSize;
      *((_DWORD *)Pool + 23) = v6;
    }
    *((_DWORD *)Pool + 24) = v12;
    KeInitializeSpinLock((PKSPIN_LOCK)Pool + 8);
    KeInitializeSpinLock(v5 + 1);
    v5[3] = (KSPIN_LOCK)(v5 + 2);
    v5[2] = (KSPIN_LOCK)(v5 + 2);
    v14 = KeAcquireSpinLockRaiseToDpc(&qword_1C00E6E70);
    v15 = qword_1C00E7108;
    v16 = v5 + 9;
    if ( *(__int64 **)(qword_1C00E7108 + 8) != &qword_1C00E7108 )
      __fastfail(3u);
    *v16 = qword_1C00E7108;
    v5[10] = (KSPIN_LOCK)&qword_1C00E7108;
    *(_QWORD *)(v15 + 8) = v16;
    qword_1C00E7108 = (__int64)(v5 + 9);
    KeReleaseSpinLock(&qword_1C00E6E70, v14);
    v5[6] = retaddr;
  }
LABEL_16:
  LOBYTE(v3) = (_BYTE)NdisHandle;
LABEL_17:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x15u,
      0xEu,
      (struct _GUID *)&WPP_381cd7f30aef377c921a11f3e56e6a78_Traceguids,
      (char)v3,
      v5);
  return v5;
}
