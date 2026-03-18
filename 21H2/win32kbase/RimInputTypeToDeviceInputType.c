/*
 * XREFs of RimInputTypeToDeviceInputType @ 0x1C00B5F24
 * Callers:
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x1C00B5BF0 (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z.c)
 *     ?OnRemoteCloseNotification@CBaseInput@@AEAAJXZ @ 0x1C00B5D20 (-OnRemoteCloseNotification@CBaseInput@@AEAAJXZ.c)
 *     ?OnRemoteOpenNotification@CBaseInput@@AEAAJXZ @ 0x1C00D22D0 (-OnRemoteOpenNotification@CBaseInput@@AEAAJXZ.c)
 *     ?ivInitialSendPnpForChildPartition@CBaseInput@@IEAAXUCONTAINER_ID@@@Z @ 0x1C01EEEF8 (-ivInitialSendPnpForChildPartition@CBaseInput@@IEAAXUCONTAINER_ID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RimInputTypeToDeviceInputType(int a1)
{
  __int64 result; // rax

  result = 1LL;
  if ( a1 == 1 )
    return 0LL;
  if ( a1 != 2 )
  {
    result = 3LL;
    if ( (a1 & 0x3C) != 0 )
      return 2LL;
  }
  return result;
}
