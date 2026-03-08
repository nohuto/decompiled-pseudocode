/*
 * XREFs of ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@Z @ 0x1C00D1660
 * Callers:
 *     DefSetText @ 0x1C00A7330 (DefSetText.c)
 *     xxxRealDefWindowProc @ 0x1C00A8800 (xxxRealDefWindowProc.c)
 *     NtUserInternalGetWindowText @ 0x1C00D1530 (NtUserInternalGetWindowText.c)
 *     ?xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C012E4C8 (-xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     _GetAltTabInfo @ 0x1C01CB224 (_GetAltTabInfo.c)
 *     xxxDrawCaptionTemp @ 0x1C022EDB4 (xxxDrawCaptionTemp.c)
 * Callees:
 *     <none>
 */

struct _LARGE_UNICODE_STRING *__fastcall tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
        tagWND::ProtectedLargeUnicodeStringWNDstrName *this,
        struct _LARGE_UNICODE_STRING *a2)
{
  int v2; // r9d
  struct _LARGE_UNICODE_STRING *result; // rax

  *((_QWORD *)a2 + 1) = *(_QWORD *)this;
  *(_DWORD *)a2 = *(_DWORD *)(*((_QWORD *)this - 18) + 184LL);
  v2 = *((_DWORD *)a2 + 1) ^ (*((_DWORD *)a2 + 1) ^ *(_DWORD *)(*((_QWORD *)this - 18) + 188LL)) & 0x7FFFFFFF;
  *((_DWORD *)a2 + 1) = v2;
  result = a2;
  *((_DWORD *)a2 + 1) = *(_DWORD *)(*((_QWORD *)this - 18) + 188LL) ^ (*(_DWORD *)(*((_QWORD *)this - 18) + 188LL) ^ v2) & 0x7FFFFFFF;
  return result;
}
