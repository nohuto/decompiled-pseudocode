/*
 * XREFs of PiCMRegisterDeviceInterface @ 0x140967714
 * Callers:
 *     PiCMHandleIoctl @ 0x1406CF040 (PiCMHandleIoctl.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x1402459EC (PiControlFreeUserModeCallersBuffer.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PiAuDoesClientHaveAccess @ 0x1406C4454 (PiAuDoesClientHaveAccess.c)
 *     PiCMReturnBufferResultData @ 0x1406D0ED4 (PiCMReturnBufferResultData.c)
 *     _CmValidateDeviceName @ 0x1406D3DF0 (_CmValidateDeviceName.c)
 *     IopRegisterDeviceInterface @ 0x14086A664 (IopRegisterDeviceInterface.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x14096513C (PiCMCaptureRegisterInterfaceInputData.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMRegisterDeviceInterface(
        unsigned __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  unsigned int v8; // ebx
  _WORD *v9; // rdi
  int v10; // esi
  __int64 v11; // rcx
  signed int v12; // r10d
  const wchar_t *v13; // rsi
  unsigned int v14; // edx
  int v15; // eax
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // bl
  int v19; // eax
  __int64 v20; // rbx
  _WORD *v21; // [rsp+50h] [rbp-39h] BYREF
  _DWORD *v22; // [rsp+58h] [rbp-31h]
  __int128 v23; // [rsp+60h] [rbp-29h] BYREF
  __int128 v24; // [rsp+70h] [rbp-19h]
  __int128 v25; // [rsp+80h] [rbp-9h]
  __int64 v26; // [rsp+90h] [rbp+7h]

  v22 = a6;
  v21 = 0LL;
  v26 = 0LL;
  v8 = 0;
  *a6 = 0;
  v9 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v10 = PiCMCaptureRegisterInterfaceInputData(a1, a2, a5, (__int64)&v23);
  if ( v10 < 0 )
    goto LABEL_16;
  if ( !PiAuDoesClientHaveAccess(2u) )
  {
    v12 = -1073741790;
LABEL_12:
    v14 = 0;
LABEL_13:
    v15 = PiCMReturnBufferResultData(v12, v14, 0, 0LL, 0, SHIDWORD(v26), a3, a4, v22);
    goto LABEL_14;
  }
  v13 = (const wchar_t *)*((_QWORD *)&v24 + 1);
  if ( !*((_QWORD *)&v24 + 1)
    || DWORD1(v23)
    || *((_QWORD *)&v25 + 1) && (unsigned int)v26 < 2
    || !a3
    || a4 < 0x14
    || a4 - 20 < 2 )
  {
    v12 = -1073741811;
    goto LABEL_12;
  }
  v12 = CmValidateDeviceName(v11, *((const wchar_t **)&v24 + 1));
  if ( v12 >= 0 )
  {
    v19 = IopRegisterDeviceInterface(v13, (int *)&v23 + 2, *((const wchar_t **)&v25 + 1), 1, (PVOID *)&v21, 0LL);
    v9 = v21;
    v12 = v19;
    if ( v19 >= 0 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( v21[v20] );
      v8 = v20 + 1;
      if ( 2 * (unsigned __int64)v8 > a4 - 20 )
      {
        v12 = -1073741789;
        v14 = 2 * v8;
        goto LABEL_13;
      }
    }
  }
  v14 = 2 * v8;
  if ( v12 < 0 )
    goto LABEL_13;
  v15 = PiCMReturnBufferResultData(v12, v14, 0, v9, v14, SHIDWORD(v26), a3, a4, v22);
LABEL_14:
  v10 = v15;
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
LABEL_16:
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( *((_QWORD *)&v24 + 1) )
    PiControlFreeUserModeCallersBuffer(CurrentThread->PreviousMode, *((void **)&v24 + 1));
  if ( *((_QWORD *)&v25 + 1) )
    PiControlFreeUserModeCallersBuffer(PreviousMode, *((void **)&v25 + 1));
  return (unsigned int)v10;
}
