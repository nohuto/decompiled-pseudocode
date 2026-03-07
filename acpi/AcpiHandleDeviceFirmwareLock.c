__int64 __fastcall AcpiHandleDeviceFirmwareLock(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi

  v1 = 0;
  v2 = *(_QWORD *)(a1 + 8);
  switch ( *(_DWORD *)a1 )
  {
    case 0:
      memset((void *)(v2 + 16), 0, 0x50uLL);
      *(_QWORD *)(v2 + 8) = v2;
      *(_QWORD *)v2 = v2;
      *(_DWORD *)(v2 + 24) = 0;
      return v1;
    case 1:
      DestroyDeviceFirmwareLock(*(_QWORD *)(a1 + 8));
      return v1;
    case 2:
      return (unsigned int)AcquireDeviceFirmwareLock(
                             v2,
                             *(_QWORD *)(a1 + 24),
                             *(_QWORD *)(a1 + 16),
                             *(_QWORD *)(a1 + 32),
                             *(_DWORD *)(a1 + 40),
                             *(_WORD *)(a1 + 44));
    case 3:
      return (unsigned int)ReleaseDeviceFirmwareLock(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16));
    case 4:
      return (unsigned int)TranslateBindMutexResources(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24));
  }
  return (unsigned int)-1073741637;
}
