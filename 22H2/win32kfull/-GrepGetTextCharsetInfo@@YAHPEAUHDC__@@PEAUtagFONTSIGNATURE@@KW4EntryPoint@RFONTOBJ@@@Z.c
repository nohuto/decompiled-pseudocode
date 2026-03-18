/*
 * XREFs of ?GrepGetTextCharsetInfo@@YAHPEAUHDC__@@PEAUtagFONTSIGNATURE@@KW4EntryPoint@RFONTOBJ@@@Z @ 0x1C0076B44
 * Callers:
 *     NtGdiGetTextCharsetInfo @ 0x1C0076A70 (NtGdiGetTextCharsetInfo.c)
 *     GreGetTextCharsetInfo @ 0x1C028E514 (GreGetTextCharsetInfo.c)
 * Callees:
 *     GreGetCharSet @ 0x1C0076CB8 (GreGetCharSet.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C007F350 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C010CB90 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GrepGetTextCharsetInfo(HDC a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  _DWORD v13[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v14[2]; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v15[40]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v16; // [rsp+98h] [rbp+28h] BYREF

  v7 = (unsigned int)GreGetCharSet(a1) >> 16;
  if ( !a2 )
    return v7;
  DCOBJ::DCOBJ((DCOBJ *)v14, a1);
  if ( !v14[0] )
  {
    EngSetLastError(6u);
    v7 = 1;
    goto LABEL_15;
  }
  v8 = *(unsigned __int16 *)(v14[0] + 12LL);
  v16 = 0LL;
  v13[1] = v8;
  v13[0] = a4;
  if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v16, (struct XDCOBJ *)v14, 0, 2u, (const struct RFONTOBJ::Tag *)v13) )
    GreAcquireSemaphore(*(_QWORD *)(v16 + 504));
  if ( v16 )
  {
    v9 = *(_QWORD *)(v16 + 120);
    if ( v9 )
    {
      v10 = *(_QWORD *)(v9 + 32);
      if ( *(_DWORD *)(v10 + 4) > 4u && (v11 = *(int *)(v10 + 196), (_DWORD)v11) )
      {
        *(_OWORD *)a2 = *(_OWORD *)(v11 + v10);
        *(_QWORD *)(a2 + 16) = *(_QWORD *)(v11 + v10 + 16);
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
  v7 = 1;
LABEL_13:
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v16);
LABEL_15:
  if ( v14[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v14);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v15);
  return v7;
}
