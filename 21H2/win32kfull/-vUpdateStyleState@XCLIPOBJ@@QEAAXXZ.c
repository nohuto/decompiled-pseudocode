/*
 * XREFs of ?vUpdateStyleState@XCLIPOBJ@@QEAAXXZ @ 0x1C02CFEBC
 * Callers:
 *     ?bEnumStartLine@XCLIPOBJ@@QEAAHK@Z @ 0x1C014B7A8 (-bEnumStartLine@XCLIPOBJ@@QEAAHK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall XCLIPOBJ::vUpdateStyleState(XCLIPOBJ *this)
{
  __int64 v1; // r9
  _DWORD *v3; // r8
  int v4; // r11d
  int v5; // r10d
  int v6; // ecx
  int v7; // r11d
  __int64 v8; // rax
  __int64 v9; // rcx
  bool v10; // cl
  _DWORD *v11; // r8
  unsigned int v12; // r10d
  int v13; // eax
  int v14; // edx
  int *v15; // r9
  int v16; // ecx
  int v17; // edx
  unsigned int v18; // edx
  __int64 v19; // rcx
  int v20; // eax
  int v21; // r8d

  v1 = *((_QWORD *)this + 18);
  v3 = *(_DWORD **)(v1 + 16);
  v4 = v3[1];
  v5 = *v3 - *(_DWORD *)(v1 + 4);
  if ( *(_DWORD *)(v1 + 4) - *v3 >= 0 )
    v5 = *(_DWORD *)(v1 + 4) - *v3;
  v6 = *(_DWORD *)(v1 + 8) - v4;
  v7 = v4 - *(_DWORD *)(v1 + 8);
  v8 = *(unsigned int *)(v1 + 196);
  if ( v6 >= 0 )
    v7 = v6;
  v9 = *(unsigned int *)(v1 + 192);
  if ( (_DWORD)v9 == (_DWORD)v8 )
    v10 = v5 >= v7;
  else
    v10 = (unsigned __int64)(unsigned int)v5 * v9 >= (unsigned __int64)(unsigned int)v7 * v8;
  *(_DWORD *)(v1 + 176) = *(_DWORD *)(v1 + 172);
  v11 = (_DWORD *)*((_QWORD *)this + 18);
  if ( v10 )
  {
    v12 = v11[48];
    v13 = v11[30];
    v14 = v11[28];
  }
  else
  {
    v12 = v11[49];
    v13 = v11[31];
    v14 = v11[29];
  }
  v15 = v11 + 44;
  v16 = v13 - v14;
  v17 = v14 - v13;
  if ( v16 >= 0 )
    v17 = v16;
  v18 = v17 + 1;
  if ( (v18 & 0xFFFF0000) != 0 )
  {
    if ( v11 != (_DWORD *)-176LL )
      *v15 = (*v15 + v12 * (unsigned __int64)v18) % (unsigned int)v11[45];
  }
  else
  {
    *v15 += v12 * v18;
    v19 = *((_QWORD *)this + 18);
    v20 = *(_DWORD *)(v19 + 176);
    v21 = *(_DWORD *)(v19 + 180);
    if ( v20 >= v21 )
      *(_DWORD *)(v19 + 176) = v20 % v21;
  }
}
