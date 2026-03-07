__int64 __fastcall DpiFdoGetVirtualGpuType(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r8
  __int64 v3; // rcx
  unsigned int v4; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 184);
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\GPUPARAV");
  v3 = *(_QWORD *)(v1 + 48);
  v4 = 0;
  if ( !v3 )
    return 0LL;
  LOBYTE(v2) = 1;
  LOBYTE(v4) = RtlFindUnicodeSubstring(v3 + 88, &DestinationString, v2) != 0;
  return v4;
}
