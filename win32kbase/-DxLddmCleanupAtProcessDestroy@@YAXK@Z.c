/*
 * XREFs of ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C006D050
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1C006D158 (-GrepCloseCurrentProcess@@YAHXZ.c)
 * Callees:
 *     GreUnlockDisplayDevice @ 0x1C001F8B0 (GreUnlockDisplayDevice.c)
 *     GreLockDisplayDevice @ 0x1C001F900 (GreLockDisplayDevice.c)
 *     GreUnlockSprite @ 0x1C001F940 (GreUnlockSprite.c)
 *     GreLockSprite @ 0x1C001F9A0 (GreLockSprite.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C004E7E8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C004E850 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bRenderLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C006BF4C (-bRenderLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x1C006D990 (--$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     GreLockVisRgn @ 0x1C00794E0 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C00795D0 (GreUnlockVisRgn.c)
 *     ?DxLddmPrimaryLockProcessDestroy@@YAXPEAUHDEV__@@KPEAK@Z @ 0x1C00BD294 (-DxLddmPrimaryLockProcessDestroy@@YAXPEAUHDEV__@@KPEAK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     ?DxLddmLogProcessPrimaryLockCount@@YAXK@Z @ 0x1C01956DC (-DxLddmLogProcessPrimaryLockCount@@YAXK@Z.c)
 */

void __fastcall DxLddmCleanupAtProcessDestroy(unsigned int a1)
{
  HDEV v2; // rbx
  int v3; // ecx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  void (__fastcall *v8)(_QWORD, __int64); // rdi
  __int64 CurrentProcess; // rax
  unsigned int CurrentProcessSessionId; // eax
  HDEV v11; // [rsp+38h] [rbp+10h] BYREF
  unsigned int v12; // [rsp+40h] [rbp+18h] BYREF

  v12 = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v11);
  v2 = (HDEV)hdevEnumerate<1>(0LL);
  if ( v2 )
  {
    do
    {
      v3 = (_DWORD)v2[10] & 0x20001;
      v11 = v2;
      if ( v3 == 1 && (unsigned int)PDEVOBJ::bRenderLddmDriver((PDEVOBJ *)&v11) )
      {
        GreLockVisRgn(v2);
        GreLockSprite((__int64)v2);
        GreLockDisplayDevice((__int64)v2);
        DxLddmPrimaryLockProcessDestroy(v2, a1, &v12);
        v8 = (void (__fastcall *)(_QWORD, __int64))*((_QWORD *)v2 + 329);
        if ( v8 )
        {
          CurrentProcess = PsGetCurrentProcess(v5, v4, v6, v7);
          v8(*((_QWORD *)v2 + 221), CurrentProcess);
        }
        else
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId();
          WdLogSingleEntry1(2LL, CurrentProcessSessionId);
        }
        GreUnlockDisplayDevice((__int64)v2);
        GreUnlockSprite((__int64)v2);
        GreUnlockVisRgn(v2);
      }
      v2 = (HDEV)hdevEnumerate<1>(v2);
    }
    while ( v2 );
    if ( v12 )
      DxLddmLogProcessPrimaryLockCount(v12);
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v11);
}
