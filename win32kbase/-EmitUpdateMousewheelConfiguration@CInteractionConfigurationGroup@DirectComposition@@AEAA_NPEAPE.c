char __fastcall DirectComposition::CInteractionConfigurationGroup::EmitUpdateMousewheelConfiguration(
        DirectComposition::CInteractionConfigurationGroup *this,
        struct DirectComposition::CBatch ***a2)
{
  char *v4; // rdx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 3) & 0x10) == 0 )
    return 1;
  v5 = 0LL;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x24uLL, &v5) )
  {
    v4 = (char *)v5;
    *(_DWORD *)v5 = 36;
    *(_OWORD *)(v4 + 4) = 0LL;
    *((_DWORD *)v4 + 5) = 0;
    *((_DWORD *)v4 + 1) = 195;
    *((_DWORD *)v4 + 2) = *(_DWORD *)(*(_QWORD *)this + 32LL);
    *((_DWORD *)v4 + 3) = 1;
    *((_DWORD *)v4 + 4) = *((_DWORD *)this + 2);
    *((_DWORD *)v4 + 5) = 5;
    *((_QWORD *)v4 + 3) = *((_QWORD *)this + 11);
    *((_DWORD *)v4 + 8) = *((_DWORD *)this + 24);
    *((_DWORD *)this + 3) &= ~0x10u;
    return 1;
  }
  return 0;
}
