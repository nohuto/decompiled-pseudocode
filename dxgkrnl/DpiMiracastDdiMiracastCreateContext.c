/*
 * XREFs of DpiMiracastDdiMiracastCreateContext @ 0x1C039A2E4
 * Callers:
 *     DxgkMiracastStartMiracastSession @ 0x1C00615C4 (DxgkMiracastStartMiracastSession.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x1C0053D58 (McTemplateK0pxqt_EtwWriteTransfer.c)
 */

__int64 __fastcall DpiMiracastDdiMiracastCreateContext(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  _QWORD *v4; // rbx
  unsigned int v9; // eax
  __int64 v10; // r8
  unsigned int v11; // edi
  __int64 v13; // [rsp+28h] [rbp-20h]
  int v14; // [rsp+28h] [rbp-20h]
  __int64 v15; // [rsp+30h] [rbp-18h]
  int v16; // [rsp+30h] [rbp-18h]

  v4 = (_QWORD *)(a1 + 48);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
  {
    v16 = 0;
    v14 = -1;
    McTemplateK0pxqt_EtwWriteTransfer(a1, &EventEnterDxgkDdiMiracastCreateContext, (__int64)a3, *v4, 0LL, v14, v16);
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *, _DWORD *))(a1 + 3208))(*v4, a2, a3, a4);
  v11 = v9;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
  {
    LODWORD(v15) = v9;
    LODWORD(v13) = *a4;
    McTemplateK0pxqt_EtwWriteTransfer(*a3, &EventLeaveDxgkDdiMiracastCreateContext, v10, *v4, *a3, v13, v15);
  }
  return v11;
}
