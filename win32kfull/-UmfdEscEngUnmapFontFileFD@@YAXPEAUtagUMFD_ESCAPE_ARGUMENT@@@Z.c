/*
 * XREFs of ?UmfdEscEngUnmapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0130084
 * Callers:
 *     UmfdDispatchEscape @ 0x1C00BB270 (UmfdDispatchEscape.c)
 * Callees:
 *     ??0AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1C00BC8FC (--0AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     ?LookUp@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@@Z @ 0x1C00BC9E4 (-LookUp@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@.c)
 *     EngUnmapFontFileFD @ 0x1C011CB40 (EngUnmapFontFileFD.c)
 *     ??1AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1C011FE98 (--1AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 */

void __fastcall UmfdEscEngUnmapFontFileFD(struct tagUMFD_ESCAPE_ARGUMENT *a1)
{
  __int64 v2; // rcx
  NSInstrumentation::CPrioritizedWriterLock *v3; // rcx
  int v4; // [rsp+30h] [rbp+8h] BYREF
  ULONG_PTR iFile; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  AutoSharedUmfdLookupLock::AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)&v6);
  iFile = 0LL;
  v3 = *(NSInstrumentation::CPrioritizedWriterLock **)(*(_QWORD *)(SGDGetSessionState(v2) + 32) + 23472LL);
  if ( v3
    && (v4 = *((_DWORD *)a1 + 2), NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::LookUp(
                                    v3,
                                    &v4,
                                    &iFile)) )
  {
    EngUnmapFontFileFD(iFile);
    if ( v6 )
    {
      GreReleasePushLockShared(v6);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)&v6);
  }
}
