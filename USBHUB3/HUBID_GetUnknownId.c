/*
 * XREFs of HUBID_GetUnknownId @ 0x1C001DFAC
 * Callers:
 *     HUBID_BuildHardwareID @ 0x1C001E034 (HUBID_BuildHardwareID.c)
 *     HUBID_BuildCompatibleID @ 0x1C001E9A8 (HUBID_BuildCompatibleID.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall HUBID_GetUnknownId(__int64 a1)
{
  switch ( *(_DWORD *)(a1 + 2432) )
  {
    case 0x40010000:
      return L"<>";
    case 0x40010001:
      return L"02";
    case 0x40010002:
      return L"$&";
    case 0x40010004:
      return L"`b";
    case 0x40010005:
      return L"RT";
    case 0x40010007:
      return L"<>";
    case 0x40010019:
      return L"24";
    case 0x4001001A:
      return L"<>";
  }
  return L"&(";
}
