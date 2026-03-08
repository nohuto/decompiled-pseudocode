/*
 * XREFs of DxgkNotifyCursorSupportChangeCB @ 0x1C0335D00
 * Callers:
 *     <none>
 * Callees:
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C0001D60 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     DpiGetDxgAdapter @ 0x1C000E550 (DpiGetDxgAdapter.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DxgkNotifyCursorSupportChangeCB(__int64 *a1)
{
  __int64 DxgAdapter; // rax
  struct _LUID *v4; // rdx
  DXGADAPTER *v5; // rdi
  __int64 v6; // rax
  unsigned int v7; // ecx
  __int64 v8; // r8
  _OWORD v9[2]; // [rsp+50h] [rbp-28h] BYREF
  unsigned __int64 v10; // [rsp+80h] [rbp+8h] BYREF

  if ( KeGetCurrentIrql() )
  {
    WdLogSingleEntry1(1LL, 2225LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"KeGetCurrentIrql() == PASSIVE_LEVEL",
      2225LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 2229LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"pArgs(NULL) in DxgkNotifyCursorSupportChangeCB function",
      2229LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  DxgAdapter = DpiGetDxgAdapter(*a1);
  v5 = (DXGADAPTER *)DxgAdapter;
  if ( !DxgAdapter )
  {
    WdLogSingleEntry1(2LL, *a1);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hAdapter(0x%I64x) in DxgkNotifyCursorSupportChangeCB function.",
      *a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v6 = *(_QWORD *)(DxgAdapter + 2920);
  if ( !v6 )
  {
    WdLogSingleEntry1(2LL, v5);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Non-display adapter (0x%I64x) in DxgkNotifyCursorSupportChangeCB function",
      (__int64)v5,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v7 = *((_DWORD *)a1 + 2);
  if ( v7 >= *(_DWORD *)(v6 + 96) )
  {
    WdLogSingleEntry1(2LL, v7);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid VidPnSourceId : (0x%I64x) in DxgkNotifyCursorSupportChangeCB function.",
      *((unsigned int *)a1 + 2),
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v10 = 0LL;
  memset(v9, 0, sizeof(v9));
  LODWORD(v9[0]) = 13;
  DXGADAPTER::IsAdapterSessionized(v5, v4, 0LL, &v10);
  return SMgrGdiCallout(v9, v10, v8, 0LL, 0LL, 0LL);
}
