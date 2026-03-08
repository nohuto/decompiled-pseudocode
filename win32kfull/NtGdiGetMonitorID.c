/*
 * XREFs of NtGdiGetMonitorID @ 0x1C000FDB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002A694 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002A6E0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall NtGdiGetMonitorID(HDC a1, SIZE_T Length, void *a3)
{
  SIZE_T v4; // r14
  unsigned int v6; // edi
  __int64 v7; // rbx
  int v8; // r8d
  __int64 v9; // rdx
  _WORD *v10; // rcx
  __int64 v11; // rax
  unsigned int v12; // esi
  _BYTE v14[8]; // [rsp+50h] [rbp-3B8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-3B0h] BYREF
  _QWORD v16[3]; // [rsp+68h] [rbp-3A0h] BYREF
  _DWORD v17[82]; // [rsp+80h] [rbp-388h] BYREF
  _WORD Src[260]; // [rsp+1C8h] [rbp-240h] BYREF

  v4 = (unsigned int)Length;
  v6 = 0;
  memset_0(v17, 0, 0x348uLL);
  if ( (unsigned int)UserSessionSwitchEnterCrit() )
    return 0LL;
  DCOBJ::DCOBJ((DCOBJ *)v16, a1);
  if ( v16[0] )
  {
    v7 = *(_QWORD *)(v16[0] + 48LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v14);
    v8 = *(_DWORD *)(v7 + 40);
    if ( (v8 & 0x20000) != 0 )
      v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 1768) + 40LL) + 2552LL);
    else
      v9 = *(_QWORD *)(v7 + 2552);
    if ( v9 == -4 )
    {
      DbgkWerCaptureLiveKernelDump(
        L"win32kfull.sys",
        356LL,
        46LL,
        *(_QWORD *)&v8 & 0x20000LL,
        v8 & 0x400,
        0LL,
        0LL,
        0LL,
        0);
      v9 = 0LL;
    }
    if ( v9 )
    {
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, (PCWSTR)(v9 + 64));
      v17[0] = 840;
      if ( (int)DrvEnumDisplayDevices(&DestinationString, 0LL, 0LL, v17, 0, 0) >= 0 )
        v6 = 1;
    }
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v14);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v16);
  if ( v6 )
  {
    v10 = Src;
    v11 = -1LL;
    do
      ++v11;
    while ( Src[v11] );
    v12 = 2 * v11 + 2;
    if ( v12 > (unsigned int)v4 )
    {
      v6 = 0;
    }
    else
    {
      ProbeForWrite(a3, v4, 1u);
      memmove(a3, Src, v12);
    }
  }
  UserSessionSwitchLeaveCrit(v10);
  return v6;
}
