LPVOID __fastcall CSharedSectionBase::MapSharedMemory(HANDLE hObject, SIZE_T dwNumberOfBytesToMap)
{
  LPVOID v3; // rbx

  v3 = MapViewOfFile(hObject, 6u, 0, 0, dwNumberOfBytesToMap);
  CloseHandle(hObject);
  return v3;
}
