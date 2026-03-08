/*
 * XREFs of RtlBootStatusItemInfo @ 0x14073D958
 * Callers:
 *     PopBootStatGet @ 0x14073D308 (PopBootStatGet.c)
 *     RtlpGetSetBootStatusData @ 0x14073D77C (RtlpGetSetBootStatusData.c)
 *     PopBootStatSet @ 0x14073D9E0 (PopBootStatSet.c)
 *     RtlCheckBootStatusIntegrity @ 0x14084B14C (RtlCheckBootStatusIntegrity.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlBootStatusItemInfo(int a1, _DWORD *a2, _DWORD *a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( a1 < 0 || (unsigned __int64)a1 >= 0x12 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    *a2 = RtlpBootStatusFields[a1];
    *a3 = HIDWORD(RtlpBootStatusFields[a1]);
  }
  return v3;
}
