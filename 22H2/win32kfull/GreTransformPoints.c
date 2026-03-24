/*
 * XREFs of GreTransformPoints @ 0x1C00FA30C
 * Callers:
 *     zzzSetCaretPos @ 0x1C002B450 (zzzSetCaretPos.c)
 *     xxxScrollWindowEx @ 0x1C00677EC (xxxScrollWindowEx.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C00715B4 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     NtGdiTransformPoints @ 0x1C00FA1C0 (NtGdiTransformPoints.c)
 *     xxxGetUpdateRect @ 0x1C0117BC0 (xxxGetUpdateRect.c)
 *     xxxSoundSentry @ 0x1C015D2B0 (xxxSoundSentry.c)
 * Callees:
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C0169DAC (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C016A038 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016A21C (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreTransformPoints(HDC a1, struct _POINTL *a2, struct _POINTL *a3, int a4, int a5)
{
  unsigned int v6; // edi
  unsigned __int64 v7; // r14
  unsigned int v10; // ebx
  int v11; // r8d
  __int64 v12; // rax
  unsigned int v13; // esi
  unsigned int v14; // eax
  __int64 v16; // [rsp+20h] [rbp-40h] BYREF
  int v17; // [rsp+28h] [rbp-38h]
  int v18; // [rsp+2Ch] [rbp-34h]
  _QWORD v19[2]; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v20[32]; // [rsp+40h] [rbp-20h] BYREF

  v6 = 0;
  v7 = a4;
  v19[0] = 0LL;
  v19[1] = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v20);
  XDCOBJ::vLock((XDCOBJ *)v19, a1);
  if ( v19[0] )
  {
    if ( (int)v7 > 0 )
    {
      v10 = a5 & 0x7FFFFFFF;
      v17 = *(_DWORD *)(*(_QWORD *)(v19[0] + 976LL) + 208LL);
      v11 = ((a5 & 0x7FFFFFFF) != 0 ? 516 : 1026) | 0x80000000;
      if ( a5 < 0 )
        v11 = (a5 & 0x7FFFFFFF) != 0 ? 516 : 1026;
      v18 = *(_DWORD *)(*(_QWORD *)(v19[0] + 976LL) + 108LL) & 1;
      if ( (*(_DWORD *)(*(_QWORD *)(v19[0] + 976LL) + 340LL) & 0x1E000) != 0 || v11 != 516 )
      {
        v13 = ((a5 >> 31) & 0x80000000) + 0x80000000;
        if ( v13 )
          v11 = (a5 & 0x7FFFFFFF) != 0 ? 516 : 1026;
        EXFORMOBJ::vInit((EXFORMOBJ *)&v16, (struct XDCOBJ *)v19, v11, v13);
        v12 = v16;
      }
      else
      {
        v12 = v19[0] + 320LL;
        v16 = v19[0] + 320LL;
      }
      if ( v12 )
      {
        if ( v10 <= 1 )
        {
          v14 = EXFORMOBJ::bXform((EXFORMOBJ *)&v16, a2, a3, v7);
        }
        else
        {
          if ( v10 != 2 )
            goto LABEL_18;
          v14 = EXFORMOBJ::bXform((EXFORMOBJ *)&v16, a2, (struct _POINTFIX *)a3, v7);
        }
        v6 = v14;
      }
    }
    else
    {
      v6 = 1;
    }
  }
LABEL_18:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v19);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v20);
  return v6;
}
