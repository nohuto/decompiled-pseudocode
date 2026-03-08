/*
 * XREFs of PiAuditDeviceOperation @ 0x14096C7A8
 * Callers:
 *     PiPnpRtlSetObjectProperty @ 0x140686898 (PiPnpRtlSetObjectProperty.c)
 *     PiAuditDeviceEnableDisableAction @ 0x14096C730 (PiAuditDeviceEnableDisableAction.c)
 *     PiAuditDeviceEnableDisableRequest @ 0x14096C764 (PiAuditDeviceEnableDisableRequest.c)
 *     PiAuditDeviceStart @ 0x14096CE1C (PiAuditDeviceStart.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _PnpGetObjectProperty @ 0x1406D0FB4 (_PnpGetObjectProperty.c)
 *     PnpFindAlternateStringData @ 0x1407811C0 (PnpFindAlternateStringData.c)
 *     SeAuditPlugAndPlay @ 0x1409C7BA8 (SeAuditPlugAndPlay.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiAuditDeviceOperation(__int64 a1, int a2, char a3)
{
  void *v4; // r12
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  unsigned int v10; // ebx
  int v11; // r14d
  __int64 i; // rdx
  __int64 Pool2; // rax
  void *v14; // r13
  int ObjectProperty; // eax
  __int16 v16; // ax
  __int64 v17; // rax
  void *v18; // r15
  int v19; // eax
  __int16 v20; // ax
  __int64 v21; // rdx
  __int64 v22; // rax
  int v23; // eax
  __int16 v24; // ax
  __int64 v25; // rdx
  __int64 j; // rdx
  __int64 v27; // rax
  void *v28; // rsi
  int v29; // eax
  __int64 v30; // rax
  _WORD *v31; // rdi
  int k; // eax
  __int64 v33; // rax
  int v34; // eax
  bool v35; // zf
  const WCHAR *v36; // rdx
  int v38; // [rsp+68h] [rbp-69h] BYREF
  unsigned int v39; // [rsp+6Ch] [rbp-65h] BYREF
  unsigned int v40; // [rsp+70h] [rbp-61h] BYREF
  unsigned int v41; // [rsp+74h] [rbp-5Dh] BYREF
  char v42; // [rsp+78h] [rbp-59h]
  unsigned int v43; // [rsp+7Ch] [rbp-55h] BYREF
  unsigned int v44; // [rsp+80h] [rbp-51h] BYREF
  int v45; // [rsp+84h] [rbp-4Dh] BYREF
  const WCHAR *v46; // [rsp+88h] [rbp-49h] BYREF
  __int64 v47; // [rsp+90h] [rbp-41h]
  __int128 v48; // [rsp+98h] [rbp-39h] BYREF
  __int128 v49; // [rsp+A8h] [rbp-29h] BYREF
  __int128 v50; // [rsp+B8h] [rbp-19h] BYREF
  int v51; // [rsp+C8h] [rbp-9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+D0h] [rbp-1h] BYREF
  UNICODE_STRING v53; // [rsp+E0h] [rbp+Fh] BYREF
  __int128 v54; // [rsp+F0h] [rbp+1Fh] BYREF

  v42 = a3;
  v47 = a1;
  v41 = 0;
  v46 = 0LL;
  v44 = 0;
  v4 = 0LL;
  v39 = 0;
  v40 = 0;
  v45 = 0;
  v38 = 0;
  v53 = 0LL;
  v54 = 0LL;
  DestinationString = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v48 = 0LL;
  if ( a2 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            v9 = v8 - 1;
            if ( v9 )
            {
              if ( v9 != 1 )
                return (unsigned int)-1073741823;
              v11 = 6;
            }
            else
            {
              v11 = 5;
            }
          }
          else
          {
            v11 = 4;
          }
        }
        else
        {
          v11 = 3;
        }
      }
      else
      {
        v11 = 2;
      }
    }
    else
    {
      v11 = 1;
    }
  }
  else
  {
    v11 = 0;
  }
  v43 = 512;
  for ( i = 512LL; ; i = v43 )
  {
    Pool2 = ExAllocatePool2(256LL, i, 538996816LL);
    v14 = (void *)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    ObjectProperty = PnpGetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       *(_QWORD *)(a1 + 8),
                       1LL,
                       0LL,
                       0LL,
                       (__int64)&DEVPKEY_Device_HardwareIds,
                       (__int64)&v38,
                       Pool2,
                       v43,
                       (__int64)&v43,
                       0);
    if ( ObjectProperty != -1073741789 )
      break;
    ExFreePoolWithTag(v14, 0);
  }
  if ( ObjectProperty >= 0 && v38 == 8210 )
  {
    v16 = v43;
  }
  else
  {
    ExFreePoolWithTag(v14, 0);
    v16 = 0;
    v14 = 0LL;
    v43 = 0;
  }
  LOWORD(v50) = v16;
  WORD1(v50) = v16;
  *((_QWORD *)&v50 + 1) = v14;
  v39 = 512;
  v17 = ExAllocatePool2(256LL, 512LL, 538996816LL);
  v18 = (void *)v17;
  if ( v17 )
  {
    while ( 1 )
    {
      v19 = PnpGetObjectProperty(
              *(__int64 *)&PiPnpRtlCtx,
              *(_QWORD *)(a1 + 8),
              1LL,
              0LL,
              0LL,
              (__int64)&DEVPKEY_Device_CompatibleIds,
              (__int64)&v38,
              v17,
              v39,
              (__int64)&v39,
              0);
      if ( v19 != -1073741789 )
        break;
      ExFreePoolWithTag(v18, 0);
      v17 = ExAllocatePool2(256LL, v39, 538996816LL);
      v18 = (void *)v17;
      if ( !v17 )
        goto LABEL_26;
    }
    if ( v19 >= 0 && v38 == 8210 )
    {
      v20 = v39;
    }
    else
    {
      ExFreePoolWithTag(v18, 0);
      v20 = 0;
      v18 = 0LL;
      v39 = 0;
    }
    v21 = 64LL;
    LOWORD(v49) = v20;
    v40 = 64;
    WORD1(v49) = v20;
    *((_QWORD *)&v49 + 1) = v18;
    while ( 1 )
    {
      v22 = ExAllocatePool2(256LL, v21, 538996816LL);
      v4 = (void *)v22;
      if ( !v22 )
        break;
      v23 = PnpGetObjectProperty(
              *(__int64 *)&PiPnpRtlCtx,
              *(_QWORD *)(a1 + 8),
              1LL,
              0LL,
              0LL,
              (__int64)&DEVPKEY_Device_LocationInfo,
              (__int64)&v38,
              v22,
              v40,
              (__int64)&v40,
              0);
      if ( v23 != -1073741789 )
      {
        if ( v23 >= 0 && v38 == 18 )
        {
          v24 = v40;
        }
        else
        {
          ExFreePoolWithTag(v4, 0);
          v24 = 0;
          v4 = 0LL;
          v40 = 0;
        }
        v25 = *(_QWORD *)(a1 + 8);
        LOWORD(v48) = v24;
        WORD1(v48) = v24;
        v45 = 16;
        *((_QWORD *)&v48 + 1) = v4;
        if ( (int)PnpGetObjectProperty(
                    *(__int64 *)&PiPnpRtlCtx,
                    v25,
                    1LL,
                    0LL,
                    0LL,
                    (__int64)&DEVPKEY_Device_ClassGuid,
                    (__int64)&v38,
                    (__int64)&v54,
                    16,
                    (__int64)&v45,
                    0) < 0
          || v38 != 13
          || v45 != 16 )
        {
          v54 = 0LL;
        }
        v44 = 32;
        for ( j = 32LL; ; j = v44 )
        {
          v27 = ExAllocatePool2(256LL, j, 538996816LL);
          v28 = (void *)v27;
          if ( !v27 )
            break;
          v29 = PnpGetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  *(_QWORD *)(a1 + 8),
                  1LL,
                  0LL,
                  0LL,
                  (__int64)&DEVPKEY_Device_Class,
                  (__int64)&v38,
                  v27,
                  v44,
                  (__int64)&v44,
                  0);
          if ( v29 != -1073741789 )
          {
            if ( v29 < 0 || v38 != 18 )
            {
              ExFreePoolWithTag(v28, 0);
              v28 = 0LL;
              v44 = 0;
            }
            RtlInitUnicodeString(&DestinationString, (PCWSTR)v28);
            v41 = 32;
            v30 = ExAllocatePool2(256LL, 32LL, 538996816LL);
            v31 = (_WORD *)v30;
            if ( v30 )
            {
              for ( k = PnpGetObjectProperty(
                          *(__int64 *)&PiPnpRtlCtx,
                          *(_QWORD *)(a1 + 8),
                          1LL,
                          0LL,
                          0LL,
                          (__int64)&DEVPKEY_NAME,
                          (__int64)&v38,
                          v30,
                          v41,
                          (__int64)&v41,
                          0);
                    ;
                    k = PnpGetObjectProperty(
                          *(__int64 *)&PiPnpRtlCtx,
                          *(_QWORD *)(v47 + 8),
                          1LL,
                          0LL,
                          0LL,
                          (__int64)&DEVPKEY_NAME,
                          (__int64)&v38,
                          v33,
                          v41,
                          (__int64)&v41,
                          0) )
              {
                v10 = k;
                if ( k != -1073741789 )
                  break;
                ExFreePoolWithTag(v31, 0);
                v33 = ExAllocatePool2(256LL, v41, 538996816LL);
                v31 = (_WORD *)v33;
                if ( !v33 )
                  goto LABEL_54;
              }
              if ( k < 0 )
                goto LABEL_68;
              v34 = v38;
              if ( v38 == 25 )
              {
                v35 = (unsigned int)PnpFindAlternateStringData(v31, v41, &v46, &v51) == 0;
                v36 = v31;
                v34 = 18;
                if ( !v35 )
                  v36 = v46;
                v38 = 18;
              }
              else
              {
                v36 = 0LL;
                if ( v38 == 18 )
                  v36 = v31;
              }
              if ( v34 != 18 )
              {
LABEL_68:
                v10 = 0;
                ExFreePoolWithTag(v31, 0);
                v41 = 0;
                v31 = 0LL;
                v36 = 0LL;
              }
              RtlInitUnicodeString(&v53, v36);
              SeAuditPlugAndPlay(
                v47,
                (unsigned int)&v53,
                (unsigned int)&v50,
                (unsigned int)&v49,
                (__int64)&v48,
                (__int64)&v54,
                (__int64)&DestinationString,
                v11,
                v42);
              if ( v31 )
                ExFreePoolWithTag(v31, 0);
            }
            else
            {
LABEL_54:
              v10 = -1073741670;
            }
            if ( v28 )
              ExFreePoolWithTag(v28, 0);
            goto LABEL_73;
          }
          ExFreePoolWithTag(v28, 0);
        }
        break;
      }
      ExFreePoolWithTag(v4, 0);
      v21 = v40;
    }
    v10 = -1073741670;
LABEL_73:
    if ( v18 )
      ExFreePoolWithTag(v18, 0);
  }
  else
  {
LABEL_26:
    v10 = -1073741670;
  }
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return v10;
}
