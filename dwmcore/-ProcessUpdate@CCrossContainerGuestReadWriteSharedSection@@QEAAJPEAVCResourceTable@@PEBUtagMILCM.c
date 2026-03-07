__int64 __fastcall CCrossContainerGuestReadWriteSharedSection::ProcessUpdate(
        CCrossContainerGuestReadWriteSharedSection *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CROSSCONTAINERGUESTREADWRITESHAREDSECTION *a3)
{
  *((_QWORD *)this + 8) = *((_QWORD *)a3 + 1);
  *((_DWORD *)this + 18) = *((_DWORD *)a3 + 4);
  CResource::NotifyOnChanged((__int64)this, 0, 0LL);
  return 0LL;
}
