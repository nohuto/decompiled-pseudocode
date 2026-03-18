/*
 * XREFs of ApiSetEditionSetProcessWindowStationAtProcessInit @ 0x1C0207970
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C004D550 (xxxCreateThreadInfo.c)
 * Callees:
 *     IsEditionSetProcessWindowStationAtProcessInitSupported @ 0x1C00B8940 (IsEditionSetProcessWindowStationAtProcessInitSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionSetProcessWindowStationAtProcessInit(__int64 a1, unsigned int a2)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( (int)IsEditionSetProcessWindowStationAtProcessInitSupported() >= 0 )
  {
    if ( qword_1C0295348 )
      return (unsigned int)qword_1C0295348(a1, a2);
    else
      return (unsigned int)-1073741637;
  }
  return v4;
}
