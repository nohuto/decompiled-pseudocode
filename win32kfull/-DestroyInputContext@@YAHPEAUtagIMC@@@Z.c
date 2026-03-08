/*
 * XREFs of ?DestroyInputContext@@YAHPEAUtagIMC@@@Z @ 0x1C01B88F4
 * Callers:
 *     NtUserDestroyInputContext @ 0x1C01CF610 (NtUserDestroyInputContext.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     BuildHwndList @ 0x1C0041A10 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00680B0 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 *     ?AssociateInputContext@@YAPEAUHIMC__@@PEAUtagWND@@PEAUtagIMC@@@Z @ 0x1C01B8724 (-AssociateInputContext@@YAPEAUHIMC__@@PEAUtagWND@@PEAUtagIMC@@@Z.c)
 */

__int64 __fastcall DestroyInputContext(struct tagIMC *a1)
{
  __int64 v2; // rdi
  int v3; // ecx
  struct tagBWL *v5; // rax
  struct tagBWL *v6; // rbp
  _QWORD *i; // rsi
  struct tagWND *v8; // rax
  __int64 v9; // rax

  v2 = *((_QWORD *)a1 + 2);
  if ( v2 != gptiCurrent )
  {
    v3 = 5;
LABEL_3:
    UserSetLastError(v3);
    return 0LL;
  }
  if ( a1 == *(struct tagIMC **)(v2 + 792) )
  {
    v3 = 87;
    goto LABEL_3;
  }
  v5 = BuildHwndList(
         *(ShellWindowManagement **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 456) + 8LL) + 24LL) + 112LL),
         3,
         *((_QWORD *)a1 + 2),
         1);
  v6 = v5;
  if ( v5 )
  {
    for ( i = (_QWORD *)((char *)v5 + 32); *i != 1LL; ++i )
    {
      v8 = (struct tagWND *)HMValidateHandleNoSecure(*i, 1);
      if ( v8 && *(_QWORD *)(*((_QWORD *)v8 + 5) + 208LL) == *(_QWORD *)a1 )
        AssociateInputContext(v8, *(struct tagIMC **)(v2 + 792));
    }
    FreeHwndList(v6);
  }
  v9 = _HMPheFromObject(a1);
  if ( (*(_BYTE *)(v9 + 25) & 1) == 0 )
    HMDestroyUnlockedObject(v9);
  return 1LL;
}
