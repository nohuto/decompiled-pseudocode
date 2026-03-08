/*
 * XREFs of LinkNodepRunSrs @ 0x1C0099804
 * Callers:
 *     LinkNodeWriteStateToHardware @ 0x1C00995D0 (LinkNodeWriteStateToHardware.c)
 * Callees:
 *     LinkNodepRunSrsAsync @ 0x1C005DAAC (LinkNodepRunSrsAsync.c)
 */

__int64 __fastcall LinkNodepRunSrs(__int64 a1, int a2)
{
  __int64 result; // rax
  __int128 Object; // [rsp+30h] [rbp-28h] BYREF
  __int128 v6; // [rsp+40h] [rbp-18h]

  Object = 0LL;
  v6 = 0LL;
  KeInitializeEvent((PRKEVENT)&Object, SynchronizationEvent, 0);
  DWORD2(v6) = -1073741275;
  result = LinkNodepRunSrsAsync(a1, a2, (__int64)AmlisuppCompletePassive, (__int64)&Object);
  if ( (_DWORD)result == 259 )
  {
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    return DWORD2(v6);
  }
  return result;
}
