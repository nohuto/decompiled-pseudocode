/*
 * XREFs of ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C0011DE0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0002180 (memset.c)
 *     WPP_RECORDER_SF_dqss @ 0x1C0009A6C (WPP_RECORDER_SF_dqss.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C000BCB0 (ACPIBuildCompleteMustSucceed.c)
 *     WPP_RECORDER_SF_qss @ 0x1C0015444 (WPP_RECORDER_SF_qss.c)
 *     AMLIAsyncEvalObject @ 0x1C00478E8 (AMLIAsyncEvalObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C0047B40 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0048698 (AMLIGetNamedChild.c)
 */

__int64 __fastcall ACPIBuildProcessRunMethodPhaseRunMethod(__int64 a1)
{
  const char *v1; // r12
  _QWORD *v2; // rbx
  ULONG_PTR v3; // rsi
  unsigned int v4; // r14d
  int v5; // r13d
  int v7; // edx
  void *v8; // r8
  void *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // r15d
  __int64 v13; // rdx
  signed __int64 v14; // rax
  signed __int64 v15; // rtt
  _OWORD *v16; // r14
  int v17; // r15d
  __int64 v18; // rcx
  char v19; // al
  char v20; // dl
  const char *v21; // rax
  __int64 v22; // rcx
  signed __int64 v23; // rax
  signed __int64 v24; // rtt
  int v25; // r15d
  char v27; // [rsp+28h] [rbp-51h]
  _OWORD v28[8]; // [rsp+50h] [rbp-29h] BYREF

  v1 = (const char *)&unk_1C00622D0;
  v2 = *(_QWORD **)(a1 + 40);
  v3 = 0LL;
  v4 = 0;
  v5 = 0;
  if ( (*(_DWORD *)(a1 + 84) & 0x40) != 0 && *(_DWORD *)(a1 + 128) )
  {
    v7 = 0;
    v8 = &unk_1C00622D0;
    v9 = &unk_1C00622D0;
    if ( v2 )
    {
      v10 = v2[1];
      v7 = (int)v2;
      if ( (v10 & 0x200000000000LL) != 0 )
      {
        v8 = (void *)v2[76];
        if ( (v10 & 0x400000000000LL) != 0 )
          v9 = (void *)v2[77];
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v27 = v7;
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_qss(
        WPP_GLOBAL_Control->DeviceExtension,
        v7,
        6,
        66,
        (__int64)&WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
        v27,
        (__int64)v8,
        (__int64)v9);
    }
    *(_DWORD *)(a1 + 32) = 0;
    goto LABEL_21;
  }
  v11 = *(unsigned int *)(a1 + 80);
  *(_DWORD *)(a1 + 32) = 9;
  v3 = AMLIGetNamedChild(v2[95], v11);
  if ( !v3 )
    goto LABEL_21;
  v12 = *(_DWORD *)(a1 + 84);
  v13 = 1LL;
  if ( (v12 & 2) == 0 )
  {
    if ( (v12 & 8) != 0 )
    {
      if ( !*((_DWORD *)v2 + 138) )
        goto LABEL_21;
      memset(v28, 0, 40);
      WORD1(v28[0]) = 1;
    }
    else
    {
      if ( (v12 & 0x30) == 0 )
      {
        if ( (v12 & 0x80u) != 0 )
        {
          _m_prefetchw(v2 + 126);
          v23 = v2[126];
          do
          {
            v24 = v23;
            v23 = _InterlockedCompareExchange64(v2 + 126, v23 | 0x4000, v23);
          }
          while ( v24 != v23 );
          if ( (v23 & 0x4000) != 0 )
            goto LABEL_21;
          v5 = a1 + 88;
          *(_OWORD *)(a1 + 88) = 0LL;
          *(_OWORD *)(a1 + 104) = 0LL;
          *(_QWORD *)(a1 + 120) = 0LL;
          *(_DWORD *)(a1 + 32) = 8;
        }
        goto LABEL_15;
      }
      v25 = v12 | 0x40;
      *(_DWORD *)(a1 + 84) = v25;
      memset(v28, 0, 0x50uLL);
      v13 = 2LL;
      WORD1(v28[0]) = 1;
      *((_QWORD *)&v28[3] + 1) = ((unsigned __int64)(unsigned __int8)v25 >> 4) & 1;
      WORD5(v28[2]) = 1;
    }
    *(_QWORD *)&v28[1] = v13;
    v16 = v28;
    v17 = v13;
    goto LABEL_16;
  }
  _m_prefetchw(v2 + 1);
  v14 = v2[1];
  do
  {
    v15 = v14;
    v14 = _InterlockedCompareExchange64(v2 + 1, v14 | 0x20000000000000LL, v14);
  }
  while ( v15 != v14 );
  if ( (v14 & 0x20000000000000LL) != 0 )
    goto LABEL_21;
LABEL_15:
  LODWORD(v16) = 0;
  v17 = 0;
LABEL_16:
  v18 = *(_QWORD *)(a1 + 56);
  if ( v18 )
    AMLIDereferenceHandleEx(v18);
  v19 = gdwfAMLI;
  *(_QWORD *)(a1 + 56) = v3;
  dword_1C006F938 = 0;
  pszDest = 0;
  if ( (v19 & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  v4 = AMLIAsyncEvalObject(v3, v5, v17, (_DWORD)v16, (__int64)ACPIBuildCompleteMustSucceed, a1);
LABEL_21:
  v20 = 0;
  v21 = (const char *)&unk_1C00622D0;
  if ( v2 )
  {
    v22 = v2[1];
    v20 = (char)v2;
    if ( (v22 & 0x200000000000LL) != 0 )
    {
      v1 = (const char *)v2[76];
      if ( (v22 & 0x400000000000LL) != 0 )
        v21 = (const char *)v2[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x43u,
      (__int64)&WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
      v4,
      v20,
      v1,
      v21);
  if ( v4 == 259 )
    v4 = 0;
  else
    ACPIBuildCompleteMustSucceed(v3, v4, 0LL, a1);
  if ( v3 )
    AMLIDereferenceHandleEx(v3);
  return v4;
}
