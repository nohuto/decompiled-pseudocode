/*
 * XREFs of HalpAllocateAdapterCallbackV3 @ 0x14050CF30
 * Callers:
 *     HalpBuildScatterGatherList @ 0x14050D490 (HalpBuildScatterGatherList.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HalMapTransferEx @ 0x140512200 (HalMapTransferEx.c)
 */

__int64 __fastcall HalpAllocateAdapterCallbackV3(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // eax
  __int64 v8; // rdx
  __int64 v9; // rdi
  void (__fastcall *v10)(__int64, __int64, __int64, __int64); // rsi
  __int64 v11; // r15
  __int64 v12; // rcx
  __int64 v13; // r9
  int v15; // [rsp+90h] [rbp+18h] BYREF

  v5 = *(_DWORD *)(a4 + 40);
  v8 = *(_QWORD *)(a4 + 8);
  v9 = *(_QWORD *)(a4 + 160);
  v10 = *(void (__fastcall **)(__int64, __int64, __int64, __int64))(a4 + 120);
  v11 = *(_QWORD *)(a4 + 128);
  v12 = *(_QWORD *)(a4 + 144);
  *(_QWORD *)(a4 + 24) = a3;
  v13 = *(_QWORD *)(a4 + 32);
  v15 = v5;
  HalMapTransferEx(
    v12,
    v8,
    a3,
    v13 - *(_DWORD *)(v8 + 44) - *(_DWORD *)(v8 + 32),
    0,
    (__int64)&v15,
    *(_BYTE *)(a4 + 152),
    v9,
    *(_DWORD *)(a4 + 156),
    0LL,
    0LL);
  *(_QWORD *)(v9 + 8) = a4;
  if ( v10 )
    v10(a1, a2, v9, v11);
  return 3LL;
}
