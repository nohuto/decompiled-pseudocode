__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::_ReadOneBlockMonitorDescriptorFromRegistry(
        HANDLE KeyHandle,
        unsigned int a2,
        void ***a3)
{
  char *v3; // rbx
  __int64 v4; // rbp
  void **v7; // rdi
  int v8; // eax
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rdi
  void **v13; // rbp
  char *v15; // [rsp+20h] [rbp-58h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-50h] BYREF
  WCHAR SourceString; // [rsp+38h] [rbp-40h] BYREF

  v3 = 0LL;
  v4 = a2;
  v15 = 0LL;
  DestinationString = 0LL;
  if ( !KeyHandle )
    WdLogSingleEntry0(1LL);
  v7 = *a3;
  *a3 = 0LL;
  if ( v7 )
  {
    wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::~unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>(v7);
    operator delete(v7);
  }
  v8 = RtlStringCbPrintfW(
         &SourceString,
         8uLL,
         L"%d",
         (unsigned int)v4,
         v15,
         *(_QWORD *)&DestinationString.Length,
         DestinationString.Buffer);
  v9 = v8;
  if ( v8 < 0 )
    goto LABEL_6;
  RtlInitUnicodeString(&DestinationString, &SourceString);
  v10 = DxgkRetrieveValueFromRegistry(KeyHandle, &DestinationString, (void **)&v15);
  LODWORD(v9) = v10;
  if ( v10 >= 0 )
  {
    v3 = v15;
    if ( *((_DWORD *)v15 + 1) == 3 && *((_DWORD *)v15 + 2) == 128 )
    {
      v11 = operator new[](0x98uLL, 0x4D677844u, 256LL);
      v12 = v11;
      if ( !v11 )
      {
        v9 = -1073741801LL;
LABEL_6:
        WdLogSingleEntry1(2LL, v9);
        goto LABEL_17;
      }
      memset((void *)(v11 + 24), 0, 0x80uLL);
      *(_QWORD *)v12 = 0LL;
      *(_DWORD *)(v12 + 8) = 0;
      *(_DWORD *)(v12 + 12) = 0;
      *(_QWORD *)(v12 + 16) = 128LL;
      *(_OWORD *)(v12 + 24) = *(_OWORD *)(v3 + 12);
      *(_OWORD *)(v12 + 40) = *(_OWORD *)(v3 + 28);
      *(_OWORD *)(v12 + 56) = *(_OWORD *)(v3 + 44);
      *(_OWORD *)(v12 + 72) = *(_OWORD *)(v3 + 60);
      *(_OWORD *)(v12 + 88) = *(_OWORD *)(v3 + 76);
      *(_OWORD *)(v12 + 104) = *(_OWORD *)(v3 + 92);
      *(_OWORD *)(v12 + 120) = *(_OWORD *)(v3 + 108);
      *(_OWORD *)(v12 + 136) = *(_OWORD *)(v3 + 124);
      *(_DWORD *)(v12 + 8) = 3;
      *(_DWORD *)(v12 + 12) = (_DWORD)v4 != 0 ? 255 : 1;
      v13 = *a3;
      *a3 = (void **)v12;
      if ( v13 )
      {
        wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::~unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>(v13);
        operator delete(v13);
      }
      LODWORD(v9) = 0;
    }
    else
    {
      WdLogSingleEntry1(3LL, v4);
      LODWORD(v9) = -1071841279;
    }
  }
  else
  {
    WdLogSingleEntry1(7LL, v10);
    v3 = v15;
  }
LABEL_17:
  if ( v3 )
    operator delete(v3);
  return (unsigned int)v9;
}
