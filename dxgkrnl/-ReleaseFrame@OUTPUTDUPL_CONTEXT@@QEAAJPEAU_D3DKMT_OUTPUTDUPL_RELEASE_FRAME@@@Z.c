/*
 * XREFs of ?ReleaseFrame@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z @ 0x1C032F6F0
 * Callers:
 *     ?ReleaseFrame@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z @ 0x1C032A4BC (-ReleaseFrame@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     McTemplateK0pqqttq_EtwWriteTransfer @ 0x1C005402C (McTemplateK0pqqttq_EtwWriteTransfer.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C01D24DC (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C032577C (-AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_T.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1C0327ED4 (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C0328448 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ?Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C032A098 (-Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::ReleaseFrame(
        OUTPUTDUPL_CONTEXT *this,
        struct _D3DKMT_OUTPUTDUPL_RELEASE_FRAME *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  OUTPUTDUPL_MGR *v6; // rcx
  __int64 v7; // r8
  int v8; // ecx
  UINT v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  _DWORD *v14; // rax
  int v15; // eax
  OUTPUTDUPL_MGR *v16; // rcx
  __int64 v17; // rdx
  DXGDIAGNOSTICS **v18; // rcx
  unsigned int v19; // r8d
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v23; // [rsp+20h] [rbp-59h]
  __int64 v24; // [rsp+28h] [rbp-51h]
  __int64 v25; // [rsp+30h] [rbp-49h]
  __int64 v26; // [rsp+38h] [rbp-41h]
  __int64 v27; // [rsp+40h] [rbp-39h]
  union _LARGE_INTEGER v28[2]; // [rsp+50h] [rbp-29h] BYREF
  _DWORD v29[16]; // [rsp+60h] [rbp-19h] BYREF

  LODWORD(v4) = 0;
  memset(v29, 0, sizeof(v29));
  if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(*((OUTPUTDUPL_MGR **)this + 37)) )
  {
    OUTPUTDUPL_MGR::InitializePacketHeader(v6, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v29);
    v8 = *((_DWORD *)this + 71);
    v29[13] = *((_DWORD *)this + 4);
    v29[1] = 64;
    v29[14] = v29[14] & 0xFFFFFFF3 | (4 * (v8 & 1));
    v29[12] = 10;
  }
  v9 = *((_DWORD *)this + 11);
  if ( *(_DWORD *)(*((_QWORD *)this + 33) + 16LL) == 2 )
  {
    *((_DWORD *)this + 11) = ++v9;
    if ( v9 >= *((_DWORD *)this + 10) )
    {
      *((_DWORD *)this + 11) = 0;
      v9 = 0;
    }
  }
  a2->NextKeyMutexIdx = v9;
  v10 = *((_QWORD *)this + 33);
  *(_QWORD *)v10 = 0LL;
  *(_DWORD *)(v10 + 20) = 0;
  *(_DWORD *)(v10 + 40) = 0;
  if ( *(_DWORD *)(v10 + 16) != 1 )
  {
    *(_DWORD *)(v10 + 16) = 0;
    v11 = *(_QWORD *)(v10 + 8);
    *(_QWORD *)v11 = 0LL;
    *(_QWORD *)(v11 + 8) = 0LL;
    *(_DWORD *)(v11 + 16) = 0;
    *(_DWORD *)(v11 + 24) = 0;
    *(_DWORD *)(v11 + 44) = 0;
  }
  if ( *(_DWORD *)(*((_QWORD *)this + 33) + 16LL) == 1 && *(_DWORD *)(*((_QWORD *)this + 34) + 16LL) == 1 )
  {
    WdLogSingleEntry1(1LL, 2346LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!((m_pCurrentFrameInfo->PresentUpdateStatus == PRODUCER_INFO_PRESENT_UPDATE_PENDING) && (m_pAccumulatedFr"
                "ameInfo->PresentUpdateStatus == PRODUCER_INFO_PRESENT_UPDATE_PENDING))",
      2346LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_DWORD *)this + 71) )
  {
    if ( *(_DWORD *)(*((_QWORD *)this + 34) + 16LL) == 2 )
    {
      WdLogSingleEntry1(1LL, 2356LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"m_pAccumulatedFrameInfo->PresentUpdateStatus != PRODUCER_INFO_PRESENT_UPDATE_READY",
        2356LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v12 = *((_QWORD *)this + 34);
    v13 = (_QWORD *)*((_QWORD *)this + 33);
    *((_QWORD *)this + 34) = v13;
    *((_QWORD *)this + 33) = v12;
    if ( !*(_DWORD *)(v12 + 20) )
    {
      *(_QWORD *)v12 = *v13;
      *(_OWORD *)(*((_QWORD *)this + 33) + 24LL) = *(_OWORD *)(*((_QWORD *)this + 34) + 24LL);
    }
    v14 = (_DWORD *)*((_QWORD *)this + 33);
    *((_DWORD *)this + 71) = 0;
    if ( (v14[5] || v14[10]) && v14[4] != 1 )
    {
      v28[0].QuadPart = 0LL;
      v15 = DXGDXGIKEYEDMUTEX::AcquireCPU(*((_QWORD *)this + *((unsigned int *)this + 11) + 6), v5, v7, v28, 0LL, 1);
      v4 = v15;
      if ( v15 == 258 )
      {
        WdLogSingleEntry1(1LL, 2385LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Status != STATUS_TIMEOUT", 2385LL, 0LL, 0LL, 0LL, 0LL);
      }
      else if ( v15 < 0 )
      {
        WdLogSingleEntry1(2LL, v15);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"GetCurrentKeyedMutex()->Acquire failed with something other than STATUS_TIMEOUT. Status = 0x%I64x",
          v4,
          0LL,
          0LL,
          0LL,
          0LL);
        return (unsigned int)v4;
      }
      DXGDXGIKEYEDMUTEX::Release(*((_QWORD *)this + *((unsigned int *)this + 11) + 6), 1uLL, 0LL, 1);
      if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(*((OUTPUTDUPL_MGR **)this + 37)) )
        v29[14] |= 8u;
    }
  }
  v16 = (OUTPUTDUPL_MGR *)*((_QWORD *)this + 37);
  *((_DWORD *)this + 77) = 0;
  if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(v16) )
  {
    v29[14] = (*(_DWORD *)(*((_QWORD *)this + 33) + 16LL) ^ v19) & 3 ^ v19;
    OUTPUTDUPL_MGR::LogEtwAndDiagnostics(v18, 0, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v29, 1);
    v19 = v29[14];
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(v27) = v4;
    v20 = (v19 >> 3) & 1;
    v21 = (v19 >> 2) & 1;
    LODWORD(v26) = v20;
    LODWORD(v25) = v21;
    LODWORD(v24) = *(_DWORD *)(*((_QWORD *)this + 33) + 16LL);
    LODWORD(v23) = *((_DWORD *)this + 11);
    McTemplateK0pqqttq_EtwWriteTransfer(v20, v17, v21, this, v23, v24, v25, v26, v27);
  }
  return (unsigned int)v4;
}
