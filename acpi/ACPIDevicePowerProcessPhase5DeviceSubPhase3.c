__int64 __fastcall ACPIDevicePowerProcessPhase5DeviceSubPhase3(__int64 a1)
{
  __int64 v1; // rbx
  const char *v2; // rbp
  int v3; // esi
  __int64 v4; // r15
  char v5; // dl
  const char *v7; // r8
  const char *v8; // rcx
  __int64 v9; // rax
  int v10; // r14d
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  const char *v15; // rcx
  __int128 v17; // [rsp+50h] [rbp-58h] BYREF
  __int128 v18; // [rsp+60h] [rbp-48h]
  __int64 v19; // [rsp+70h] [rbp-38h]

  v1 = *(_QWORD *)(a1 + 40);
  v2 = (const char *)&unk_1C00622D0;
  v3 = 0;
  v4 = 0LL;
  v5 = 0;
  v7 = (const char *)&unk_1C00622D0;
  v8 = (const char *)&unk_1C00622D0;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  if ( v1 )
  {
    v9 = *(_QWORD *)(v1 + 8);
    v5 = v1;
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v7 = *(const char **)(v1 + 608);
      if ( (v9 & 0x400000000000LL) != 0 )
        v8 = *(const char **)(v1 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x4Fu,
      (__int64)&WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids,
      a1,
      v5,
      v7,
      v8);
  v10 = *(_DWORD *)(a1 + 56);
  v11 = 8;
  if ( *(_DWORD *)(a1 + 104) == 1 )
    v11 = 6;
  *(_DWORD *)(a1 + 212) = v11;
  if ( _bittest64((const signed __int64 *)(v1 + 8), 0x33u) )
    goto LABEL_28;
  v4 = AMLIGetNamedChild(*(_QWORD *)(v1 + 760), 1262701663LL);
  if ( !v4 )
  {
    if ( (v10 & 4) != 0 )
    {
      _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(a1 + 40) + 1008LL), 0x80uLL);
    }
    else if ( (v10 & 8) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 40) + 1008LL), 0xFFFFFFFFFFFFFF7FuLL);
    }
    goto LABEL_28;
  }
  WORD1(v17) = 1;
  if ( (v10 & 4) != 0 )
  {
    v12 = 1LL;
  }
  else
  {
    if ( (v10 & 8) == 0 )
    {
LABEL_28:
      ACPIDeviceCompleteGenericPhase(v4, v3, 0LL, a1);
      return 0LL;
    }
    v12 = 0LL;
  }
  v13 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)&v18 = v12;
  if ( v12 == 1 )
    _InterlockedOr64((volatile signed __int64 *)(v13 + 1008), 0x80uLL);
  else
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 1008), 0xFFFFFFFFFFFFFF7FuLL);
  *(_DWORD *)(a1 + 56) |= 0x1000000u;
  v3 = AMLIAsyncEvalObject(v4, 0, 1, (unsigned int)&v17, (__int64)ACPIDeviceCompleteGenericPhase, a1);
  AMLIDereferenceHandleEx(v4);
  v14 = *(_QWORD *)(v1 + 8);
  v4 = 0LL;
  v15 = (const char *)&unk_1C00622D0;
  if ( (v14 & 0x200000000000LL) != 0 )
  {
    v2 = *(const char **)(v1 + 608);
    if ( (v14 & 0x400000000000LL) != 0 )
      v15 = *(const char **)(v1 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x50u,
      (__int64)&WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids,
      a1,
      v3,
      v1,
      v2,
      v15);
  if ( v3 != 259 )
    goto LABEL_28;
  return 0LL;
}
