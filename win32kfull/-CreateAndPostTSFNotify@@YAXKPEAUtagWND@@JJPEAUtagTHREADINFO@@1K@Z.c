void __fastcall CreateAndPostTSFNotify(
        unsigned int a1,
        struct tagWND *a2,
        int a3,
        int a4,
        struct tagTHREADINFO *a5,
        struct tagTHREADINFO *a6,
        unsigned int a7)
{
  struct tagQ **v11; // rbx
  struct tagNOTIFY *Notify; // rdi

  if ( !tagDomLock::IsLockedExclusive((PERESOURCE *)gDomainWinEventLock) )
    __int2c();
  v11 = (struct tagQ **)a5;
  if ( *((_QWORD *)a5 + 54) )
  {
    if ( a5 != (struct tagTHREADINFO *)gptiRit )
    {
      Notify = CreateNotify(0LL, a1, a2, a3, a4, a6, a7, 1);
      if ( Notify )
      {
        AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&a5);
        *((_DWORD *)Notify + 14) |= 0xCu;
        if ( !(unsigned int)PostEventMessageEx(
                              (struct tagTHREADINFO *)v11,
                              v11[54],
                              0xCu,
                              0LL,
                              0,
                              0LL,
                              (__int64)Notify,
                              0LL) )
        {
          if ( !tagDomLock::IsLockedExclusive((PERESOURCE *)gDomainWinEventLock) )
            __int2c();
          RemoveNotify((struct tagNOTIFY ***)Notify);
        }
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&a5);
      }
    }
  }
}
