/*
 * XREFs of ?UmfdEscEngGetFileChangeTime@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A9BE8
 * Callers:
 *     UmfdDispatchEscape @ 0x1C00BB270 (UmfdDispatchEscape.c)
 * Callees:
 *     ??0AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1C00BC8FC (--0AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     ?LookUp@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@@Z @ 0x1C00BC9E4 (-LookUp@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@.c)
 *     ??1AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1C011FE98 (--1AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     EngGetFileChangeTime @ 0x1C027BFB0 (EngGetFileChangeTime.c)
 */

void __fastcall UmfdEscEngGetFileChangeTime(struct tagUMFD_ESCAPE_ARGUMENT *a1)
{
  volatile void **v1; // rbx
  __int64 v2; // rcx
  NSInstrumentation::CPrioritizedWriterLock *v3; // rcx
  int v4; // [rsp+40h] [rbp+8h] BYREF
  HANDLE h; // [rsp+48h] [rbp+10h] BYREF
  LARGE_INTEGER pChangeTime; // [rsp+50h] [rbp+18h] BYREF
  char v7; // [rsp+58h] [rbp+20h] BYREF

  v1 = (volatile void **)((char *)a1 + 8);
  pChangeTime.QuadPart = 0LL;
  AutoSharedUmfdLookupLock::AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)&v7);
  h = 0LL;
  v3 = *(NSInstrumentation::CPrioritizedWriterLock **)(*(_QWORD *)(SGDGetSessionState(v2) + 32) + 23472LL);
  if ( v3
    && (v4 = *(_DWORD *)v1, NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::LookUp(v3, &v4, &h))
    && EngGetFileChangeTime(h, &pChangeTime) )
  {
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)&v7);
    ProbeForWrite(v1[1], 8uLL, 4u);
    *(LARGE_INTEGER *)v1[1] = pChangeTime;
    *(_DWORD *)v1 = 1;
  }
  else
  {
    *(_DWORD *)v1 = 0;
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)&v7);
  }
}
