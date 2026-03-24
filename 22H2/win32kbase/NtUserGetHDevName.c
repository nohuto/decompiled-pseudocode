/*
 * XREFs of NtUserGetHDevName @ 0x1C0010AD0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateSharedHandle @ 0x1C0010E18 (HMValidateSharedHandle.c)
 *     DrvGetHdevName @ 0x1C0010ED0 (DrvGetHdevName.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0010F04 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     EnterSharedCrit @ 0x1C00372A0 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0039D2C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 */

__int64 __fastcall NtUserGetHDevName(__int64 a1, ULONG64 a2)
{
  int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rcx
  _BYTE *v7; // r8
  unsigned __int16 v9[32]; // [rsp+40h] [rbp-58h] BYREF

  memset(v9, 0, sizeof(v9));
  v4 = 0;
  EnterSharedCrit(0LL, 1LL);
  v5 = HMValidateSharedHandle(a1);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 240);
    if ( v6 )
    {
      if ( (unsigned int)DrvGetHdevName(v6, v9) )
      {
        v9[31] = 0;
        if ( (a2 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v7 = (_BYTE *)a2;
        if ( a2 >= MmUserProbeAddress )
          v7 = (_BYTE *)MmUserProbeAddress;
        *v7 = *v7;
        v7[63] = v7[63];
        v6 = RtlStringCchCopyW((unsigned __int16 *)a2, 0x20uLL, v9) >= 0;
        v4 = v6;
      }
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v4;
}
