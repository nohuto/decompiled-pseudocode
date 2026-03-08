/*
 * XREFs of ?Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z @ 0x1C00AA04C
 * Callers:
 *     VidMmInitDevice @ 0x1C0011FD0 (VidMmInitDevice.c)
 *     ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C00A91E4 (-InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 *     ?InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C00C2214 (-InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002338 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C00023B8 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C00124D8 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     ?Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@_N@Z @ 0x1C00AA3AC (-Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@_N@Z.c)
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C00ABCF0 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 */

__int64 __fastcall VIDMM_DEVICE::Init(VIDMM_DEVICE *this, char a2, struct VIDMM_PROCESS *a3)
{
  __int64 v6; // rcx
  VIDMM_PROCESS *v7; // rcx
  int v8; // r15d
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int i; // r8d
  __int64 v12; // rcx
  _QWORD *v13; // rdx
  unsigned __int64 v14; // rbp
  __int64 v15; // rax
  bool v16; // cf
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rsi
  unsigned __int64 v20; // rbp
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rsi
  unsigned int v25; // esi
  __int64 v26; // r14
  __int64 result; // rax
  __int64 v28; // rax
  __int64 v29; // rbx
  unsigned __int64 v30; // rbp
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // [rsp+20h] [rbp-58h]
  int v41; // [rsp+20h] [rbp-58h]

  if ( g_IsInternalReleaseOrDbg )
  {
    v35 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v35 + 24) = this;
    *(_QWORD *)(v35 + 32) = *(_QWORD *)this;
  }
  if ( a3 )
  {
    v7 = a3;
  }
  else if ( *((_QWORD *)this + 3) )
  {
    if ( DXGPROCESS::GetCurrent() && (v6 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8)) != 0 )
      v7 = *(VIDMM_PROCESS **)(v6 + 8);
    else
      v7 = 0LL;
  }
  else
  {
    v7 = *(VIDMM_PROCESS **)(*(_QWORD *)this + 40384LL);
  }
  *((_QWORD *)this + 1) = v7;
  if ( !v7 )
  {
    WdLogSingleEntry1(1LL, 390LL);
    DxgkLogInternalTriageEvent(v36, 0x40000LL);
    return 3221225473LL;
  }
  if ( *((_QWORD *)this + 3) )
  {
    v8 = VIDMM_PROCESS::OpenAdapter(v7, *(struct VIDMM_GLOBAL **)this);
    if ( v8 < 0 )
    {
      _InterlockedAdd(&dword_1C00767A8, 1u);
      WdLogSingleEntry1(6LL, 406LL);
      DxgkLogInternalTriageEvent(v37, 262145LL);
      return (unsigned int)v8;
    }
    *((_BYTE *)this + 58) |= 1u;
    *((_QWORD *)this + 2) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL)
                                      + 8LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 240LL));
  }
  v9 = 56LL * *((unsigned int *)this + 16);
  if ( !is_mul_ok(*((unsigned int *)this + 16), 0x38uLL) )
    v9 = -1LL;
  v10 = operator new[](v9, 0x30326956u, 256LL);
  *((_QWORD *)this + 5) = v10;
  if ( !v10 )
  {
    _InterlockedAdd(&dword_1C00767AC, 1u);
    WdLogSingleEntry1(6LL, 423LL);
    v38 = 262145LL;
LABEL_61:
    DxgkLogInternalTriageEvent(v39, v38);
    return 3221225495LL;
  }
  for ( i = 0; i < *((_DWORD *)this + 16); *v13 = v13 )
  {
    v12 = 56LL * i++;
    v13 = (_QWORD *)(v12 + *((_QWORD *)this + 5) + 32LL);
    v13[1] = v13;
  }
  if ( !*((_QWORD *)this + 3) && a3 )
    goto LABEL_38;
  v14 = *((unsigned int *)this + 17);
  v15 = 176 * v14;
  if ( !is_mul_ok(v14, 0xB0uLL) )
    v15 = -1LL;
  v16 = __CFADD__(v15, 8LL);
  v17 = v15 + 8;
  if ( v16 )
    v17 = -1LL;
  v18 = operator new[](v17, 0x38346956u, 256LL);
  if ( v18 )
  {
    v19 = v18 + 8;
    *(_QWORD *)v18 = v14;
    `vector constructor iterator'(
      (char *)(v18 + 8),
      176LL,
      (unsigned int)v14,
      (void (__fastcall *)(char *))VIDMM_DEVICE_PAGING_QUEUE::VIDMM_DEVICE_PAGING_QUEUE);
  }
  else
  {
    v19 = 0LL;
  }
  *((_QWORD *)this + 10) = v19;
  if ( !v19 )
  {
    WdLogSingleEntry1(1LL, 448LL);
    goto LABEL_60;
  }
  v20 = *((unsigned int *)this + 17);
  v21 = 176 * v20;
  if ( !is_mul_ok(v20, 0xB0uLL) )
    v21 = -1LL;
  v16 = __CFADD__(v21, 8LL);
  v22 = v21 + 8;
  if ( v16 )
    v22 = -1LL;
  v23 = operator new[](v22, 0x38346956u, 256LL);
  if ( v23 )
  {
    v24 = v23 + 8;
    *(_QWORD *)v23 = v20;
    `vector constructor iterator'(
      (char *)(v23 + 8),
      176LL,
      (unsigned int)v20,
      (void (__fastcall *)(char *))VIDMM_DEVICE_PAGING_QUEUE::VIDMM_DEVICE_PAGING_QUEUE);
  }
  else
  {
    v24 = 0LL;
  }
  *((_QWORD *)this + 11) = v24;
  if ( !v24 )
  {
    WdLogSingleEntry1(1LL, 455LL);
    goto LABEL_60;
  }
  if ( (*(_DWORD *)(*((_QWORD *)this + 1) + 96LL) & 2) != 0 )
  {
    v30 = *((unsigned int *)this + 17);
    v31 = 176 * v30;
    if ( !is_mul_ok(v30, 0xB0uLL) )
      v31 = -1LL;
    v16 = __CFADD__(v31, 8LL);
    v32 = v31 + 8;
    if ( v16 )
      v32 = -1LL;
    v33 = operator new[](v32, 0x38346956u, 256LL);
    if ( v33 )
    {
      v34 = v33 + 8;
      *(_QWORD *)v33 = v30;
      `vector constructor iterator'(
        (char *)(v33 + 8),
        176LL,
        (unsigned int)v30,
        (void (__fastcall *)(char *))VIDMM_DEVICE_PAGING_QUEUE::VIDMM_DEVICE_PAGING_QUEUE);
    }
    else
    {
      v34 = 0LL;
    }
    *((_QWORD *)this + 12) = v34;
    if ( !v34 )
    {
      WdLogSingleEntry1(1LL, 471LL);
LABEL_60:
      v38 = 0x40000LL;
      goto LABEL_61;
    }
  }
  v25 = 0;
  if ( *((_DWORD *)this + 17) )
  {
    while ( 1 )
    {
      v26 = 176LL * v25;
      LOBYTE(v40) = a2;
      result = VIDMM_DEVICE_PAGING_QUEUE::Initialize(v26 + *((_QWORD *)this + 10), this, v25, 1LL, v40);
      if ( (int)result < 0 )
        break;
      LOBYTE(v41) = a2;
      result = VIDMM_DEVICE_PAGING_QUEUE::Initialize(v26 + *((_QWORD *)this + 11), this, v25, 2LL, v41);
      if ( (int)result < 0 )
        break;
      v28 = *((_QWORD *)this + 12);
      if ( v28 )
      {
        LOBYTE(v40) = a2;
        result = VIDMM_DEVICE_PAGING_QUEUE::Initialize(v28 + v26, this, v25, 3LL, v40);
        if ( (int)result < 0 )
          break;
      }
      if ( ++v25 >= *((_DWORD *)this + 17) )
        goto LABEL_38;
    }
  }
  else
  {
LABEL_38:
    v29 = MEMORY[0xFFFFF78000000320];
    *((_QWORD *)this + 29) = qword_1C0076508 + v29 * KeQueryTimeIncrement();
    return 0LL;
  }
  return result;
}
