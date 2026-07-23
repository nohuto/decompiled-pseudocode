/*
 * XREFs of SdbpMatchOne @ 0x1409661E0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_CompatBuildInVb__private_IsEnabledDeviceUsage @ 0x1403F989C (Feature_CompatBuildInVb__private_IsEnabledDeviceUsage.c)
 *     SdbpMatchList @ 0x140754A68 (SdbpMatchList.c)
 *     SdbFindFirstTag @ 0x14075A344 (SdbFindFirstTag.c)
 */

__int64 __fastcall SdbpMatchOne(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  int v9; // ebx
  unsigned int matched; // ebp
  BOOL v12; // [rsp+38h] [rbp-20h]
  int v13; // [rsp+40h] [rbp-18h] BYREF
  _DWORD v14[5]; // [rsp+44h] [rbp-14h] BYREF

  v9 = 0;
  if ( !(unsigned int)Feature_CompatBuildInVb__private_IsEnabledDeviceUsage() )
    return SdbpMatchList(a1, &v13, a2, a3, a5, a6, 1, v12);
  v14[0] = 0;
  v13 = 0;
  matched = SdbpMatchList(v14, &v13, a2, a3, a5, a6, 1, v12);
  if ( !matched || v13 )
    v9 = v14[0];
  else
    LOBYTE(v9) = (unsigned int)SdbFindFirstTag(a3, a5, 4099) == 0;
  *a1 = v9;
  return matched;
}
