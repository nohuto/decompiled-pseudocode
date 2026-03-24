/*
 * XREFs of GreDrawEscape @ 0x1C027C254
 * Callers:
 *     NtGdiDrawEscape @ 0x1C02ADE20 (NtGdiDrawEscape.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008E920 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00AC9D8 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00ACA04 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00B12D0 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C00B2904 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2938 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00B2D5C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016A21C (--1MDCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 *     ??1DEVEXCLUDERECT@@QEAA@XZ @ 0x1C027B044 (--1DEVEXCLUDERECT@@QEAA@XZ.c)
 *     ?vExclude@DEVEXCLUDERECT@@QEAAXAEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1C027C0B4 (-vExclude@DEVEXCLUDERECT@@QEAAXAEAVXDCOBJ@@PEAU_RECTL@@@Z.c)
 */

__int64 __fastcall GreDrawEscape(HDC a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  unsigned int v5; // edi
  int v8; // esi
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, __int64, _BYTE *, struct _RECTL *, unsigned int, __int64); // r15
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  struct REGION *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  DC *v18[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v19[32]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v20[32]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v21[2]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v22[64]; // [rsp+A0h] [rbp-60h] BYREF
  struct _RECTL v23; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v24[32]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v25; // [rsp+110h] [rbp+10h]
  _BYTE v26[4]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v27[52]; // [rsp+124h] [rbp+24h] BYREF
  __int64 v28; // [rsp+158h] [rbp+58h]
  __int64 v29; // [rsp+170h] [rbp+70h]
  int v30; // [rsp+178h] [rbp+78h]
  int v31; // [rsp+1A0h] [rbp+A0h]
  __int64 v32; // [rsp+1B0h] [rbp+B0h]

  v5 = 0;
  v8 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v18, a1);
  if ( !v18[0] || !*((_QWORD *)v18[0] + 62) || (**((_DWORD **)v18[0] + 122) & 1) != 0 )
  {
LABEL_27:
    v5 = v8;
    goto LABEL_28;
  }
  if ( a2 != 8 || a3 >= 4 )
  {
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v21);
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v20, (struct XDCOBJ *)v18, 0);
    v9 = *((_QWORD *)v18[0] + 6);
    v10 = *(__int64 (__fastcall **)(__int64, __int64, _BYTE *, struct _RECTL *, unsigned int, __int64))(v9 + 2888);
    if ( v10 )
    {
      if ( a2 == 8 )
      {
        v11 = *((_QWORD *)v18[0] + 62);
        v12 = v11 + 112;
        if ( !v11 )
          v12 = 88LL;
        if ( (*(_DWORD *)v12 & 0x200000) == 0 )
          goto LABEL_24;
        v13 = v10((v11 + 24) & -(__int64)(v11 != 0), 8LL, 0LL, 0LL, a3, a4);
      }
      else
      {
        if ( (v20[24] & 1) != 0 )
        {
          v23 = *(struct _RECTL *)((char *)v18[0] + 1032);
          v14 = XDCOBJ::prgnEffRao(v18);
          v28 = 0LL;
          v29 = 0LL;
          v30 = 0;
          v31 = 1;
          v32 = 0LL;
          XCLIPOBJ::vSetup((XCLIPOBJ *)v26, v14, (struct ERECTL *)&v23, 0);
          if ( ERECTL::bEmpty((ERECTL *)v27) )
          {
            v8 = 1;
          }
          else
          {
            v15 = *((_QWORD *)v18[0] + 62);
            v16 = v15 + 112;
            if ( !v15 )
              v16 = 88LL;
            if ( (*(_DWORD *)v16 & 0x200000) != 0 )
            {
              if ( (*(_DWORD *)(v9 + 40) & 1) != 0 )
              {
                GreAcquireSemaphore(ghsemSprite);
                EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
              }
              v25 = 0LL;
              DEVEXCLUDERECT::vExclude((DEVEXCLUDERECT *)v24, (struct XDCOBJ *)v18, &v23);
              ++*(_DWORD *)(*((_QWORD *)v18[0] + 62) + 92LL);
              v8 = v10(
                     (*((_QWORD *)v18[0] + 62) + 24LL) & -(__int64)(*((_QWORD *)v18[0] + 62) != 0LL),
                     a2,
                     v26,
                     &v23,
                     a3,
                     a4);
              DEVEXCLUDERECT::~DEVEXCLUDERECT((DEVEXCLUDERECT *)v24);
              if ( (*(_DWORD *)(v9 + 40) & 1) != 0 )
              {
                EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
                GreReleaseSemaphoreInternal(ghsemSprite);
              }
            }
          }
          goto LABEL_24;
        }
        v13 = XDCOBJ::bFullScreen((XDCOBJ *)v18);
      }
      v8 = v13;
    }
LABEL_24:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v20);
    if ( v21[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v21);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v22);
    goto LABEL_27;
  }
LABEL_28:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v18);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v19);
  return v5;
}
