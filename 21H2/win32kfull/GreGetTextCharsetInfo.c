/*
 * XREFs of GreGetTextCharsetInfo @ 0x1C009B644
 * Callers:
 *     NtGdiGetTextCharsetInfo @ 0x1C009B5B0 (NtGdiGetTextCharsetInfo.c)
 *     ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x1C025E884 (-DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z.c)
 * Callees:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0093AC0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009AF04 (--1RFONTOBJ@@QEAA@XZ.c)
 *     GreGetCharSet @ 0x1C009B770 (GreGetCharSet.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016AA7C (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetTextCharsetInfo(HDC a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  _QWORD v9[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v10[40]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+68h] [rbp+10h] BYREF

  v4 = (unsigned int)GreGetCharSet(a1) >> 16;
  if ( a2 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v9, a1);
    if ( !v9[0] )
    {
      EngSetLastError(6u);
      v4 = 1;
      goto LABEL_15;
    }
    v11 = 0LL;
    if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v11, (struct XDCOBJ *)v9, 0, 2u) )
      GreAcquireSemaphore(*(_QWORD *)(v11 + 504));
    if ( v11 )
    {
      v5 = *(_QWORD *)(v11 + 120);
      if ( v5 )
      {
        v6 = *(_QWORD *)(v5 + 32);
        if ( *(_DWORD *)(v6 + 4) > 4u && (v7 = *(int *)(v6 + 196), (_DWORD)v7) )
        {
          *(_OWORD *)a2 = *(_OWORD *)(v7 + v6);
          *(_QWORD *)(a2 + 16) = *(_QWORD *)(v7 + v6 + 16);
        }
        else
        {
          *(_OWORD *)a2 = 0LL;
          *(_DWORD *)(a2 + 16) = 0;
          *(_DWORD *)(a2 + 20) = 0;
        }
        goto LABEL_13;
      }
      EngSetLastError(6u);
    }
    v4 = 1;
LABEL_13:
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v11);
LABEL_15:
    MDCOBJ::~MDCOBJ((MDCOBJ *)v9);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v10);
  }
  return v4;
}
