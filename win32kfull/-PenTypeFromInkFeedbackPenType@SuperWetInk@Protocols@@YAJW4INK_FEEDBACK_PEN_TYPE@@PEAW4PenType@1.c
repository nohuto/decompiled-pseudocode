/*
 * XREFs of ?PenTypeFromInkFeedbackPenType@SuperWetInk@Protocols@@YAJW4INK_FEEDBACK_PEN_TYPE@@PEAW4PenType@12@@Z @ 0x1C02469DC
 * Callers:
 *     ?PopulatePayloadV1@SuperWetInk@Protocols@@YAJW4INK_FEEDBACK_COMMAND@@PEBXIMPEAUPayloadV1@12@@Z @ 0x1C0246A10 (-PopulatePayloadV1@SuperWetInk@Protocols@@YAJW4INK_FEEDBACK_COMMAND@@PEBXIMPEAUPayloadV1@12@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Protocols::SuperWetInk::PenTypeFromInkFeedbackPenType(int a1, _DWORD *a2)
{
  int v2; // ecx

  if ( a1 )
  {
    v2 = a1 - 1;
    if ( v2 )
    {
      if ( v2 != 1 )
        return 3221225485LL;
      *a2 = 2;
    }
    else
    {
      *a2 = 1;
    }
  }
  else
  {
    *a2 = 0;
  }
  return 0LL;
}
