/*
 * XREFs of ?_IsMouseOnSearch@SearchAppExperienceManager@@AEAA_NXZ @ 0x1800AB214
 * Callers:
 *     _lambda_7d62eec1b3de4cef9f9423f9a8950082_::_lambda_invoker_cdecl_ @ 0x18009CBC0 (_lambda_7d62eec1b3de4cef9f9423f9a8950082_--_lambda_invoker_cdecl_.c)
 *     ?_TrackMouseMovement@SearchAppExperienceManager@@AEAAXXZ @ 0x1800AB430 (-_TrackMouseMovement@SearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 */

bool __fastcall SearchAppExperienceManager::_IsMouseOnSearch(SearchAppExperienceManager *this)
{
  LONG v2; // eax
  bool v3; // cl
  struct tagPOINT Point; // [rsp+20h] [rbp-28h] BYREF
  struct tagRECT Rect; // [rsp+28h] [rbp-20h] BYREF

  if ( !*((_QWORD *)this + 70) )
    return *((_BYTE *)this + 568);
  GetCursorPos(&Point);
  GetWindowRect(*((HWND *)this + 70), &Rect);
  if ( !PtInRect(&Rect, Point) )
  {
    v3 = 0;
    goto LABEL_9;
  }
  v2 = *((_DWORD *)this + 144);
  v3 = 1;
  if ( *((_DWORD *)this + 148) == v2 )
  {
    if ( Point.y < *((_DWORD *)this + 146) )
      goto LABEL_7;
  }
  else if ( Point.y >= v2 )
  {
LABEL_7:
    v3 = PtInRect((const RECT *)((char *)this + 572), Point);
  }
LABEL_9:
  *((_BYTE *)this + 568) = v3;
  return v3;
}
