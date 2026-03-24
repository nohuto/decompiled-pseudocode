/*
 * XREFs of GreExtTextOutRect @ 0x1C00AA21C
 * Callers:
 *     NtGdiExtTextOutW @ 0x1C00AAAA0 (NtGdiExtTextOutW.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008E9B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00ACCE0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00ACD0C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C00B2C64 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C00B4620 (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x1C00D5DD0 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C016A60C (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C016A898 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016AA7C (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreExtTextOutRect(HDC a1, struct tagRECT *a2)
{
  unsigned int v2; // edi
  unsigned int v5; // eax
  __int64 v7; // [rsp+28h] [rbp-49h] BYREF
  int v8; // [rsp+30h] [rbp-41h]
  int v9; // [rsp+34h] [rbp-3Dh]
  _BYTE v10[32]; // [rsp+38h] [rbp-39h] BYREF
  __int128 v11; // [rsp+58h] [rbp-19h] BYREF
  __int64 v12; // [rsp+68h] [rbp-9h]
  int v13; // [rsp+70h] [rbp-1h]
  _QWORD v14[2]; // [rsp+78h] [rbp+7h] BYREF
  _BYTE v15[40]; // [rsp+88h] [rbp+17h] BYREF
  __int64 v16; // [rsp+B0h] [rbp+3Fh]
  __int64 v17; // [rsp+B8h] [rbp+47h]
  __int64 v18; // [rsp+C0h] [rbp+4Fh]

  v2 = 0;
  v7 = 0LL;
  v8 = 0;
  v9 = 0;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v10);
  XDCOBJ::vLock((XDCOBJ *)&v7, a1);
  if ( v7 && (*(_DWORD *)(v7 + 36) & 0x10000) == 0 )
  {
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v14);
    v12 = 0LL;
    v13 = 0;
    v11 = 0LL;
    DEVLOCKOBJ_bPrepareTrgDcoWrap((DEVLOCKOBJ *)&v11);
    v18 = 0LL;
    v17 = 0LL;
    v16 = 0LL;
    if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v11, (struct XDCOBJ *)&v7, 0) )
      v5 = ExtTextOutRect((struct XDCOBJ *)&v7, a2);
    else
      v5 = XDCOBJ::bFullScreen((XDCOBJ *)&v7);
    v2 = v5;
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v11);
    if ( v14[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v14);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v15);
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)&v7);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v10);
  return v2;
}
