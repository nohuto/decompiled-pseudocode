/*
 * XREFs of bWriteUserSystemEUDCRegistry @ 0x1C02A2A34
 * Callers:
 *     bReadUserSystemEUDCRegistry @ 0x1C00B8E10 (bReadUserSystemEUDCRegistry.c)
 *     GreEudcLoadLinkW @ 0x1C02A10C8 (GreEudcLoadLinkW.c)
 *     GreEudcUnloadLinkW @ 0x1C02A13F0 (GreEudcUnloadLinkW.c)
 * Callees:
 *     GetUserEUDCRegistryPath @ 0x1C00B79B4 (GetUserEUDCRegistryPath.c)
 *     bNotIsKeySymbolicLink @ 0x1C00B7A98 (bNotIsKeySymbolicLink.c)
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x1C00B90C0 (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C0116400 (--0MALLOCOBJ@@QEAA@K@Z.c)
 */

__int64 __fastcall bWriteUserSystemEUDCRegistry(PVOID ValueData)
{
  HANDLE Handle; // [rsp+30h] [rbp-10h] BYREF
  HANDLE v3; // [rsp+38h] [rbp-8h] BYREF
  PCWSTR Path; // [rsp+78h] [rbp+38h] BYREF

  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Path, 0x208u);
  if ( Path )
  {
    Handle = 0LL;
    v3 = 0LL;
    if ( (int)GetUserEUDCRegistryPath((WCHAR *)Path) >= 0 )
      bNotIsKeySymbolicLink(Path, &Handle, &v3);
    if ( Handle )
      ZwClose(Handle);
    if ( v3 )
      ZwClose(v3);
  }
  AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>((void **)&Path);
  return 0LL;
}
