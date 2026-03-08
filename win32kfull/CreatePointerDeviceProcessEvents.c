/*
 * XREFs of CreatePointerDeviceProcessEvents @ 0x1C0079724
 * Callers:
 *     RawInputThread @ 0x1C007A0C0 (RawInputThread.c)
 * Callees:
 *     ?CreatePointerDeviceProcessEvent@@YAHKHEPEAGPEAPEAX@Z @ 0x1C0079794 (-CreatePointerDeviceProcessEvent@@YAHKHEPEAGPEAPEAX@Z.c)
 */

__int64 __fastcall CreatePointerDeviceProcessEvents(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rax

  v1 = SGDGetUserSessionState(a1);
  result = CreatePointerDeviceProcessEvent(
             0x100000u,
             1,
             1u,
             L"{773F1B9A-35B9-4E95-83A0-A210F2DE3B37}-running",
             (void **)(v1 + 16336));
  if ( (_DWORD)result )
  {
    v4 = SGDGetUserSessionState(v3);
    return CreatePointerDeviceProcessEvent(
             2u,
             0,
             0,
             L"{773F1B9A-35B9-4E95-83A0-A210F2DE3B37}-request",
             (void **)(v4 + 16344));
  }
  return result;
}
