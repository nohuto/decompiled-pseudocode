/*
 * XREFs of ?InertiaSourceToString@InputTraceLogging@@CAPEBDW4INERTIA_SOURCE@@@Z @ 0x1C021072C
 * Callers:
 *     ?AddInertiaInfo@Inertia@InputTraceLogging@@SAXAEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C00E0D8C (-AddInertiaInfo@Inertia@InputTraceLogging@@SAXAEBUINERTIA_INFO_INTERNAL@@@Z.c)
 *     ?PostInertiaMessage@Inertia@InputTraceLogging@@SAXIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@@Z @ 0x1C00E0E58 (-PostInertiaMessage@Inertia@InputTraceLogging@@SAXIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@@Z.c)
 *     ?RemoveInertiaInfo@Inertia@InputTraceLogging@@SAXAEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C00E0F84 (-RemoveInertiaInfo@Inertia@InputTraceLogging@@SAXAEBUINERTIA_INFO_INTERNAL@@@Z.c)
 *     ?AddInertiaInfo@Win32k@InputTraceLogging@@SAXAEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C02103A8 (-AddInertiaInfo@Win32k@InputTraceLogging@@SAXAEBUINERTIA_INFO_INTERNAL@@@Z.c)
 *     ?RemoveInertiaInfo@Win32k@InputTraceLogging@@SAXAEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C0210CA0 (-RemoveInertiaInfo@Win32k@InputTraceLogging@@SAXAEBUINERTIA_INFO_INTERNAL@@@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::InertiaSourceToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return "Touch";
  v2 = v1 - 1;
  if ( !v2 )
    return "Pen";
  v3 = v2 - 2;
  if ( !v3 )
    return "Touchpad";
  v4 = v3 - 4;
  if ( !v4 )
    return "Mousewheel";
  if ( v4 == 7 )
    return "Any";
  return "UNKNOWN";
}
