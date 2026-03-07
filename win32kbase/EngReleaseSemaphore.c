void __stdcall EngReleaseSemaphore(HSEMAPHORE hsem)
{
  int v2; // ecx
  int v3; // r8d
  __int64 v4; // rdx
  __int64 v5; // rcx

  if ( *(_DWORD *)(*(_QWORD *)(SGDGetSessionState(hsem) + 24) + 180LL)
    && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
  {
    McTemplateK0pz_EtwWriteTransfer(v2, (unsigned int)&LockRelease, v3, (_DWORD)hsem, (__int64)L"hsem");
  }
  if ( hsem )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)hsem);
    PsLeavePriorityRegion(v5, v4);
  }
}
