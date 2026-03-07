__int64 __fastcall NtReplaceKey(_OWORD *a1, int a2, _OWORD *a3)
{
  char v6; // si
  char PreviousMode; // di
  char UnloadRundown; // r13
  int v9; // ebx
  __int64 v10; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // r9
  int v13; // r8d
  int v14; // r9d
  int v15; // eax
  _QWORD *v16; // rdi
  int v17; // eax
  unsigned int v18; // eax
  char *v19; // rdx
  ULONG v21; // [rsp+20h] [rbp-E0h]
  PVOID Object; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v24[2]; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P[2]; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v26[2]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v27; // [rsp+80h] [rbp-80h] BYREF
  __int128 v28; // [rsp+90h] [rbp-70h] BYREF
  __int128 v29; // [rsp+A0h] [rbp-60h]
  __int128 v30; // [rsp+B0h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+C0h] [rbp-40h] BYREF
  PVOID *p_Object; // [rsp+E0h] [rbp-20h]
  __int64 v33; // [rsp+E8h] [rbp-18h]
  __int64 *v34; // [rsp+F0h] [rbp-10h]
  __int64 v35; // [rsp+F8h] [rbp-8h]

  Object = 0LL;
  v27 = 0LL;
  v6 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v24[1] = v24;
  v24[0] = v24;
  *(_OWORD *)v26 = 0LL;
  *(_OWORD *)P = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  CmpInitializeThreadInfo((__int64)&v27);
  UnloadRundown = CmpAcquireHiveLoadUnloadRundown();
  if ( UnloadRundown )
  {
    v9 = CmCheckNoTxContext();
    if ( v9 >= 0 )
    {
      if ( SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
      {
        CurrentThread = KeGetCurrentThread();
        v6 = 1;
        --CurrentThread->KernelApcDisable;
        v9 = CmpNameFromAttributes(a1, PreviousMode, (UNICODE_STRING *)v26, v10);
        if ( v9 >= 0 )
        {
          v9 = CmpNameFromAttributes(a3, PreviousMode, (UNICODE_STRING *)P, v12);
          if ( v9 >= 0 )
          {
            LOBYTE(v14) = PreviousMode;
            v15 = CmObReferenceObjectByHandle(a2, 0, v13, v14, (__int64)&Object, 0LL);
            v16 = Object;
            v9 = v15;
            if ( v15 >= 0 )
            {
              if ( (*(_DWORD *)(*((_QWORD *)Object + 1) + 8LL) & 0x80u) == 0 )
              {
                if ( !CmpCallBackCount
                  || CmpIsRegistryLockAcquired()
                  || (*(_QWORD *)&v28 = v16,
                      *((_QWORD *)&v28 + 1) = P,
                      *(_QWORD *)&v29 = v26,
                      v17 = CmpCallCallBacksEx(0x2Du, &v28, 0LL, 1, 0x2Eu, 0LL, (__int64)v24),
                      v9 = v17,
                      v17 >= 0) )
                {
                  v18 = CmReplaceKey(*(_QWORD *)(v16[1] + 32LL));
                  v9 = CmPostCallbackNotificationEx(46, (__int64)v16, v18, (__int64)&v28, 0LL, v24);
                  if ( v9 == -1073740541 )
                    v9 = 0;
                }
                else if ( v17 == -1073740541 )
                {
                  v9 = 0;
                }
              }
              else
              {
                v9 = -1073741790;
              }
            }
            if ( v16 )
              ObfDereferenceObject(v16);
          }
        }
      }
      else
      {
        v9 = -1073741727;
      }
    }
  }
  else
  {
    v9 = -1073741431;
  }
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0);
  if ( v26[1] )
    ExFreePoolWithTag(v26[1], 0);
  if ( v6 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( UnloadRundown )
    CmpReleaseHiveLoadUnloadRundown();
  CmCleanupThreadInfo((__int64 *)&v27);
  if ( v9 >= 0 )
  {
    if ( (unsigned int)dword_140C04328 > 5 && tlgKeywordOn((__int64)&dword_140C04328, 0x400000000000LL) )
    {
      v33 = 8LL;
      p_Object = (PVOID *)&v23;
      v19 = byte_14003654B;
      v21 = 3;
      goto LABEL_35;
    }
  }
  else if ( (unsigned int)dword_140C04328 > 5 && tlgKeywordOn((__int64)&dword_140C04328, 0x400000000000LL) )
  {
    LODWORD(Object) = v9;
    p_Object = &Object;
    v19 = byte_140036581;
    v35 = 8LL;
    v34 = &v23;
    v33 = 4LL;
    v21 = 4;
LABEL_35:
    v23 = 0x1000000LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C04328, (unsigned __int8 *)v19, 0LL, 0LL, v21, &v31);
  }
  return (unsigned int)v9;
}
