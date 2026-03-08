/*
 * XREFs of ?Init@VIDMM_MEMORY_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C00BA480
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002360 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?SysMmAllocateLogicalMemory@@YAJPEAUSYSMM_ADAPTER@@_KPEBXPEAPEAX@Z @ 0x1C00023F0 (-SysMmAllocateLogicalMemory@@YAJPEAUSYSMM_ADAPTER@@_KPEBXPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     ??0VIDMM_CPU_HOST_APERTURE@@QEAA@XZ @ 0x1C0032F9C (--0VIDMM_CPU_HOST_APERTURE@@QEAA@XZ.c)
 *     ?BlockRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1C0033264 (-BlockRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 *     ?Init@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAVVIDMM_MEMORY_SEGMENT@@_KI@Z @ 0x1C00334D4 (-Init@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAVVIDMM_MEMORY_SEGMENT@@_KI@Z.c)
 *     ?Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C00BA7D0 (-Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::Init(VIDMM_MEMORY_SEGMENT *this, void (*a2)(void *), union _LARGE_INTEGER *a3)
{
  __int64 v3; // rdi
  __int64 v6; // r8
  int v7; // edx
  __int64 v8; // r8
  char v9; // al
  int v10; // edx
  bool v11; // zf
  int v12; // ebp
  __int64 result; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  VIDMM_CPU_HOST_APERTURE *v16; // rax
  VIDMM_CPU_HOST_APERTURE *v17; // rax
  __int64 v18; // rcx
  int v19; // eax
  unsigned int v20; // esi
  __int64 v21; // rcx
  int v22; // ecx
  int v23; // edx
  __int64 v24; // r8
  char v25; // cl
  unsigned __int64 v26; // rsi
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rdi
  int v31; // edi
  unsigned int v32; // esi
  VIDMM_CPU_HOST_APERTURE *v33; // rcx
  __int128 SystemInformation; // [rsp+50h] [rbp-48h] BYREF
  __int128 v35; // [rsp+60h] [rbp-38h]

  v3 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v14 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v14 + 24) = *((unsigned int *)this + 4);
    *(_QWORD *)(v14 + 32) = this;
  }
  v6 = *((_QWORD *)this + 1);
  if ( *(_DWORD *)(v6 + 32) < 0x9006u )
    *((_DWORD *)this + 20) &= ~0x10u;
  v7 = *((_DWORD *)this + 20);
  v8 = v6 + 24;
  if ( (v7 & 0x10) != 0 || (v9 = 0, (*(_DWORD *)(*(_QWORD *)v8 + 436LL) & 8) != 0) )
    v9 = 1;
  v10 = v7 | 0x10;
  *((_BYTE *)this + 474) = v9;
  *((_DWORD *)this + 20) = v10;
  if ( (v10 & 0x40) == 0 )
    goto LABEL_8;
  if ( *((_QWORD *)this + 8) > (unsigned __int64)(unsigned int)(qword_1C00765A8 - 0x800000) )
  {
    WdLogSingleEntry1(1LL, 278LL);
    DxgkLogInternalTriageEvent(v15, 0x40000LL);
    return 3221225473LL;
  }
  result = SysMmAllocateLogicalMemory(
             *(struct SYSMM_ADAPTER **)(*(_QWORD *)v8 + 224LL),
             *((_QWORD *)this + 6),
             this,
             (void **)this + 60);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)(*((_QWORD *)this + 1) + 7048LL) += *((_QWORD *)this + 6);
LABEL_8:
    v11 = (*((_DWORD *)this + 20) & 0x2000) == 0;
    *((_QWORD *)this + 26) = *((_QWORD *)this + 6);
    if ( !v11 )
    {
      v16 = (VIDMM_CPU_HOST_APERTURE *)operator new(72LL, 0x35346956u, 256LL);
      if ( v16 )
        v17 = VIDMM_CPU_HOST_APERTURE::VIDMM_CPU_HOST_APERTURE(v16);
      else
        v17 = 0LL;
      *((_QWORD *)this + 63) = v17;
      if ( !v17 )
      {
        _InterlockedIncrement(&dword_1C00768A4);
        WdLogSingleEntry1(6LL, 317LL);
        DxgkLogInternalTriageEvent(v18, 262145LL);
        return 3221225495LL;
      }
      v19 = VIDMM_CPU_HOST_APERTURE::Init(v17, this, *((_QWORD *)this + 4), *((_DWORD *)this + 10));
      v20 = v19;
      if ( v19 < 0 )
      {
        WdLogSingleEntry1(1LL, v19);
        DxgkLogInternalTriageEvent(v21, 0x40000LL);
        return v20;
      }
    }
    v12 = VIDMM_SEGMENT::Init(this, a2, 0LL);
    if ( v12 < 0 )
      goto LABEL_11;
    if ( (*((_DWORD *)this + 20) & 0x2000) == 0 )
      goto LABEL_11;
    if ( !*((_DWORD *)this + 22) )
      goto LABEL_11;
    v22 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 436LL);
    if ( (v22 & 0x8000) == 0 )
      goto LABEL_11;
    if ( (v22 & 0x10000) == 0 )
      goto LABEL_11;
    SystemInformation = 0LL;
    v35 = 0LL;
    if ( ZwQuerySystemInformation(MaxSystemInfoClass|SystemTimeAdjustmentInformation, &SystemInformation, 0x20u, 0LL) < 0 )
      goto LABEL_11;
    if ( DWORD2(v35) != 1 )
    {
      if ( DWORD2(v35) == 2 )
      {
LABEL_33:
        v23 = 4;
LABEL_35:
        v24 = *((unsigned int *)this + 94);
        v25 = 12;
        if ( v24 != 4096 )
          v25 = 16;
        v26 = (__int64)SystemInformation >> v25;
        v27 = (unsigned int)(v35 * HIDWORD(SystemInformation) * v23);
        LOBYTE(v3) = ((v24 - 1) & v27) != 0;
        v28 = (v27 >> v25) - 1 + ((__int64)SystemInformation >> v25) + v3;
        v29 = *((__int64 *)this + 4) >> v25;
        v30 = v29 + (unsigned int)(*((_DWORD *)this + 10) - 1);
        if ( v29 > (__int64)SystemInformation >> v25 )
          v26 = *((__int64 *)this + 4) >> v25;
        if ( v30 >= v28 )
          v30 = v28;
        if ( v26 <= v30 )
        {
          v31 = v30 - v26;
          v32 = v26 - v29;
          WdLogSingleEntry2(4LL, v32, (unsigned int)(v31 + 1));
          v33 = (VIDMM_CPU_HOST_APERTURE *)*((_QWORD *)this + 63);
          *((_DWORD *)this + 23) = v32;
          *((_DWORD *)this + 24) = v32 + v31;
          v12 = VIDMM_CPU_HOST_APERTURE::BlockRange(v33, (VIDMM_MEMORY_SEGMENT *)((char *)this + 92));
        }
        goto LABEL_11;
      }
      if ( DWORD2(v35) != 3 )
      {
        if ( DWORD2(v35) != 4 )
        {
LABEL_11:
          *((_BYTE *)this + 473) = 1;
          WdLogSingleEntry0(4LL);
          WdLogSingleEntry4(
            4LL,
            *((_QWORD *)this + 6),
            *((int *)this + 7),
            *((unsigned int *)this + 6),
            *((unsigned int *)this + 4));
          return (unsigned int)v12;
        }
        goto LABEL_33;
      }
    }
    v23 = 3;
    goto LABEL_35;
  }
  return result;
}
