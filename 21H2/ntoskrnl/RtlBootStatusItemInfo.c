/*
 * XREFs of RtlBootStatusItemInfo @ 0x14078A6DC
 * Callers:
 *     PopBootStatSet @ 0x14077F428 (PopBootStatSet.c)
 *     RtlpGetSetBootStatusData @ 0x14078A500 (RtlpGetSetBootStatusData.c)
 *     PopBootStatGet @ 0x1407C1650 (PopBootStatGet.c)
 *     RtlCheckBootStatusIntegrity @ 0x140915540 (RtlCheckBootStatusIntegrity.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlBootStatusItemInfo(unsigned int a1, _DWORD *a2, _DWORD *a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( a1 > 0x11 )
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
