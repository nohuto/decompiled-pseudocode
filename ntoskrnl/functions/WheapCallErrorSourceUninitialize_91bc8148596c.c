__int64 __fastcall WheapCallErrorSourceUninitialize(__int64 a1)
{
  void (__fastcall *ErrorSourceFunction)(_QWORD); // rax
  unsigned int v3; // ebx

  if ( *(_DWORD *)(a1 + 40) != 16 )
  {
    ErrorSourceFunction = (void (__fastcall *)(_QWORD))WheapGetErrorSourceFunction(a1, 4, 1);
    v3 = 0;
    if ( !ErrorSourceFunction )
      return (unsigned int)-1073741822;
    goto LABEL_3;
  }
  ErrorSourceFunction = (void (__fastcall *)(_QWORD))WheapGetErrorSourceFunction(a1, 4, 1);
  v3 = 0;
  if ( ErrorSourceFunction )
LABEL_3:
    ErrorSourceFunction(*(_QWORD *)(a1 + 56));
  return v3;
}
