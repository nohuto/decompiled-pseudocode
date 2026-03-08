/*
 * XREFs of ViDifCaptureIoCallbacks @ 0x1405CCB9C
 * Callers:
 *     VfDifCaptureIoCallbacks @ 0x1403035C4 (VfDifCaptureIoCallbacks.c)
 *     IovAttachDeviceToDeviceStack @ 0x140ABDFA4 (IovAttachDeviceToDeviceStack.c)
 * Callees:
 *     ViDifFindIoCallbackContext @ 0x1405CCD64 (ViDifFindIoCallbackContext.c)
 */

__int64 __fastcall ViDifCaptureIoCallbacks(_QWORD *a1)
{
  __int64 v1; // r9
  _QWORD *v3; // r8
  __int64 IoCallbackContext; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 (__fastcall *v7)(__int64, IRP *); // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 *v16; // r10
  __int64 v17; // r8
  __int64 (__fastcall **v18)(__int64, IRP *); // r9
  __int64 v19; // r11
  __int64 (__fastcall *v20)(__int64, IRP *); // rcx
  __int64 v21; // r11
  signed __int64 v22; // r10
  __int64 (__fastcall **v23)(__int64, IRP *); // rax
  __int64 v24; // r8
  __int64 (__fastcall *v25)(__int64, IRP *); // rcx
  __int64 (__fastcall *v26)(__int64, IRP *); // rax
  __int64 *v27; // r8
  __int64 *v28; // rdx

  v1 = a1[6];
  v3 = *(_QWORD **)(v1 + 64);
  if ( (VfRuleClasses & 0x800000000LL) != 0 )
  {
    IoCallbackContext = ViDifFindIoCallbackContext(268435485LL, a1);
    if ( IoCallbackContext )
    {
      if ( (*(_DWORD *)(IoCallbackContext + 8) & 1) != 0 )
      {
        v7 = *(__int64 (__fastcall **)(__int64, IRP *))(v5 + 96);
        if ( v7 )
        {
          if ( v7 != IopInvalidDeviceRequest )
          {
            *(_QWORD *)(v6 + 8) = v7;
            *(_QWORD *)(v5 + 96) = pXdvDriverStartIo;
          }
        }
      }
    }
    v8 = ViDifFindIoCallbackContext(268435487LL, v5);
    if ( v8 )
    {
      if ( (*(_DWORD *)(v8 + 8) & 1) != 0 )
      {
        v11 = *(_QWORD *)(v9 + 104);
        if ( v11 )
        {
          *(_QWORD *)(v10 + 16) = v11;
          *(_QWORD *)(v9 + 104) = pXdvDriverUnload;
        }
      }
    }
    result = ViDifFindIoCallbackContext(268435486LL, v9);
    if ( result )
    {
      result = *(unsigned int *)(result + 8);
      if ( (result & 1) != 0 )
      {
        result = *(_QWORD *)(v15 + 8);
        if ( result )
        {
          *(_QWORD *)(v14 + 24) = result;
          result = pXdvAddDevice;
          *(_QWORD *)(v15 + 8) = pXdvAddDevice;
        }
      }
    }
    v16 = (__int64 *)&off_140D671F0;
    v17 = v14 - v13;
    v18 = (__int64 (__fastcall **)(__int64, IRP *))(v13 + 112);
    v19 = 28LL;
    do
    {
      v20 = *v18;
      if ( *v18 && v20 != IopInvalidDeviceRequest )
      {
        result = *((unsigned int *)v16 - 2);
        if ( (result & 1) != 0 )
        {
          *(__int64 (__fastcall **)(__int64, IRP *))((char *)v18 + v17 - 80) = v20;
          result = *v16;
          *v18 = *(__int64 (__fastcall **)(__int64, IRP *))*v16;
        }
      }
      ++v18;
      v16 += 4;
      --v19;
    }
    while ( v19 );
  }
  else
  {
    v3[1] = a1[12];
    v21 = 28LL;
    v3[2] = a1[13];
    v22 = (char *)a1 - (char *)v3;
    v3[3] = *(_QWORD *)(v1 + 8);
    v23 = (__int64 (__fastcall **)(__int64, IRP *))(v3 + 4);
    v24 = 28LL;
    do
    {
      v25 = *(__int64 (__fastcall **)(__int64, IRP *))((char *)v23 + v22 + 80);
      if ( v25 && v25 != IopInvalidDeviceRequest )
        *v23 = v25;
      ++v23;
      --v24;
    }
    while ( v24 );
    v26 = (__int64 (__fastcall *)(__int64, IRP *))a1[12];
    if ( v26 && v26 != IopInvalidDeviceRequest )
      a1[12] = pXdvDriverStartIo;
    if ( a1[13] )
      a1[13] = pXdvDriverUnload;
    if ( *(_QWORD *)(v1 + 8) )
      *(_QWORD *)(v1 + 8) = pXdvAddDevice;
    v27 = (__int64 *)&off_140D671F0;
    v28 = a1 + 14;
    do
    {
      result = *v28;
      if ( *v28 && (__int64 (__fastcall *)(__int64, IRP *))result != IopInvalidDeviceRequest )
      {
        result = *v27;
        *v28 = *(_QWORD *)*v27;
      }
      ++v28;
      v27 += 4;
      --v21;
    }
    while ( v21 );
  }
  return result;
}
