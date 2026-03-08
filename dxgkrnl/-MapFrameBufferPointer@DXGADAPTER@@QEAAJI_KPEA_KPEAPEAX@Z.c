/*
 * XREFs of ?MapFrameBufferPointer@DXGADAPTER@@QEAAJI_KPEA_KPEAPEAX@Z @ 0x1C02B3684
 * Callers:
 *     DxgkMapFrameBufferPointerCB @ 0x1C0052360 (DxgkMapFrameBufferPointerCB.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGADAPTER::MapFrameBufferPointer(
        DXGADAPTER *this,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 *a4,
        void **a5)
{
  unsigned __int64 v6; // rsi
  __int64 v7; // rbx
  const wchar_t *v8; // r9
  __int64 v9; // rbp
  unsigned __int64 v10; // r9
  int v11; // esi
  __int64 v13; // [rsp+28h] [rbp-40h]
  __int64 v14; // [rsp+30h] [rbp-38h]
  void *v15; // [rsp+70h] [rbp+8h] BYREF
  __int64 v16; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int64 v17; // [rsp+88h] [rbp+20h] BYREF

  v16 = a3;
  v6 = *a4;
  if ( a2 >= *((_DWORD *)this + 72) )
  {
    v7 = a2;
    WdLogSingleEntry1(2LL, a2);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"MapFrameBufferPointer Invalid physical adapter index. Index=%u",
      v7,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( (a3 & 0xFFF) != 0 )
  {
    WdLogSingleEntry1(2LL, a3);
    v8 = L"MapFrameBufferPointer Size (%I64u) is not a multiple of PAGE_SIZE";
    v14 = 0LL;
    v13 = 0LL;
LABEL_11:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v8, v16, v13, v14, 0LL, 0LL);
    return 3221225485LL;
  }
  v9 = *((_QWORD *)this + 351) + 344LL * a2;
  v10 = *(_QWORD *)(v9 + 56);
  if ( v6 + a3 > v10 || v6 + a3 < v6 )
  {
    WdLogSingleEntry3(2LL, a3, v6, v10);
    v8 = L"MapFrameBufferPointer Size (%I64u) and Offset (%I64u) is invalid. Maximum frame buffer size is %I64u";
    v14 = *(_QWORD *)(v9 + 56);
    v13 = v6;
    goto LABEL_11;
  }
  v15 = 0LL;
  v17 = v6;
  v11 = MmMapViewInSystemSpaceEx(*(_QWORD *)(v9 + 64), &v15, &v16, &v17, 0LL);
  if ( v11 >= 0 )
  {
    *a5 = v15;
    *a4 -= v17;
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(3LL, v16);
    return (unsigned int)v11;
  }
}
