/*
 * XREFs of ?GreDeleteColorTransform@@YAHPEAUHDC__@@PEAX@Z @ 0x1C02B59F0
 * Callers:
 *     NtGdiDeleteColorTransform @ 0x1C02B6630 (NtGdiDeleteColorTransform.c)
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00B2890 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2938 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0COLORTRANSFORMOBJ@@QEAA@PEAX@Z @ 0x1C026C990 (--0COLORTRANSFORMOBJ@@QEAA@PEAX@Z.c)
 *     ?bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0293864 (-bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 */

__int64 __fastcall GreDeleteColorTransform(HDC a1, void *a2)
{
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v5; // rdx
  _BYTE v7[32]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v8; // [rsp+40h] [rbp-48h]
  _QWORD v9[8]; // [rsp+48h] [rbp-40h] BYREF

  v3 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v9, a1);
  if ( v9[0] )
  {
    v4 = *(_DWORD *)(v9[0] + 36LL);
    if ( (v4 & 0x1000) == 0 || (v4 & 0x4000) != 0 )
    {
      COLORTRANSFORMOBJ::COLORTRANSFORMOBJ((COLORTRANSFORMOBJ *)v7, a2);
      if ( v8 )
      {
        v3 = COLORTRANSFORMOBJ::bDelete((COLORTRANSFORMOBJ *)v7, (struct XDCOBJ *)v9, 0);
        if ( v8 )
          DEC_SHARE_REF_CNT(v8, v5);
      }
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v7);
    }
    else
    {
      EngSetLastError(0x57u);
    }
  }
  DCOBJ::~DCOBJ((DCOBJ *)v9);
  return v3;
}
