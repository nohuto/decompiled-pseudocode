__int64 __fastcall IommuHvGetConfiguration(unsigned int a1, _DWORD *a2, _DWORD *a3, PVOID **a4)
{
  PVOID *SystemContext; // rax

  if ( IommupHvSvmEnabled )
  {
    *a2 = IommupHvPageRequestQueueCount;
    *a3 = IommupHvMaximumAsids;
    SystemContext = IommupGetSystemContext(a1);
    *a4 = SystemContext;
    return SystemContext == 0LL ? 0xC000009A : 0;
  }
  else
  {
    *a2 = 0;
    *a3 = 0;
    *a4 = 0LL;
    return 3221225659LL;
  }
}
