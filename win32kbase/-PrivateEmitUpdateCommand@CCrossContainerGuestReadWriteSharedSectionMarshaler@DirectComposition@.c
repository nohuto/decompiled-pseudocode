char __fastcall DirectComposition::CCrossContainerGuestReadWriteSharedSectionMarshaler::PrivateEmitUpdateCommand(
        DirectComposition::CCrossContainerGuestReadWriteSharedSectionMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v3; // rbx
  void *v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v5) )
    return 0;
  v3 = (char *)v5;
  *(_DWORD *)v5 = 28;
  *(_OWORD *)(v3 + 4) = 0LL;
  *(_QWORD *)(v3 + 20) = 0LL;
  *((_DWORD *)v3 + 1) = 461;
  *((_DWORD *)v3 + 2) = *((_DWORD *)this + 8);
  *(_QWORD *)(v3 + 12) = DirectComposition::CDCompMappedSharedSectionMarshaler::CreateDwmHandle((PVOID *)this);
  *((_DWORD *)v3 + 5) = *((_DWORD *)this + 16);
  return 1;
}
