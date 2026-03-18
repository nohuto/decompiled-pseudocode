/*
 * XREFs of ?OpenKeyedMutexFromNtHandle@DXGGLOBAL@@QEAAJPEAXPEAPEAVDXGKEYEDMUTEX@@PEAI0I@Z @ 0x1C0350A6C
 * Callers:
 *     DxgkOpenKeyedMutexFromNtHandle @ 0x1C0328940 (DxgkOpenKeyedMutexFromNtHandle.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0054234 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1C0350488 (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 */

__int64 __fastcall DXGGLOBAL::OpenKeyedMutexFromNtHandle(
        DXGGLOBAL *this,
        void *a2,
        struct DXGKEYEDMUTEX **a3,
        unsigned int *a4,
        char *a5,
        unsigned int a6)
{
  NTSTATUS v9; // eax
  unsigned int v10; // ebx
  __int64 *v12; // rbx
  __int64 v13; // rbx
  signed __int64 v14; // rax
  signed __int64 v15; // rtt
  int v16; // eax
  unsigned int v17; // esi
  PVOID Object; // [rsp+80h] [rbp+8h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+90h] [rbp+18h] BYREF

  Object = this;
  if ( !a3 )
  {
    WdLogSingleEntry1(1LL, 4715LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"ppKeyedMutex", 4715LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a4 )
  {
    WdLogSingleEntry1(1LL, 4716LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"phKeyedMutex", 4716LL, 0LL, 0LL, 0LL, 0LL);
  }
  *a3 = 0LL;
  *a4 = 0;
  HandleInformation = 0LL;
  Object = 0LL;
  v9 = ObReferenceObjectByHandle(a2, 0x20000u, g_pDxgkSharedKeyedMutexObjectType, 1, &Object, &HandleInformation);
  v10 = v9;
  if ( v9 == -1073741788 )
  {
    WdLogSingleEntry2(3LL, a2, -1073741788LL);
    return 3221225508LL;
  }
  else if ( v9 >= 0 )
  {
    v12 = (__int64 *)Object;
    if ( !Object )
    {
      WdLogSingleEntry1(1LL, 4751LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pSharedKeyedMutexObject", 4751LL, 0LL, 0LL, 0LL, 0LL);
    }
    v13 = *v12;
    _m_prefetchw((const void *)(v13 + 24));
    v14 = *(_QWORD *)(v13 + 24);
    do
    {
      if ( !v14 )
      {
        ObfDereferenceObject(Object);
        v10 = -1073741811;
        WdLogSingleEntry2(3LL, a2, -1073741811LL);
        return v10;
      }
      v15 = v14;
      v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 24), v14 + 1, v14);
    }
    while ( v15 != v14 );
    ObfDereferenceObject(Object);
    v16 = DXGKEYEDMUTEX::Open((DXGKEYEDMUTEX *)v13, a4, a5, a6, 1);
    v17 = v16;
    if ( v16 < 0 )
      WdLogSingleEntry2(3LL, a2, v16);
    else
      *a3 = (struct DXGKEYEDMUTEX *)v13;
    DXGKEYEDMUTEX::ReleaseReference((DXGKEYEDMUTEX *)v13);
    return v17;
  }
  else
  {
    WdLogSingleEntry2(3LL, a2, v9);
    return v10;
  }
}
