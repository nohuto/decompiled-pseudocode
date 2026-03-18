/*
 * XREFs of DxgkGetAdapter @ 0x1C01F3660
 * Callers:
 *     <none>
 * Callees:
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C00049B8 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00074A8 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000763C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00076E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C001B994 (-SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@PEAKAEAE@Z @ 0x1C01F3860 (-DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@PEAKAEAE@Z.c)
 */

__int64 __fastcall DxgkGetAdapter(_QWORD *a1, struct _LUID *a2, PDEVICE_OBJECT *a3, _QWORD *a4, _BYTE *a5)
{
  unsigned int *v9; // rbx
  __int64 v10; // rcx
  DXGPROCESS *Current; // rax
  bool IsRemoteConnection; // al
  unsigned int *v13; // rcx
  int DefaultRenderAdapterForSession; // ebx
  __int64 v15; // rcx
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  __int64 v17; // rcx
  DXGSESSIONMGR *v18; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v21; // rdx
  unsigned __int8 v23[4]; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v24[12]; // [rsp+54h] [rbp-2Ch] BYREF
  __int64 v25; // [rsp+60h] [rbp-20h]
  _BYTE v26[8]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v27; // [rsp+70h] [rbp-10h]
  char v28; // [rsp+78h] [rbp-8h]

  *(_DWORD *)&v24[8] = 0;
  v23[0] = 0;
  *(_QWORD *)v24 = (unsigned int)PsGetCurrentProcessSessionId(a1);
  v9 = 0LL;
  Current = DXGPROCESS::GetCurrent(v10);
  if ( Current )
  {
    IsRemoteConnection = DXGPROCESS::IsRemoteConnection(Current);
    v13 = (unsigned int *)v24;
    if ( !IsRemoteConnection )
      v13 = 0LL;
    v9 = v13;
  }
  DefaultRenderAdapterForSession = DxgkpFindDefaultRenderAdapterForSession(
                                     a2,
                                     (struct DXGADAPTER_REFERENCE *)&v24[4],
                                     v9,
                                     v23);
  if ( DefaultRenderAdapterForSession >= 0 )
  {
    v27 = *(_QWORD *)&v24[4];
    v28 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v26);
    if ( *(_DWORD *)(*(_QWORD *)&v24[4] + 200LL) != 1
      || (v15 = *(_QWORD *)&v24[4], *(_BYTE *)(*(_QWORD *)&v24[4] + 2833LL)) )
    {
      DefaultRenderAdapterForSession = -1073741275;
      WdLogSingleEntry1(2LL, -1073741275LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DxgkGetAdapter(): Aadapter found is not active, returning 0x%I64x.",
        -1073741275LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      *a2 = *(struct _LUID *)(*(_QWORD *)&v24[4] + 404LL);
      if ( a1 )
      {
        if ( !a4 )
        {
          WdLogSingleEntry1(1LL, 4617LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"(NULL != pReferenceCookie)",
            4617LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v15 = *(_QWORD *)&v24[4];
        }
        if ( !a3 )
        {
          WdLogSingleEntry1(1LL, 4618LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"(NULL != ppPhysicalDeviceHandle)",
            4618LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v15 = *(_QWORD *)&v24[4];
        }
        DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(v15 + 216));
        *a3 = DeviceAttachmentBaseRef;
        ObfDereferenceObject(DeviceAttachmentBaseRef);
        v18 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
        if ( v18 )
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v17);
          SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                             v18,
                                             CurrentProcessSessionId);
          if ( SessionDataForSpecifiedSession )
            DXGSESSIONDATA::SetAdapterLuidInRemoteSession(
              SessionDataForSpecifiedSession,
              *(struct DXGADAPTER **)&v24[4]);
        }
        v21 = *(_QWORD *)&v24[4];
        if ( a5 )
          *a5 = *(_BYTE *)(*(_QWORD *)&v24[4] + 209LL);
        *a4 = v25;
        *a1 = v21;
        *(_QWORD *)&v24[4] = 0LL;
      }
      DefaultRenderAdapterForSession = 0;
    }
    if ( v28 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v26);
  }
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER **)&v24[4], 0LL);
  return (unsigned int)DefaultRenderAdapterForSession;
}
