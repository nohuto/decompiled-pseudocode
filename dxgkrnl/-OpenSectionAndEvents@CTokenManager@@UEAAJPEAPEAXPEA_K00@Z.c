NTSTATUS __fastcall CTokenManager::OpenSectionAndEvents(
        PVOID *this,
        void **a2,
        unsigned __int64 *a3,
        void **a4,
        void **a5)
{
  NTSTATUS result; // eax

  *a2 = (void *)-1LL;
  *a3 = 0LL;
  *a4 = (void *)-1LL;
  *a5 = (void *)-1LL;
  result = ObOpenObjectByPointer(this[5], 0x40u, 0LL, 4u, MmSectionObjectType, 0, a2);
  if ( result >= 0 )
  {
    *a3 = (unsigned __int64)this[7];
    result = CTokenManager::OpenEventForSynchonize(this[8], a4);
    if ( result >= 0 )
      return CTokenManager::OpenEventForSynchonize(this[9], a5);
  }
  return result;
}
