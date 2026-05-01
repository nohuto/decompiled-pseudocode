/*
 * XREFs of ?CensorPath@JumpViewTelemetryHelper@@YAPEBGPEBG@Z @ 0x180246900
 * Callers:
 *     ?CensorAumidAndAppPath@JumpViewTelemetryHelper@@YAXAEAPEBG0@Z @ 0x180246864 (-CensorAumidAndAppPath@JumpViewTelemetryHelper@@YAXAEAPEBG0@Z.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall JumpViewTelemetryHelper::CensorPath(LPCWSTR pszPath, const unsigned __int16 *a2)
{
  const WCHAR *v2; // rbx

  v2 = pszPath;
  if ( pszPath && !PathIsFileSpecW(pszPath) )
    return PathFindFileNameW(v2);
  return v2;
}
