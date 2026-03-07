__int64 __fastcall GreAddFontResourceWInternal(
        unsigned __int16 *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        struct tagDESIGNVECTOR *a6,
        unsigned int a7)
{
  unsigned int v10; // r12d
  struct Gre::Base::SESSION_GLOBALS *v11; // rax
  __int64 v12; // rcx
  struct Gre::Base::SESSION_GLOBALS *v13; // r14
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v17; // rcx
  struct PFF *v18; // [rsp+70h] [rbp-11h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-9h] BYREF
  unsigned int v21; // [rsp+E8h] [rbp+67h] BYREF

  v21 = 0;
  if ( (a4 & 0x600) == 0x600 )
  {
    RegistryNotificaionEnumerationEnd(&v21);
    return v21;
  }
  if ( !a1 )
  {
    EngSetLastError(0x57u);
    return v21;
  }
  if ( a4 != 0x80000000 )
  {
    if ( ((a4 & 8) == 0 || a5 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC))
      && ((a4 & 4) == 0 || a5 == (unsigned int)PsGetCurrentThreadId()) )
    {
      v18 = 0LL;
      v10 = (2 * (a4 & 1)) | 4;
      if ( (a4 & 2) == 0 )
        v10 = 2 * (a4 & 1);
      v11 = Gre::Base::Globals((Gre::Base *)(2 * (a4 & 1)));
      v13 = v11;
      if ( (a4 & 0x1C) == 0 || *((_QWORD *)v11 + 796) || (unsigned int)bInitPrivatePFT() )
      {
        v14 = *(_QWORD *)(SGDGetSessionState(v12) + 32);
        if ( (a4 & 0x1C) != 0 )
          v15 = *((_QWORD *)v13 + 796);
        else
          v15 = *(_QWORD *)(v14 + 20272);
        *(_QWORD *)&DestinationString.Length = v15;
        if ( !v15
          || !PUBLIC_PFTOBJ::bLoadFonts(
                (PUBLIC_PFTOBJ *)&DestinationString,
                a1,
                a2,
                a3,
                a6,
                a7,
                &v21,
                v10,
                &v18,
                a4,
                0,
                0LL,
                0,
                0) )
        {
          v21 = 0;
        }
        if ( v21 )
          GreQuerySystemTime(v14 + 20288);
      }
    }
    return v21;
  }
  DestinationString = 0LL;
  if ( RtlCreateUnicodeString(&DestinationString, a1) )
  {
    v17 = *(_QWORD *)(gpxsGlobals + 16LL);
    if ( v17 )
    {
      v18 = *(struct PFF **)(gpxsGlobals + 16LL);
      GreAcquireSemaphore(v17);
      RtlInsertElementGenericTableAvl(*(PRTL_AVL_TABLE *)(gpxsGlobals + 24LL), &DestinationString, 0x10u, 0LL);
      SEMOBJ::vUnlock((SEMOBJ *)&v18);
    }
  }
  return 1LL;
}
