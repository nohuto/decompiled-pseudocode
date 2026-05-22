/*
 * XREFs of wil::init_once_nothrow__lambda_ca82685424ac054990721f288eeb0943___ @ 0x1801457B8
 * Callers:
 *     ?GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ @ 0x180145DAC (-GetInstance@VirtualTouchpadContextProvider@@SAPEAV1@XZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800675D4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Create@VirtualTouchpadContextProvider@@CAJPEAPEAV1@@Z @ 0x180145BEC (-Create@VirtualTouchpadContextProvider@@CAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall wil::init_once_nothrow__lambda_ca82685424ac054990721f288eeb0943___(
        __int64 a1,
        __int64 a2,
        _BYTE *a3)
{
  const char *v4; // r9
  int v6; // eax
  unsigned int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  WINBOOL fPending; // [rsp+38h] [rbp+10h] BYREF

  fPending = 0;
  if ( a3 )
    *a3 = 0;
  if ( !InitOnceBeginInitialize(&stru_18020A4A8, 0, &fPending, 0LL) )
    return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0x218, (__int64)"wil", v4);
  if ( fPending )
  {
    v6 = VirtualTouchpadContextProvider::Create(&qword_1802098D0);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x21D, (__int64)"wil", (const char *)(unsigned int)v6);
      InitOnceComplete(&stru_18020A4A8, 4u, 0LL);
      return v7;
    }
    if ( a3 )
      *a3 = 1;
    InitOnceComplete(&stru_18020A4A8, 0, 0LL);
  }
  return 0LL;
}
