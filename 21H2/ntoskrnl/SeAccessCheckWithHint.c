/*
 * XREFs of SeAccessCheckWithHint @ 0x1403589C0
 * Callers:
 *     ExCpuSetResourceManagerAccessCheck @ 0x14023B914 (ExCpuSetResourceManagerAccessCheck.c)
 *     RtlpAllowsLowBoxAccess @ 0x1402457A8 (RtlpAllowsLowBoxAccess.c)
 *     SeAccessCheckFromStateEx @ 0x1402544E0 (SeAccessCheckFromStateEx.c)
 *     RtlCheckTokenMembershipEx @ 0x14026D700 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x140586960 (RtlCheckTokenCapability.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x1406CA2B0 (ObpVerifyAccessToBoundaryEntry.c)
 *     ObpLookupObjectName @ 0x14070B300 (ObpLookupObjectName.c)
 *     RtlIsSandboxedToken @ 0x14071C8A0 (RtlIsSandboxedToken.c)
 *     ExpCheckWakeTimerAccess @ 0x14078E798 (ExpCheckWakeTimerAccess.c)
 * Callees:
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x140358A30 (SeAccessCheckWithHintWithAdminlessChecks.c)
 */

__int64 __fastcall SeAccessCheckWithHint(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        char a9,
        __int64 a10,
        __int64 a11)
{
  char v13; // [rsp+58h] [rbp-10h]

  v13 = 0;
  return SeAccessCheckWithHintWithAdminlessChecks(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, v13);
}
