/*
 * XREFs of ?CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z @ 0x1C01BF9E0
 * Callers:
 *     ?DoGlobalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z @ 0x1C00B4ED4 (-DoGlobalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z.c)
 *     ?xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z @ 0x1C01BFE28 (-xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     ?RemoveNotify@@YAXPEAUtagNOTIFY@@@Z @ 0x1C0010160 (-RemoveNotify@@YAXPEAUtagNOTIFY@@@Z.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0050C44 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C0070838 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?CreateNotify@@YAPEAUtagNOTIFY@@PEAUtagEVENTHOOK@@KPEAUtagWND@@JJPEAUtagTHREADINFO@@KE@Z @ 0x1C01BFAF8 (-CreateNotify@@YAPEAUtagNOTIFY@@PEAUtagEVENTHOOK@@KPEAUtagWND@@JJPEAUtagTHREADINFO@@KE@Z.c)
 */

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
  __int64 v13; // rdx
  __int64 v14; // r8

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
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&a5, v13, v14);
      }
    }
  }
}
