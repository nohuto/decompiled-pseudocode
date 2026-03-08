/*
 * XREFs of ?CheckUniqueGpuVaMapping@@YAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C00B3E88
 * Callers:
 *     ?AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAU_LIST_ENTRY@@2@Z @ 0x1C00B3DB0 (-AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAU_L.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall CheckUniqueGpuVaMapping(struct _VIDMM_GLOBAL_ALLOC *a1, struct VIDMM_MAPPED_VA_RANGE *a2)
{
  char *v4; // r12
  char *v5; // rdx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r15
  __int64 v8; // rbp
  char *v9; // rbx
  unsigned __int64 v10; // rcx
  unsigned int v11; // edi
  unsigned __int64 v13; // r8
  __int64 v14; // r11
  __int64 v15; // rcx
  char **v16; // rcx
  char **v17; // rax
  char **v18; // rcx
  char *v19; // rax

  KeEnterCriticalRegion();
  v4 = (char *)a1 + 368;
  ExAcquirePushLockExclusiveEx((char *)a1 + 368, 0LL);
  v5 = (char *)a1 + 168;
  v6 = *((_QWORD *)a2 + 10);
  v7 = *((_QWORD *)a2 + 9);
  v8 = v6 & 0x7FFFFFFFFFFFFFFFLL;
  v9 = (char *)*((_QWORD *)a1 + 21);
  v10 = v6 >> 63;
  v11 = 0;
  while ( v9 != v5 )
  {
    v13 = *((_QWORD *)v9 + 4);
    if ( v7 + *((_QWORD *)a2 + 13) - *((_QWORD *)a2 + 12) <= v13 )
    {
      if ( !(_BYTE)v10 )
        goto LABEL_4;
LABEL_13:
      v16 = (char **)*((_QWORD *)v9 + 1);
      v17 = (char **)((char *)a2 + 40);
      if ( *v16 == v9 )
      {
        *v17 = v9;
        *((_QWORD *)a2 + 6) = v16;
        *v16 = (char *)v17;
        *((_QWORD *)v9 + 1) = v17;
        goto LABEL_4;
      }
LABEL_17:
      __fastfail(3u);
    }
    v14 = *((_QWORD *)v9 + 7);
    if ( v7 < v13 + *((_QWORD *)v9 + 8) - v14 && v8 != (*((_QWORD *)v9 + 5) & 0x7FFFFFFFFFFFFFFFLL) )
    {
      WdLogSingleEntry4(1LL, v14, *((_QWORD *)v9 + 8), *((_QWORD *)v9 + 5), v8);
      DxgkLogInternalTriageEvent(v15, 0x40000LL);
      v11 = -1073741811;
      goto LABEL_4;
    }
    if ( (_BYTE)v10 && v7 < v13 )
      goto LABEL_13;
    v9 = *(char **)v9;
  }
  if ( (_BYTE)v10 )
  {
    v18 = (char **)*((_QWORD *)v5 + 1);
    v19 = (char *)a2 + 40;
    if ( *v18 == v5 )
    {
      *(_QWORD *)v19 = v5;
      *((_QWORD *)a2 + 6) = v18;
      *v18 = v19;
      *((_QWORD *)v5 + 1) = v19;
      goto LABEL_4;
    }
    goto LABEL_17;
  }
LABEL_4:
  ExReleasePushLockExclusiveEx(v4, 0LL);
  KeLeaveCriticalRegion();
  return v11;
}
