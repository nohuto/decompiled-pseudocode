__int64 __fastcall ACPIDevicePowerProcessPhase1DeviceSubPhase3(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbp
  __int64 v4; // rcx
  __int64 v5; // rax
  int v6; // r8d
  unsigned int v7; // ebx
  __int64 v8; // r14
  __int64 v9; // rdx
  void *v10; // rax
  void *v11; // rcx
  int v13; // [rsp+20h] [rbp-48h]

  v1 = *(_QWORD *)(a1 + 40);
  v2 = a1 + 216;
  *(_DWORD *)(a1 + 212) = 6;
  *(_OWORD *)(a1 + 216) = 0LL;
  *(_OWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  if ( _bittest64((const signed __int64 *)(v1 + 8), 0x39u) )
    v4 = *(_QWORD *)(*(_QWORD *)(v1 + 184) + 760LL);
  else
    v4 = *(_QWORD *)(v1 + 760);
  v5 = AMLIGetNamedChild(v4, 1096045407LL);
  v7 = 0;
  v8 = v5;
  if ( v5 )
  {
    if ( *(_WORD *)(*(_QWORD *)v5 + 66LL) == 8 )
      *(_DWORD *)(a1 + 56) |= 0x1000000u;
    v7 = AMLIAsyncEvalObject(v5, v2, 0, 0, (__int64)ACPIDeviceCompleteGenericPhase, a1);
    AMLIDereferenceHandleEx(v8);
  }
  else
  {
    *(_WORD *)(v2 + 2) = 1;
    *(_QWORD *)(v2 + 16) = 1LL;
  }
  v9 = *(_QWORD *)(v1 + 8);
  v10 = &unk_1C00622D0;
  v11 = &unk_1C00622D0;
  if ( (v9 & 0x200000000000LL) != 0 )
  {
    v10 = *(void **)(v1 + 608);
    if ( (v9 & 0x400000000000LL) != 0 )
      v11 = *(void **)(v1 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLdqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (unsigned int)&WPP_RECORDER_INITIALIZED,
      v6,
      59,
      v13,
      a1,
      v7,
      *(_DWORD *)(a1 + 212),
      v1,
      (__int64)v10,
      (__int64)v11);
  if ( v7 != 259 )
    ACPIDeviceCompleteGenericPhase(0LL, v7, 0LL, a1);
  return v7;
}
