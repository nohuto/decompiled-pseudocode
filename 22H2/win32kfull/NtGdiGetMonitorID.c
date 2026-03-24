/*
 * XREFs of NtGdiGetMonitorID @ 0x1C0273AE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018B60 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018E8C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00B2890 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2938 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memmove @ 0x1C016DB40 (memmove.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

__int64 __fastcall NtGdiGetMonitorID(HDC a1, SIZE_T Length, void *a3)
{
  SIZE_T v4; // r14
  unsigned int v6; // edi
  __int64 v8; // rbx
  DYNAMICMODECHANGESHARELOCK *v9; // rcx
  __int64 v10; // rdx
  _DWORD *v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // esi
  _BYTE v14[8]; // [rsp+50h] [rbp-3D8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-3D0h] BYREF
  _QWORD v16[7]; // [rsp+68h] [rbp-3C0h] BYREF
  _DWORD v17[212]; // [rsp+A0h] [rbp-388h] BYREF

  v4 = (unsigned int)Length;
  v6 = 0;
  memset(v17, 0, 0x348uLL);
  if ( (unsigned int)UserSessionSwitchEnterCrit() )
    return 0LL;
  DCOBJ::DCOBJ((DCOBJ *)v16, a1);
  if ( v16[0] )
  {
    v8 = *(_QWORD *)(v16[0] + 48LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v14);
    if ( (*(_DWORD *)(v8 + 40) & 0x20000) != 0 )
    {
      v9 = *(DYNAMICMODECHANGESHARELOCK **)(*(_QWORD *)(v8 + 1800) + 40LL);
      v10 = *((_QWORD *)v9 + 322);
    }
    else
    {
      v10 = *(_QWORD *)(v8 + 2576);
    }
    if ( v10 == -4 )
    {
      DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 46LL);
      v10 = 0LL;
    }
    if ( v10 )
    {
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, (PCWSTR)(v10 + 64));
      v17[0] = 840;
      if ( (int)DrvEnumDisplayDevices(&DestinationString, 0LL, 0LL, v17, 0, 0) >= 0 )
        v6 = 1;
    }
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v9);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v16);
  if ( v6 )
  {
    v11 = &v17[82];
    v12 = -1LL;
    do
      ++v12;
    while ( *((_WORD *)&v17[82] + v12) );
    v13 = 2 * v12 + 2;
    if ( v13 > (unsigned int)v4 )
    {
      v6 = 0;
    }
    else
    {
      ProbeForWrite(a3, v4, 1u);
      memmove(a3, &v17[82], v13);
    }
  }
  UserSessionSwitchLeaveCrit(v11);
  return v6;
}
