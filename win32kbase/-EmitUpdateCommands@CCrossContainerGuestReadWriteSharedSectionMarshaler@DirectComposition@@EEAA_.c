char __fastcall DirectComposition::CCrossContainerGuestReadWriteSharedSectionMarshaler::EmitUpdateCommands(
        DirectComposition::CCrossContainerGuestReadWriteSharedSectionMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // bl
  _DWORD *v5; // r8
  _DWORD *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v7 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch ***)a2, 0x1CuLL, (void **)&v7) )
  {
    v5 = v7;
    *v7 = 28;
    *(_OWORD *)(v5 + 1) = 0LL;
    *(_QWORD *)(v5 + 5) = 0LL;
    v5[1] = 124;
    v5[2] = *((_DWORD *)this + 8);
    *(_OWORD *)(v5 + 3) = *(_OWORD *)((char *)this + 72);
    return DirectComposition::CCrossContainerGuestReadWriteSharedSectionMarshaler::PrivateEmitUpdateCommand(this, a2);
  }
  return v3;
}
