/*
 * XREFs of rimCreateDev @ 0x1C00371D0
 * Callers:
 *     RIMCreateDev @ 0x1C0036CBC (RIMCreateDev.c)
 *     RIMVirtCreateDev @ 0x1C019DFF8 (RIMVirtCreateDev.c)
 * Callees:
 *     RawInputManagerDeviceObjectCreateKernelHandle @ 0x1C00372A0 (RawInputManagerDeviceObjectCreateKernelHandle.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0037330 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RawInputManagerDeviceObjectCreate @ 0x1C00373B8 (RawInputManagerDeviceObjectCreate.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

_QWORD *__fastcall rimCreateDev(int a1, int a2, int a3, int a4)
{
  _QWORD *v4; // rbx
  int v5; // edx
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // rdi
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0LL;
  v11 = 0LL;
  Handle = 0LL;
  v12 = 0LL;
  if ( (int)RawInputManagerDeviceObjectCreate(a1, a2, a3, a4, &Handle) >= 0 )
  {
    if ( (int)RawInputManagerDeviceObjectResolveHandle(Handle, 3LL, 1LL, &v11) < 0 )
    {
      ObCloseHandle(Handle, 1);
    }
    else
    {
      v8 = v11;
      if ( (int)RawInputManagerDeviceObjectCreateKernelHandle(v11, v5, v6, v7, (__int64)&v12) >= 0 )
      {
        if ( v8 )
          v4 = (_QWORD *)(v8 + 72);
        memset(v4, 0, 0x918uLL);
        v4[4] = v8;
        v4[2] = Handle;
        v4[3] = v12;
        v4[14] = v4 + 13;
        v4[13] = v4 + 13;
        v4[16] = v4 + 15;
        v4[15] = v4 + 15;
        v4[18] = v4 + 17;
        v4[17] = v4 + 17;
      }
    }
  }
  return v4;
}
