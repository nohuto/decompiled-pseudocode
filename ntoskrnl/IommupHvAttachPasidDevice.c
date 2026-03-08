/*
 * XREFs of IommupHvAttachPasidDevice @ 0x140521E7C
 * Callers:
 *     IommupDeviceEnableSvm @ 0x140930DD4 (IommupDeviceEnableSvm.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IommupHvAttachPasidDevice(__int64 a1)
{
  int v1; // edi
  __int64 v4; // [rsp+20h] [rbp-50h] BYREF
  __int128 v5; // [rsp+28h] [rbp-48h] BYREF
  __int128 v6; // [rsp+38h] [rbp-38h]
  __int64 v7; // [rsp+48h] [rbp-28h]
  __int64 v8; // [rsp+50h] [rbp-20h] BYREF
  int v9; // [rsp+58h] [rbp-18h]

  v8 = 0LL;
  v1 = 0;
  v9 = 0;
  LODWORD(v7) = 0;
  v4 = (unsigned int)IommupHvPasidInitialDomainId | 0x100000000LL;
  v5 = 0LL;
  v6 = 0LL;
  if ( IommupHvPasidSpaceCreated )
    goto LABEL_27;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&IommupHvGlobalPushLock, 0LL);
  if ( !IommupHvPasidSpaceCreated )
  {
    v1 = ((__int64 (__fastcall *)(_QWORD, _QWORD))qword_140C62208)(0LL, (unsigned int)IommupHvMaximumAsids);
    if ( v1 >= 0 )
      IommupHvPasidSpaceCreated = 1;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&IommupHvGlobalPushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&IommupHvGlobalPushLock);
  KeAbPostRelease((ULONG_PTR)&IommupHvGlobalPushLock);
  if ( v1 >= 0 )
  {
LABEL_27:
    if ( IommupHvPasidInitialDomainCreated )
      goto LABEL_28;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&IommupHvGlobalPushLock, 0LL);
    v9 = 0;
    v8 = v4;
    v1 = ((__int64 (__fastcall *)(__int64 *))qword_140C622A8)(&v8);
    if ( v1 >= 0 )
    {
      v7 = 0LL;
      v5 = 0LL;
      LODWORD(v5) = 1;
      v6 = 0LL;
      LOWORD(v6) = 257;
      v1 = ((__int64 (__fastcall *)(__int64 *, __int128 *))qword_140C62310)(&v4, &v5);
      if ( v1 >= 0 )
        IommupHvPasidInitialDomainCreated = 1;
      else
        ((void (__fastcall *)(__int64 *))qword_140C622C0)(&v4);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&IommupHvGlobalPushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&IommupHvGlobalPushLock);
    KeAbPostRelease((ULONG_PTR)&IommupHvGlobalPushLock);
    if ( v1 >= 0 )
    {
LABEL_28:
      v1 = ((__int64 (__fastcall *)(_QWORD, __int64 *))qword_140C62338)(*(_QWORD *)(a1 + 32), &v4);
      if ( v1 >= 0 )
      {
        v1 = ((__int64 (__fastcall *)(_QWORD, __int64 *))qword_140C622B0)(*(_QWORD *)(a1 + 32), &v4);
        if ( v1 < 0 )
        {
LABEL_23:
          ((void (__fastcall *)(_QWORD))qword_140C62340)(*(_QWORD *)(a1 + 32));
          return (unsigned int)v1;
        }
        if ( *(_BYTE *)(a1 + 265) )
        {
          v1 = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD))qword_140C62268)(
                 *(_QWORD *)(a1 + 32),
                 42LL,
                 (*(_DWORD *)(a1 + 384) >> 3) & 0x1F);
          if ( v1 < 0 )
          {
LABEL_22:
            ((void (__fastcall *)(_QWORD))qword_140C622B8)(*(_QWORD *)(a1 + 32));
            goto LABEL_23;
          }
          v1 = ((__int64 (__fastcall *)(_QWORD, _QWORD))qword_140C62220)(*(_QWORD *)(a1 + 32), 0LL);
          if ( v1 < 0 )
          {
            ((void (__fastcall *)(_QWORD, __int64))qword_140C62268)(*(_QWORD *)(a1 + 32), 33LL);
            goto LABEL_22;
          }
        }
      }
    }
  }
  return (unsigned int)v1;
}
