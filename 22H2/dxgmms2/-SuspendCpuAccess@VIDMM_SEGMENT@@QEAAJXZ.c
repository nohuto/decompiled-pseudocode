/*
 * XREFs of ?SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C00C7E2C
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0067150 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006090 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000613C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00178A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018AA0 (_guard_dispatch_icall_nop.c)
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0064910 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B21DC (-Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MD.c)
 */

__int64 __fastcall VIDMM_SEGMENT::SuspendCpuAccess(VIDMM_SEGMENT *this, __int64 a2, VIDMM_DEVICE **a3)
{
  char *v3; // r15
  char *v4; // rbx
  __int64 v5; // rdi
  char *v7; // r12
  _QWORD **v8; // r12
  _QWORD *v9; // rsi
  _QWORD *v10; // r13
  _QWORD **v11; // r13
  _QWORD *v12; // r14
  __int64 v13; // rdx
  int v14; // eax
  VIDMM_SEGMENT *v15; // r14
  __int64 v16; // rsi
  __int64 v17; // rax
  DXGFASTMUTEX *v18; // rcx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rdx
  VIDMM_SEGMENT *v24; // r14
  __int64 v25; // rsi
  __int64 v26; // rax
  DXGFASTMUTEX *v27; // rcx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rdx
  int v34; // [rsp+20h] [rbp-C8h]
  __int64 v35; // [rsp+40h] [rbp-A8h]
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-98h] BYREF
  struct _KAPC_STATE v37; // [rsp+80h] [rbp-68h] BYREF

  v3 = (char *)this + 136;
  v4 = (char *)*((_QWORD *)this + 17);
  LODWORD(v5) = 0;
  do
  {
    v7 = v4;
    if ( v4 == v3 )
      break;
    v4 = *(char **)v4;
    v8 = (_QWORD **)(v7 + 16);
    v9 = *v8;
    do
    {
      v10 = v9;
      if ( v9 == v8 )
        break;
      v9 = (_QWORD *)*v9;
      v11 = (_QWORD **)(v10 + 2);
      v12 = *v11;
      while ( v12 != v11 )
      {
        a3 = (VIDMM_DEVICE **)(v12 - 7);
        v12 = (_QWORD *)*v12;
        v13 = *(_QWORD *)*a3;
        if ( *(_DWORD *)(*(_QWORD *)(v13 + 496) + 12LL) || (**(_DWORD **)(v13 + 496) & 0x20000) != 0 )
        {
          v14 = *(_DWORD *)(v13 + 336);
          if ( v14 )
          {
            LODWORD(v5) = -1071775486;
            break;
          }
        }
        else
        {
          v14 = *(_DWORD *)(v13 + 336);
        }
        if ( v14 )
          VIDMM_GLOBAL::FaultOneAllocation(*((VIDMM_GLOBAL **)this + 1), a3);
      }
    }
    while ( (int)v5 >= 0 );
  }
  while ( (int)v5 >= 0 );
  if ( (int)v5 >= 0 )
  {
    v15 = (VIDMM_SEGMENT *)*((_QWORD *)this + 20);
    while ( v15 != (VIDMM_SEGMENT *)((char *)this + 160) )
    {
      v16 = (__int64)v15 - 376;
      v15 = *(VIDMM_SEGMENT **)v15;
      v17 = *(_QWORD *)(v16 + 96);
      if ( v17 && (*(_BYTE *)(v17 + 32) & 1) != 0 )
      {
        v18 = *(DXGFASTMUTEX **)(v16 + 312);
        memset(&ApcState, 0, sizeof(ApcState));
        DXGFASTMUTEX::Acquire(v18);
        KeStackAttachProcess(**(PRKPROCESS **)(*(_QWORD *)(v16 + 96) + 8LL), &ApcState);
        LODWORD(v35) = 1;
        v19 = VIDMM_GLOBAL::Rotate(
                *((_QWORD *)this + 1),
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 96) + 8LL) + 24LL),
                *(_QWORD *)(*(_QWORD *)(v16 + 96) + 24LL),
                3u,
                0LL,
                0LL,
                0LL,
                0LL,
                v35,
                v16);
        v5 = v19;
        if ( v19 < 0 )
        {
          if ( v19 == -1073741558 )
          {
            *(_DWORD *)(v16 + 76) |= 0x100000u;
            LODWORD(v5) = 0;
          }
          else
          {
            v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v20);
            v22[3] = 270LL;
            v22[4] = 4LL;
            v22[5] = 3LL;
            v22[6] = v5;
            v22[7] = 0LL;
            WdLogEvent5_WdCriticalError(v22);
          }
        }
        *(_BYTE *)(*(_QWORD *)(v16 + 96) + 32LL) &= ~1u;
        KeUnstackDetachProcess(&ApcState);
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v16 + 312), v23);
      }
    }
    if ( (int)v5 >= 0 )
    {
      v24 = (VIDMM_SEGMENT *)*((_QWORD *)this + 22);
      while ( v24 != (VIDMM_SEGMENT *)((char *)this + 176) )
      {
        v25 = (__int64)v24 - 376;
        v24 = *(VIDMM_SEGMENT **)v24;
        if ( *(_DWORD *)(v25 + 336) )
        {
          LOBYTE(a3) = 1;
          LOBYTE(v34) = 0;
          (*(void (__fastcall **)(_QWORD, __int64, VIDMM_DEVICE **, _QWORD, int, _QWORD))(**(_QWORD **)(v25 + 128) + 48LL))(
            *(_QWORD *)(v25 + 128),
            v25,
            a3,
            0LL,
            v34,
            0LL);
        }
        else
        {
          v26 = *(_QWORD *)(v25 + 96);
          if ( v26 && (*(_BYTE *)(v26 + 32) & 1) != 0 )
          {
            v27 = *(DXGFASTMUTEX **)(v25 + 312);
            memset(&v37, 0, sizeof(v37));
            DXGFASTMUTEX::Acquire(v27);
            KeStackAttachProcess(**(PRKPROCESS **)(*(_QWORD *)(v25 + 96) + 8LL), &v37);
            LODWORD(v35) = 1;
            v28 = VIDMM_GLOBAL::Rotate(
                    *((_QWORD *)this + 1),
                    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v25 + 96) + 8LL) + 24LL),
                    *(_QWORD *)(*(_QWORD *)(v25 + 96) + 24LL),
                    3u,
                    0LL,
                    0LL,
                    0LL,
                    0LL,
                    v35,
                    v25);
            v5 = v28;
            if ( v28 < 0 )
            {
              if ( v28 == -1073741558 )
              {
                *(_DWORD *)(v25 + 76) |= 0x100000u;
                LODWORD(v5) = 0;
              }
              else
              {
                v31 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v30, v29);
                v31[3] = 270LL;
                v31[4] = 4LL;
                v31[5] = 3LL;
                v31[6] = v5;
                v31[7] = 0LL;
                WdLogEvent5_WdCriticalError(v31);
              }
            }
            *(_BYTE *)(*(_QWORD *)(v25 + 96) + 32LL) &= ~1u;
            KeUnstackDetachProcess(&v37);
            DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v25 + 312), v32);
          }
        }
      }
    }
  }
  return (unsigned int)v5;
}
