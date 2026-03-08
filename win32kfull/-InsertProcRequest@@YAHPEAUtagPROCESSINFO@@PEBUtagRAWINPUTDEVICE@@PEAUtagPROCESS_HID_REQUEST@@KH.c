/*
 * XREFs of ?InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KHPEAUtagWND@@H@Z @ 0x1C00D604C
 * Callers:
 *     ?SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KW4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x1C00D5E84 (-SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     AllocateAndLinkHidTLCInfo @ 0x1C00D5964 (AllocateAndLinkHidTLCInfo.c)
 *     PostDeviceNotification @ 0x1C00D6230 (PostDeviceNotification.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C00D6340 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     SearchHidTLCInfo @ 0x1C00D6380 (SearchHidTLCInfo.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C00D63F0 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0?$ObjectLockRecursive@UtagObjLock@@@?$DomainExclusiveRecursive@$$V@?$DomainSharedRecursive@$$V@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00D680C (--0-$ObjectLockRecursive@UtagObjLock@@@-$DomainExclusiveRecursive@$$V@-$DomainSharedRecursive@$$.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?AllocateAndLinkHidPageOnlyRequest@@YAPEAUtagHID_PAGEONLY_REQUEST@@G@Z @ 0x1C01AA65C (-AllocateAndLinkHidPageOnlyRequest@@YAPEAUtagHID_PAGEONLY_REQUEST@@G@Z.c)
 *     ?SearchHidPageOnlyRequest@@YAPEAUtagHID_PAGEONLY_REQUEST@@G@Z @ 0x1C01AACAC (-SearchHidPageOnlyRequest@@YAPEAUtagHID_PAGEONLY_REQUEST@@G@Z.c)
 *     ?SetHidPOCountToTLCInfo@@YAXGKH@Z @ 0x1C01AAD08 (-SetHidPOCountToTLCInfo@@YAXGKH@Z.c)
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
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  struct DEVICEINFO *i; // rdi
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // ecx
  struct tagHID_PAGEONLY_REQUEST *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  char *v25; // [rsp+30h] [rbp-40h] BYREF
  struct tagWND *v26; // [rsp+38h] [rbp-38h]
  _BYTE v27[16]; // [rsp+40h] [rbp-30h] BYREF
  tagObjLock *v28; // [rsp+50h] [rbp-20h]
  char v29; // [rsp+60h] [rbp-10h]

  if ( a4 != 1 )
  {
    if ( a4 == 2 )
    {
      v21 = SearchHidPageOnlyRequest(*((_WORD *)a3 + 8));
      if ( v21 || (v21 = AllocateAndLinkHidPageOnlyRequest(*((_WORD *)a3 + 8))) != 0LL )
      {
        *((_QWORD *)a3 + 3) = v21;
        SetHidPOCountToTLCInfo(*((_WORD *)a3 + 8), ++*((_DWORD *)v21 + 5), 0);
        v25 = (char *)a3 + 32;
        v26 = a6;
        HMAssignmentLock(&v25, 0LL);
        v12 = *((_QWORD *)a1 + 103) + 32LL;
        goto LABEL_9;
      }
      UserSetLastError(8);
      return 0LL;
    }
    if ( a4 != 3 )
      goto LABEL_12;
    if ( !a5 )
    {
      v22 = SGDGetUserSessionState(a1);
      RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
        (RIMLOCKExclusiveIfNeeded *)&v25,
        (struct RIMLOCK *)(v22 + 288));
      v23 = SearchHidTLCInfo(*((unsigned __int16 *)a3 + 8), *((unsigned __int16 *)a3 + 9));
      if ( !v23 )
      {
        v23 = AllocateAndLinkHidTLCInfo(*((unsigned __int16 *)a3 + 8), *((_WORD *)a3 + 9));
        if ( !v23 )
        {
LABEL_25:
          UserSetLastError(8);
          RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v25);
          return 0LL;
        }
      }
      *((_QWORD *)a3 + 3) = v23;
      ++*(_DWORD *)(v23 + 36);
      RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v25);
    }
    v12 = *((_QWORD *)a1 + 103) + 48LL;
    v24 = *(_QWORD *)v12;
    if ( *(_QWORD *)(*(_QWORD *)v12 + 8LL) == v12 )
    {
      *(_QWORD *)a3 = v24;
      *((_QWORD *)a3 + 1) = v12;
      *(_QWORD *)(v24 + 8) = a3;
      goto LABEL_11;
    }
LABEL_39:
    __fastfail(3u);
  }
  if ( !a5 )
  {
    v10 = SGDGetUserSessionState(a1);
    RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v25, (struct RIMLOCK *)(v10 + 288));
    v11 = SearchHidTLCInfo(*((unsigned __int16 *)a3 + 8), *((unsigned __int16 *)a3 + 9));
    if ( v11 || (v11 = AllocateAndLinkHidTLCInfo(*((unsigned __int16 *)a3 + 8), *((_WORD *)a3 + 9))) != 0 )
    {
      *((_QWORD *)a3 + 3) = v11;
      ++*(_DWORD *)(v11 + 24);
      RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v25);
      goto LABEL_6;
    }
    goto LABEL_25;
  }
LABEL_6:
  if ( !a7 )
  {
    v25 = (char *)a3 + 32;
    v26 = a6;
    HMAssignmentLock(&v25, 0LL);
  }
  v12 = *((_QWORD *)a1 + 103) + 16LL;
LABEL_9:
  v13 = *(_QWORD *)v12;
  if ( *(_QWORD *)(*(_QWORD *)v12 + 8LL) != v12 )
    goto LABEL_39;
  *(_QWORD *)a3 = v13;
  *((_QWORD *)a3 + 1) = v12;
  *(_QWORD *)(v13 + 8) = a3;
LABEL_11:
  *(_QWORD *)v12 = a3;
LABEL_12:
  v14 = *((_DWORD *)a3 + 5) ^ (*((_DWORD *)a3 + 5) ^ (*((_DWORD *)a2 + 1) >> 11)) & 4u;
  *((_DWORD *)a3 + 5) = v14;
  if ( (*((_DWORD *)a2 + 1) & 0x1100) != 0 )
  {
    if ( !a5 && (v14 & 1) == 0 )
    {
      ++*(_DWORD *)(*((_QWORD *)a1 + 103) + 80LL);
      DomainSharedRecursive<>::DomainExclusiveRecursive<>::ObjectLockRecursive<tagObjLock>::ObjectLockRecursive<tagObjLock>(
        v27,
        gHidCountersLock);
      v19 = SGDGetUserSessionState(v18);
      ++*(_DWORD *)(v19 + 16856);
      if ( v29 )
      {
        if ( v28 )
          tagObjLock::UnLockExclusive(v28);
      }
    }
    v20 = *((_DWORD *)a3 + 5) | 1;
    *((_DWORD *)a3 + 5) = v20;
    if ( (*((_DWORD *)a2 + 1) & 0x1000) != 0 )
      v14 = v20 | 2u;
    else
      v14 = v20 & 0xFFFFFFFD;
    *((_DWORD *)a3 + 5) = v14;
  }
  v15 = SGDGetUserSessionState(v14);
  for ( i = CBaseInput::TmpGetDeviceList(*(CBaseInput **)(v15 + 16840)); i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
    PostDeviceNotification(a3, i, 0);
  return 1LL;
}
