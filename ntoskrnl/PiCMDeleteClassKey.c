/*
 * XREFs of PiCMDeleteClassKey @ 0x140965DBC
 * Callers:
 *     PiCMHandleIoctl @ 0x1406CF040 (PiCMHandleIoctl.c)
 * Callees:
 *     PiAuDoesClientHaveAccess @ 0x1406C4454 (PiAuDoesClientHaveAccess.c)
 *     PiCMReleaseObjectInputData @ 0x1406C7AC0 (PiCMReleaseObjectInputData.c)
 *     PiCMReturnBasicResultData @ 0x1406C7AF0 (PiCMReturnBasicResultData.c)
 *     PiCMCaptureObjectInputData @ 0x1406C7B6C (PiCMCaptureObjectInputData.c)
 *     PiPnpRtlEndOperation @ 0x1406CCB7C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1406CDF98 (PiPnpRtlBeginOperation.c)
 *     _CmDeleteInstallerClass @ 0x140A5FD64 (_CmDeleteInstallerClass.c)
 *     _CmDeleteInterfaceClass @ 0x140A6012C (_CmDeleteInterfaceClass.c)
 */

__int64 __fastcall PiCMDeleteClassKey(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        PVOID **P)
{
  PVOID **v6; // r15
  int v9; // ebx
  int v10; // eax
  __int64 v11; // rbx
  int v12; // edi
  __int128 v14; // [rsp+30h] [rbp-30h] BYREF
  __int128 v15; // [rsp+40h] [rbp-20h]
  __int64 v16; // [rsp+50h] [rbp-10h]

  v6 = P;
  P = 0LL;
  v16 = 0LL;
  *(_DWORD *)v6 = 0;
  v14 = 0LL;
  v15 = 0LL;
  v9 = PiCMCaptureObjectInputData(a1, a2, a5, (__int64)&v14);
  if ( v9 >= 0 )
  {
    if ( PiAuDoesClientHaveAccess(2u) )
    {
      v11 = v15;
      if ( (_QWORD)v15
        && !HIDWORD(v15)
        && a3
        && a4 >= 8
        && (v12 = DWORD2(v14), (unsigned int)(DWORD2(v14) - 2) <= 1)
        && (unsigned int)(DWORD1(v14) - 1) <= 1 )
      {
        v10 = PiPnpRtlBeginOperation((__int64 **)&P);
        if ( v10 >= 0 )
        {
          if ( v12 == 3 )
            v10 = CmDeleteInterfaceClass(*(_QWORD *)&PiPnpRtlCtx, v11, 0LL);
          else
            v10 = CmDeleteInstallerClass(*(_QWORD *)&PiPnpRtlCtx, v11, 0LL);
        }
      }
      else
      {
        v10 = -1073741811;
      }
    }
    else
    {
      v10 = -1073741790;
    }
    v9 = PiCMReturnBasicResultData(v10, v16, a3, a4, v6);
  }
  PiCMReleaseObjectInputData((__int64)&v14);
  if ( P )
    PiPnpRtlEndOperation(P);
  return (unsigned int)v9;
}
