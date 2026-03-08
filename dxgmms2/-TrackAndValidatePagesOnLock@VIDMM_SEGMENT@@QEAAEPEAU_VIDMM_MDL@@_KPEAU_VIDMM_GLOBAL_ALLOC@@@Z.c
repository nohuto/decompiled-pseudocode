/*
 * XREFs of ?TrackAndValidatePagesOnLock@VIDMM_SEGMENT@@QEAAEPEAU_VIDMM_MDL@@_KPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0095780
 * Callers:
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0095330 (-VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 */

unsigned __int8 __fastcall VIDMM_SEGMENT::TrackAndValidatePagesOnLock(
        VIDMM_SEGMENT *this,
        struct _VIDMM_MDL *a2,
        __int64 a3,
        struct _VIDMM_GLOBAL_ALLOC *a4)
{
  _DWORD *v4; // rax
  __int64 v6; // rbx
  _DWORD *v7; // rdi
  unsigned __int64 v8; // r10
  __int64 v9; // rdx
  unsigned int v11; // ecx
  __int64 v12; // rcx

  v4 = (_DWORD *)*((_QWORD *)a2 + 1);
  v6 = 0LL;
  v7 = v4 + 12;
  v8 = (((v4[8] + v4[11]) & 0xFFF) + (unsigned __int64)(unsigned int)v4[10] + 4095) >> 12;
  if ( !v8 )
    return 1;
  while ( 1 )
  {
    v9 = *((_QWORD *)this + 31);
    if ( v9 )
    {
      *(_QWORD *)(v9 + 16LL * *((unsigned int *)this + 61)) = *(_QWORD *)&v7[2 * v6];
      *(_QWORD *)(*((_QWORD *)this + 31) + 16LL * (unsigned int)(*((_DWORD *)this + 61))++ + 8) = a4;
      v11 = *((_DWORD *)this + 61);
      if ( v11 >= *((_DWORD *)this + 60) )
        v11 = 0;
      *((_DWORD *)this + 61) = v11;
    }
    if ( *(_QWORD *)&v7[2 * v6] << 12 > *((_QWORD *)this + 15) )
      break;
    if ( ++v6 >= v8 )
      return 1;
  }
  WdLogSingleEntry2(1LL, v6, *(_QWORD *)&v7[2 * v6]);
  DxgkLogInternalTriageEvent(v12, 0x40000LL);
  return 0;
}
