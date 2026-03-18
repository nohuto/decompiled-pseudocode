/*
 * XREFs of ?InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KHPEAUtagWND@@H@Z @ 0x1C0102D4C
 * Callers:
 *     ?SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KW4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x1C0102C04 (-SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@.c)
 * Callees:
 *     ?SetHidPOCountToTLCInfo@@YAXGKH@Z @ 0x1C0003658 (-SetHidPOCountToTLCInfo@@YAXGKH@Z.c)
 *     ?AllocateAndLinkHidPageOnlyRequest@@YAPEAUtagHID_PAGEONLY_REQUEST@@G@Z @ 0x1C0003A94 (-AllocateAndLinkHidPageOnlyRequest@@YAPEAUtagHID_PAGEONLY_REQUEST@@G@Z.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ??0?$ObjectLockRecursive@UtagObjLock@@@?$DomainExclusiveRecursive@$$V@?$DomainSharedRecursive@$$V@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00B0DBC (--0-$ObjectLockRecursive@UtagObjLock@@@-$DomainExclusiveRecursive@$$V@-$DomainSharedRecursive@$$.c)
 *     PostDeviceNotification @ 0x1C0102FA4 (PostDeviceNotification.c)
 *     AllocateAndLinkHidTLCInfo @ 0x1C0103268 (AllocateAndLinkHidTLCInfo.c)
 *     SearchHidTLCInfo @ 0x1C0103318 (SearchHidTLCInfo.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall InsertProcRequest(
        struct tagPROCESSINFO *a1,
        const struct tagRAWINPUTDEVICE *a2,
        struct tagPROCESS_HID_REQUEST *a3,
        int a4,
        int a5,
        struct tagWND *a6,
        int a7)
{
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // ecx
  int v13; // ecx
  unsigned int v14; // ecx
  struct DEVICEINFO *i; // rdi
  struct tagHID_PAGEONLY_REQUEST *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  char *v22; // [rsp+30h] [rbp-58h] BYREF
  struct tagWND *v23; // [rsp+38h] [rbp-50h]
  _BYTE v24[16]; // [rsp+40h] [rbp-48h] BYREF
  tagObjLock *v25; // [rsp+50h] [rbp-38h]
  char v26; // [rsp+60h] [rbp-28h]

  if ( a4 != 1 )
  {
    if ( a4 != 2 )
    {
      if ( a4 != 3 )
        goto LABEL_9;
      if ( !a5 )
      {
        v20 = SearchHidTLCInfo(*((unsigned __int16 *)a3 + 8), *((unsigned __int16 *)a3 + 9));
        if ( !v20 )
        {
          v20 = AllocateAndLinkHidTLCInfo(*((unsigned __int16 *)a3 + 8), *((unsigned __int16 *)a3 + 9));
          if ( !v20 )
            goto LABEL_38;
        }
        *((_QWORD *)a3 + 3) = v20;
        ++*(_DWORD *)(v20 + 36);
      }
      v10 = *((_QWORD *)a1 + 104) + 48LL;
      v21 = *(_QWORD *)v10;
      if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) == v10 )
      {
        *(_QWORD *)a3 = v21;
        *((_QWORD *)a3 + 1) = v10;
        *(_QWORD *)(v21 + 8) = a3;
        goto LABEL_8;
      }
LABEL_42:
      __fastfail(3u);
    }
    v17 = (struct tagHID_PAGEONLY_REQUEST *)RawInputManagerObject::gHidRequestTable[2];
    if ( v17 == (struct tagHID_PAGEONLY_REQUEST *)&RawInputManagerObject::gHidRequestTable[2] )
      goto LABEL_24;
    while ( *((_WORD *)v17 + 8) != *((_WORD *)a3 + 8) )
    {
      v17 = *(struct tagHID_PAGEONLY_REQUEST **)v17;
      if ( v17 == (struct tagHID_PAGEONLY_REQUEST *)&RawInputManagerObject::gHidRequestTable[2] )
        goto LABEL_24;
    }
    if ( !v17 )
    {
LABEL_24:
      v17 = AllocateAndLinkHidPageOnlyRequest(*((_WORD *)a3 + 8));
      if ( !v17 )
        goto LABEL_38;
    }
    *((_QWORD *)a3 + 3) = v17;
    ++*((_DWORD *)v17 + 5);
    SetHidPOCountToTLCInfo();
    v22 = (char *)a3 + 32;
    v23 = a6;
    HMAssignmentLock(&v22, 0LL);
    v10 = *((_QWORD *)a1 + 104) + 32LL;
    goto LABEL_6;
  }
  if ( !a5 )
  {
    v19 = SearchHidTLCInfo(*((unsigned __int16 *)a3 + 8), *((unsigned __int16 *)a3 + 9));
    if ( v19 || (v19 = AllocateAndLinkHidTLCInfo(*((unsigned __int16 *)a3 + 8), *((unsigned __int16 *)a3 + 9))) != 0 )
    {
      *((_QWORD *)a3 + 3) = v19;
      ++*(_DWORD *)(v19 + 24);
      goto LABEL_3;
    }
LABEL_38:
    UserSetLastError(8LL, v18);
    return 0LL;
  }
LABEL_3:
  if ( !a7 )
  {
    v22 = (char *)a3 + 32;
    v23 = a6;
    HMAssignmentLock(&v22, 0LL);
  }
  v10 = *((_QWORD *)a1 + 104) + 16LL;
LABEL_6:
  v11 = *(_QWORD *)v10;
  if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) != v10 )
    goto LABEL_42;
  *(_QWORD *)a3 = v11;
  *((_QWORD *)a3 + 1) = v10;
  *(_QWORD *)(v11 + 8) = a3;
LABEL_8:
  *(_QWORD *)v10 = a3;
LABEL_9:
  v12 = *((_DWORD *)a3 + 5) ^ (*((_DWORD *)a3 + 5) ^ (*((_DWORD *)a2 + 1) >> 11)) & 4;
  *((_DWORD *)a3 + 5) = v12;
  if ( (*((_DWORD *)a2 + 1) & 0x1100) != 0 )
  {
    if ( !a5 && (v12 & 1) == 0 )
    {
      ++*(_DWORD *)(*((_QWORD *)a1 + 104) + 80LL);
      DomainSharedRecursive<>::DomainExclusiveRecursive<>::ObjectLockRecursive<tagObjLock>::ObjectLockRecursive<tagObjLock>(
        (__int64)v24,
        gHidCountersLock);
      ++gHidCounters[2];
      if ( v26 )
      {
        if ( v25 )
          tagObjLock::UnLockExclusive(v25);
        v26 = 0;
      }
    }
    v13 = *((_DWORD *)a3 + 5) | 1;
    *((_DWORD *)a3 + 5) = v13;
    if ( (*((_DWORD *)a2 + 1) & 0x1000) != 0 )
      v14 = v13 | 2;
    else
      v14 = v13 & 0xFFFFFFFD;
    *((_DWORD *)a3 + 5) = v14;
  }
  for ( i = CBaseInput::TmpGetDeviceList(gpHidInput); i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
    PostDeviceNotification(a3, i, 0);
  return 1LL;
}
