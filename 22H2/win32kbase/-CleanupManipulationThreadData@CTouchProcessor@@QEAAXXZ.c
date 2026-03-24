/*
 * XREFs of ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1C0189AB0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C00298B0 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0043D04 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0043EC0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0044A10 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     PushW32ThreadLock @ 0x1C00859F4 (PushW32ThreadLock.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0095988 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00CCC60 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00CCD08 (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C00CCFA0 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase.c)
 *     ?ReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@W4CPointerInputFramePhase@@@Z @ 0x1C00CD114 (-ReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@W4CPointerInputFramePhase@.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00CD33C (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C0187408 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1C0187454 (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?GetPrevMTNodeTarget@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@@Z @ 0x1C0195700 (-GetPrevMTNodeTarget@CTouchProcessor@@AEAA-AUtagINPUTDEST@@PEAUCPointerInfoNode@@PEAUCPointerInp.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C01967C0 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01970E4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C019A5AC (-ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C019BBCC (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 *     PopW32ThreadLock @ 0x1C01FC5E0 (PopW32ThreadLock.c)
 */

void __fastcall CTouchProcessor::CleanupManipulationThreadData(CTouchProcessor *this)
{
  int v2; // r13d
  __int64 v3; // rcx
  __int64 v4; // rbx
  unsigned int *v5; // r12
  void *v6; // rax
  unsigned int v7; // edx
  __int64 v8; // rsi
  unsigned int v9; // r15d
  __int64 v10; // rdi
  CPointerInfoNode *v11; // rcx
  const struct tagINPUTDEST *PrevMTNodeTarget; // rax
  char v13; // r12
  int v14; // ecx
  unsigned int v15; // edi
  unsigned int v16; // r15d
  unsigned int v17; // r8d
  __int64 v18; // r9
  __int64 v19; // rax
  unsigned int v20; // ecx
  __int64 v21; // rax
  int v22; // [rsp+38h] [rbp-D0h]
  int v23; // [rsp+3Ch] [rbp-CCh]
  unsigned int *v24; // [rsp+48h] [rbp-C0h]
  int v25; // [rsp+48h] [rbp-C0h]
  __m256i v26; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v27; // [rsp+78h] [rbp-90h] BYREF
  __int64 v28; // [rsp+88h] [rbp-80h]
  __int128 v29; // [rsp+90h] [rbp-78h] BYREF
  __int64 v30; // [rsp+A0h] [rbp-68h]
  PERESOURCE *v31[6]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v32[128]; // [rsp+D8h] [rbp-30h] BYREF
  CInpLockGuard *v33[8]; // [rsp+158h] [rbp+50h] BYREF
  char v34[112]; // [rsp+198h] [rbp+90h] BYREF
  _QWORD v35[16]; // [rsp+208h] [rbp+100h] BYREF

  v22 = 0;
  v2 = 0;
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v33,
    (CTouchProcessor *)((char *)this + 40),
    0LL);
  v4 = *((_QWORD *)this + 8);
  while ( (CTouchProcessor *)v4 != (CTouchProcessor *)((char *)this + 56) )
  {
    v26.m256i_i64[0] = v4 - 8;
    CTouchProcessor::ReferenceFrameInt(v3, v4 - 8);
    v23 = 0;
    v5 = (unsigned int *)Win32AllocPoolZInit(4LL * *(unsigned int *)(v4 + 40), 1851878741LL);
    v24 = v5;
    v6 = Win32AllocPoolZInit(4LL * *(unsigned int *)(v4 + 40), 1851878741LL);
    v7 = *(_DWORD *)(v4 + 40);
    v8 = (__int64)v6;
    v9 = 0;
    if ( v7 )
    {
      do
      {
        v10 = *(_QWORD *)(v4 + 128) + 480LL * v9;
        memset(v32, 0, 113);
        if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v10)
          && (unsigned int)CPointerInfoNode::IsForManipulationThread(v11)
          && (*(_DWORD *)(v10 + 4) & 0x200) == 0 )
        {
          if ( !v5
            || !v8
            || (PrevMTNodeTarget = (const struct tagINPUTDEST *)CTouchProcessor::GetPrevMTNodeTarget(
                                                                  this,
                                                                  v34,
                                                                  v10,
                                                                  v26.m256i_i64[0]),
                CInputDest::CInputDest((CInputDest *)v35, PrevMTNodeTarget),
                v2 |= 1u,
                v13 = 0,
                !*(_DWORD *)CInputDest::operator=((__int64)v32, v35)) )
          {
            v13 = 1;
          }
          if ( (v2 & 1) != 0 )
          {
            v2 &= ~1u;
            CInputDest::SetEmpty((CInputDest *)v35);
          }
          if ( v13 )
          {
            if ( (*(_DWORD *)(v10 + 180) & 0x40000) != 0 )
              CTouchProcessor::ProcessRoutedAwayList(
                this,
                *(_WORD *)(v10 + 172),
                1,
                (const struct CPointerInputFrame *)v26.m256i_i64[0],
                v9,
                (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
            CTouchProcessor::FreePointerInfoNodeInt((__int64)this, v26.m256i_i64[0], v9);
          }
          else
          {
            ++v23;
            *(_QWORD *)(v10 + 192) = CInputDest::GetWindowHandle((CInputDest *)v32);
            *(_DWORD *)(v8 + 4LL * v9) = 1;
          }
          v5 = v24;
        }
        CInputDest::SetEmpty((CInputDest *)v32);
        v7 = *(_DWORD *)(v4 + 40);
        ++v9;
      }
      while ( v9 < v7 );
      v22 = v2;
    }
    v14 = 0;
    v25 = 0;
    if ( v5 )
    {
      if ( v8 )
      {
        v15 = 0;
        if ( v7 )
        {
          do
          {
            if ( *(_DWORD *)(v8 + 4LL * v15) )
            {
              v16 = 0;
              v17 = v15;
              v18 = *(_QWORD *)(480LL * v15 + *(_QWORD *)(v4 + 128) + 192);
              if ( v15 >= v7 )
                goto LABEL_30;
              do
              {
                if ( *(_DWORD *)(v8 + 4LL * v17) )
                {
                  v19 = *(_QWORD *)(v4 + 128) + 480LL * v17;
                  if ( *(_QWORD *)(v19 + 192) == v18 )
                  {
                    v20 = *(unsigned __int16 *)(v19 + 172);
                    v21 = v16++;
                    v5[v21] = v20;
                    *(_DWORD *)(v8 + 4LL * v17) = 0;
                  }
                }
                ++v17;
              }
              while ( v17 < *(_DWORD *)(v4 + 40) );
              if ( !v16 )
LABEL_30:
                MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 12665);
              v30 = 0LL;
              v28 = 0LL;
              v29 = 0LL;
              v27 = 0LL;
              memset(&v26.m256i_u64[1], 0, 24);
              PushW32ThreadLock((__int64)v5, (__int64)&v29, (__int64)Win32FreePool);
              PushW32ThreadLock(v8, (__int64)&v27, (__int64)Win32FreePool);
              PushW32ThreadLock(
                v26.m256i_i64[0],
                (__int64)&v26.m256i_i64[1],
                (__int64)CTouchProcessor::DereferencePointerInputFrame);
              CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
                (CInpUnlockGuardExclusive *)v31,
                (CTouchProcessor *)((char *)this + 40),
                0LL);
              CTouchProcessor::SetManipulationInputTarget(this, *(_DWORD *)(v4 + 32), v16, v5, 0LL);
              CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v31);
              PopW32ThreadLock(&v26.m256i_u64[1]);
              PopW32ThreadLock(&v27);
              PopW32ThreadLock(&v29);
              v14 = v16 + v25;
              v25 += v16;
            }
            v7 = *(_DWORD *)(v4 + 40);
            ++v15;
          }
          while ( v15 < v7 );
          v2 = v22;
        }
        if ( v14 != v23 )
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 12692);
      }
      Win32FreePool((__int64)v5);
    }
    if ( v8 )
      Win32FreePool(v8);
    v4 = *(_QWORD *)(v4 + 8);
    CTouchProcessor::UnreferenceFrameInt(this, v26.m256i_i64[0]);
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v33);
}
