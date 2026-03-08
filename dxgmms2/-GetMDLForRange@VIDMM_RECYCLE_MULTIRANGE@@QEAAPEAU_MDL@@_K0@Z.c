/*
 * XREFs of ?GetMDLForRange@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@_K0@Z @ 0x1C00F5E30
 * Callers:
 *     ?GetMDLForRange@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAU_MDL@@PEAX_K1@Z @ 0x1C00F5DC0 (-GetMDLForRange@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAU_MDL@@PEAX_K1@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     ?CopyPfnArray@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAXPEA_K_K1@Z @ 0x1C0096624 (-CopyPfnArray@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAXPEA_K_K1@Z.c)
 */

struct _MDL *__fastcall VIDMM_RECYCLE_MULTIRANGE::GetMDLForRange(
        VIDMM_RECYCLE_MULTIRANGE *this,
        __int64 a2,
        unsigned __int64 a3)
{
  void *v7; // rcx
  unsigned __int64 *v8; // rdi
  __int64 v9; // r15
  __int64 Pool2; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx

  if ( *((_DWORD *)this + 54) != 4 )
    return 0LL;
  v7 = (void *)*((_QWORD *)this + 13);
  v8 = (unsigned __int64 *)((char *)this + 120);
  if ( !v7 )
  {
LABEL_9:
    v9 = 8 * (a3 >> 12) + 48;
    Pool2 = ExAllocatePool2(64LL, v9, 892561750LL);
    *((_QWORD *)this + 13) = Pool2;
    if ( !Pool2 )
    {
      _InterlockedIncrement(&dword_1C0076864);
      WdLogSingleEntry1(6LL, 4348LL);
      DxgkLogInternalTriageEvent(v11, 262145LL);
      return 0LL;
    }
    *(_DWORD *)(Pool2 + 40) = a3;
    *(_WORD *)(*((_QWORD *)this + 13) + 8LL) = v9;
    *(_QWORD *)(*((_QWORD *)this + 13) + 16LL) = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL)
                                                                         + 8LL)
                                                             + 8LL);
    goto LABEL_12;
  }
  if ( *((_QWORD *)this + 14) == a2 )
  {
    if ( *v8 == a3 )
      return (struct _MDL *)v7;
    goto LABEL_8;
  }
  if ( *v8 != a3 )
  {
LABEL_8:
    ExFreePoolWithTag(v7, 0);
    goto LABEL_9;
  }
LABEL_12:
  v12 = *((_QWORD *)this + 13);
  v13 = a2 + *((_QWORD *)this + 6);
  *((_QWORD *)this + 14) = a2;
  *v8 = a3;
  *(_QWORD *)(v12 + 32) = v13;
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::CopyPfnArray(
    (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)(*((_QWORD *)this + 10) + 88LL),
    (unsigned __int64 *)(*((_QWORD *)this + 13) + 48LL),
    a2 + *((_QWORD *)this + 6),
    a2 + *((_QWORD *)this + 6) + a3);
  return (struct _MDL *)*((_QWORD *)this + 13);
}
