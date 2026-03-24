/*
 * XREFs of NtGdiRoundRect @ 0x1C0142270
 * Callers:
 *     <none>
 * Callees:
 *     ?bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z @ 0x1C00A04E4 (-bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2938 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FD8F4 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1C0141FB4 (--0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 *     NtGdiRectangle @ 0x1C0143A10 (NtGdiRectangle.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0144B70 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C01468E4 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016A21C (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiRoundRect(HDC a1, LONG a2, LONG a3, LONG a4, LONG a5, unsigned int a6, int a7)
{
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // ebx
  unsigned int v13; // edi
  unsigned int v14; // ecx
  __int64 v15; // rbx
  _QWORD v17[2]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v18[32]; // [rsp+40h] [rbp-C0h] BYREF
  struct _XFORMOBJ v19; // [rsp+60h] [rbp-A0h] BYREF
  struct _RECTL v20; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v21[20]; // [rsp+80h] [rbp-80h] BYREF
  PATHOBJ ppo; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v23; // [rsp+D8h] [rbp-28h]
  _BYTE v24[32]; // [rsp+120h] [rbp+20h] BYREF
  int v25; // [rsp+140h] [rbp+40h]

  if ( a6 && a7 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v17, a1);
    v10 = v17[0];
    if ( !v17[0] || (*(_DWORD *)(v17[0] + 36LL) & 0x10000) != 0 )
    {
      EngSetLastError(6u);
      v13 = 0;
LABEL_22:
      MDCOBJ::~MDCOBJ((MDCOBJ *)v17);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v18);
      return v13;
    }
    v11 = *(_QWORD *)(v17[0] + 976LL);
    v12 = *(_DWORD *)(v11 + 152);
    if ( (v12 & 0x1000) != 0 )
    {
      GreDCSelectBrush(v17[0], *(_QWORD *)(v11 + 160));
      v10 = v17[0];
    }
    if ( (v12 & 0x2000) != 0 )
      GreDCSelectPen(v10, *(_QWORD *)(*(_QWORD *)(v10 + 976) + 168LL));
    v20.bottom = a5;
    v20.left = a2;
    v20.top = a3;
    v20.right = a4;
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v19, (struct XDCOBJ *)v17, 516);
    v13 = 1;
    EBOX::EBOX((EBOX *)v21, (struct DCOBJ *)v17, &v20, (struct _LINEATTRS *)(v17[0] + 208LL), 1);
    if ( v21[0] )
      goto LABEL_22;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (struct XDCOBJ *)v17, 1);
    if ( v23 )
    {
      if ( (unsigned int)bRoundRect((struct EPATHOBJ *)&ppo, (struct EBOX *)v21, a6) )
      {
        if ( (*(_DWORD *)(v17[0] + 248LL) & 1) == 0 )
        {
          if ( v21[1] )
          {
            v15 = *(_QWORD *)(v17[0] + 136LL);
            *(_QWORD *)(v17[0] + 136LL) = *(_QWORD *)(v17[0] + 144LL);
            *(_DWORD *)(v17[0] + 316LL) |= 1u;
            v14 = EPATHOBJ::bStrokeAndOrFill(&ppo, (struct XDCOBJ *)v17, 0LL, 0LL, 2u);
            *(_QWORD *)(v17[0] + 136LL) = v15;
            *(_DWORD *)(v17[0] + 316LL) |= 1u;
          }
          else
          {
            v14 = EPATHOBJ::bStrokeAndOrFill(&ppo, (struct XDCOBJ *)v17, (LINEATTRS *)(v17[0] + 208LL), &v19, 3u);
          }
          v13 = v14;
        }
        goto LABEL_19;
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    v13 = 0;
LABEL_19:
    EPATHOBJ::vUnlock((EPATHOBJ *)&ppo);
    if ( v25 )
    {
      PopThreadGuardedObject(v24);
      v25 = 0;
    }
    goto LABEL_22;
  }
  return NtGdiRectangle(a1, a5);
}
