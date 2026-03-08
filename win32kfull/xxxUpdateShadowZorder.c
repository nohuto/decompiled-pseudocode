/*
 * XREFs of xxxUpdateShadowZorder @ 0x1C02246CC
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0068640 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     SetWindowGroupBand @ 0x1C0025CE4 (SetWindowGroupBand.c)
 *     xxxSetWindowPos @ 0x1C0028F4C (xxxSetWindowPos.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C0029674 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 */

struct tagSHADOW *__fastcall xxxUpdateShadowZorder(struct tagWND *a1)
{
  struct tagSHADOW *result; // rax
  __int64 v3; // rcx
  __int64 *v4; // rbx
  __int64 v5; // rdx
  int v6; // ecx
  unsigned int v7; // edx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int128 v11; // [rsp+40h] [rbp-28h] BYREF
  __int64 v12; // [rsp+50h] [rbp-18h]

  v11 = 0LL;
  v12 = 0LL;
  result = FindShadow(a1);
  if ( !result )
    return result;
  v4 = (__int64 *)*((_QWORD *)result + 1);
  v5 = v4[5];
  if ( (*(_BYTE *)(*(_QWORD *)(v3 + 40) + 24LL) & 8) != 0 )
  {
    if ( (*(_BYTE *)(v5 + 24) & 8) == 0 )
    {
      v6 = 1;
LABEL_7:
      SetOrClrWF(v6, v4, 0x808u, 1);
    }
  }
  else if ( (*(_BYTE *)(v5 + 24) & 8) != 0 )
  {
    v6 = 0;
    goto LABEL_7;
  }
  v7 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL);
  if ( *(_DWORD *)(v4[5] + 236) != v7 )
    SetWindowGroupBand((struct tagWND *)v4, v7, 0);
  ThreadLock(v4, &v11);
  xxxSetWindowPos((struct tagWND *)v4, (__int64)a1, 0LL, 0LL, 0, 0, 19);
  return (struct tagSHADOW *)ThreadUnlock1(v9, v8, v10);
}
