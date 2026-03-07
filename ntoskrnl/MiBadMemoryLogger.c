void __fastcall MiBadMemoryLogger(__int64 a1)
{
  __int64 GenericErrorLogEntry; // rax
  int v3; // edx

  GenericErrorLogEntry = IoAllocateGenericErrorLogEntry(48);
  if ( GenericErrorLogEntry )
  {
    *(_DWORD *)(GenericErrorLogEntry + 12) = -1073740023;
    *(_DWORD *)(GenericErrorLogEntry + 16) = *(_DWORD *)a1;
    *(_QWORD *)(GenericErrorLogEntry + 32) = *(_QWORD *)(a1 + 16);
    v3 = *(_DWORD *)(a1 + 8);
    *(_WORD *)(GenericErrorLogEntry + 2) = 4;
    *(_DWORD *)(GenericErrorLogEntry + 40) = v3;
    IoWriteErrorLogEntry((PVOID)GenericErrorLogEntry);
  }
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 4));
}
