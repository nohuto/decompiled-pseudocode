/*
 * XREFs of ?RemoveNotify@@YAXPEAUtagNOTIFY@@@Z @ 0x1C0074860
 * Callers:
 *     FreeThreadsWinEvents @ 0x1C00612C0 (FreeThreadsWinEvents.c)
 *     xxxProcessNotifyWinEvent @ 0x1C007446C (xxxProcessNotifyWinEvent.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00F6110 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     ?CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z @ 0x1C01E5124 (-CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z.c)
 *     xxxProcessTSFEvent @ 0x1C01E55A8 (xxxProcessTSFEvent.c)
 * Callees:
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C0072B84 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 */

void __fastcall RemoveNotify(struct tagNOTIFY ***a1)
{
  struct tagNOTIFY **v2; // rax
  struct tagNOTIFY **v3; // rcx

  if ( !tagDomLock::IsLockedExclusive((PERESOURCE *)gDomainWinEventLock) )
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
  if ( a1 == (struct tagNOTIFY ***)&unk_1C0337710 )
    dword_1C0335C78 = 0;
  else
    Win32FreePool(a1);
}
