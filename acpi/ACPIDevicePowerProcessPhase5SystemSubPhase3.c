__int64 __fastcall ACPIDevicePowerProcessPhase5SystemSubPhase3(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rsi
  int v4; // r14d
  __int64 v5; // rbp
  const char *v6; // rcx
  char v7; // r8
  const char *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 result; // rax
  __int128 v13; // [rsp+50h] [rbp-48h] BYREF
  __int128 v14; // [rsp+60h] [rbp-38h]
  __int64 v15; // [rsp+70h] [rbp-28h]

  v1 = *(_QWORD **)(a1 + 40);
  v2 = *(unsigned int *)(a1 + 104);
  v4 = 0;
  v5 = 0LL;
  v6 = (const char *)&unk_1C00622D0;
  v7 = 0;
  v8 = (const char *)&unk_1C00622D0;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  if ( v1 )
  {
    v9 = v1[1];
    v7 = (char)v1;
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v6 = (const char *)v1[76];
      if ( (v9 & 0x400000000000LL) != 0 )
        v8 = (const char *)v1[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x56u,
      (__int64)&WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids,
      a1,
      v7,
      v6,
      v8);
  *(_DWORD *)(a1 + 212) = 6;
  if ( (_DWORD)v2 == 1 )
    goto LABEL_13;
  WORD1(v13) = 1;
  v10 = AMLIGetParent(v1[95]);
  v5 = AMLIGetNamedChild(v10, 1398034527LL);
  AMLIDereferenceHandleEx(v10);
  if ( !v5 )
    goto LABEL_13;
  v11 = (unsigned int)v2 < 7 ? (unsigned int)AcpiSystemStateTranslation[v2] : 0xFFFFFFFFLL;
  *(_QWORD *)&v14 = v11;
  v4 = AMLIAsyncEvalObject(v5, 0, 1, (unsigned int)&v13, (__int64)ACPIDeviceCompleteGenericPhase, a1);
  AMLIDereferenceHandleEx(v5);
  result = 259LL;
  v5 = 0LL;
  if ( v4 != 259 )
  {
LABEL_13:
    ACPIDeviceCompleteGenericPhase(v5, v4, 0LL, a1);
    return 0LL;
  }
  return result;
}
