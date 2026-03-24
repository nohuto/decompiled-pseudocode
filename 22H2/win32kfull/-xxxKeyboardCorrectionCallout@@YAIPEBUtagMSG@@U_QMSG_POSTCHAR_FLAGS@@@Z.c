/*
 * XREFs of ?xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z @ 0x1C0120DC8
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0055680 (xxxRealInternalGetMessage.c)
 * Callees:
 *     _PostMessage @ 0x1C002DBA0 (_PostMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00598F0 (xxxSendTransformableMessageTimeout.c)
 *     HMValidateHandleNoSecure @ 0x1C008C368 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxKeyboardCorrectionCallout(__int128 *a1, int a2)
{
  __int128 v2; // xmm2
  __int128 v3; // xmm0
  unsigned int v4; // edi
  __int128 v5; // xmm1
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 ThreadWin32Thread; // rax
  _BOOL8 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  _QWORD v20[3]; // [rsp+50h] [rbp-9h] BYREF
  int v21[4]; // [rsp+68h] [rbp+Fh] BYREF
  __int128 v22; // [rsp+78h] [rbp+1Fh]
  __int128 v23; // [rsp+88h] [rbp+2Fh]
  unsigned __int64 LowLimit; // [rsp+C0h] [rbp+67h] BYREF
  int v25; // [rsp+C8h] [rbp+6Fh] BYREF

  v25 = a2;
  v2 = *a1;
  v3 = a1[1];
  v4 = 0;
  v5 = a1[2];
  v6 = *(_QWORD *)a1;
  *(_OWORD *)v21 = v2;
  v22 = v3;
  v23 = v5;
  v7 = HMValidateHandleNoSecure(v6, 1);
  v20[2] = 0LL;
  if ( !v7 )
    return 87LL;
  v8 = *(_QWORD *)(v7 + 40);
  if ( (unsigned int)(*(_DWORD *)(v8 + 236) - 1) <= 1 && (*(_BYTE *)(v8 + 234) & 0x20) == 0 )
    return v4;
  v10 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( !v10 )
    return v4;
  v11 = *(_QWORD *)(v10 + 248);
  if ( !v11 )
    return v4;
  LowLimit = 0LL;
  v12 = *(_QWORD *)(v11 + 40);
  if ( *(char *)(v12 + 20) >= 0 && *(char *)(v12 + 19) >= 0 )
  {
    v13 = *(_QWORD *)(v11 + 16);
    if ( gptiCurrent == v13 )
      return 0LL;
    if ( (unsigned __int8)CheckAccess(*(_QWORD *)(v13 + 424) + 880LL, *(_QWORD *)(gptiCurrent + 424LL) + 880LL) )
    {
      v14 = *(_QWORD *)(v10 + 248);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v20[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v20;
      v20[1] = v14;
      if ( v14 )
        HMLockObject(v14);
      v16 = xxxSendTransformableMessageTimeout(
              *(_QWORD *)(v10 + 248),
              0x32Cu,
              (unsigned __int64)&v25,
              (struct _LARGE_STRING *)v21,
              2u,
              guiKeyboardCorrectionCalloutTimeout,
              (__int64 *)&LowLimit,
              1,
              0) == 0;
      ThreadUnlock1(v17);
      if ( v16 )
      {
        v18 = HMAssignmentUnlock(v10 + 248);
        if ( v18 )
        {
          v19 = *(_QWORD *)(v18 + 40);
          if ( *(char *)(v19 + 20) >= 0 && *(char *)(v19 + 19) >= 0 )
            PostMessage(v18, 813, 0, 0);
        }
        return 1460;
      }
      else if ( LowLimit == 255 )
      {
        return 1296;
      }
      return v4;
    }
  }
  return 5LL;
}
