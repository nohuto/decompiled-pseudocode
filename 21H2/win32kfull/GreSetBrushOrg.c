/*
 * XREFs of GreSetBrushOrg @ 0x1C00C1C04
 * Callers:
 *     _DrawIconEx @ 0x1C00BDD48 (_DrawIconEx.c)
 *     xxxPaintRect @ 0x1C00C1B34 (xxxPaintRect.c)
 *     NtGdiSetBrushOrg @ 0x1C01483A0 (NtGdiSetBrushOrg.c)
 *     MNEraseBackground @ 0x1C0247D38 (MNEraseBackground.c)
 *     xxxMNDrawFullNC @ 0x1C0247E7C (xxxMNDrawFullNC.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetBrushOrg(HDC a1, int a2, int a3, _QWORD *a4)
{
  __int64 v7; // rcx
  unsigned int v8; // ebx
  _DWORD *v9; // rcx
  int v10; // edx
  int v11; // edx
  int v12; // eax
  int v13; // eax
  _QWORD v15[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v16[40]; // [rsp+30h] [rbp-28h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v15, a1);
  v7 = v15[0];
  if ( v15[0] )
  {
    if ( a4 )
      *a4 = *(_QWORD *)(v15[0] + 124LL);
    v8 = 1;
    *(_DWORD *)(*(_QWORD *)(v7 + 976) + 344LL) = a2;
    *(_DWORD *)(*(_QWORD *)(v15[0] + 976LL) + 348LL) = a3;
    v9 = (_DWORD *)v15[0];
    v10 = *(_DWORD *)(v15[0] + 40LL);
    *(_DWORD *)(v15[0] + 124LL) = a2;
    v9[32] = a3;
    v11 = v10 & 1;
    if ( v11 )
      v12 = v9[256];
    else
      v12 = v9[254];
    v9[298] = a2 + v12;
    if ( v11 )
      v13 = v9[257];
    else
      v13 = v9[255];
    v9[299] = a3 + v13;
  }
  else
  {
    EngSetLastError(6u);
    v8 = 0;
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v15);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v16);
  return v8;
}
