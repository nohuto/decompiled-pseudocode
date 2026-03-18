/*
 * XREFs of GrePolyTextOutW @ 0x1C00E3570
 * Callers:
 *     NtGdiPolyTextOutW @ 0x1C00E31B0 (NtGdiPolyTextOutW.c)
 * Callees:
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002C61C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C002CEF0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C0032FD0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003FD70 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C0041980 (--0DLODCOBJ@@QEAA@XZ.c)
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x1C00DBA70 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C015D588 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C015D85C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GrePolyTextOutW(HDC a1, unsigned __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rdi
  unsigned int v8; // r14d
  unsigned __int64 v9; // r15
  int **v10; // rsi
  unsigned int v11; // edi
  ULONG *v12; // rcx
  _QWORD v14[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v15[32]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v16; // [rsp+90h] [rbp-70h] BYREF
  __int64 v17; // [rsp+A0h] [rbp-60h]
  int v18; // [rsp+A8h] [rbp-58h]
  _QWORD v19[2]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v20[40]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v21; // [rsp+E8h] [rbp-18h]
  __int64 v22; // [rsp+F0h] [rbp-10h]
  __int64 v23; // [rsp+F8h] [rbp-8h]
  char v24; // [rsp+100h] [rbp+0h] BYREF

  v5 = a3;
  v14[0] = 0LL;
  v14[1] = 0LL;
  v8 = 1;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v15);
  XDCOBJ::vLock((XDCOBJ *)v14, a1);
  if ( !v14[0] || (*(_DWORD *)(v14[0] + 36LL) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v8 = 0;
  }
  else
  {
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v19);
    v17 = 0LL;
    v16 = 0LL;
    v18 = 0;
    DEVLOCKOBJ_bPrepareTrgDcoWrap((DEVLOCKOBJ *)&v16, 0LL);
    v23 = 0LL;
    v22 = 0LL;
    v21 = 0LL;
    if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v16, (struct XDCOBJ *)v14, 0) )
    {
      v9 = a2 + 56 * v5;
      if ( a2 < v9 )
      {
        v10 = (int **)(a2 + 48);
        while ( 1 )
        {
          v11 = *((_DWORD *)v10 - 10);
          v12 = (ULONG *)&v24;
          if ( ((30 * v11 + 7) & 0xFFFFFFF8) > 0xC0 )
            v12 = 0LL;
          if ( !GreExtTextOutWLocked(
                  (struct XDCOBJ *)v14,
                  *((_DWORD *)v10 - 12),
                  *((_DWORD *)v10 - 11),
                  *((_DWORD *)v10 - 6),
                  (struct tagRECT *)((char *)v10 - 20),
                  (unsigned __int16 *)*(v10 - 4),
                  v11,
                  *v10,
                  *(unsigned __int8 *)(*(_QWORD *)(v14[0] + 976LL) + 213LL),
                  v12,
                  a4) )
            break;
          v10 += 7;
          if ( (unsigned __int64)(v10 - 6) >= v9 )
            goto LABEL_13;
        }
        v8 = 0;
      }
    }
    else
    {
      v8 = XDCOBJ::bFullScreen((XDCOBJ *)v14);
    }
LABEL_13:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v16);
    if ( v19[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v19);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v20);
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v14);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v15);
  return v8;
}
