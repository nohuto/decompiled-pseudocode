/*
 * XREFs of NtRIMAreSiblingDevices @ 0x1C017FFB0
 * Callers:
 *     <none>
 * Callees:
 *     RIMAreSiblingDevices @ 0x1C0182700 (RIMAreSiblingDevices.c)
 *     ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x1C0209104 (ApiSetEditionIsUsermodeRIMAccessAllowed.c)
 */

__int64 __fastcall NtRIMAreSiblingDevices(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (unsigned int)ApiSetEditionIsUsermodeRIMAccessAllowed() )
    return RIMAreSiblingDevices(a1, a2, a3, 1LL);
  else
    return 3221225506LL;
}
