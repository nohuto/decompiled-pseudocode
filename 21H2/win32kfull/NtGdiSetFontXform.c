/*
 * XREFs of NtGdiSetFontXform @ 0x1C014D8A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C016A60C (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C016A898 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016AA7C (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiSetFontXform(HDC a1, unsigned int a2, unsigned int a3)
{
  unsigned int v5; // ebx
  int v6; // xmm6_4
  int v7; // xmm7_4
  __int64 v8; // rax
  int v10; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v11[2]; // [rsp+28h] [rbp-58h] BYREF
  _BYTE v12[40]; // [rsp+38h] [rbp-48h] BYREF
  int v13; // [rsp+A8h] [rbp+28h] BYREF

  v10 = 0;
  v13 = 0;
  v5 = 0;
  if ( bConvertDwordToFloat(a2, (float *)&v10) && bConvertDwordToFloat(a3, (float *)&v13) )
  {
    v6 = v13;
    v7 = v10;
    v11[0] = 0LL;
    v11[1] = 0LL;
    UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v12);
    XDCOBJ::vLock((XDCOBJ *)v11, a1);
    v8 = v11[0];
    if ( v11[0] )
    {
      *(_DWORD *)(v11[0] + 452LL) = v7;
      v5 = 1;
      *(_DWORD *)(v8 + 456) = v6;
      *(_DWORD *)(v11[0] + 252LL) |= 1u;
    }
    MDCOBJ::~MDCOBJ((MDCOBJ *)v11);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v12);
  }
  return v5;
}
