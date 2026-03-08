/*
 * XREFs of Usbh_USB_OS_VENDOR_CODE @ 0x1C00480C0
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C003B830 (WPP_RECORDER_SF_S.c)
 */

_UNKNOWN **__fastcall Usbh_USB_OS_VENDOR_CODE(__int64 a1, __int64 a2, _BYTE *a3, unsigned int a4)
{
  _UNKNOWN **result; // rax
  _DWORD *v8; // rax
  _DWORD *v9; // rax
  __int64 v10; // [rsp+28h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      result = (_UNKNOWN **)WPP_RECORDER_SF_S(
                              WPP_GLOBAL_Control->DeviceExtension,
                              a2,
                              (_DWORD)a3,
                              30,
                              (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
                              a2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v10) = a4;
      result = (_UNKNOWN **)WPP_RECORDER_SF_d(
                              (__int64)WPP_GLOBAL_Control->DeviceExtension,
                              0,
                              1u,
                              0x1Fu,
                              (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
                              v10);
    }
  }
  if ( a4 >= 2 )
  {
    v8 = PdoExt(a1);
    v8[358] &= ~0x200u;
    if ( *a3 )
    {
      v9 = PdoExt(a1);
      v9[358] |= 0x400u;
      result = (_UNKNOWN **)PdoExt(a1);
      *((_BYTE *)result + 1432) = a3[1];
    }
    else
    {
      result = (_UNKNOWN **)PdoExt(a1);
      *((_DWORD *)result + 358) &= ~0x400u;
    }
  }
  return result;
}
