/*
 * XREFs of GreGetRandomRgn @ 0x1C0042B10
 * Callers:
 *     _ExcludeUpdateRgn @ 0x1C0042FD0 (_ExcludeUpdateRgn.c)
 *     NtGdiGetRandomRgn @ 0x1C00B2800 (NtGdiGetRandomRgn.c)
 *     ?GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C015D124 (-GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     DrawTextExWorker @ 0x1C025E630 (DrawTextExWorker.c)
 * Callees:
 *     UserGetRedirectedWindowOrigin @ 0x1C004C3B0 (UserGetRedirectedWindowOrigin.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C008E8E0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C00A9A2C (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00B2890 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2938 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C00B2D1C (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C0169C4C (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     ??1?$lambda_call@V_lambda_d4ac050843a32da14874304f2689d2a8_@@@details@wil@@QEAA@XZ @ 0x1C016A628 (--1-$lambda_call@V_lambda_d4ac050843a32da14874304f2689d2a8_@@@details@wil@@QEAA@XZ.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1C016A654 (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 *     _lambda_27add1e8d57a913bfbcc33c9b5f13734_::operator() @ 0x1C016C2F4 (_lambda_27add1e8d57a913bfbcc33c9b5f13734_--operator().c)
 */

__int64 __fastcall GreGetRandomRgn(HDC a1, HRGN a2, int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // edi
  __int64 v10; // rcx
  struct _POINTL v11; // rax
  __int64 v12; // rcx
  bool v13; // zf
  __int64 v14; // r8
  _QWORD v16[2]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v17[7]; // [rsp+48h] [rbp-C0h] BYREF
  DC *v18[7]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v19[112]; // [rsp+B8h] [rbp-50h] BYREF
  struct _POINTL v20; // [rsp+160h] [rbp+58h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v18, a1);
  v6 = 0;
  if ( !v18[0] )
    goto LABEL_4;
  if ( *((_WORD *)v18[0] + 6) == 1 )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v19);
    if ( !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v19, (struct XDCOBJ *)v18, 1) )
    {
      v6 = -1;
LABEL_34:
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v19);
      goto LABEL_35;
    }
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v17, a2, 0, 0);
    if ( !v17[0] )
    {
      v6 = -1;
LABEL_33:
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v17);
      goto LABEL_34;
    }
    if ( a3 == 4 && (*((_DWORD *)v18[0] + 9) & 0x4000) != 0 )
    {
      DC::AcquireDcVisRgnShared(v18[0]);
      v9 = lambda_27add1e8d57a913bfbcc33c9b5f13734_::operator()(v8, v17, *((_QWORD *)v18[0] + 143));
      if ( v9 == 1 )
      {
        wil::details::lambda_call<_lambda_d4ac050843a32da14874304f2689d2a8_>::~lambda_call<_lambda_d4ac050843a32da14874304f2689d2a8_>(v16);
        v20 = 0LL;
        if ( (unsigned int)UserGetRedirectedWindowOrigin(a1, &v20) && RGNOBJ::bOffset((RGNOBJ *)v17, &v20) )
          v9 = 1;
        else
          v9 = -1;
      }
      else
      {
        wil::details::lambda_call<_lambda_d4ac050843a32da14874304f2689d2a8_>::~lambda_call<_lambda_d4ac050843a32da14874304f2689d2a8_>(v16);
      }
    }
    else
    {
      switch ( a3 )
      {
        case 1:
          v14 = *((_QWORD *)v18[0] + 20);
          break;
        case 2:
          v14 = *((_QWORD *)v18[0] + 21);
          break;
        case 3:
          v11 = (struct _POINTL)*((_QWORD *)v18[0] + 21);
          v12 = *((_QWORD *)v18[0] + 20);
          if ( v11 )
          {
            v13 = v12 == 0;
            if ( v12 )
            {
              v16[0] = *((_QWORD *)v18[0] + 20);
              v20 = v11;
              v6 = RGNOBJAPI::iCombine((RGNOBJAPI *)v17, (struct RGNOBJ *)v16, (struct RGNOBJ *)&v20, 1) != 0 ? 1 : -1;
              goto LABEL_33;
            }
          }
          else
          {
            v13 = v12 == 0;
          }
          if ( !v13 )
            v11 = (struct _POINTL)*((_QWORD *)v18[0] + 20);
          v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))lambda_27add1e8d57a913bfbcc33c9b5f13734_::operator())(
                 v12,
                 v17,
                 v11);
          goto LABEL_33;
        default:
          if ( (unsigned int)(a3 - 4) <= 1 )
          {
            DC::AcquireDcVisRgnShared(v18[0]);
            v6 = lambda_27add1e8d57a913bfbcc33c9b5f13734_::operator()(v10, v17, *((_QWORD *)v18[0] + 143));
            wil::details::lambda_call<_lambda_d4ac050843a32da14874304f2689d2a8_>::~lambda_call<_lambda_d4ac050843a32da14874304f2689d2a8_>(v16);
          }
          goto LABEL_33;
      }
      v9 = lambda_27add1e8d57a913bfbcc33c9b5f13734_::operator()(v7, v17, v14);
    }
    v6 = v9;
    goto LABEL_33;
  }
  TraceLoggingWriteUnsupportedGdiUsage(21LL, 0LL, *((unsigned __int16 *)v18[0] + 6), 5LL, 0LL);
LABEL_4:
  EngSetLastError(6u);
  v6 = -1;
LABEL_35:
  DCOBJ::~DCOBJ((DCOBJ *)v18);
  return v6;
}
