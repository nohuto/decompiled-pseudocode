/*
 * XREFs of DrawSize @ 0x1C0229DC8
 * Callers:
 *     xxxDrawWindowFrame @ 0x1C00C6FE0 (xxxDrawWindowFrame.c)
 *     xxxSBWndProc @ 0x1C022AA50 (xxxSBWndProc.c)
 * Callees:
 *     GrePolyPatBlt @ 0x1C0029770 (GrePolyPatBlt.c)
 *     BitBltSysBmp @ 0x1C009A400 (BitBltSysBmp.c)
 *     GetDpiForSystem @ 0x1C00EDB80 (GetDpiForSystem.c)
 *     GetDpiDependentMetric @ 0x1C00F0DA0 (GetDpiDependentMetric.c)
 *     SizeBoxHwnd @ 0x1C024B7D0 (SizeBoxHwnd.c)
 */

__int64 __fastcall DrawSize(__int64 a1, HDC a2, unsigned int a3, int a4)
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
  __int64 v17; // rcx
  int v18; // edi
  __int64 v19; // rbx
  int v20; // edi
  bool v21; // zf
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  int v26; // [rsp+20h] [rbp-48h]
  _DWORD v27[4]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v28; // [rsp+40h] [rbp-28h]

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
  v18 = v13 - v14;
  v19 = *(_QWORD *)(a1 + 40);
  v20 = v18 - a4 - DpiDependentMetric;
  if ( (*(_WORD *)(v19 + 42) & 0x2FFF) == 0x29A )
    v21 = (*(_BYTE *)(v19 + 28) & 0x10) == 0;
  else
    v21 = SizeBoxHwnd(a1) == 0;
  if ( !v21 )
    return BitBltSysBmp(a2, a3, v20, (*(_BYTE *)(v19 + 25) & 0x40) != 0 ? 91 : 45, 1);
  v27[0] = a3;
  v27[1] = v20;
  v22 = GetDpiForSystem(v17);
  v27[2] = GetDpiDependentMetric(0, v22);
  v24 = GetDpiForSystem(v23);
  v27[3] = GetDpiDependentMetric(1, v24);
  v28 = *(_QWORD *)(gpsi + 4816LL);
  return GrePolyPatBlt(a2, 0xF00021u, (struct _POLYPATBLT *)v27, 1u, v26);
}
