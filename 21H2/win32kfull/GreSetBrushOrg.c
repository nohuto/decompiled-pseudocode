/*
 * XREFs of GreSetBrushOrg @ 0x1C004562C
 * Callers:
 *     NtGdiSetBrushOrg @ 0x1C0043580 (NtGdiSetBrushOrg.c)
 *     _DrawIconEx @ 0x1C0043F94 (_DrawIconEx.c)
 *     xxxPaintRect @ 0x1C004555C (xxxPaintRect.c)
 *     MNEraseBackground @ 0x1C024C8FC (MNEraseBackground.c)
 *     xxxMNDrawFullNC @ 0x1C024CA44 (xxxMNDrawFullNC.c)
 * Callees:
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C016A60C (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C016A898 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016AA7C (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetBrushOrg(HDC a1, int a2, int a3, _QWORD *a4)
{
  __int64 v8; // rcx
  unsigned int v9; // ebx
  _DWORD *v10; // rcx
  int v11; // edx
  int v12; // edx
  int v13; // eax
  int v14; // eax
  __int64 v16; // [rsp+20h] [rbp-38h] BYREF
  int v17; // [rsp+28h] [rbp-30h]
  int v18; // [rsp+2Ch] [rbp-2Ch]
  _BYTE v19[40]; // [rsp+30h] [rbp-28h] BYREF

  v16 = 0LL;
  v17 = 0;
  v18 = 0;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v19);
  XDCOBJ::vLock((XDCOBJ *)&v16, a1);
  v8 = v16;
  if ( v16 )
  {
    if ( a4 )
      *a4 = *(_QWORD *)(v16 + 124);
    v9 = 1;
    *(_DWORD *)(*(_QWORD *)(v8 + 976) + 344LL) = a2;
    *(_DWORD *)(*(_QWORD *)(v16 + 976) + 348LL) = a3;
    v10 = (_DWORD *)v16;
    v11 = *(_DWORD *)(v16 + 40);
    *(_DWORD *)(v16 + 124) = a2;
    v10[32] = a3;
    v12 = v11 & 1;
    if ( v12 )
      v13 = v10[256];
    else
      v13 = v10[254];
    v10[300] = a2 + v13;
    if ( v12 )
      v14 = v10[257];
    else
      v14 = v10[255];
    v10[301] = a3 + v14;
  }
  else
  {
    EngSetLastError(6u);
    v9 = 0;
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)&v16);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v19);
  return v9;
}
