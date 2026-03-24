/*
 * XREFs of ?CreateHistoryProxy@VIDMM_RECYCLE_BLOCK@@QEAAX_K@Z @ 0x1C0027D38
 * Callers:
 *     ??0VIDMM_RECYCLE_BLOCK@@QEAA@PEAVVIDMM_RECYCLE_HEAP@@@Z @ 0x1C0087C50 (--0VIDMM_RECYCLE_BLOCK@@QEAA@PEAVVIDMM_RECYCLE_HEAP@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001FC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0018D80 (memset.c)
 */

void __fastcall VIDMM_RECYCLE_BLOCK::CreateHistoryProxy(VIDMM_RECYCLE_BLOCK *this, __int64 a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rax
  SIZE_T v6; // rax
  _QWORD *v7; // rax

  v4 = operator new[](0x38uLL, 0x31316956u, PagedPool);
  if ( v4 )
  {
    *v4 = 0LL;
    v4[1] = 0LL;
    v4[3] = 0LL;
    v4[4] = 0LL;
    v4[6] = 0LL;
    *((_BYTE *)v4 + 16) = 0;
    *((_BYTE *)v4 + 40) = 0;
  }
  *((_QWORD *)this + 17) = v4;
  if ( !v4 )
  {
    _InterlockedIncrement(&dword_1C00506D4);
    v5 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v5 + 24) = 1045LL;
LABEL_5:
    WdLogEvent5_WdLowResource(v5);
    return;
  }
  v6 = 288 * a2;
  if ( !is_mul_ok(2 * a2, 0x90uLL) )
    v6 = -1LL;
  **((_QWORD **)this + 17) = operator new[](v6, 0x31316956u, PagedPool);
  v7 = (_QWORD *)*((_QWORD *)this + 17);
  if ( !*v7 )
  {
    if ( v7 )
      ExFreePoolWithTag(*((PVOID *)this + 17), 0);
    _InterlockedIncrement(&dword_1C00506D4);
    v5 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v5 + 24) = 1060LL;
    goto LABEL_5;
  }
  v7[6] = a2;
  *(_QWORD *)(*((_QWORD *)this + 17) + 24LL) = **((_QWORD **)this + 17) + 144 * a2;
  memset(**((void ***)this + 17), 0, 288 * a2);
}
