/*
 * XREFs of ?ButtonChangeTypeToString@InputTraceLogging@@CAPEBDW4tagPOINTER_BUTTON_CHANGE_TYPE@@@Z @ 0x1C01CB344
 * Callers:
 *     ?CopyPointerFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@AEBUtagPOINTEREVENTINT@@@Z @ 0x1C01CB5A4 (-CopyPointerFromContainer@RIM@InputTraceLogging@@SAXQEAURIMDEV@@AEBUtagPOINTEREVENTINT@@@Z.c)
 *     ?PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOINTEREVENTINT@@W4ContactPopulationSource@12@@Z @ 0x1C01D405C (-PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOIN.c)
 *     ?CommitFramePointer@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@Z @ 0x1C01ECBAC (-CommitFramePointer@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@PEBUtagPOI.c)
 *     ?GetPointerInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_INFO@@@Z @ 0x1C01F878C (-GetPointerInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_INFO@@@Z.c)
 *     ?GetPointerPenInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_PEN_INFO@@@Z @ 0x1C01F92E8 (-GetPointerPenInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_PEN_INFO@@@Z.c)
 *     ?GetPointerTouchInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_TOUCH_INFO@@@Z @ 0x1C01FA1F0 (-GetPointerTouchInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_TOUCH_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::ButtonChangeTypeToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx

  if ( a1 <= 5 )
  {
    if ( a1 == 5 )
      return "ThirdDown";
    if ( !a1 )
      return "None";
    v1 = a1 - 1;
    if ( !v1 )
      return "FirstDown";
    v2 = v1 - 1;
    if ( !v2 )
      return "FirstUp";
    v3 = v2 - 1;
    if ( !v3 )
      return "SecondDown";
    if ( v3 == 1 )
      return "SecondUp";
    return "UNKNOWN";
  }
  v5 = a1 - 6;
  if ( !v5 )
    return "ThirdUp";
  v6 = v5 - 1;
  if ( !v6 )
    return "FourthDown";
  v7 = v6 - 1;
  if ( !v7 )
    return "FourthUp";
  v8 = v7 - 1;
  if ( !v8 )
    return "FifthDown";
  if ( v8 != 1 )
    return "UNKNOWN";
  return "FifthUp";
}
