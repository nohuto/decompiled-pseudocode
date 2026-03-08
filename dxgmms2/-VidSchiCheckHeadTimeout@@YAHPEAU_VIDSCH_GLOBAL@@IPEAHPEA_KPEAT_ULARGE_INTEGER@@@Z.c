/*
 * XREFs of ?VidSchiCheckHeadTimeout@@YAHPEAU_VIDSCH_GLOBAL@@IPEAHPEA_KPEAT_ULARGE_INTEGER@@@Z @ 0x1C0008B70
 * Callers:
 *     VidSchiCheckFlipQueueTimeout @ 0x1C0007940 (VidSchiCheckFlipQueueTimeout.c)
 * Callees:
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C00067E0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00134D8 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     VidSchiSkipXboxVsyncTimeout @ 0x1C003C7CC (VidSchiSkipXboxVsyncTimeout.c)
 *     ?VidSchiObserveHwFlipQueueUpdates@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEA_N@Z @ 0x1C0049888 (-VidSchiObserveHwFlipQueueUpdates@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEA_N@Z.c)
 */

__int64 __fastcall VidSchiCheckHeadTimeout(
        KSPIN_LOCK *a1,
        unsigned int a2,
        int *a3,
        unsigned __int64 *a4,
        union _ULARGE_INTEGER *a5)
{
  unsigned int v6; // r12d
  unsigned __int64 *v7; // r15
  KSPIN_LOCK *v8; // r13
  KSPIN_LOCK v9; // rbx
  int i; // edi
  KSPIN_LOCK v11; // r14
  LARGE_INTEGER *v12; // r14
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER *v15; // r15
  LONG HighPart; // eax
  LARGE_INTEGER v17; // rax
  LARGE_INTEGER v18; // rbx
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // r8
  KSPIN_LOCK v21; // rcx
  bool v22; // zf
  _DWORD *QuadPart; // rcx
  unsigned int v24; // edx
  int v25; // eax
  char v26; // cl
  char v27; // r10
  LARGE_INTEGER v28; // r11
  unsigned int v29; // r9d
  LARGE_INTEGER v30; // r8
  int v31; // eax
  KSPIN_LOCK v32; // [rsp+20h] [rbp-41h]
  _QWORD v33[2]; // [rsp+28h] [rbp-39h] BYREF
  char v34; // [rsp+38h] [rbp-29h]
  char *v35; // [rsp+40h] [rbp-21h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-19h] BYREF
  __int16 v37; // [rsp+60h] [rbp-1h]
  __int64 v38; // [rsp+C0h] [rbp+5Fh] BYREF
  unsigned int v39; // [rsp+C8h] [rbp+67h]
  int *v40; // [rsp+D0h] [rbp+6Fh]
  unsigned __int64 *v41; // [rsp+D8h] [rbp+77h]

  v41 = a4;
  v40 = a3;
  v39 = a2;
  v6 = 0;
  v7 = a4;
  v37 = 0;
  v8 = &a1[a2];
  v9 = v8[400];
  v32 = v9;
  v35 = (char *)(a1 + 216);
  KeAcquireInStackQueuedSpinLock(a1 + 216, &LockHandle);
  LOBYTE(v37) = 1;
  v33[1] = v33;
  v33[0] = v33;
  v34 = 0;
  if ( *(int *)(v9 + 4) < 4 && !*((_BYTE *)a1 + 156) )
  {
    HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v33);
    AcquireSpinLock::Release((AcquireSpinLock *)&v35);
    return 0LL;
  }
  for ( i = -1; ; ++i )
  {
    if ( i == *((_DWORD *)a1 + 38) )
    {
LABEL_10:
      HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v33);
      if ( (_BYTE)v37 )
      {
        if ( HIBYTE(v37) )
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        else
          KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
      return v6;
    }
    v11 = v8[400];
    if ( i == -1 )
      v12 = *(LARGE_INTEGER **)(v11 + 32);
    else
      v12 = *(LARGE_INTEGER **)(v11 + 8LL * i + 40);
    if ( !v12 )
      goto LABEL_8;
    if ( (v12->LowPart & 1) != 0 )
      break;
    if ( *((_BYTE *)a1 + 59) )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    else
      PerformanceCounter.QuadPart = MEMORY[0xFFFFF78000000320];
    v12[1] = PerformanceCounter;
    if ( *(_DWORD *)(v9 + 3076) )
    {
      v15 = &v12[173 * (unsigned int)v12[8].HighPart];
      HighPart = v15[146].HighPart;
      if ( HighPart == 5 || HighPart == 15 )
      {
        v17 = v15[153];
        if ( v15[179].QuadPart > (unsigned __int64)v17.QuadPart )
          v17 = v15[179];
        v18 = v12[1];
        if ( v18.QuadPart <= (unsigned __int64)v17.QuadPart )
          goto LABEL_8;
        v19 = v18.QuadPart - v17.QuadPart;
        if ( *((_BYTE *)a1 + 59) )
        {
          v21 = a1[328];
          v38 = 0LL;
          if ( is_mul_ok(v19, 0x989680uLL) )
            v20 = v19 * (unsigned __int128)0x989680uLL / v21;
          else
            v20 = 10000000 * (v19 / v21) + 10000000 * (v19 % v21) / v21;
        }
        else
        {
          v20 = v19 * KeQueryTimeIncrement();
        }
        if ( v20 > 10000000 * (unsigned __int64)g_TdrConfig[1] )
        {
          v22 = *((_BYTE *)a1 + 59) == 0;
          LOBYTE(v38) = 0;
          if ( v22
            || (VidSchiObserveHwFlipQueueUpdates(
                  (struct HwQueueStagingList *)v33,
                  (struct _VIDSCH_GLOBAL *)a1,
                  v39,
                  (bool *)&v38),
                !(_BYTE)v38) )
          {
            if ( !(unsigned __int8)VidSchiSkipXboxVsyncTimeout(a1, v12, &v15[15]) )
            {
              v12->LowPart |= 1u;
              v12[2].QuadPart = v19;
              v12[3] = v15[153];
              QuadPart = (_DWORD *)v15[162].QuadPart;
              *v40 = i;
              if ( (v15[157].LowPart & 0x10) != 0 )
                v24 = ((unsigned __int16)*QuadPart | (unsigned __int16)(*QuadPart >> 10)) & 0x3FF;
              else
                v24 = (1 << *((_DWORD *)a1 + 38)) - 1;
              v22 = !_BitScanForward((unsigned int *)&v25, v24);
              v26 = -1;
              v12[4].QuadPart = 0LL;
              if ( !v22 )
                v26 = v25;
              LODWORD(v38) = 0;
              v27 = 0;
              if ( v24 )
              {
                v28 = v15[162];
                v29 = (8 * *(_DWORD *)(v28.QuadPart + 8) + 231) & 0xFFFFFFF8;
                while ( 1 )
                {
                  v30 = *(LARGE_INTEGER *)(v29 * v27 + v28.QuadPart + 24);
                  if ( v30.QuadPart )
                    break;
                  LODWORD(v38) = 0;
                  v31 = 1 << v26;
                  v26 = -1;
                  v24 &= ~v31;
                  v22 = !_BitScanForward((unsigned int *)&v31, v24);
                  if ( !v22 )
                    v26 = v31;
                  ++v27;
                  if ( !v24 )
                    goto LABEL_50;
                }
                v12[4] = v30;
              }
LABEL_50:
              *v41 = v12[4].QuadPart;
              if ( a5 )
                *a5 = (union _ULARGE_INTEGER)v12[3].QuadPart;
            }
          }
        }
      }
    }
    v6 = v12->LowPart & 1;
    if ( v6 )
      goto LABEL_10;
LABEL_8:
    v9 = v32;
    v7 = v41;
  }
  if ( a5 )
    *a5 = (union _ULARGE_INTEGER)v12[3].QuadPart;
  *v40 = i;
  *v7 = v12[4].QuadPart;
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v33);
  AcquireSpinLock::Release((AcquireSpinLock *)&v35);
  return 1LL;
}
