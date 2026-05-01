/*
 * XREFs of ?HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x1800228C0
 * Callers:
 *     ?HamSrvTerminateActivityHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KK@Z @ 0x18000406C (-HamSrvTerminateActivityHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMIN.c)
 *     ?HamSrvStopActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180006A1C (-HamSrvStopActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     ?HamSrvCloseActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180022758 (-HamSrvCloseActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     ?HamSrvUpdateActivityProperties@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x180023284 (-HamSrvUpdateActivityProperties@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_DYNAMIC_PROPERT.c)
 *     ?HamSrvResetExternalResourcePriority@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KE@Z @ 0x18007B450 (-HamSrvResetExternalResourcePriority@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KE@Z.c)
 *     ?HamSrvSetExternalResourcePriority@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY@@@Z @ 0x18007B5DC (-HamSrvSetExternalResourcePriority@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_RM_RESOURCE_REQUEST_EXTER.c)
 * Callees:
 *     CemRcObjectDereference @ 0x1800273B0 (CemRcObjectDereference.c)
 *     ?HampActCompareByHandle@@YAJPEAX0@Z @ 0x180032AE0 (-HampActCompareByHandle@@YAJPEAX0@Z.c)
 */

struct _HAM_ACTIVITY *__fastcall HampActFindForClient(struct _HAM_CLIENT_CONTEXT *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbp
  __int64 v5; // rax
  unsigned __int64 v6; // rbx
  int v7; // edi
  int v8; // eax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdi
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)a1 + 216LL;
  v12 = a2;
  v4 = v3 + 16;
  RtlAcquireSRWLockShared(v3 + 16);
  v5 = *(_QWORD *)(v3 + 8);
  v6 = *(_QWORD *)v3;
  if ( (v5 & 1) != 0 && v6 )
    v6 ^= v3;
  v7 = v5 & 1;
  while ( v6 )
  {
    v8 = HampActCompareByHandle(&v12, (void *)v6);
    if ( v8 >= 0 )
    {
      if ( v8 <= 0 )
        break;
      v9 = *(_QWORD *)(v6 + 8);
      if ( v7 && v9 )
      {
LABEL_20:
        v6 ^= v9;
        continue;
      }
    }
    else
    {
      v9 = *(_QWORD *)v6;
      if ( v7 && v9 )
        goto LABEL_20;
    }
    v6 = v9;
  }
  v10 = v6;
  if ( v6 )
  {
    if ( *(_QWORD *)(v6 + 24) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v6 + 24)) <= 1 )
        __fastfail(0xEu);
    }
    else
    {
      v10 = 0LL;
    }
  }
  RtlReleaseSRWLockShared(v4);
  if ( v10 )
  {
    if ( *(struct _HAM_CLIENT_CONTEXT **)(v10 + 64) == a1 )
      return (struct _HAM_ACTIVITY *)v10;
    CemRcObjectDereference(v10);
  }
  return 0LL;
}
