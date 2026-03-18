/*
 * XREFs of GreGetRandomRgn @ 0x1C014B3A0
 * Callers:
 *     NtGdiGetRandomRgn @ 0x1C003FBA0 (NtGdiGetRandomRgn.c)
 *     _ExcludeUpdateRgn @ 0x1C00C4B2C (_ExcludeUpdateRgn.c)
 *     ?GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C014B2A4 (-GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     DrawTextExWorker @ 0x1C025B810 (DrawTextExWorker.c)
 * Callees:
 *     UserGetRedirectedWindowOrigin @ 0x1C0020420 (UserGetRedirectedWindowOrigin.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003FC30 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C003FD30 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0042D7C (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C008AE30 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1?$lambda_call@V_lambda_d4ac050843a32da14874304f2689d2a8_@@@details@wil@@QEAA@XZ @ 0x1C015DA6C (--1-$lambda_call@V_lambda_d4ac050843a32da14874304f2689d2a8_@@@details@wil@@QEAA@XZ.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1C015DA98 (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 *     ?Feature_3093221692__private_IsEnabled@@YAHXZ @ 0x1C015DADC (-Feature_3093221692__private_IsEnabled@@YAHXZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C015DE30 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     _lambda_27add1e8d57a913bfbcc33c9b5f13734_::operator() @ 0x1C015F014 (_lambda_27add1e8d57a913bfbcc33c9b5f13734_--operator().c)
 *     ?GreGetRandomRgn_Unpatched@@YAHPEAUHDC__@@PEAUHRGN__@@H@Z @ 0x1C015F058 (-GreGetRandomRgn_Unpatched@@YAHPEAUHDC__@@PEAUHRGN__@@H@Z.c)
 */

__int64 __fastcall GreGetRandomRgn(HDC a1, HRGN a2, int a3)
{
  unsigned int v6; // ebx
  __int64 v8; // rcx
  int v9; // edi
  __int64 v10; // rcx
  struct _POINTL v11; // r8
  __int64 v12; // rcx
  bool v13; // zf
  __int64 v14; // r8
  _QWORD v15[2]; // [rsp+38h] [rbp-D0h] BYREF
  DC *v16[6]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v17[8]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v18[112]; // [rsp+B8h] [rbp-50h] BYREF
  struct _POINTL v19; // [rsp+160h] [rbp+58h] BYREF

  v6 = 0;
  if ( !(unsigned int)Feature_3093221692__private_IsEnabled() )
    return GreGetRandomRgn_Unpatched(a1, a2, a3);
  DCOBJ::DCOBJ((DCOBJ *)v16, a1);
  if ( !v16[0] )
    goto LABEL_6;
  if ( *((_WORD *)v16[0] + 6) == 1 )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v18);
    if ( !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v18, (struct XDCOBJ *)v16, 1) )
    {
      v6 = -1;
LABEL_36:
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v18);
      goto LABEL_37;
    }
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v17, a2, 0, 0);
    if ( !v17[0] )
    {
      v6 = -1;
      goto LABEL_35;
    }
    switch ( a3 )
    {
      case 4:
        if ( (*((_DWORD *)v16[0] + 9) & 0x4000) != 0 )
        {
          DC::AcquireDcVisRgnShared(v16[0]);
          v9 = lambda_27add1e8d57a913bfbcc33c9b5f13734_::operator()(v8, v17, *((_QWORD *)v16[0] + 142));
          if ( v9 == 1 )
          {
            wil::details::lambda_call<_lambda_d4ac050843a32da14874304f2689d2a8_>::~lambda_call<_lambda_d4ac050843a32da14874304f2689d2a8_>(v15);
            v19 = 0LL;
            if ( (unsigned int)UserGetRedirectedWindowOrigin((__int64)a1, (__int64)&v19)
              && RGNOBJ::bOffset((RGNOBJ *)v17, &v19) )
            {
              v9 = 1;
            }
            else
            {
              v9 = -1;
            }
          }
          else
          {
            wil::details::lambda_call<_lambda_d4ac050843a32da14874304f2689d2a8_>::~lambda_call<_lambda_d4ac050843a32da14874304f2689d2a8_>(v15);
          }
          goto LABEL_34;
        }
LABEL_23:
        DC::AcquireDcVisRgnShared(v16[0]);
        v6 = lambda_27add1e8d57a913bfbcc33c9b5f13734_::operator()(v10, v17, *((_QWORD *)v16[0] + 142));
        wil::details::lambda_call<_lambda_d4ac050843a32da14874304f2689d2a8_>::~lambda_call<_lambda_d4ac050843a32da14874304f2689d2a8_>(v15);
        goto LABEL_35;
      case 1:
        v14 = *((_QWORD *)v16[0] + 20);
        break;
      case 2:
        v14 = *((_QWORD *)v16[0] + 21);
        break;
      case 3:
        v11 = (struct _POINTL)*((_QWORD *)v16[0] + 21);
        v12 = *((_QWORD *)v16[0] + 20);
        if ( v11 )
        {
          v13 = v12 == 0;
          if ( v12 )
          {
            v15[0] = *((_QWORD *)v16[0] + 20);
            v19 = v11;
            v6 = RGNOBJAPI::iCombine((RGNOBJAPI *)v17, (struct RGNOBJ *)v15, (struct RGNOBJ *)&v19, 1) != 0 ? 1 : -1;
            goto LABEL_35;
          }
        }
        else
        {
          v13 = v12 == 0;
        }
        if ( !v13 )
          v11 = (struct _POINTL)*((_QWORD *)v16[0] + 20);
        v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))lambda_27add1e8d57a913bfbcc33c9b5f13734_::operator())(
               v12,
               v17,
               v11);
        goto LABEL_35;
      default:
        if ( (unsigned int)(a3 - 4) > 1 )
        {
LABEL_35:
          RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v17);
          goto LABEL_36;
        }
        goto LABEL_23;
    }
    v9 = lambda_27add1e8d57a913bfbcc33c9b5f13734_::operator()(v16[0], v17, v14);
LABEL_34:
    v6 = v9;
    goto LABEL_35;
  }
  TraceLoggingWriteUnsupportedGdiUsage(21LL, 0LL, *((unsigned __int16 *)v16[0] + 6));
LABEL_6:
  EngSetLastError(6u);
  v6 = -1;
LABEL_37:
  DCOBJ::~DCOBJ((DCOBJ *)v16);
  return v6;
}
