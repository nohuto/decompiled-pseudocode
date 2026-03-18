/*
 * XREFs of ?DestroyInputContext@@YAHPEAUtagIMC@@@Z @ 0x1C01498D8
 * Callers:
 *     NtUserDestroyInputContext @ 0x1C0149860 (NtUserDestroyInputContext.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     BuildHwndList @ 0x1C0071A90 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00722E0 (FreeHwndList.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?AssociateInputContext@@YAPEAUHIMC__@@PEAUtagWND@@PEAUtagIMC@@@Z @ 0x1C0106EF0 (-AssociateInputContext@@YAPEAUHIMC__@@PEAUtagWND@@PEAUtagIMC@@@Z.c)
 */

__int64 __fastcall DestroyInputContext(struct tagIMC *a1, __int64 a2)
{
  __int64 v3; // rdi
  struct tagBWL *v4; // rax
  struct tagBWL *v5; // rbp
  _QWORD *i; // rsi
  struct tagWND *v7; // rax
  __int64 v8; // rax
  __int64 v10; // rcx

  v3 = *((_QWORD *)a1 + 2);
  if ( v3 != gptiCurrent )
  {
    v10 = 5LL;
LABEL_16:
    UserSetLastError(v10, a2);
    return 0LL;
  }
  if ( a1 == *(struct tagIMC **)(v3 + 792) )
  {
    v10 = 87LL;
    goto LABEL_16;
  }
  v4 = BuildHwndList(
         *(ShellWindowManagement **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 456) + 8LL) + 24LL) + 112LL),
         (const struct tagWND *)3,
         *((_QWORD *)a1 + 2),
         1);
  v5 = v4;
  if ( v4 )
  {
    for ( i = (_QWORD *)((char *)v4 + 32); *i != 1LL; ++i )
    {
      v7 = (struct tagWND *)HMValidateHandleNoSecure(*i, 1);
      if ( v7 )
      {
        if ( *(_QWORD *)(*((_QWORD *)v7 + 5) + 208LL) == *(_QWORD *)a1 )
          AssociateInputContext(v7, *(struct tagIMC **)(v3 + 792));
      }
    }
    FreeHwndList(v5);
  }
  v8 = _HMPheFromObject(a1);
  if ( (*(_BYTE *)(v8 + 25) & 1) == 0 )
    HMDestroyUnlockedObject(v8);
  return 1LL;
}
