/*
 * XREFs of ?OpenGlobalGraphicsDriverKey@DXGMONITOR@@UEBAJ_NPEAPEAX@Z @ 0x1C0213A50
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C00105E0 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::OpenGlobalGraphicsDriverKey(DXGMONITOR *this, char a2, void **a3)
{
  NTSTATUS v5; // eax
  unsigned int v6; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers");
  v5 = DxgkOpenRegistrySubkey(a3, a2 != 0 ? 131097 : 983103, 0LL, &DestinationString);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  WdLogSingleEntry1(2LL, v5);
  return v6;
}
