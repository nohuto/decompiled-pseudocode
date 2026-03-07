__int64 __fastcall DuplicateCompositionInputSinkHelper(HANDLE hSourceHandle, LPHANDLE lpTargetHandle)
{
  unsigned int v4; // ebp
  HANDLE CurrentProcess; // rbx
  HANDLE v6; // rax

  v4 = -1073741816;
  CurrentProcess = GetCurrentProcess();
  v6 = GetCurrentProcess();
  if ( DuplicateHandle(v6, hSourceHandle, CurrentProcess, lpTargetHandle, 0, 0, 2u) )
    return 0;
  return v4;
}
