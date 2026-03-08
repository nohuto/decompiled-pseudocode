/*
 * XREFs of ?UpdateRenderFailureCount@CComposition@@SAXJ@Z @ 0x180050788
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAXPEA_N@Z @ 0x18004EF0C (-ProcessComposition@CComposition@@IEAAXPEA_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     ?DriverUpdateInProgress@CDisplayManager@@IEAA_NXZ @ 0x180282A1C (-DriverUpdateInProgress@CDisplayManager@@IEAA_NXZ.c)
 */

void __fastcall CComposition::UpdateRenderFailureCount(CDisplayManager *a1)
{
  DWORD v1; // ebx
  unsigned int v2; // eax
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  v1 = (unsigned int)a1;
  if ( (int)a1 >= 0 )
  {
    if ( !CComposition::s_cRenderFailures )
      return;
    v2 = CComposition::s_cRenderFailures - 1;
LABEL_16:
    CComposition::s_cRenderFailures = v2;
    return;
  }
  if ( (_DWORD)a1 != -2003304306 && (_DWORD)a1 != -2003304309 )
  {
    if ( CComposition::s_cRenderFailures > 0x3C )
    {
      memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionInformation[0] = CComposition::s_hrExpectedError;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionCode = v1;
      RaiseFailFastException(&pExceptionRecord, 0LL, 1u);
    }
    if ( v1 != -2003304442 && v1 != -2003304307 )
      goto LABEL_14;
    if ( !CDisplayManager::DriverUpdateInProgress(a1) )
    {
      if ( v1 == -2003304307 )
      {
        v2 = CComposition::s_cRenderFailures + 12;
LABEL_15:
        CComposition::s_hrExpectedError = v1;
        goto LABEL_16;
      }
LABEL_14:
      v2 = CComposition::s_cRenderFailures + 2;
      goto LABEL_15;
    }
  }
}
