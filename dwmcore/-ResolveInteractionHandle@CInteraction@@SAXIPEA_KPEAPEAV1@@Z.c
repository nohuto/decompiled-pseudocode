void __fastcall CInteraction::ResolveInteractionHandle(unsigned int a1, unsigned __int64 *a2, struct CInteraction **a3)
{
  struct CInteraction *v6; // rbx
  struct CInteraction::HANDLE_ENTRY *Entry; // rax
  unsigned __int64 v8; // rdx
  struct CInteraction *v9; // rcx
  struct CInteraction *v10; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  if ( a1 )
  {
    v6 = 0LL;
    v10 = 0LL;
    AcquireSRWLockShared(&CInteraction::s_InteractionHandleTableLock);
    Entry = CInteraction::GetEntry(a1);
    if ( Entry )
    {
      Microsoft::WRL::ComPtr<CInteraction>::operator=((__int64 *)&v10, *((_QWORD *)Entry + 1));
      v6 = v10;
      if ( v10 )
      {
        if ( a2 )
        {
          v8 = *a2;
          if ( *a2 )
          {
            if ( v8 < *((_QWORD *)v10 + 214) )
            {
              InputTraceLogging::GestureTargeting::BlockInteractionResolution((__int64)v10, v8);
              v9 = v6;
              v6 = 0LL;
              (*(void (__fastcall **)(struct CInteraction *))(*(_QWORD *)v9 + 16LL))(v9);
            }
          }
        }
      }
    }
    *a3 = v6;
    ReleaseSRWLockShared(&CInteraction::s_InteractionHandleTableLock);
  }
}
