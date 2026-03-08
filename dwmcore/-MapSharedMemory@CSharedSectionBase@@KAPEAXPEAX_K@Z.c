/*
 * XREFs of ?MapSharedMemory@CSharedSectionBase@@KAPEAXPEAX_K@Z @ 0x1800F857C
 * Callers:
 *     ?OnChanged@CSharedSectionBase@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800F8530 (-OnChanged@CSharedSectionBase@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

LPVOID __fastcall CSharedSectionBase::MapSharedMemory(HANDLE hObject, SIZE_T dwNumberOfBytesToMap)
{
  LPVOID v3; // rbx

  v3 = MapViewOfFile(hObject, 6u, 0, 0, dwNumberOfBytesToMap);
  CloseHandle(hObject);
  return v3;
}
