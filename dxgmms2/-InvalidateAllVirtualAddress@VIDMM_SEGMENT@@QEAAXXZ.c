// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_SEGMENT::InvalidateAllVirtualAddress(VIDMM_SEGMENT *this)
{
  VIDMM_SEGMENT *v2; // r12
  VIDMM_SEGMENT *v3; // r14
  VIDMM_SEGMENT *v4; // rax
  _QWORD **v5; // rax
  _QWORD *v6; // r15
  _QWORD *v7; // r12
  _QWORD *v8; // rax
  _QWORD **v9; // rax
  _QWORD *v10; // rbp
  _QWORD *v11; // r12
  __int64 *v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  VIDMM_CPU_HOST_APERTURE *v17; // rdi
  _QWORD **v18; // [rsp+50h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+68h] [rbp-60h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
  v2 = (VIDMM_SEGMENT *)((char *)this + 136);
  v3 = (VIDMM_SEGMENT *)*((_QWORD *)this + 17);
  if ( v3 != (VIDMM_SEGMENT *)((char *)this + 136) )
  {
    do
    {
      v4 = v3;
      v3 = *(VIDMM_SEGMENT **)v3;
      v5 = (_QWORD **)((char *)v4 + 16);
      v18 = v5;
      v6 = *v5;
      if ( *v5 != v5 )
      {
        v7 = v5;
        do
        {
          v8 = v6;
          v6 = (_QWORD *)*v6;
          v9 = (_QWORD **)(v8 + 2);
          v10 = *v9;
          if ( *v9 != v9 )
          {
            v11 = v9;
            do
            {
              v12 = (__int64 *)*(v10 - 7);
              v10 = (_QWORD *)*v10;
              v13 = *v12;
              KeEnterCriticalRegion();
              ExAcquirePushLockExclusiveEx(v13 + 504, 0LL);
              DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v13 + 296));
              v15 = *(_QWORD *)(v13 + 88);
              if ( v15 && (*(_BYTE *)(v15 + 32) & 1) != 0 )
              {
                if ( g_IsInternalReleaseOrDbg )
                  *(_QWORD *)(WdLogNewEntry5_WdTrace(v14) + 24) = v13;
                KeStackAttachProcess(**(PRKPROCESS **)(*(_QWORD *)(v13 + 88) + 8LL), &ApcState);
                v16 = VIDMM_GLOBAL::Rotate(
                        *((_QWORD *)this + 1),
                        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 88) + 8LL) + 24LL),
                        *(_QWORD *)(*(_QWORD *)(v13 + 88) + 24LL),
                        3u,
                        0LL,
                        0LL,
                        0LL,
                        0LL,
                        1,
                        v13);
                if ( ((v16 + 0x80000000) & 0x80000000) == 0 && v16 != -1073741558 )
                {
                  g_DxgMmsBugcheckExportIndex = 1;
                  WdLogSingleEntry5(0LL, 270LL, 4LL, 3LL, v16, 0LL);
                }
                *(_BYTE *)(*(_QWORD *)(v13 + 88) + 32LL) &= ~1u;
                *(_DWORD *)(v13 + 68) |= 0x200000u;
                KeUnstackDetachProcess(&ApcState);
              }
              if ( *(_QWORD *)(v13 + 472) )
              {
                v17 = (VIDMM_CPU_HOST_APERTURE *)*((_QWORD *)this + 63);
                VIDMM_CPU_HOST_APERTURE::UnmapRange(v17, (struct _VIDMM_GLOBAL_ALLOC *)v13);
                VIDMM_CPU_HOST_APERTURE::ReleaseRange(v17, (struct _VIDMM_GLOBAL_ALLOC *)v13);
              }
              ExReleasePushLockExclusiveEx(v13 + 504, 0LL);
              KeLeaveCriticalRegion();
              DXGFASTMUTEX::Release((struct _KTHREAD **)(v13 + 296));
            }
            while ( v10 != v11 );
            v7 = v18;
          }
        }
        while ( v6 != v7 );
        v2 = (VIDMM_SEGMENT *)((char *)this + 136);
      }
    }
    while ( v3 != v2 );
  }
}
