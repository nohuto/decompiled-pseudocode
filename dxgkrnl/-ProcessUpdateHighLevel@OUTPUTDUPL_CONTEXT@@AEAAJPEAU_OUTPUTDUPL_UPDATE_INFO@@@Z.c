__int64 __fastcall OUTPUTDUPL_CONTEXT::ProcessUpdateHighLevel(
        OUTPUTDUPL_CONTEXT *this,
        struct _OUTPUTDUPL_UPDATE_INFO *a2)
{
  int v2; // r12d
  OUTPUTDUPL_MGR *v5; // rcx
  __int64 v6; // r8
  DXGDIAGNOSTICS **v7; // rcx
  OUTPUTDUPL_MGR *v8; // rcx
  int v9; // ecx
  __int64 v10; // rdx
  int v11; // r15d
  int v12; // eax
  __int64 v13; // r14
  int v14; // r14d
  int v15; // eax
  int v16; // r13d
  unsigned int v17; // eax
  __int64 v18; // rbx
  unsigned int updated; // ebx
  unsigned int v21; // eax
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  DXGDIAGNOSTICS **v26; // r10
  __int64 v27; // rcx
  __int64 v28; // rdx
  int *v29; // [rsp+20h] [rbp-F0h]
  int *v30; // [rsp+28h] [rbp-E8h]
  __int64 v31; // [rsp+30h] [rbp-E0h]
  __int64 v32; // [rsp+38h] [rbp-D8h]
  __int64 v33; // [rsp+40h] [rbp-D0h]
  unsigned int v34; // [rsp+68h] [rbp-A8h]
  int v35; // [rsp+90h] [rbp-80h] BYREF
  int v36; // [rsp+94h] [rbp-7Ch] BYREF
  union _LARGE_INTEGER v37; // [rsp+98h] [rbp-78h] BYREF
  _DWORD v38[20]; // [rsp+A0h] [rbp-70h] BYREF
  _OWORD v39[3]; // [rsp+F0h] [rbp-20h] BYREF
  __int64 v40; // [rsp+120h] [rbp+10h]

  v2 = 0;
  if ( (*(_DWORD *)a2 == 0) != (*((_QWORD *)a2 + 1) != 0LL) )
  {
    WdLogSingleEntry1(1LL, 1389LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pUpdate->Type == OUTPUTDUPL_UPDATE_TYPE_PRESENT) == (pUpdate->pContext != NULL)",
      1389LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  memset(v38, 0, sizeof(v38));
  if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(*((OUTPUTDUPL_MGR **)this + 37)) )
  {
    memset(v39, 0, sizeof(v39));
    v40 = 0LL;
    OUTPUTDUPL_MGR::InitializePacketHeader(v5, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v39);
    v7 = (DXGDIAGNOSTICS **)*((_QWORD *)this + 37);
    HIDWORD(v40) = *((_DWORD *)this + 4);
    DWORD1(v39[0]) = 56;
    LODWORD(v40) = 5;
    OUTPUTDUPL_MGR::LogEtwAndDiagnostics(v7, 0, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v39, 0);
    OUTPUTDUPL_MGR::InitializePacketHeader(v8, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v38);
    v9 = *((_DWORD *)this + 77);
    v38[13] = *((_DWORD *)this + 4);
    v38[14] = *((_DWORD *)this + 73);
    v38[18] = *((_DWORD *)this + 71);
    v38[1] = 80;
    v38[12] = 6;
    v38[19] ^= (LOBYTE(v38[19]) ^ (unsigned __int8)(16 * v9)) & 0x10;
  }
  if ( !*(_DWORD *)a2
    && !*((_DWORD *)this + 77)
    && *((_DWORD *)this + 78)
    && (unsigned int)DXGDXGIKEYEDMUTEX::HasConsumerGPUWorkFinished(
                       *((DXGDXGIKEYEDMUTEX **)this + *((unsigned int *)this + 11) + 6),
                       *((struct DXGCONTEXT **)a2 + 1)) )
  {
    *((_DWORD *)this + 78) = 0;
  }
  v10 = *((_QWORD *)a2 + 1);
  v11 = 0;
  v37.QuadPart = 0LL;
  v12 = DXGDXGIKEYEDMUTEX::AcquireCPU(
          *((_QWORD *)this + *((unsigned int *)this + 11) + 6),
          v10,
          v6,
          &v37,
          v10,
          *((_DWORD *)a2 + 4));
  v13 = v12;
  if ( v12 != 258 )
  {
    if ( v12 < 0 )
    {
      WdLogSingleEntry1(2LL, v12);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"GetCurrentKeyedMutex()->Acquire failed with something other than STATUS_TIMEOUT. Status = 0x%I64x",
        v13,
        0LL,
        0LL,
        0LL,
        0LL);
      return (unsigned int)v13;
    }
    v11 = 1;
  }
  v14 = 0;
  v15 = *((_DWORD *)this + 78) & 1 | (16 * (*((_DWORD *)this + 77) & 1));
  v36 = 0;
  v16 = 0;
  v17 = v11 | (16 * v15);
  v35 = 0;
  switch ( v17 )
  {
    case 0u:
      goto LABEL_26;
    case 1u:
      updated = OUTPUTDUPL_CONTEXT::ProcessUpdateLowLevel(
                  this,
                  a2,
                  *((struct DXGDXGIKEYEDMUTEX **)this + *((unsigned int *)this + 11) + 6),
                  *((struct _PRODUCER_INFO **)this + 33),
                  &v35,
                  &v36);
      v38[17] = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 33) + 8LL) + 4LL);
      if ( *(_DWORD *)(*((_QWORD *)this + 34) + 16LL) )
      {
        WdLogSingleEntry1(1LL, 1518LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"m_pAccumulatedFrameInfo->PresentUpdateStatus == PRODUCER_INFO_PRESENT_UPDATE_NONE",
          1518LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v14 = v35;
      goto LABEL_30;
    case 0x10u:
      if ( *(_DWORD *)(*((_QWORD *)this + 33) + 16LL) == 2 )
      {
        WdLogSingleEntry1(1LL, 1541LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"m_pCurrentFrameInfo->PresentUpdateStatus != PRODUCER_INFO_PRESENT_UPDATE_READY",
          1541LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      goto LABEL_26;
    case 0x11u:
      v21 = OUTPUTDUPL_CONTEXT::ProcessUpdateLowLevel(this, a2, 0LL, *((struct _PRODUCER_INFO **)this + 33), &v35, &v36);
      v14 = v35;
      updated = v21;
      if ( v35 && !*(_DWORD *)a2 )
      {
        WdLogSingleEntry1(1LL, 1531LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"!bNewUpdateReady || (pUpdate->Type != OUTPUTDUPL_UPDATE_TYPE_PRESENT)",
          1531LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v2 = 0;
      }
      v22 = *((_QWORD *)this + 33);
      goto LABEL_29;
  }
  if ( v17 - 272 < 2 )
  {
LABEL_26:
    v23 = *((_QWORD *)this + 33);
    if ( *(_DWORD *)(v23 + 16) == 1 )
    {
      v16 = 1;
      v24 = *(_QWORD *)(v23 + 8);
      *(_QWORD *)(v23 + 8) = *(_QWORD *)(*((_QWORD *)this + 34) + 8LL);
      *(_QWORD *)(*((_QWORD *)this + 34) + 8LL) = v24;
      *(_DWORD *)(*((_QWORD *)this + 34) + 16LL) = 1;
      *(_DWORD *)(*((_QWORD *)this + 33) + 16LL) = 0;
    }
    updated = OUTPUTDUPL_CONTEXT::ProcessUpdateLowLevel(
                this,
                a2,
                0LL,
                *((struct _PRODUCER_INFO **)this + 34),
                0LL,
                &v36);
    *((_DWORD *)this + 71) = 1;
    v22 = *((_QWORD *)this + 34);
LABEL_29:
    v38[17] = *(_DWORD *)(*(_QWORD *)(v22 + 8) + 4LL);
    goto LABEL_30;
  }
  v18 = v17;
  WdLogSingleEntry1(1LL, v17);
  DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Unexpected state combination 0x%I64x", v18, 0LL, 0LL, 0LL, 0LL);
  updated = -1073741595;
LABEL_30:
  if ( v11 )
  {
    if ( !v14 || *(_DWORD *)(*((_QWORD *)this + 33) + 16LL) == 1 )
    {
      v25 = *((_QWORD *)this + *((unsigned int *)this + 11) + 6);
      DXGDXGIKEYEDMUTEX::Release(v25, *(_QWORD *)(v25 + 136), 0LL, *((_DWORD *)a2 + 4));
    }
    else
    {
      DXGDXGIKEYEDMUTEX::Release(
        *((_QWORD *)this + *((unsigned int *)this + 11) + 6),
        1uLL,
        *((_QWORD *)a2 + 1),
        *((_DWORD *)a2 + 4));
      v2 = 1;
    }
  }
  if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(*((OUTPUTDUPL_MGR **)this + 37)) )
  {
    v38[15] = updated;
    v38[16] = v11;
    v38[19] = *(_DWORD *)(*((_QWORD *)this + 33) + 16LL) & 3 | v38[19] & 0xFFFFFC10 | (v16 << 8) & 0xFFFFFDD0 | (4 * (*(_DWORD *)(*((_QWORD *)this + 34) + 16LL) & 3 | (8 * (*((_DWORD *)this + 78) & 1 | (2 * (v36 & 1 | (2 * (v14 & 1 | (4 * v2)))))))));
    OUTPUTDUPL_MGR::LogEtwAndDiagnostics(v26, 0, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v38, 1);
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    v27 = *((_QWORD *)this + 34);
    v28 = *((_QWORD *)this + 33);
    v34 = *((_DWORD *)this + 71);
    LODWORD(v33) = *(_DWORD *)(v27 + 16);
    LODWORD(v32) = v34;
    LODWORD(v31) = *(_DWORD *)(v28 + 16);
    LODWORD(v30) = *(_DWORD *)a2;
    LODWORD(v29) = *((_DWORD *)this + 11);
    McTemplateK0pqqqqqttttttttq_EtwWriteTransfer(
      v27,
      v28,
      v34,
      this,
      v29,
      v30,
      v31,
      v32,
      v33,
      v11,
      *((_DWORD *)this + 77),
      *((_DWORD *)this + 78),
      v14,
      v34,
      v16,
      v2,
      v36,
      updated);
  }
  return updated;
}
