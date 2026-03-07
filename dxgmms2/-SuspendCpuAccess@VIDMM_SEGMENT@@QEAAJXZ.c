// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_SEGMENT::SuspendCpuAccess(VIDMM_SEGMENT *this, __int64 a2, __int64 a3)
{
  char *v3; // rbp
  char *v5; // rbx
  int v6; // edi
  char *v7; // r13
  _QWORD **v8; // r13
  _QWORD *v9; // rsi
  _QWORD *v10; // r12
  _QWORD **v11; // r12
  _QWORD *v12; // r14
  VIDMM_DEVICE **v13; // rdx
  VIDMM_SEGMENT *v14; // rsi
  __int64 v15; // rbp
  __int64 v16; // rax
  int v17; // eax
  VIDMM_SEGMENT *v18; // r14
  __int64 v19; // rsi
  __int64 v20; // rax
  int v21; // eax
  int v23; // [rsp+20h] [rbp-C8h]
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-90h] BYREF
  struct _KAPC_STATE v25; // [rsp+88h] [rbp-60h] BYREF

  v3 = (char *)this + 136;
  v5 = (char *)*((_QWORD *)this + 17);
  v6 = 0;
  while ( 1 )
  {
    v7 = v5;
    if ( v5 == v3 )
      break;
    v5 = *(char **)v5;
    v8 = (_QWORD **)(v7 + 16);
    v9 = *v8;
    while ( 1 )
    {
      v10 = v9;
      if ( v9 == v8 )
        break;
      v9 = (_QWORD *)*v9;
      v11 = (_QWORD **)(v10 + 2);
      v12 = *v11;
      while ( v12 != v11 )
      {
        v13 = (VIDMM_DEVICE **)(v12 - 7);
        v12 = (_QWORD *)*v12;
        a3 = *(_QWORD *)*v13;
        if ( (*(_DWORD *)(*(_QWORD *)(a3 + 536) + 12LL) || (**(_DWORD **)(a3 + 536) & 0x20000) != 0)
          && *(_DWORD *)(a3 + 360) )
        {
          return (unsigned int)-1071775486;
        }
        if ( *(_DWORD *)(a3 + 360) )
          VIDMM_GLOBAL::FaultOneAllocation(*((VIDMM_GLOBAL **)this + 1), v13);
      }
    }
  }
  v14 = (VIDMM_SEGMENT *)*((_QWORD *)this + 20);
  if ( v14 == (VIDMM_SEGMENT *)((char *)this + 160) )
    goto LABEL_23;
  do
  {
    v15 = (__int64)v14 - 408;
    v14 = *(VIDMM_SEGMENT **)v14;
    v16 = *(_QWORD *)(v15 + 88);
    if ( v16 && (*(_BYTE *)(v16 + 32) & 1) != 0 )
    {
      memset(&ApcState, 0, sizeof(ApcState));
      DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v15 + 296));
      KeStackAttachProcess(**(PRKPROCESS **)(*(_QWORD *)(v15 + 88) + 8LL), &ApcState);
      v17 = VIDMM_GLOBAL::Rotate(
              *((_QWORD *)this + 1),
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 88) + 8LL) + 24LL),
              *(_QWORD *)(*(_QWORD *)(v15 + 88) + 24LL),
              3u,
              0LL,
              0LL,
              0LL,
              0LL,
              1,
              v15);
      v6 = v17;
      if ( v17 < 0 )
      {
        if ( v17 == -1073741558 )
        {
          *(_DWORD *)(v15 + 68) |= 0x200000u;
          v6 = 0;
        }
        else
        {
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 270LL, 4LL, 3LL, v17, 0LL);
        }
      }
      *(_BYTE *)(*(_QWORD *)(v15 + 88) + 32LL) &= ~1u;
      KeUnstackDetachProcess(&ApcState);
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v15 + 296));
    }
  }
  while ( v14 != (VIDMM_SEGMENT *)((char *)this + 160) );
  if ( v6 >= 0 )
  {
LABEL_23:
    v18 = (VIDMM_SEGMENT *)*((_QWORD *)this + 22);
    while ( v18 != (VIDMM_SEGMENT *)((char *)this + 176) )
    {
      v19 = (__int64)v18 - 408;
      v18 = *(VIDMM_SEGMENT **)v18;
      if ( *(_DWORD *)(v19 + 360) )
      {
        LOBYTE(a3) = 1;
        LOBYTE(v23) = 0;
        (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD, int, _QWORD))(**(_QWORD **)(v19 + 120) + 48LL))(
          *(_QWORD *)(v19 + 120),
          v19,
          a3,
          0LL,
          v23,
          0LL);
      }
      else
      {
        v20 = *(_QWORD *)(v19 + 88);
        if ( v20 && (*(_BYTE *)(v20 + 32) & 1) != 0 )
        {
          memset(&v25, 0, sizeof(v25));
          DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v19 + 296));
          KeStackAttachProcess(**(PRKPROCESS **)(*(_QWORD *)(v19 + 88) + 8LL), &v25);
          v21 = VIDMM_GLOBAL::Rotate(
                  *((_QWORD *)this + 1),
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 88) + 8LL) + 24LL),
                  *(_QWORD *)(*(_QWORD *)(v19 + 88) + 24LL),
                  3u,
                  0LL,
                  0LL,
                  0LL,
                  0LL,
                  1,
                  v19);
          v6 = v21;
          if ( v21 < 0 )
          {
            if ( v21 == -1073741558 )
            {
              *(_DWORD *)(v19 + 68) |= 0x200000u;
              v6 = 0;
            }
            else
            {
              g_DxgMmsBugcheckExportIndex = 1;
              WdLogSingleEntry5(0LL, 270LL, 4LL, 3LL, v21, 0LL);
            }
          }
          *(_BYTE *)(*(_QWORD *)(v19 + 88) + 32LL) &= ~1u;
          KeUnstackDetachProcess(&v25);
          DXGFASTMUTEX::Release((struct _KTHREAD **)(v19 + 296));
        }
      }
    }
  }
  return (unsigned int)v6;
}
