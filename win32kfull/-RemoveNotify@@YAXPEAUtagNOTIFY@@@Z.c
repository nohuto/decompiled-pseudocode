/*
 * XREFs of ?RemoveNotify@@YAXPEAUtagNOTIFY@@@Z @ 0x1C000F7B0
 * Callers:
 *     xxxProcessNotifyWinEvent @ 0x1C0063218 (xxxProcessNotifyWinEvent.c)
 *     FreeThreadsWinEvents @ 0x1C00C8670 (FreeThreadsWinEvents.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00D34C0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     ?CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z @ 0x1C01C0B80 (-CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z.c)
 *     xxxProcessTSFEvent @ 0x1C01C1198 (xxxProcessTSFEvent.c)
 * Callees:
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C00394B4 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 */

void __fastcall RemoveNotify(struct tagNOTIFY ***a1)
{
  struct tagNOTIFY **v2; // rax
  struct tagNOTIFY **v3; // rcx

  if ( !tagDomLock::IsLockedExclusive(gDomainWinEventLock) )
    __int2c();
  v2 = *a1;
  if ( (*a1)[1] != (struct tagNOTIFY *)a1 || (v3 = a1[1], *v3 != (struct tagNOTIFY *)a1) )
    __fastfail(3u);
  *v3 = (struct tagNOTIFY *)v2;
  v2[1] = (struct tagNOTIFY *)v3;
  a1[1] = (struct tagNOTIFY **)a1;
  *a1 = (struct tagNOTIFY **)a1;
  if ( !*((_DWORD *)a1 + 6) )
    HMAssignmentUnlock(a1 + 2);
  if ( a1 == (struct tagNOTIFY ***)&unk_1C03621B0 )
    dword_1C0361138 = 0;
  else
    Win32FreePool(a1);
}
