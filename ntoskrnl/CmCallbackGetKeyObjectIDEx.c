/*
 * XREFs of CmCallbackGetKeyObjectIDEx @ 0x1407AAEC0
 * Callers:
 *     <none>
 * Callees:
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     CmCleanupThreadInfo @ 0x140263740 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140263760 (CmpInitializeThreadInfo.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     CmpUnlockKcbStack @ 0x1407ABFF8 (CmpUnlockKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1407AF294 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpConstructNameWithStatus @ 0x1407AF2E0 (CmpConstructNameWithStatus.c)
 *     CmpLockKcbStackShared @ 0x1407AF490 (CmpLockKcbStackShared.c)
 *     CmpLockRegistry @ 0x140AF2270 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF22C0 (CmpUnlockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140AF26E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF2710 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmCallbackGetKeyObjectIDEx(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, int a5)
{
  _QWORD *v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  int started; // ebx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v20; // [rsp+20h] [rbp-41h] BYREF
  __int128 v21; // [rsp+28h] [rbp-39h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+38h] [rbp-29h]
  __int128 v23; // [rsp+48h] [rbp-19h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-9h] BYREF

  v23 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeThreadInfo((__int64)&v23);
  v20 = 0LL;
  v21 = 0LL;
  WORD1(v21) = -1;
  *(_OWORD *)Privileges = 0LL;
  if ( !a2 || *(_DWORD *)a2 != 1803104306 || !v8 || a5 )
    goto LABEL_20;
  v9 = *(_QWORD *)(a2 + 8);
  if ( v7 )
    *v7 = v9;
  if ( !a4 )
  {
    started = 0;
    goto LABEL_15;
  }
  if ( (v9 & 1) == 0 )
  {
    CmpAttachToRegistryProcess(&ApcState);
    CmpLockRegistry(v11, v10, v12, v13);
    started = CmpStartKcbStackForTopLayerKcb(&v21, v9);
    if ( started >= 0 )
    {
      CmpLockKcbStackShared(&v21);
      if ( *(_QWORD *)(v9 + 80) && (int)CmpConstructNameWithStatus(v9, &v20) >= 0 )
      {
        started = 0;
        *a4 = v20;
      }
      else
      {
        started = -1073741670;
      }
      CmpUnlockKcbStack(&v21);
    }
    CmpUnlockRegistry(v15, v14, v17, v18);
    CmpDetachFromRegistryProcess(&ApcState);
  }
  else
  {
LABEL_20:
    started = -1073741811;
  }
LABEL_15:
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  CmCleanupThreadInfo((__int64 *)&v23);
  return (unsigned int)started;
}
