_BOOL8 __fastcall PowerIsDisplayIdleExpired(int a1, int *a2)
{
  CInputGlobals *v3; // rbx
  unsigned __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _BOOL8 result; // rax
  int v19; // edx
  int v20; // ecx
  __int64 v21; // rax
  int v22; // [rsp+38h] [rbp+10h] BYREF

  v22 = 0;
  v3 = gpInputGlobals;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v3, 0LL);
  v5 = *((_QWORD *)v3 + 3);
  ExReleasePushLockSharedEx(v3, 0LL);
  KeLeaveCriticalRegion();
  if ( v5 >= *(_QWORD *)(SGDGetUserSessionState(v7, v6, v8, v9) + 3040) )
  {
    result = 0;
    if ( *(_DWORD *)(SGDGetUserSessionState(v11, v10, v12, v13) + 2864) > a1 )
    {
      v21 = SGDGetUserSessionState(v15, v14, v16, v17);
      if ( CInputGlobals::IsTimeFromLastInputEvent(gpInputGlobals, *(_DWORD *)(v21 + 2864) - a1)
        && !(unsigned int)PowerIsDisplayRequired()
        && !(unsigned int)PowerIsDisplayBurstActive(0LL) )
      {
        result = 1;
      }
    }
    v19 = 12;
    goto LABEL_5;
  }
  if ( (unsigned int)PowerIsDisplayBurstActive(&v22) )
  {
    v19 = v22;
    result = 0LL;
LABEL_5:
    v20 = result ? v19 : 0;
    goto LABEL_6;
  }
  v20 = v22;
  result = 1LL;
LABEL_6:
  if ( a2 )
    *a2 = v20;
  return result;
}
