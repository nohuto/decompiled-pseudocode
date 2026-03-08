/*
 * XREFs of DestroyThreadHidObjects @ 0x1C00D5730
 * Callers:
 *     <none>
 * Callees:
 *     PtiMouseFromQ @ 0x1C0037050 (PtiMouseFromQ.c)
 *     UpdateRawMouseMode @ 0x1C00CE364 (UpdateRawMouseMode.c)
 *     FreeHidProcessRequest @ 0x1C00D58B8 (FreeHidProcessRequest.c)
 *     ?SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z @ 0x1C00D5DF8 (-SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z.c)
 *     ??0?$ObjectLockRecursive@UtagObjLock@@@?$DomainExclusiveRecursive@$$V@?$DomainSharedRecursive@$$V@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00D680C (--0-$ObjectLockRecursive@UtagObjLock@@@-$DomainExclusiveRecursive@$$V@-$DomainSharedRecursive@$$.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?HasRawKeyboardPerThreadRegistration@@YAHPEBUtagPROCESSINFO@@@Z @ 0x1C01AA8F0 (-HasRawKeyboardPerThreadRegistration@@YAHPEBUtagPROCESSINFO@@@Z.c)
 */

__int64 __fastcall DestroyThreadHidObjects(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 result; // rax
  char v6; // dl
  struct tagPROCESS_HID_REQUEST *v7; // rsi
  struct tagPROCESS_HID_REQUEST *v8; // rcx
  struct tagPROCESS_HID_REQUEST *v9; // rsi
  struct tagPROCESS_HID_REQUEST *v10; // rsi
  unsigned int v11; // eax
  unsigned int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  const struct tagPROCESSINFO *v19; // rcx
  struct tagPROCESSINFO *v20; // rcx
  struct tagPROCESS_HID_REQUEST *v21; // rcx
  struct tagPROCESS_HID_REQUEST *v22; // rcx
  unsigned int v23; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v24[16]; // [rsp+28h] [rbp-50h] BYREF
  tagObjLock *v25; // [rsp+38h] [rbp-40h]
  char v26; // [rsp+48h] [rbp-30h]

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 424) + 824LL);
  v3 = *(_QWORD *)(v2 + 72);
  if ( v3 )
  {
    if ( *(_QWORD *)(v3 + 16) == a1 )
    {
      HMAssignmentUnlock(v2 + 72);
      v11 = *(_DWORD *)(v2 + 100) & 0xFFFFFFCF;
      *(_DWORD *)(v2 + 100) = v11;
      if ( (v11 & 0x40) != 0 )
      {
        DomainSharedRecursive<>::DomainExclusiveRecursive<>::ObjectLockRecursive<tagObjLock>::ObjectLockRecursive<tagObjLock>(
          v24,
          gHidCountersLock);
        v16 = SGDGetUserSessionState(v15);
        --*(_DWORD *)(v16 + 16848);
        if ( v26 && v25 )
          tagObjLock::UnLockExclusive(v25);
        *(_DWORD *)(v2 + 100) &= ~0x40u;
      }
    }
  }
  v4 = *(_QWORD *)(v2 + 64);
  if ( v4 && *(_QWORD *)(v4 + 16) == a1 )
  {
    HMAssignmentUnlock(v2 + 64);
    v12 = *(_DWORD *)(v2 + 100) & 0xFFFFF7FC;
    *(_DWORD *)(v2 + 100) = v12;
    if ( (v12 & 4) != 0 )
    {
      DomainSharedRecursive<>::DomainExclusiveRecursive<>::ObjectLockRecursive<tagObjLock>::ObjectLockRecursive<tagObjLock>(
        v24,
        gHidCountersLock);
      v18 = SGDGetUserSessionState(v17);
      --*(_DWORD *)(v18 + 16852);
      if ( v26 )
      {
        if ( v25 )
          tagObjLock::UnLockExclusive(v25);
        v26 = 0;
      }
      *(_DWORD *)(v2 + 100) &= ~4u;
    }
    v13 = gpqForeground;
    if ( gpqForeground )
      v14 = PtiMouseFromQ(gpqForeground);
    else
      v14 = 0LL;
    if ( v14 == a1 )
      UpdateRawMouseMode(v13);
  }
  *(_QWORD *)(v2 + 88) = 0LL;
  *(_DWORD *)(v2 + 96) = 0;
  result = *(unsigned int *)(a1 + 1272);
  if ( (result & 0x200000) != 0 )
  {
    v19 = *(const struct tagPROCESSINFO **)(a1 + 424);
    *(_DWORD *)(a1 + 1272) = result & 0xFFDFFFFF;
    result = HasRawKeyboardPerThreadRegistration(v19);
    if ( !(_DWORD)result )
    {
      v23 = 0;
      result = (__int64)SearchProcessHidRequest(v20, 1u, 6u, &v23);
      if ( result )
      {
        result = FreeHidProcessRequest((struct tagPROCESS_HID_REQUEST *)result);
        *(_DWORD *)(v2 + 100) &= 0xFFFFFFCF;
      }
    }
  }
  v6 = 0;
  v7 = *(struct tagPROCESS_HID_REQUEST **)(v2 + 16);
  while ( v7 != (struct tagPROCESS_HID_REQUEST *)(v2 + 16) )
  {
    v8 = v7;
    v7 = *(struct tagPROCESS_HID_REQUEST **)v7;
    result = *((_QWORD *)v8 + 4);
    if ( result )
    {
      if ( *(_QWORD *)(result + 16) == a1 )
      {
        result = FreeHidProcessRequest(v8);
        v6 = 1;
      }
    }
  }
  v9 = *(struct tagPROCESS_HID_REQUEST **)(v2 + 32);
  while ( v9 != (struct tagPROCESS_HID_REQUEST *)(v2 + 32) )
  {
    v21 = v9;
    v9 = *(struct tagPROCESS_HID_REQUEST **)v9;
    result = *((_QWORD *)v21 + 4);
    if ( result && *(_QWORD *)(result + 16) == a1 )
    {
      result = FreeHidProcessRequest(v21);
      v6 = 1;
    }
  }
  v10 = *(struct tagPROCESS_HID_REQUEST **)(v2 + 48);
  while ( v10 != (struct tagPROCESS_HID_REQUEST *)(v2 + 48) )
  {
    v22 = v10;
    v10 = *(struct tagPROCESS_HID_REQUEST **)v10;
    result = *((_QWORD *)v22 + 4);
    if ( result && *(_QWORD *)(result + 16) == a1 )
    {
      result = FreeHidProcessRequest(v22);
      v6 = 1;
    }
  }
  if ( v6 )
  {
    result = *(_QWORD *)(a1 + 424);
    *(_DWORD *)(result + 812) |= 0x8000000u;
  }
  return result;
}
