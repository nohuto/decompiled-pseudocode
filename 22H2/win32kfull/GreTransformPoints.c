/*
 * XREFs of GreTransformPoints @ 0x1C0006CF4
 * Callers:
 *     zzzSetCaretPos @ 0x1C0005FC8 (zzzSetCaretPos.c)
 *     NtGdiTransformPoints @ 0x1C0006BA0 (NtGdiTransformPoints.c)
 *     xxxGetUpdateRect @ 0x1C008BB5C (xxxGetUpdateRect.c)
 *     xxxSoundSentry @ 0x1C01F6208 (xxxSoundSentry.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C022E08C (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     xxxScrollWindowEx @ 0x1C022EE20 (xxxScrollWindowEx.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0099E60 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreTransformPoints(HDC a1, struct _POINTL *a2, struct _POINTFIX *a3, int a4, int a5)
{
  unsigned __int64 v6; // rsi
  unsigned int v8; // edi
  int v9; // ebx
  int v10; // r8d
  int v11; // ebx
  unsigned int v12; // eax
  _QWORD v14[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v15[2]; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v16[32]; // [rsp+40h] [rbp-28h] BYREF

  v6 = a4;
  v8 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v15, a1);
  if ( v15[0] )
  {
    if ( (int)v6 <= 0 )
    {
      v8 = 1;
      goto LABEL_13;
    }
    v9 = a5 & 0x7FFFFFFF;
    v10 = ((a5 & 0x7FFFFFFF) != 0 ? 516 : 1026) | 0x80000000;
    if ( a5 < 0 )
      v10 = (a5 & 0x7FFFFFFF) != 0 ? 516 : 1026;
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v14, (struct XDCOBJ *)v15, v10);
    if ( v14[0] )
    {
      if ( v9 && (v11 = v9 - 1) != 0 )
      {
        if ( v11 != 1 )
          goto LABEL_13;
        v12 = EXFORMOBJ::bXform((EXFORMOBJ *)v14, a2, a3, v6);
      }
      else
      {
        v12 = EXFORMOBJ::bXform((EXFORMOBJ *)v14, a2, (struct _POINTL *)a3, v6);
      }
      v8 = v12;
    }
  }
LABEL_13:
  if ( v15[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v15);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v16);
  return v8;
}
