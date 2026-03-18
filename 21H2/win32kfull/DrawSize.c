/*
 * XREFs of DrawSize @ 0x1C0241420
 * Callers:
 *     xxxDrawWindowFrame @ 0x1C00638D4 (xxxDrawWindowFrame.c)
 *     xxxSBWndProc @ 0x1C02420E0 (xxxSBWndProc.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C006718C (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C006878C (GetDpiForSystem.c)
 *     GrePolyPatBlt @ 0x1C00C1D4C (GrePolyPatBlt.c)
 *     BitBltSysBmp @ 0x1C00C2FD4 (BitBltSysBmp.c)
 *     SizeBoxHwnd @ 0x1C025A230 (SizeBoxHwnd.c)
 */

__int64 __fastcall DrawSize(__int64 a1, HDC a2, unsigned int a3, int a4)
{
  __int64 v6; // rcx
  int v9; // edi
  int v10; // ebx
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // eax
  int v13; // edi
  int v14; // ebx
  unsigned int v15; // eax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // edi
  __int64 v20; // rbx
  int v21; // edi
  bool v22; // zf
  unsigned int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned int v26; // eax
  _DWORD v28[4]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v29; // [rsp+40h] [rbp-28h]

  v6 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v6 + 25) & 0x40) == 0 )
  {
    v9 = *(_DWORD *)(v6 + 96);
    v10 = *(_DWORD *)(v6 + 88);
    DpiForSystem = GetDpiForSystem(v6, (__int64)a2);
    DpiDependentMetric = GetDpiDependentMetric(0LL, DpiForSystem);
    v6 = *(_QWORD *)(a1 + 40);
    a3 = v9 - v10 - a3 - DpiDependentMetric;
  }
  v13 = *(_DWORD *)(v6 + 100);
  v14 = *(_DWORD *)(v6 + 92);
  v15 = GetDpiForSystem(v6, (__int64)a2);
  v16 = GetDpiDependentMetric(1LL, v15);
  v19 = v13 - v14;
  v20 = *(_QWORD *)(a1 + 40);
  v21 = v19 - a4 - v16;
  if ( (*(_WORD *)(v20 + 42) & 0x2FFF) == 0x29A )
    v22 = (*(_BYTE *)(v20 + 28) & 0x10) == 0;
  else
    v22 = SizeBoxHwnd(a1) == 0;
  if ( !v22 )
    return BitBltSysBmp((__int64)a2, a3, v21, (*(_BYTE *)(v20 + 25) & 0x40) != 0 ? 91 : 45, 1);
  v28[0] = a3;
  v28[1] = v21;
  v23 = GetDpiForSystem(v18, v17);
  v28[2] = GetDpiDependentMetric(0LL, v23);
  v26 = GetDpiForSystem(v25, v24);
  v28[3] = GetDpiDependentMetric(1LL, v26);
  v29 = *(_QWORD *)(gpsi + 4816LL);
  return GrePolyPatBlt(a2, 15728673, (struct _POLYPATBLT *)v28, 1);
}
