/*
 * XREFs of ?GreGetRandomRgn_Unpatched@@YAHPEAUHDC__@@PEAUHRGN__@@H@Z @ 0x1C013015C
 * Callers:
 *     GreGetRandomRgn @ 0x1C0125C40 (GreGetRandomRgn.c)
 * Callees:
 *     UserGetRedirectedWindowOrigin @ 0x1C0038F40 (UserGetRedirectedWindowOrigin.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C00508E4 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0050C04 (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0050D68 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C02910AC (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

__int64 __fastcall GreGetRandomRgn_Unpatched(HDC a1, HRGN a2, int a3)
{
  struct _POINTL v6; // rsi
  unsigned int v7; // ebx
  int v8; // r14d
  __int64 v9; // rdi
  _QWORD v11[2]; // [rsp+38h] [rbp-49h] BYREF
  __int64 v12; // [rsp+48h] [rbp-39h] BYREF
  _QWORD v13[3]; // [rsp+50h] [rbp-31h] BYREF
  _BYTE v14[80]; // [rsp+68h] [rbp-19h] BYREF
  struct _POINTL v15; // [rsp+100h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v11, a1);
  v6 = 0LL;
  v7 = -1;
  if ( !v11[0] )
    goto LABEL_2;
  v8 = 1;
  if ( *(_WORD *)(v11[0] + 12LL) == 1 )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v14, (struct XDCOBJ *)v11, 1);
    if ( (v14[24] & 1) == 0 )
    {
LABEL_29:
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v14);
      goto LABEL_30;
    }
    switch ( a3 )
    {
      case 1:
        v9 = *(_QWORD *)(v11[0] + 160LL);
        break;
      case 2:
        v9 = *(_QWORD *)(v11[0] + 168LL);
        break;
      case 3:
        v9 = *(_QWORD *)(v11[0] + 160LL);
        v6 = *(struct _POINTL *)(v11[0] + 168LL);
        if ( v9 )
        {
          if ( v6 )
            goto LABEL_14;
        }
        else
        {
          v9 = *(_QWORD *)(v11[0] + 168LL);
        }
        break;
      default:
        if ( (unsigned int)(a3 - 4) > 1 )
        {
LABEL_25:
          v7 = 0;
          goto LABEL_29;
        }
        v9 = *(_QWORD *)(v11[0] + 1136LL);
        break;
    }
    v8 = 5;
    if ( !v9 )
      goto LABEL_25;
LABEL_14:
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v13, a2, 0, 0);
    if ( v13[0] )
    {
      v12 = v9;
      if ( v8 == 5 )
      {
        if ( RGNOBJAPI::bCopy((RGNOBJAPI *)v13, (struct RGNOBJ *)&v12) )
        {
          if ( a3 != 4
            || (*(_DWORD *)(v11[0] + 36LL) & 0x4000) == 0
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
        if ( RGNOBJAPI::iCombine((RGNOBJAPI *)v13, (struct RGNOBJ *)&v12, (struct RGNOBJ *)&v15, v8) )
          v7 = 1;
      }
    }
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v13);
    goto LABEL_29;
  }
  TraceLoggingWriteUnsupportedGdiUsage(21LL, 0LL, *(unsigned __int16 *)(v11[0] + 12LL));
LABEL_2:
  EngSetLastError(6u);
LABEL_30:
  DCOBJ::~DCOBJ((DCOBJ *)v11);
  return v7;
}
