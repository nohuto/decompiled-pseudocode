/*
 * XREFs of ?GreGetRandomRgn_Unpatched@@YAHPEAUHDC__@@PEAUHRGN__@@H@Z @ 0x1C015F058
 * Callers:
 *     GreGetRandomRgn @ 0x1C014B3A0 (GreGetRandomRgn.c)
 * Callees:
 *     UserGetRedirectedWindowOrigin @ 0x1C0020420 (UserGetRedirectedWindowOrigin.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003FC30 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C003FD30 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0041930 (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0042D7C (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C015DE30 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

__int64 __fastcall GreGetRandomRgn_Unpatched(HDC a1, HRGN a2, int a3)
{
  struct _POINTL v6; // r14
  unsigned int v7; // ebx
  int v8; // r15d
  __int64 v9; // rdi
  __int64 v11; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v12[6]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v13[7]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v14[112]; // [rsp+A8h] [rbp-60h] BYREF
  struct _POINTL v15; // [rsp+160h] [rbp+58h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v12, a1);
  v6 = 0LL;
  v7 = -1;
  v8 = 5;
  if ( !v12[0] )
    goto LABEL_2;
  if ( *(_WORD *)(v12[0] + 12LL) == 1 )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v14, (struct XDCOBJ *)v12, 1);
    if ( (v14[24] & 1) == 0 )
    {
LABEL_30:
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v14);
      goto LABEL_31;
    }
    switch ( a3 )
    {
      case 1:
        v9 = *(_QWORD *)(v12[0] + 160LL);
        break;
      case 2:
        v9 = *(_QWORD *)(v12[0] + 168LL);
        break;
      case 3:
        v9 = *(_QWORD *)(v12[0] + 160LL);
        v6 = *(struct _POINTL *)(v12[0] + 168LL);
        if ( v9 )
        {
          if ( !*(_QWORD *)&v6 )
            goto LABEL_19;
          v8 = 1;
        }
        else
        {
          v9 = *(_QWORD *)(v12[0] + 168LL);
        }
        break;
      default:
        if ( (unsigned int)(a3 - 4) > 1 )
        {
LABEL_18:
          v7 = 0;
          goto LABEL_30;
        }
        v9 = *(_QWORD *)(v12[0] + 1136LL);
        break;
    }
    if ( !v9 )
      goto LABEL_18;
LABEL_19:
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v13, a2, 0, 0);
    if ( v13[0] )
    {
      v11 = v9;
      if ( v8 == 5 )
      {
        if ( RGNOBJAPI::bCopy((RGNOBJAPI *)v13, (struct RGNOBJ *)&v11) )
        {
          if ( a3 != 4
            || (*(_DWORD *)(v12[0] + 36LL) & 0x4000) == 0
            || (v15 = 0LL, (unsigned int)UserGetRedirectedWindowOrigin((__int64)a1, (__int64)&v15))
            && RGNOBJ::bOffset((RGNOBJ *)v13, &v15) )
          {
            v7 = 1;
          }
        }
      }
      else
      {
        v15 = v6;
        if ( RGNOBJAPI::iCombine((RGNOBJAPI *)v13, (struct RGNOBJ *)&v11, (struct RGNOBJ *)&v15, v8) )
          v7 = 1;
      }
    }
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v13);
    goto LABEL_30;
  }
  TraceLoggingWriteUnsupportedGdiUsage(21);
LABEL_2:
  EngSetLastError(6u);
LABEL_31:
  DCOBJ::~DCOBJ((DCOBJ *)v12);
  return v7;
}
