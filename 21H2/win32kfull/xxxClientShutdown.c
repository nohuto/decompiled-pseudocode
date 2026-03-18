/*
 * XREFs of xxxClientShutdown @ 0x1C01093D0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0067528 (xxxRealDefWindowProc.c)
 * Callees:
 *     BuildHwndList @ 0x1C0071A90 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00722E0 (FreeHwndList.c)
 *     ?xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z @ 0x1C010945C (-xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z.c)
 */

__int64 __fastcall xxxClientShutdown(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // ebx
  struct tagBWL *v4; // rax
  struct tagBWL *v5; // rdi

  v2 = 2;
  v4 = BuildHwndList(
         *(ShellWindowManagement **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL) + 8LL) + 24LL)
                                   + 112LL),
         (const struct tagWND *)2,
         *(_QWORD *)(a1 + 16),
         1);
  v5 = v4;
  if ( !v4 )
    return 1LL;
  if ( (a2 & 2) != 0 )
    v2 = xxxClientShutdown2(v4, 0x11u, a2);
  else
    xxxClientShutdown2(v4, 0x16u, a2);
  FreeHwndList(v5);
  return v2;
}
