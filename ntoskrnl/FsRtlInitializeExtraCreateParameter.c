void __stdcall FsRtlInitializeExtraCreateParameter(
        PECP_HEADER Ecp,
        ULONG EcpFlags,
        PFSRTL_EXTRA_CREATE_PARAMETER_CLEANUP_CALLBACK CleanupCallback,
        ULONG TotalSize,
        LPCGUID EcpType,
        PVOID ListAllocatedFrom)
{
  GUID v6; // xmm0

  *(_QWORD *)Ecp = 1215324997LL;
  *((_QWORD *)Ecp + 2) = 0LL;
  *((_QWORD *)Ecp + 1) = 0LL;
  v6 = *EcpType;
  *((_QWORD *)Ecp + 5) = CleanupCallback;
  *(GUID *)((char *)Ecp + 24) = v6;
  *((_DWORD *)Ecp + 12) = EcpFlags;
  *((_DWORD *)Ecp + 13) = TotalSize;
  *((_QWORD *)Ecp + 7) = ListAllocatedFrom;
  *((_QWORD *)Ecp + 8) = 0LL;
}
