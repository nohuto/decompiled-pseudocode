/*
 * XREFs of ?UmfdEscEngGetFileChangeTime@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C029D2C0
 * Callers:
 *     UmfdDispatchEscape @ 0x1C0010B54 (UmfdDispatchEscape.c)
 * Callees:
 *     ?LookUp@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@@Z @ 0x1C0010648 (-LookUp@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@.c)
 *     ??1AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1C015DD8C (--1AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     ??0AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1C015E120 (--0AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     EngGetFileChangeTime @ 0x1C027B4F0 (EngGetFileChangeTime.c)
 */

void __fastcall UmfdEscEngGetFileChangeTime(struct tagUMFD_ESCAPE_ARGUMENT *a1)
{
  volatile void **v1; // rbx
  __int64 v2; // rcx
  int v3; // [rsp+40h] [rbp+8h] BYREF
  HANDLE h; // [rsp+48h] [rbp+10h] BYREF
  LARGE_INTEGER pChangeTime; // [rsp+50h] [rbp+18h] BYREF
  char v6; // [rsp+58h] [rbp+20h] BYREF

  v1 = (volatile void **)((char *)a1 + 8);
  pChangeTime.QuadPart = 0LL;
  AutoSharedUmfdLookupLock::AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)&v6);
  h = 0LL;
  if ( UmfdFileviewLookup
    && (v3 = *(_DWORD *)v1, NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::LookUp(v2, &v3, &h))
    && EngGetFileChangeTime(h, &pChangeTime) )
  {
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)&v6);
    ProbeForWrite(v1[1], 8uLL, 4u);
    *(LARGE_INTEGER *)v1[1] = pChangeTime;
    *(_DWORD *)v1 = 1;
  }
  else
  {
    *(_DWORD *)v1 = 0;
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)&v6);
  }
}
