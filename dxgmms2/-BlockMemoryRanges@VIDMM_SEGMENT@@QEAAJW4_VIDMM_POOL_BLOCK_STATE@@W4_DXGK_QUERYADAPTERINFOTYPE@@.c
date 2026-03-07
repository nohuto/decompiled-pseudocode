__int64 __fastcall VIDMM_SEGMENT::BlockMemoryRanges(
        __int64 a1,
        unsigned __int8 a2,
        int a3,
        unsigned int a4,
        unsigned __int64 *a5)
{
  unsigned int v5; // esi
  __int64 v7; // r12
  __int64 v9; // r15
  __int64 v10; // rax
  struct _DXGK_MEMORYRANGE *v11; // r14
  __int64 v12; // rcx
  __int64 v14; // rax
  int AdapterInfo; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  int v19; // eax
  _WORD v20[2]; // [rsp+58h] [rbp-1h] BYREF
  unsigned int v21; // [rsp+5Ch] [rbp+3h]
  struct _DXGK_MEMORYRANGE *v22; // [rsp+60h] [rbp+7h]
  struct _DXGKARG_QUERYADAPTERINFO v23; // [rsp+68h] [rbp+Fh] BYREF

  v5 = 0;
  v7 = a3;
  v9 = a2;
  if ( !a4 )
    return v5;
  v10 = 16LL * a4;
  if ( !is_mul_ok(a4, 0x10uLL) )
    v10 = -1LL;
  v11 = (struct _DXGK_MEMORYRANGE *)operator new[](v10, 0x30306956u, 256LL);
  if ( !v11 )
  {
    _InterlockedIncrement(&dword_1C00767A4);
    WdLogSingleEntry2(6LL, (unsigned int)v9, -1073741801LL);
    DxgkLogInternalTriageEvent(v12, 262145LL);
    return 3221225495LL;
  }
  v20[0] = *(_WORD *)(a1 + 16);
  v20[1] = *(_WORD *)(a1 + 380);
  *(_QWORD *)&v23.Type = 0LL;
  v23.pInputData = v20;
  v14 = *(_QWORD *)(a1 + 8);
  memset(&v23.InputDataSize, 0, 32);
  v21 = a4;
  v22 = v11;
  v23.InputDataSize = 16;
  v23.Type = v7;
  AdapterInfo = DXGADAPTER::DdiQueryAdapterInfo(
                  *(DXGADAPTER **)(v14 + 24),
                  (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)&v23);
  v5 = AdapterInfo;
  if ( AdapterInfo < 0 )
  {
    WdLogSingleEntry3(1LL, v7, AdapterInfo, 624LL);
LABEL_12:
    DxgkLogInternalTriageEvent(v16, 0x40000LL);
    goto LABEL_13;
  }
  v17 = VIDMM_SEGMENT::ValidateMemoryRanges((VIDMM_SEGMENT *)a1, a4, v11, a5);
  v5 = v17;
  if ( v17 < 0 )
  {
    WdLogSingleEntry3(1LL, v9, v17, 634LL);
    goto LABEL_12;
  }
  LOBYTE(v18) = v9;
  v19 = VIDMM_LINEAR_POOL::MarkMemoryBlocks(*(_QWORD *)(a1 + 152), v18, a4, v11);
  v5 = v19;
  if ( v19 < 0 )
  {
    WdLogSingleEntry3(1LL, v9, v19, 644LL);
    goto LABEL_12;
  }
LABEL_13:
  operator delete(v11);
  return v5;
}
