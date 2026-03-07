__int64 ACPIBuildProcessSynchronizationList()
{
  PVOID *v0; // rbx
  char v1; // di
  PVOID *v2; // rsi
  _QWORD *v3; // rax
  void *v4; // rdx
  __int64 v5; // rcx

  v0 = (PVOID *)AcpiBuildSynchronizationList;
  v1 = 1;
  while ( v0 != &AcpiBuildSynchronizationList )
  {
    v2 = v0;
    v0 = (PVOID *)*v0;
    if ( *(PVOID *)v2[10] == v2[10] )
    {
      v3 = v2[5];
      v4 = &unk_1C00622D0;
      if ( v3 )
      {
        v5 = v3[1];
        if ( (v5 & 0x200000000000LL) != 0 && (v5 & 0x400000000000LL) != 0 )
          v4 = (void *)v3[77];
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v4) = 4;
        WPP_RECORDER_SF_sqss(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v4, 6, 71);
      }
      ACPIBuildProcessGenericComplete(v2);
    }
    else
    {
      v1 = 0;
    }
  }
  return v1 == 0 ? 0x103 : 0;
}
