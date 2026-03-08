/*
 * XREFs of ?vUpdateStyleState@XCLIPOBJ@@QEAAXXZ @ 0x1C02F64C0
 * Callers:
 *     ?bEnumStartLine@XCLIPOBJ@@QEAAHK@Z @ 0x1C02F56CC (-bEnumStartLine@XCLIPOBJ@@QEAAHK@Z.c)
 * Callees:
 *     RtlEnlargedUnsignedDivide @ 0x1C02F661C (RtlEnlargedUnsignedDivide.c)
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
  _DWORD *v11; // r9
  unsigned int v12; // r10d
  int v13; // eax
  int v14; // edx
  ULONG *v15; // r8
  __int64 v16; // r11
  int v17; // ecx
  int v18; // edx
  unsigned int v19; // edx
  __int64 v20; // rcx
  int v21; // eax
  int v22; // r8d

  v1 = *((_QWORD *)this + 18);
  v3 = *(_DWORD **)(v1 + 16);
  v4 = v3[1];
  v5 = *v3 - *(_DWORD *)(v1 + 4);
  if ( *(_DWORD *)(v1 + 4) - *v3 >= 0 )
    v5 = *(_DWORD *)(v1 + 4) - *v3;
  v6 = *(_DWORD *)(v1 + 8) - v4;
  v7 = v4 - *(_DWORD *)(v1 + 8);
  v8 = *(unsigned int *)(v1 + 192);
  if ( v6 >= 0 )
    v7 = v6;
  v9 = *(unsigned int *)(v1 + 196);
  if ( (_DWORD)v8 == (_DWORD)v9 )
    v10 = v5 >= v7;
  else
    v10 = (unsigned __int64)(unsigned int)v5 * v8 >= (unsigned __int64)(unsigned int)v7 * v9;
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
  v16 = (int)v11[44];
  v17 = v13 - v14;
  v18 = v14 - v13;
  if ( v17 >= 0 )
    v18 = v17;
  v19 = v18 + 1;
  if ( (v19 & 0xFFFF0000) != 0 )
  {
    RtlEnlargedUnsignedDivide((ULARGE_INTEGER)(v16 + v12 * (unsigned __int64)v19), v11[45], v15);
  }
  else
  {
    *v15 = v16 + v12 * v19;
    v20 = *((_QWORD *)this + 18);
    v21 = *(_DWORD *)(v20 + 176);
    v22 = *(_DWORD *)(v20 + 180);
    if ( v21 >= v22 )
      *(_DWORD *)(v20 + 176) = v21 % v22;
  }
}
