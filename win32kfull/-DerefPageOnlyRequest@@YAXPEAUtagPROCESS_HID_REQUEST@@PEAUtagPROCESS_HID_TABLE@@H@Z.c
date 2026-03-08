/*
 * XREFs of ?DerefPageOnlyRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@H@Z @ 0x1C01AA7F4
 * Callers:
 *     FreeHidProcessRequest @ 0x1C00D58B8 (FreeHidProcessRequest.c)
 *     ?RemoveProcRequest@@YAXPEAUtagPROCESSINFO@@PEAUtagPROCESS_HID_REQUEST@@KH@Z @ 0x1C01AABF8 (-RemoveProcRequest@@YAXPEAUtagPROCESSINFO@@PEAUtagPROCESS_HID_REQUEST@@KH@Z.c)
 * Callees:
 *     ??0?$ObjectLockRecursive@UtagObjLock@@@?$DomainExclusiveRecursive@$$V@?$DomainSharedRecursive@$$V@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00D680C (--0-$ObjectLockRecursive@UtagObjLock@@@-$DomainExclusiveRecursive@$$V@-$DomainSharedRecursive@$$.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?SetHidPOCountToTLCInfo@@YAXGKH@Z @ 0x1C01AAD08 (-SetHidPOCountToTLCInfo@@YAXGKH@Z.c)
 */

void __fastcall DerefPageOnlyRequest(struct tagPROCESS_HID_REQUEST *a1, struct tagPROCESS_HID_TABLE *a2, int a3)
{
  _QWORD *v6; // rcx
  __int64 v7; // rdx
  _QWORD *v8; // rax
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  _BYTE v12[16]; // [rsp+20h] [rbp-38h] BYREF
  tagObjLock *v13; // [rsp+30h] [rbp-28h]
  char v14; // [rsp+40h] [rbp-18h]

  SetHidPOCountToTLCInfo(*((_WORD *)a1 + 8), --*(_DWORD *)(*((_QWORD *)a1 + 3) + 20LL), a3);
  v6 = (_QWORD *)*((_QWORD *)a1 + 3);
  if ( !*((_DWORD *)v6 + 5) && a3 )
  {
    v7 = *v6;
    if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v8 = (_QWORD *)v6[1], (_QWORD *)*v8 != v6) )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    Win32FreePool(v6);
    *((_QWORD *)a1 + 3) = 0LL;
  }
  v9 = *((_DWORD *)a1 + 5);
  if ( (v9 & 1) != 0 )
  {
    *((_DWORD *)a1 + 5) = v9 & 0xFFFFFFFE;
    --*((_DWORD *)a2 + 20);
    DomainSharedRecursive<>::DomainExclusiveRecursive<>::ObjectLockRecursive<tagObjLock>::ObjectLockRecursive<tagObjLock>(
      (__int64)v12,
      gHidCountersLock);
    v11 = SGDGetUserSessionState(v10);
    --*(_DWORD *)(v11 + 16856);
    if ( v14 )
    {
      if ( v13 )
        tagObjLock::UnLockExclusive(v13);
    }
  }
}
