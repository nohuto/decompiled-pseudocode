/*
 * XREFs of ?AllocateAndLinkHidPageOnlyRequest@@YAPEAUtagHID_PAGEONLY_REQUEST@@G@Z @ 0x1C0007A38
 * Callers:
 *     ?InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KHPEAUtagWND@@H@Z @ 0x1C01088A0 (-InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KH.c)
 * Callees:
 *     <none>
 */

struct tagHID_PAGEONLY_REQUEST *__fastcall AllocateAndLinkHidPageOnlyRequest(__int16 a1)
{
  struct tagHID_PAGEONLY_REQUEST *result; // rax
  struct tagHID_PAGEONLY_REQUEST *v3; // rdx
  struct tagHID_PAGEONLY_REQUEST **v4; // rax
  __int64 v5; // rcx

  result = (struct tagHID_PAGEONLY_REQUEST *)Win32AllocPoolZInit(24LL, 1919447893LL);
  v3 = result;
  if ( result )
  {
    *((_WORD *)result + 8) = a1;
    v4 = (struct tagHID_PAGEONLY_REQUEST **)&RawInputManagerObject::gHidRequestTable[2];
    v5 = RawInputManagerObject::gHidRequestTable[2];
    if ( *(_QWORD **)(v5 + 8) != &RawInputManagerObject::gHidRequestTable[2] )
      __fastfail(3u);
    *((_QWORD *)v3 + 1) = v4;
    *(_QWORD *)v3 = v5;
    *(_QWORD *)(v5 + 8) = v3;
    *v4 = v3;
    return v3;
  }
  return result;
}
