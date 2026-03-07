void __fastcall CInteraction::FinalRelease(CInteraction *this)
{
  struct CInteraction::HANDLE_ENTRY *Entry; // rax

  AcquireSRWLockExclusive(&CInteraction::s_InteractionHandleTableLock);
  Entry = CInteraction::GetEntry(*((_DWORD *)this + 426));
  if ( Entry )
    *((_QWORD *)Entry + 1) = 0LL;
  ReleaseSRWLockExclusive(&CInteraction::s_InteractionHandleTableLock);
}
