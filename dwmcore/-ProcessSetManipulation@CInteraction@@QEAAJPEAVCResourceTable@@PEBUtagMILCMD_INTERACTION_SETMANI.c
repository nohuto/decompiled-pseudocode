__int64 __fastcall CInteraction::ProcessSetManipulation(
        CInteraction *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTION_SETMANIPULATION *a3)
{
  __int64 Resource; // rax
  unsigned int v5; // edx

  Resource = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  if ( v5 )
    Resource = CResourceTable::GetResource((__int64)a2, v5, 0x69u);
  if ( Resource != *((_QWORD *)this + 34) )
    Microsoft::WRL::ComPtr<CManipulation>::operator=((__int64 *)this + 34, Resource);
  return 0LL;
}
