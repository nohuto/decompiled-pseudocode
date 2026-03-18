/*
 * XREFs of MNDrawArrow @ 0x1C0247A88
 * Callers:
 *     xxxMNSetTop @ 0x1C0233C0C (xxxMNSetTop.c)
 *     xxxMNDrawFullNC @ 0x1C0247E7C (xxxMNDrawFullNC.c)
 *     xxxMNInvertItem @ 0x1C0248188 (xxxMNInvertItem.c)
 * Callees:
 *     GetDpiForSystem @ 0x1C006878C (GetDpiForSystem.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEBUtagWND@@@Z @ 0x1C00BD238 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEBUtagWND@@@Z.c)
 *     DrawFrameControl @ 0x1C00BF6FC (DrawFrameControl.c)
 *     BitBltSysBmp @ 0x1C00C2FD4 (BitBltSysBmp.c)
 *     GetOemBitmapInfoForDpi @ 0x1C00C3124 (GetOemBitmapInfoForDpi.c)
 */

__int64 __fastcall MNDrawArrow(HDC a1, __int64 **a2, int a3)
{
  const struct tagWND *v6; // r13
  __int64 result; // rax
  HDC DCEx; // rbp
  __int64 v9; // rcx
  int DpiForSystem; // eax
  unsigned int v11; // esi
  int v12; // r8d
  LONG v13; // edi
  int v14; // r9d
  int v15; // r10d
  __int64 v16; // rax
  int v17; // edi
  int v18; // ebx
  const struct tagDPIMETRICS *DPIMETRICS; // rax
  int v20; // ebx
  __int64 v21; // rcx
  unsigned int v22; // r12d
  __int64 v23; // rdx
  int v24; // eax
  char *OemBitmapInfoForDpi; // rax
  int v26; // ecx
  struct tagRECT v27; // [rsp+30h] [rbp-38h] BYREF

  v6 = *(const struct tagWND **)(**a2 + 16);
  result = *(_QWORD *)(**a2 + 40);
  if ( (*(_DWORD *)(result + 124) & 3) != 0 )
  {
    if ( a1 )
      DCEx = a1;
    else
      DCEx = (HDC)_GetDCEx(v6, 0LL, 66561LL);
    v9 = *(_QWORD *)(*(_QWORD *)(**a2 + 40) + 40LL);
    if ( *(int *)(v9 + 40) < 0 )
    {
      v11 = 7;
    }
    else
    {
      DpiForSystem = GetDpiForSystem(v9, (__int64)a2);
      v11 = *((__int16 *)GetOemBitmapInfoForDpi(63LL, DpiForSystem) + 2) + 3;
    }
    if ( a3 == -3 )
    {
      v12 = 65;
      v13 = 3;
      v14 = 2;
      v15 = 8;
    }
    else
    {
      v16 = *((_QWORD *)v6 + 5);
      v17 = *(_DWORD *)(v16 + 100);
      v18 = *(_DWORD *)(v16 + 92);
      DPIMETRICS = GetDPIMETRICS(v6);
      v12 = 68;
      v14 = 3;
      v15 = 16;
      v13 = v17 - *((_DWORD *)DPIMETRICS + 7) - v18 - 3;
    }
    v20 = v15 | 0x100;
    v21 = **a2;
    v22 = v12 + 2;
    if ( (*(_DWORD *)(*(_QWORD *)(v21 + 40) + 124LL) & 3) != v14 )
    {
      v20 = v15;
      v22 = v12;
    }
    v23 = *(_QWORD *)(*(_QWORD *)(**a2 + 40) + 40LL);
    if ( *(_QWORD *)(v23 + 24) )
    {
      v24 = GetDpiForSystem(v21, v23);
      OemBitmapInfoForDpi = GetOemBitmapInfoForDpi(65LL, v24);
      v27.top = v13;
      v27.left = v11;
      v26 = *((__int16 *)OemBitmapInfoForDpi + 2);
      LODWORD(OemBitmapInfoForDpi) = *((__int16 *)OemBitmapInfoForDpi + 3);
      v27.right = v11 + v26;
      v27.bottom = v13 + (_DWORD)OemBitmapInfoForDpi;
      result = DrawFrameControl(DCEx, &v27, 2, v20 | 0x800u);
    }
    else
    {
      BitBltSysBmp((__int64)DCEx, v11, v13, v22, 1);
      result = BitBltSysBmp((__int64)DCEx, v11, v13, v22, 1);
    }
    if ( !a1 )
      return _ReleaseDC(DCEx);
  }
  return result;
}
