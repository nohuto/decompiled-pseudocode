/*
 * XREFs of ?RouteFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18019DA94
 * Callers:
 *     ?RouteAllFrames@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18019D9FC (-RouteAllFrames@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800BAD18 (_tlgKeywordOn.c)
 *     ?IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ @ 0x180129132 (-IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180199634 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?CheckForBufferedDescendant@CManipulationManager@@IEBA_NPEAVCManipulationFrame@@K@Z @ 0x18019A904 (-CheckForBufferedDescendant@CManipulationManager@@IEBA_NPEAVCManipulationFrame@@K@Z.c)
 *     ?RoutePointer@GestureTargeting@InputTraceLogging@@SAX_K0KKPEAX@Z @ 0x18019DE6C (-RoutePointer@GestureTargeting@InputTraceLogging@@SAX_K0KKPEAX@Z.c)
 *     ?TargetFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18019E3BC (-TargetFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 */

void __fastcall CManipulationManager::RouteFrameInput(CManipulationManager *this, struct CManipulationFrame *a2)
{
  int v3; // r13d
  char *v4; // rdi
  __int64 v5; // rax
  char v6; // r14
  CManipulationManager *v7; // r9
  bool v8; // r14
  unsigned int v9; // esi
  __int64 v10; // r12
  __int64 v11; // r15
  unsigned int v12; // edi
  unsigned int *v13; // r13
  void *v14; // rsi
  unsigned __int64 *v15; // r14
  __int64 v16; // r12
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  char v20; // al
  int v21; // [rsp+40h] [rbp-108h] BYREF
  int v22; // [rsp+44h] [rbp-104h]
  BOOL v23; // [rsp+48h] [rbp-100h]
  int v24; // [rsp+4Ch] [rbp-FCh] BYREF
  char *v25; // [rsp+50h] [rbp-F8h]
  void *v26; // [rsp+58h] [rbp-F0h]
  unsigned int *v27; // [rsp+60h] [rbp-E8h]
  unsigned __int64 *v28; // [rsp+68h] [rbp-E0h]
  _QWORD v29[2]; // [rsp+70h] [rbp-D8h] BYREF
  __int128 v30; // [rsp+80h] [rbp-C8h]
  __int128 v31; // [rsp+90h] [rbp-B8h]
  __int128 v32; // [rsp+A0h] [rbp-A8h]
  __int128 v33; // [rsp+B0h] [rbp-98h]
  __int128 v34; // [rsp+C0h] [rbp-88h]
  __int128 v35; // [rsp+D0h] [rbp-78h]
  __int128 v36; // [rsp+E0h] [rbp-68h]
  __int128 v37; // [rsp+F0h] [rbp-58h]
  __int128 v38; // [rsp+100h] [rbp-48h]
  bool v40; // [rsp+160h] [rbp+18h]
  unsigned int v41; // [rsp+168h] [rbp+20h]

  v3 = 0;
  v22 = 0;
  v28 = (unsigned __int64 *)((char *)a2 + 448);
  v4 = (char *)a2 + 176;
  v25 = (char *)a2 + 176;
  v5 = 256LL;
  if ( *((_DWORD *)a2 + 92) != 5 )
    v5 = 248LL;
  if ( *(_QWORD *)((char *)this + v5) - *((_QWORD *)a2 + 56) <= *((_QWORD *)this + 34) )
  {
    v25 = (char *)a2 + 176;
  }
  else
  {
    *v4 |= 2u;
    CManipulationManager::TargetFrameInput(this, a2);
  }
  v29[1] = v4;
  v6 = *v4;
  if ( (*v4 & 1) != 0 && !CManipulationFrame::IsMousewheelFrame(a2) )
  {
    v8 = (v6 & 4) != 0;
LABEL_9:
    v9 = 0;
    v41 = 0;
    v40 = v8;
    while ( 1 )
    {
      v27 = (unsigned int *)((char *)a2 + 16);
      if ( v9 >= *((_DWORD *)a2 + 4) )
        break;
      v10 = 248LL * v9;
      v23 = v8;
      if ( (*((_BYTE *)a2 + v10 + 608) & 1) == v23
        && *(_DWORD *)((char *)a2 + v10 + 376)
        && !*(_DWORD *)((char *)a2 + v10 + 600) )
      {
        if ( *(_QWORD *)((char *)a2 + v10 + 392) == -1LL || CManipulationManager::CheckForBufferedDescendant(v7, a2, v9) )
        {
          v22 = ++v3;
        }
        else
        {
          AcquireSRWLockExclusive(&CManipulationManager::s_rwPointerBufferLock);
          dword_1803E6EA0 = GetCurrentThreadId();
          v11 = 0LL;
          v26 = *(void **)((char *)a2 + v10 + 392);
          v12 = v9;
          v13 = v27;
          v14 = v26;
          v15 = v28;
          while ( v12 < *v13 )
          {
            v16 = 248LL * v12;
            if ( *(void **)((char *)a2 + v16 + 392) == v14
              && (*((_BYTE *)a2 + v16 + 608) & 1) == v23
              && *(_DWORD *)((char *)a2 + v16 + 376) )
            {
              CManipulationManager::s_rgPointerIds[v11] = *(_DWORD *)((char *)a2 + v16 + 372);
              v11 = (unsigned int)(v11 + 1);
              *(_DWORD *)((char *)a2 + v16 + 376) = 0;
              if ( (unsigned int)dword_1803E07D0 > 4 )
              {
                if ( tlgKeywordOn((__int64)&dword_1803E07D0, 2LL) )
                {
                  v29[0] = v14;
                  v21 = *(_DWORD *)((char *)a2 + v16 + 372);
                  v24 = *((_DWORD *)a2 + 6);
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                    v17,
                    byte_180379620,
                    v18,
                    v19,
                    (__int64)&v24,
                    (__int64)&v21,
                    (__int64)v29);
                }
              }
              v30 = *((_OWORD *)a2 + 2);
              v31 = *((_OWORD *)a2 + 3);
              v32 = *((_OWORD *)a2 + 4);
              v33 = *((_OWORD *)a2 + 5);
              v34 = *((_OWORD *)a2 + 6);
              v35 = *((_OWORD *)a2 + 7);
              v36 = *((_OWORD *)a2 + 8);
              v37 = *((_OWORD *)a2 + 9);
              v38 = *((_OWORD *)a2 + 10);
              InputTraceLogging::GestureTargeting::RoutePointer(
                *v15,
                v30,
                *((_DWORD *)a2 + 6),
                *(_DWORD *)((char *)a2 + v16 + 372),
                v14);
            }
            ++v12;
          }
          v21 = v11;
          v4 = v25;
          v9 = v41;
          v8 = v40;
          v3 = v22;
          SetManipulationInputTarget(
            *((unsigned int *)a2 + 6),
            v26,
            (unsigned int)v11,
            CManipulationManager::s_rgPointerIds,
            (char *)a2 + 32);
          *((_DWORD *)a2 + 5) += v11;
          dword_1803E6EA0 = 0;
          ReleaseSRWLockExclusive(&CManipulationManager::s_rwPointerBufferLock);
        }
      }
      v41 = ++v9;
      v7 = this;
      if ( v9 == *v27 && v8 )
      {
        v8 = 0;
        goto LABEL_9;
      }
    }
    v20 = *v4 & 0xFE;
    *v4 = v20;
    if ( !v3 )
      *v4 = v20 & 0xFB;
  }
}
