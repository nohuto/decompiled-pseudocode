/*
 * XREFs of SdbpGetProcessHostGuestArchitectures @ 0x140967340
 * Callers:
 *     SdbpGetPathAppPatchPreRS3 @ 0x1405C0850 (SdbpGetPathAppPatchPreRS3.c)
 *     SdbpGetPathCustomSdbPreRS3 @ 0x1405C09D0 (SdbpGetPathCustomSdbPreRS3.c)
 *     SdbpGetPathAppraiser @ 0x140967050 (SdbpGetPathAppraiser.c)
 *     SdbpGetPathSystem @ 0x140967280 (SdbpGetPathSystem.c)
 * Callees:
 *     AslImageFileToArchitecture @ 0x140754238 (AslImageFileToArchitecture.c)
 *     AslEnvGetProcessWowInfo @ 0x140754264 (AslEnvGetProcessWowInfo.c)
 *     AslLogCallPrintf @ 0x140755F64 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetProcessHostGuestArchitectures(__int16 *a1, _WORD *a2, __int16 *a3)
{
  int ProcessWowInfo; // ebx
  __int16 v7; // cx
  __int16 v9[20]; // [rsp+30h] [rbp-28h] BYREF
  __int16 v10; // [rsp+78h] [rbp+20h] BYREF

  v10 = -1;
  v9[0] = -1;
  ProcessWowInfo = AslEnvGetProcessWowInfo(v9, &v10);
  if ( ProcessWowInfo >= 0 )
  {
    if ( !a3 || (v7 = AslImageFileToArchitecture(*a3), v7 == -1) )
      v7 = v10;
    ProcessWowInfo = 0;
    *a1 = v9[0];
    *a2 = v7;
  }
  else
  {
    AslLogCallPrintf(1LL);
  }
  return (unsigned int)ProcessWowInfo;
}
