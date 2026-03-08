/*
 * XREFs of NewContext @ 0x1C00539EC
 * Callers:
 *     AsyncEvalObject @ 0x1C00544D0 (AsyncEvalObject.c)
 *     AMLILoadDDB @ 0x1C00AB124 (AMLILoadDDB.c)
 * Callees:
 *     memset @ 0x1C0002180 (memset.c)
 *     InitContext @ 0x1C0053838 (InitContext.c)
 */

__int64 __fastcall NewContext(char **a1)
{
  unsigned int v2; // ebx
  char *v3; // rax
  KIRQL v4; // dl
  int v5; // eax
  KIRQL v6; // al
  _QWORD *v7; // rcx
  _UNKNOWN **v8; // rax

  v2 = 0;
  v3 = (char *)ExAllocateFromNPagedLookasideList(&AMLIContextLookAsideList);
  *a1 = v3;
  if ( v3 )
  {
    memset(v3, 0, 0x238uLL);
    v4 = KeAcquireSpinLockRaiseToDpc(&gdwGContextSpinLock);
    v5 = gdwcCTObjs + 1;
    gdwcCTObjs = v5;
    if ( v5 > 0 && v5 > (unsigned int)gdwcCTObjsMax )
      gdwcCTObjsMax = v5;
    KeReleaseSpinLock(&gdwGContextSpinLock, v4);
    InitContext(*a1);
    v6 = KeAcquireSpinLockRaiseToDpc(&gmutCtxtList);
    v7 = off_1C006C460;
    byte_1C00701C8 = v6;
    v8 = (_UNKNOWN **)(*a1 + 16);
    if ( *off_1C006C460 != (_UNKNOWN *)&glistCtxtHead )
      __fastfail(3u);
    *((_QWORD *)*a1 + 3) = off_1C006C460;
    *v8 = &glistCtxtHead;
    *v7 = v8;
    off_1C006C460 = v8;
    KeReleaseSpinLock(&gmutCtxtList, byte_1C00701C8);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
