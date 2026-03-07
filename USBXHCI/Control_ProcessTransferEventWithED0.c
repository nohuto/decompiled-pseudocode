char __fastcall Control_ProcessTransferEventWithED0(__int64 a1, __int64 a2)
{
  char v2; // di
  _BYTE *v5; // r12
  __m128i ***v6; // r15
  KIRQL v7; // al
  __int64 v8; // rbx
  KIRQL v9; // dl
  size_t v10; // r8
  int v11; // edx
  __int64 v12; // rax
  int v13; // edx
  __m128i **v14; // r10
  const char *v15; // rax
  int v16; // edx
  KIRQL v17; // dl
  unsigned int v19; // [rsp+90h] [rbp+8h] BYREF
  int v20; // [rsp+98h] [rbp+10h] BYREF

  v2 = 0;
  v20 = 0;
  v19 = 0;
  v5 = (_BYTE *)(a1 + 11);
  v6 = (__m128i ***)(a2 + 56);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDqLDDi((unsigned int)(*v6)[10], *(unsigned __int8 *)(a1 + 15), (unsigned __int8)*v5, 17);
  if ( (unsigned __int8)(*v5 - 26) <= 2u && (*(_DWORD *)(*(_QWORD *)(a2 + 56) + 32LL) & 0x40) != 0 )
    return 1;
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
  v8 = *(_QWORD *)(a2 + 344);
  *(_BYTE *)(a2 + 104) = v7;
  if ( !v8 )
  {
    v9 = v7;
LABEL_34:
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v9);
    return v2;
  }
  if ( !Control_ProcessTransferEventPointer(a2, v8, (__int64 *)a1, &v20, (int *)&v19) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), *(_BYTE *)(a2 + 104));
    Control_ValidateED0TrbPointerOnMismatch(a2, a1);
    return v2;
  }
  v10 = v19;
  if ( v19 > *(_DWORD *)(v8 + 104) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 48) + 135LL);
      LOBYTE(v11) = 3;
      WPP_RECORDER_SF_DDDD(
        (unsigned int)(*v6)[10],
        v11,
        14,
        18,
        (__int64)&WPP_1132998d7a983e6252cacd8244985166_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a2 + 48) + 135LL),
        *((_DWORD *)*v6 + 36),
        v19,
        *(_DWORD *)(v8 + 104));
    }
    v10 = 0LL;
    v19 = 0;
  }
  if ( (_DWORD)v10 )
  {
    v12 = *(_QWORD *)(v8 + 48);
    *(_DWORD *)(v8 + 108) = v10;
    if ( (*(_DWORD *)(v12 + 32) & 1) != 0 && *(_DWORD *)(v8 + 64) == 2 )
      memmove(*(void **)(v8 + 80), *(const void **)(*(_QWORD *)(v8 + 88) + 16LL), v10);
  }
  if ( !Endpoint_HaltedCompletionCode(*v6, (unsigned __int8)*v5) )
  {
    if ( (unsigned __int8)(v13 - 26) > 2u )
    {
      v9 = *(_BYTE *)(a2 + 104);
      goto LABEL_34;
    }
    if ( *(_DWORD *)(v8 + 108) == *(_DWORD *)(v8 + 104) )
    {
      *(_DWORD *)(v8 + 124) = 1;
    }
    else if ( (_BYTE)v13 == 28 )
    {
      *(_DWORD *)(v8 + 124) = 28;
    }
    ++*(_DWORD *)(v8 + 132);
    v17 = *(_BYTE *)(a2 + 104);
    *(_DWORD *)(a2 + 356) = v20 - *(_DWORD *)(v8 + 132) + 1;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), v17);
    v14 = *v6;
    _m_prefetchw(*v6 + 4);
    if ( (_InterlockedOr((volatile signed __int32 *)v14 + 8, 0x10u) & 0x10) != 0 )
    {
      v15 = "Received duplicate Stopped Transfer Events";
      goto LABEL_29;
    }
    _m_prefetchw(v14 + 4);
    if ( (_InterlockedXor((volatile signed __int32 *)v14 + 8, 8u) & 8) == 0 )
      return 1;
    v16 = 118;
LABEL_32:
    ESM_AddEvent((KSPIN_LOCK *)v14 + 37, v16);
    return 1;
  }
  *(_DWORD *)(v8 + 124) = v13;
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), *(_BYTE *)(a2 + 104));
  v14 = *v6;
  _m_prefetchw(*v6 + 4);
  if ( (_InterlockedOr((volatile signed __int32 *)v14 + 8, 0x20u) & 0x20) == 0 )
  {
    v16 = 154;
    goto LABEL_32;
  }
  v15 = "Received duplicate Transfer Event TRB with Halted Completion Code";
LABEL_29:
  Controller_HwVerifierBreakIfEnabled(*v14, (char)v14[1], (char)v14[3], 0x2000000LL, v15, 0LL, 0LL);
  return 1;
}
