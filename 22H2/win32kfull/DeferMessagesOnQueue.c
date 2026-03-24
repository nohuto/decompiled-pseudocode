/*
 * XREFs of DeferMessagesOnQueue @ 0x1C00056B8
 * Callers:
 *     ?xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1PEAVCMultiPerObjectLockExclusivePpiPtiQ@@@Z @ 0x1C0166FE8 (-xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1PEAVCMultiPerObjectLockExclusivePpiP.c)
 * Callees:
 *     ?DeferMessage@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x1C00057B8 (-DeferMessage@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 *     WPP_RECORDER_SF_qiqdd @ 0x1C00585D0 (WPP_RECORDER_SF_qiqdd.c)
 *     IsHiddenByInputService @ 0x1C0066884 (IsHiddenByInputService.c)
 */

struct tagQMSG *__fastcall DeferMessagesOnQueue(struct tagMLIST *a1, struct tagQMSG *a2)
{
  int v2; // esi
  __int64 v4; // rax
  struct tagQMSG **v5; // rax
  struct tagQMSG *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // r8d

  v2 = 0;
  if ( a2 )
  {
    do
    {
      v4 = *((_QWORD *)a2 + 13);
      if ( !v4 || (*(_DWORD *)(v4 + 488) & 0x10000) == 0 )
        break;
      v5 = (struct tagQMSG **)*((_QWORD *)a2 + 1);
      v6 = *(struct tagQMSG **)a2;
      if ( v5 )
        *v5 = v6;
      else
        *(_QWORD *)a1 = v6;
      v7 = *((_QWORD *)a2 + 1);
      if ( *(_QWORD *)a2 )
        *(_QWORD *)(*(_QWORD *)a2 + 8LL) = v7;
      else
        *((_QWORD *)a1 + 1) = v7;
      *((_QWORD *)a2 + 1) = 0LL;
      *(_QWORD *)a2 = 0LL;
      DeferMessage(a1, a2);
      if ( !(unsigned int)IsHiddenByInputService(v8) )
      {
        ++v2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qiqdd(
            v10,
            v9,
            v11,
            16,
            (__int64)&WPP_fae14e43e2df34d42d304f3db5b27b93_Traceguids,
            v9,
            *(_QWORD *)(v9 + 136),
            (char)a1,
            *((_DWORD *)a1 + 5),
            *((_DWORD *)a1 + 4) - v2);
      }
      a2 = v6;
    }
    while ( v6 );
  }
  *((_DWORD *)a1 + 4) -= v2;
  return a2;
}
