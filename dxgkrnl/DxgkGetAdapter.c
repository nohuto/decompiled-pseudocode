/*
 * XREFs of DxgkGetAdapter @ 0x1C01E4D40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00097B8 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C0009F04 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C001B734 (-SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A9568 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@PEAKAEAE@Z @ 0x1C01E4F40 (-DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@PEAKAEAE@Z.c)
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
  __int64 v17; // rdx
  __int64 v18; // rcx
  DXGSESSIONMGR *v19; // rbx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v24; // rdx
  unsigned __int8 v26[4]; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v27[12]; // [rsp+54h] [rbp-2Ch] BYREF
  __int64 v28; // [rsp+60h] [rbp-20h]
  _BYTE v29[8]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v30; // [rsp+70h] [rbp-10h]
  char v31; // [rsp+78h] [rbp-8h]

  *(_DWORD *)&v27[8] = 0;
  v26[0] = 0;
  *(_QWORD *)v27 = (unsigned int)PsGetCurrentProcessSessionId(a1, a2, a3, a4);
  v9 = 0LL;
  Current = DXGPROCESS::GetCurrent(v10);
  if ( Current )
  {
    IsRemoteConnection = DXGPROCESS::IsRemoteConnection(Current);
    v13 = (unsigned int *)v27;
    if ( !IsRemoteConnection )
      v13 = 0LL;
    v9 = v13;
  }
  DefaultRenderAdapterForSession = DxgkpFindDefaultRenderAdapterForSession(
                                     a2,
                                     (struct DXGADAPTER_REFERENCE *)&v27[4],
                                     v9,
                                     v26);
  if ( DefaultRenderAdapterForSession >= 0 )
  {
    v30 = *(_QWORD *)&v27[4];
    v31 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v29);
    if ( *(_DWORD *)(*(_QWORD *)&v27[4] + 200LL) != 1
      || (v15 = *(_QWORD *)&v27[4], *(_BYTE *)(*(_QWORD *)&v27[4] + 2833LL)) )
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
      *a2 = *(struct _LUID *)(*(_QWORD *)&v27[4] + 404LL);
      if ( a1 )
      {
        if ( !a4 )
        {
          WdLogSingleEntry1(1LL, 4616LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"(NULL != pReferenceCookie)",
            4616LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v15 = *(_QWORD *)&v27[4];
        }
        if ( !a3 )
        {
          WdLogSingleEntry1(1LL, 4617LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"(NULL != ppPhysicalDeviceHandle)",
            4617LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v15 = *(_QWORD *)&v27[4];
        }
        DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(v15 + 216));
        *a3 = DeviceAttachmentBaseRef;
        ObfDereferenceObject(DeviceAttachmentBaseRef);
        v19 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
        if ( v19 )
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v18, v17, v20, v21);
          SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                             v19,
                                             CurrentProcessSessionId);
          if ( SessionDataForSpecifiedSession )
            DXGSESSIONDATA::SetAdapterLuidInRemoteSession(
              SessionDataForSpecifiedSession,
              *(struct DXGADAPTER **)&v27[4]);
        }
        v24 = *(_QWORD *)&v27[4];
        if ( a5 )
          *a5 = *(_BYTE *)(*(_QWORD *)&v27[4] + 209LL);
        *a4 = v28;
        *a1 = v24;
        *(_QWORD *)&v27[4] = 0LL;
      }
      DefaultRenderAdapterForSession = 0;
    }
    if ( v31 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v29);
  }
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER **)&v27[4], 0LL);
  return (unsigned int)DefaultRenderAdapterForSession;
}
