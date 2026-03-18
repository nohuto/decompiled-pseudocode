/*
 * XREFs of ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1C01C04E0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0026670 (Win32FreePool.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C00344F0 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00355CC (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0038C0C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C003A380 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00449EC (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     Win32AllocPoolZInit @ 0x1C00869F0 (Win32AllocPoolZInit.c)
 *     PushW32ThreadLock @ 0x1C0097140 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C00DC6E4 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase.c)
 *     ?ReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@W4CPointerInputFramePhase@@@Z @ 0x1C00DC7D8 (-ReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@W4CPointerInputFramePhase@.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00DC990 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     PopW32ThreadLock @ 0x1C00DD608 (PopW32ThreadLock.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00E7C96 (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C00E7DA2 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C01BD200 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C01BD260 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1C01BD2AC (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?CheckFreeOnDeparture@CTouchProcessor@@AEAAXG@Z @ 0x1C01BFD54 (-CheckFreeOnDeparture@CTouchProcessor@@AEAAXG@Z.c)
 *     ?GetPrevMTNodeTarget@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@@Z @ 0x1C01CD4C0 (-GetPrevMTNodeTarget@CTouchProcessor@@AEAA-AUtagINPUTDEST@@PEAUCPointerInfoNode@@PEAUCPointerInp.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C01CE088 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01CE868 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C01D2B28 (-ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x1C01D45E8 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::CleanupManipulationThreadData(CTouchProcessor *this)
{
  int v2; // r12d
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rbx
  unsigned int *v6; // r13
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r15
  char *v11; // r14
  __int64 v12; // rdi
  CPointerInfoNode *v13; // rcx
  const struct tagINPUTDEST *PrevMTNodeTarget; // rax
  bool v15; // r13
  struct CInputPointerNode *NodeById; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // r15
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  int v27; // [rsp+48h] [rbp-C0h]
  int v28; // [rsp+4Ch] [rbp-BCh]
  unsigned int *v29; // [rsp+50h] [rbp-B8h]
  int v30; // [rsp+50h] [rbp-B8h]
  __m256i v31; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v32; // [rsp+78h] [rbp-90h] BYREF
  __int64 v33; // [rsp+88h] [rbp-80h]
  __int128 v34; // [rsp+90h] [rbp-78h] BYREF
  __int64 v35; // [rsp+A0h] [rbp-68h]
  _BYTE v36[128]; // [rsp+A8h] [rbp-60h] BYREF
  PERESOURCE *v37[6]; // [rsp+128h] [rbp+20h] BYREF
  PERESOURCE *v38[8]; // [rsp+158h] [rbp+50h] BYREF
  _BYTE v39[112]; // [rsp+198h] [rbp+90h] BYREF
  _QWORD v40[16]; // [rsp+208h] [rbp+100h] BYREF

  v2 = 0;
  v27 = 0;
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v38,
    (CTouchProcessor *)((char *)this + 32),
    0LL);
  v5 = *((_QWORD *)this + 7);
  while ( (CTouchProcessor *)v5 != (CTouchProcessor *)((char *)this + 48) )
  {
    v31.m256i_i64[0] = v5 - 8;
    CTouchProcessor::ReferenceFrameInt(v3, v5 - 8, v4);
    v28 = 0;
    v6 = (unsigned int *)Win32AllocPoolZInit(4LL * *(unsigned int *)(v5 + 40), 1851878741);
    v29 = v6;
    v7 = Win32AllocPoolZInit(4LL * *(unsigned int *)(v5 + 40), 1851878741);
    v9 = *(unsigned int *)(v5 + 40);
    v10 = 0LL;
    v11 = (char *)v7;
    if ( (_DWORD)v9 )
    {
      do
      {
        v12 = *(_QWORD *)(v5 + 232) + 480LL * (unsigned int)v10;
        memset(v36, 0, 113);
        if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v12)
          && (unsigned int)CPointerInfoNode::IsForManipulationThread(v13)
          && (*(_DWORD *)(v12 + 4) & 0x200) == 0 )
        {
          v15 = 1;
          if ( v6 )
          {
            if ( v11 )
            {
              PrevMTNodeTarget = (const struct tagINPUTDEST *)CTouchProcessor::GetPrevMTNodeTarget(
                                                                this,
                                                                v39,
                                                                v12,
                                                                v31.m256i_i64[0]);
              CInputDest::CInputDest((CInputDest *)v40, PrevMTNodeTarget);
              v2 |= 1u;
              if ( *(_DWORD *)CInputDest::operator=((__int64)v36, v40) )
                v15 = 0;
            }
          }
          if ( (v2 & 1) != 0 )
          {
            v2 &= ~1u;
            CInputDest::SetEmpty((CInputDest *)v40);
          }
          if ( v15 )
          {
            NodeById = CTouchProcessor::FindNodeById(this, *(_WORD *)(v12 + 172), 0, 0);
            if ( NodeById )
            {
              _InterlockedDecrement((volatile signed __int32 *)NodeById + 9);
              if ( *((int *)NodeById + 9) < 0 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19);
            }
            if ( (*(_DWORD *)(v12 + 180) & 0x40000) != 0 )
              CTouchProcessor::ProcessRoutedAwayList(
                this,
                *(_WORD *)(v12 + 172),
                1,
                (const struct CPointerInputFrame *)v31.m256i_i64[0],
                v10,
                (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
            CTouchProcessor::FreePointerInfoNodeInt((__int64)this, v31.m256i_i64[0], (unsigned int)v10);
            CTouchProcessor::CheckFreeOnDeparture(this, *(_WORD *)(v12 + 172));
          }
          else
          {
            ++v28;
            *(_QWORD *)(v12 + 192) = CInputDest::GetWindowHandle((CInputDest *)v36);
            CInputDest::operator=(v12 + 352, (__int64)v36);
            *(_DWORD *)&v11[4 * v10] = 1;
          }
          v6 = v29;
        }
        CInputDest::SetEmpty((CInputDest *)v36);
        v9 = *(unsigned int *)(v5 + 40);
        v10 = (unsigned int)(v10 + 1);
      }
      while ( (unsigned int)v10 < (unsigned int)v9 );
      v27 = v2;
    }
    v20 = 0LL;
    v30 = 0;
    if ( v6 )
    {
      if ( v11 )
      {
        v21 = 0LL;
        if ( (_DWORD)v9 )
        {
          do
          {
            if ( *(_DWORD *)&v11[4 * v21] )
            {
              v22 = 480LL * (unsigned int)v21;
              v23 = 0LL;
              v24 = (unsigned int)v21;
              v25 = *(_QWORD *)(v22 + *(_QWORD *)(v5 + 232) + 192);
              if ( (unsigned int)v21 >= (unsigned int)v9 )
                goto LABEL_34;
              do
              {
                v9 = (unsigned int)v24;
                if ( *(_DWORD *)&v11[4 * (unsigned int)v24] )
                {
                  v26 = *(_QWORD *)(v5 + 232) + 480LL * (unsigned int)v24;
                  if ( *(_QWORD *)(v26 + 192) == v25 )
                  {
                    v22 = *(unsigned __int16 *)(v26 + 172);
                    v6[v23] = v22;
                    v23 = (unsigned int)(v23 + 1);
                    *(_DWORD *)&v11[4 * (unsigned int)v24] = 0;
                  }
                }
                v24 = (unsigned int)(v24 + 1);
              }
              while ( (unsigned int)v24 < *(_DWORD *)(v5 + 40) );
              if ( !(_DWORD)v23 )
LABEL_34:
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v9, v24);
              v35 = 0LL;
              v33 = 0LL;
              v34 = 0LL;
              v32 = 0LL;
              memset(&v31.m256i_u64[1], 0, 24);
              PushW32ThreadLock((__int64)v6, (__int64)&v34, (__int64)Win32FreePool);
              PushW32ThreadLock((__int64)v11, (__int64)&v32, (__int64)Win32FreePool);
              PushW32ThreadLock(
                v31.m256i_i64[0],
                (__int64)&v31.m256i_i64[1],
                (__int64)CTouchProcessor::DereferencePointerInputFrame);
              CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
                (CInpUnlockGuardExclusive *)v37,
                (struct _KTHREAD **)this + 4,
                0LL);
              CTouchProcessor::SetManipulationInputTarget(
                this,
                *(_DWORD *)(v5 + 32),
                v23,
                v6,
                0LL,
                (struct TELEMETRY_POINTER_FRAME_TIMES *)(v5 + 64),
                0);
              CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v37);
              PopW32ThreadLock((__int64)&v31.m256i_i64[1]);
              PopW32ThreadLock((__int64)&v32);
              PopW32ThreadLock((__int64)&v34);
              v20 = (unsigned int)(v23 + v30);
              v30 += v23;
            }
            v9 = *(unsigned int *)(v5 + 40);
            v21 = (unsigned int)(v21 + 1);
          }
          while ( (unsigned int)v21 < (unsigned int)v9 );
          v2 = v27;
        }
        if ( (_DWORD)v20 != v28 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v9, v8);
      }
      Win32FreePool((char *)v6);
    }
    if ( v11 )
      Win32FreePool(v11);
    v5 = *(_QWORD *)(v5 + 8);
    CTouchProcessor::UnreferenceFrameInt(this, v31.m256i_i64[0], v8);
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v38);
}
