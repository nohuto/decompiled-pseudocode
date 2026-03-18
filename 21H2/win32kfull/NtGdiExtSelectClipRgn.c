/*
 * XREFs of NtGdiExtSelectClipRgn @ 0x1C0041BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C002CEF0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003FD70 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C0041980 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0041E20 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C0041E44 (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0042D7C (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0042DBC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C0043D24 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015DA34 (--1MDCOBJ@@QEAA@XZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C015DE30 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

__int64 __fastcall NtGdiExtSelectClipRgn(HDC a1, HRGN a2, int a3)
{
  unsigned int v3; // ebx
  unsigned int v6; // edi
  __int64 v7; // rax
  DC *v9[2]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v10[32]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v11[32]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v12[2]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v13[64]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v14[32]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v15[2]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v16[64]; // [rsp+100h] [rbp+0h] BYREF
  struct REGION *v17[8]; // [rsp+140h] [rbp+40h] BYREF
  struct REGION *v18; // [rsp+1B8h] [rbp+B8h] BYREF

  v3 = 0;
  v6 = 0;
  if ( (unsigned int)(a3 - 1) > 4 )
  {
    EngSetLastError(0x57u);
    return v6;
  }
  DCOBJ::DCOBJ((DCOBJ *)v9, a1);
  if ( v9[0] && (*(_DWORD *)(HmgPentryFromPobj(v9[0]) + 8) & 0xFFFFFFFE) != 0 )
  {
    if ( *((_WORD *)v9[0] + 6) <= 1u )
    {
      if ( a2 )
      {
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v17, a2, 1, 0);
        if ( v17[0] )
        {
          v6 = DC::iSelect(v9[0], v17[0], a3);
          if ( v6 )
          {
            DLODCOBJ::DLODCOBJ((DLODCOBJ *)v12);
            DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v11, (struct XDCOBJ *)v9, 1);
            v6 = 0;
            if ( (v11[24] & 1) != 0 )
            {
              v18 = XDCOBJ::prgnEffRao((XDCOBJ *)v9);
              v6 = RGNOBJ::iComplexity((RGNOBJ *)&v18);
            }
            DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v11);
            if ( v12[0] )
              DLODCOBJ::vUnlock((DLODCOBJ *)v12);
            UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v13);
          }
        }
        RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v17);
      }
      else if ( a3 == 5 )
      {
        v6 = DC::iSelect(v9[0], 0LL, 5);
        if ( v6 )
        {
          DLODCOBJ::DLODCOBJ((DLODCOBJ *)v15);
          DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v14, (struct XDCOBJ *)v9, 1);
          v6 = 0;
          if ( (v14[24] & 1) != 0 )
          {
            v18 = DC::prgnVisSnap(v9[0]);
            v6 = RGNOBJ::iComplexity((RGNOBJ *)&v18);
          }
          DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v14);
          if ( v15[0] )
            DLODCOBJ::vUnlock((DLODCOBJ *)v15);
          UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v16);
        }
      }
      goto LABEL_9;
    }
    v7 = *((_QWORD *)v9[0] + 6);
    if ( v7 )
      v3 = *(_DWORD *)(v7 + 40);
    TraceLoggingWriteUnsupportedGdiUsage(11LL, v3, *((unsigned __int16 *)v9[0] + 6));
  }
  EngSetLastError(6u);
LABEL_9:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v9);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v10);
  return v6;
}
