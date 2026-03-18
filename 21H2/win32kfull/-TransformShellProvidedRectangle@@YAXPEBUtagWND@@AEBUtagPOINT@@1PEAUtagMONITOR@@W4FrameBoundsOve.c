/*
 * XREFs of ?TransformShellProvidedRectangle@@YAXPEBUtagWND@@AEBUtagPOINT@@1PEAUtagMONITOR@@W4FrameBoundsOverlapInfo@@PEAUtagRECT@@@Z @ 0x1C020B360
 * Callers:
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C015B0AC (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?xxxGetArrangeRectFromShell@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x1C020CF7C (-xxxGetArrangeRectFromShell@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@.c)
 * Callees:
 *     ?ExtendRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@W4LegacyMarginsSource@@I@Z @ 0x1C00B29D0 (-ExtendRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@W4LegacyMarginsSource@@I@Z.c)
 */

__int64 TransformShellProvidedRectangle(struct tagWND *a1, int *a2, int *a3, ...)
{
  _DWORD *v3; // rdi
  int v5; // esi
  int v6; // ebp
  int v7; // r14d
  int v8; // r15d
  _DWORD *v9; // rax
  char v10; // r8
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  __int64 result; // rax
  int v15; // ecx
  int v16; // edx
  _DWORD v17[10]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v18; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  __int64 v20; // [rsp+80h] [rbp+28h]
  _DWORD *v21; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v18 = va_arg(va1, _QWORD);
  v20 = va_arg(va1, _QWORD);
  v21 = va_arg(va1, _DWORD *);
  v3 = v21;
  v5 = *a2;
  v6 = *a3;
  v7 = a2[1];
  v8 = a3[1];
  PhysicalToLogicalDPIRect(v21, v21, *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL), (__int64 *)va);
  v9 = WindowMargins::ExtendRect(v17, a1, v3);
  v10 = v20;
  *(_OWORD *)v3 = *(_OWORD *)v9;
  v11 = v3[2];
  v12 = *v3;
  v13 = v11 - *v3;
  if ( (v10 & 1) != 0 )
  {
    if ( v13 < v6 )
    {
      v11 = v12 + v6;
      v3[2] = v12 + v6;
    }
    if ( v13 >= v5 )
    {
      v11 = v12 + v5;
      v3[2] = v12 + v5;
    }
  }
  if ( (v10 & 4) != 0 )
  {
    if ( v13 < v6 )
      *v3 = v11 - v6;
    if ( v13 >= v5 )
      *v3 = v11 - v5;
  }
  result = (unsigned int)v3[3];
  v15 = v3[1];
  v16 = v3[3] - v15;
  if ( v16 < v8 )
  {
    if ( (v10 & 2) != 0 )
    {
      result = (unsigned int)(v15 + v8);
      v3[3] = result;
    }
    else
    {
      v15 = result - v8;
      v3[1] = result - v8;
    }
  }
  if ( v16 >= v7 )
  {
    if ( (v10 & 2) != 0 )
    {
      result = (unsigned int)(v15 + v7);
      v3[3] = result;
    }
    else
    {
      result = (unsigned int)(result - v7);
      v3[1] = result;
    }
  }
  return result;
}
