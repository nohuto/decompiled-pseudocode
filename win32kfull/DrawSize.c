/*
 * XREFs of DrawSize @ 0x1C022CAE8
 * Callers:
 *     xxxDrawWindowFrame @ 0x1C00A64E4 (xxxDrawWindowFrame.c)
 *     xxxSBWndProc @ 0x1C022D770 (xxxSBWndProc.c)
 * Callees:
 *     GetDpiForSystem @ 0x1C0045E5C (GetDpiForSystem.c)
 *     GrePolyPatBlt @ 0x1C0088258 (GrePolyPatBlt.c)
 *     GetDpiDependentMetric @ 0x1C00A45B4 (GetDpiDependentMetric.c)
 *     BitBltSysBmp @ 0x1C00D04B0 (BitBltSysBmp.c)
 *     SizeBoxHwnd @ 0x1C024E490 (SizeBoxHwnd.c)
 */

__int64 __fastcall DrawSize(__int64 a1, HDC a2, int a3, int a4)
{
  __int64 v6; // rcx
  int v9; // edi
  int v10; // ebx
  int DpiForSystem; // eax
  __int64 v12; // rax
  int v13; // edi
  int v14; // ebx
  int v15; // eax
  int DpiDependentMetric; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // edi
  __int64 v21; // rbx
  int v22; // edi
  bool v23; // zf
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  int v28; // [rsp+20h] [rbp-48h]
  _DWORD v29[4]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v30; // [rsp+40h] [rbp-28h]

  v6 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v6 + 25) & 0x40) == 0 )
  {
    v9 = *(_DWORD *)(v6 + 96);
    v10 = *(_DWORD *)(v6 + 88);
    DpiForSystem = GetDpiForSystem(v6);
    a3 = v9 - v10 - a3 - GetDpiDependentMetric(0, DpiForSystem);
  }
  v12 = *(_QWORD *)(a1 + 40);
  v13 = *(_DWORD *)(v12 + 100);
  v14 = *(_DWORD *)(v12 + 92);
  v15 = GetDpiForSystem(v6);
  DpiDependentMetric = GetDpiDependentMetric(1, v15);
  v20 = v13 - v14;
  v21 = *(_QWORD *)(a1 + 40);
  v22 = v20 - a4 - DpiDependentMetric;
  if ( (*(_WORD *)(v21 + 42) & 0x2FFF) == 0x29A )
    v23 = (*(_BYTE *)(v21 + 28) & 0x10) == 0;
  else
    v23 = SizeBoxHwnd(a1, v17, v19) == 0;
  if ( !v23 )
    return BitBltSysBmp((__int64)a2, a3, v22, (*(_BYTE *)(v21 + 25) & 0x40) != 0 ? 91 : 45, 1);
  v29[0] = a3;
  v29[1] = v22;
  v24 = GetDpiForSystem(v18);
  v29[2] = GetDpiDependentMetric(0, v24);
  v26 = GetDpiForSystem(v25);
  v29[3] = GetDpiDependentMetric(1, v26);
  v30 = *(_QWORD *)(gpsi + 4816LL);
  return GrePolyPatBlt(a2, 0xF00021u, (struct _POLYPATBLT *)v29, 1u, v28);
}
