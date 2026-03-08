/*
 * XREFs of PiCMGetObjectProperty @ 0x1406CF2B4
 * Callers:
 *     PiCMHandleIoctl @ 0x1406CF040 (PiCMHandleIoctl.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PiCMReleasePropertyInputData @ 0x1406CF510 (PiCMReleasePropertyInputData.c)
 *     PiCMCapturePropertyInputData @ 0x1406CF564 (PiCMCapturePropertyInputData.c)
 *     PiCMReturnBufferResultData @ 0x1406D0ED4 (PiCMReturnBufferResultData.c)
 *     _PnpGetObjectProperty @ 0x1406D0FB4 (_PnpGetObjectProperty.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMGetObjectProperty(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  void *Pool2; // rsi
  int ObjectProperty; // edi
  int v12; // r12d
  int v13; // ebx
  unsigned int v14; // r14d
  int v15; // eax
  unsigned int v17; // [rsp+60h] [rbp-79h] BYREF
  unsigned int v18; // [rsp+64h] [rbp-75h] BYREF
  _DWORD *v19; // [rsp+68h] [rbp-71h]
  _QWORD v20[10]; // [rsp+80h] [rbp-59h] BYREF

  v19 = a6;
  memset(v20, 0, 0x48uLL);
  *a6 = 0;
  Pool2 = 0LL;
  v17 = 0;
  v18 = 0;
  ObjectProperty = PiCMCapturePropertyInputData(a1, a2, a5, v20);
  if ( ObjectProperty < 0 )
    goto LABEL_25;
  v12 = v20[2];
  if ( !v20[2] || HIDWORD(v20[0]) || v20[7] || LODWORD(v20[8]) || LODWORD(v20[6]) || !a3 || a4 < 0x14 )
    goto LABEL_42;
  v13 = 6;
  if ( SLODWORD(v20[1]) > 6 )
  {
    switch ( LODWORD(v20[1]) )
    {
      case 0x10001:
        v13 = 7;
        break;
      case 0x10002:
        v13 = 8;
        break;
      case 0x10003:
        v13 = 9;
        break;
      case 0x10004:
        v13 = 10;
        break;
      case 0x10005:
        v13 = 11;
        break;
      default:
        goto LABEL_42;
    }
    if ( PiDrvDbCtx )
      goto LABEL_17;
LABEL_42:
    ObjectProperty = -1073741811;
LABEL_22:
    v15 = PiCMReturnBufferResultData((unsigned int)ObjectProperty, v18, v17, 0LL, 0, HIDWORD(v20[8]), a3, a4, v19);
    goto LABEL_23;
  }
  if ( LODWORD(v20[1]) == 6 )
    goto LABEL_17;
  if ( LODWORD(v20[1]) == 1 )
  {
    v13 = 1;
    goto LABEL_17;
  }
  if ( LODWORD(v20[1]) != 2 )
  {
    switch ( LODWORD(v20[1]) )
    {
      case 3:
        v13 = 4;
        goto LABEL_17;
      case 4:
        v13 = 3;
        goto LABEL_17;
      case 5:
        v13 = 5;
        goto LABEL_17;
    }
    goto LABEL_42;
  }
  v13 = 2;
LABEL_17:
  v14 = a4 - 20;
  if ( a4 != 20 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, v14, 879783504LL);
    if ( !Pool2 )
      ObjectProperty = -1073741670;
    if ( ObjectProperty < 0 )
      goto LABEL_22;
  }
  ObjectProperty = PnpGetObjectProperty(
                     PiPnpRtlCtx,
                     v12,
                     v13,
                     0,
                     0LL,
                     (__int64)&v20[3] + 4,
                     (__int64)&v17,
                     (__int64)Pool2,
                     v14,
                     (__int64)&v18,
                     0);
  if ( ObjectProperty < 0 )
    goto LABEL_22;
  v15 = PiCMReturnBufferResultData((unsigned int)ObjectProperty, v18, v17, Pool2, v18, HIDWORD(v20[8]), a3, a4, v19);
LABEL_23:
  ObjectProperty = v15;
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x34706E50u);
LABEL_25:
  PiCMReleasePropertyInputData(v20);
  return (unsigned int)ObjectProperty;
}
