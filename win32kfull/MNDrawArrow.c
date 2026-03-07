__int64 __fastcall MNDrawArrow(HDC a1, __int64 **a2, int a3)
{
  const struct tagWND *v6; // r13
  __int64 result; // rax
  HDC DCEx; // rbp
  __int64 v9; // rcx
  int DpiForSystem; // eax
  LONG v11; // esi
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
  int v23; // eax
  char *OemBitmapInfoForDpi; // rax
  int v25; // ecx
  struct tagRECT v26; // [rsp+30h] [rbp-38h] BYREF

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
      DpiForSystem = GetDpiForSystem(v9);
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
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**a2 + 40) + 40LL) + 24LL) )
    {
      v23 = GetDpiForSystem(v21);
      OemBitmapInfoForDpi = GetOemBitmapInfoForDpi(65LL, v23);
      v26.top = v13;
      v26.left = v11;
      v25 = *((__int16 *)OemBitmapInfoForDpi + 2);
      LODWORD(OemBitmapInfoForDpi) = *((__int16 *)OemBitmapInfoForDpi + 3);
      v26.right = v11 + v25;
      v26.bottom = v13 + (_DWORD)OemBitmapInfoForDpi;
      result = DrawFrameControl(DCEx, &v26, 2, v20 | 0x800u);
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
