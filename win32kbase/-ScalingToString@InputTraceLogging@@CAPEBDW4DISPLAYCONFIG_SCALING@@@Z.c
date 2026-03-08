/*
 * XREFs of ?ScalingToString@InputTraceLogging@@CAPEBDW4DISPLAYCONFIG_SCALING@@@Z @ 0x1C0213A0C
 * Callers:
 *     ?DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C001046C (-DisplayPath@InputConfig@InputTraceLogging@@SAXAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::ScalingToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return "Identity";
  v2 = v1 - 1;
  if ( !v2 )
    return "Centered";
  v3 = v2 - 1;
  if ( !v3 )
    return "Stretched";
  v4 = v3 - 1;
  if ( !v4 )
    return "AspectRatioCenteredMax";
  v5 = v4 - 1;
  if ( !v5 )
    return "Custom";
  if ( v5 == 123 )
    return "Preferred";
  return "UNKNOWN";
}
