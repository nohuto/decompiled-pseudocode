/*
 * XREFs of xxxDestroyThreadDDEObject @ 0x1C0119D30
 * Callers:
 *     NtUserCsDdeUninitialize @ 0x1C0004150 (NtUserCsDdeUninitialize.c)
 *     NtUserDdeInitialize @ 0x1C010D550 (NtUserDdeInitialize.c)
 * Callees:
 *     xxxDestroyWindow @ 0x1C0062330 (xxxDestroyWindow.c)
 */

__int64 __fastcall xxxDestroyThreadDDEObject(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rcx
  _QWORD *v5; // rcx
  _QWORD *v6; // rdi
  _QWORD *j; // rax
  _QWORD *i; // rax

  if ( *(_BYTE *)(_HMPheFromObject(a2) + 24) != 9
    || (*(_BYTE *)(_HMPheFromObject(a2) + 25) & 1) != 0
    || *(_QWORD *)(_HMPkheFromObject(a2) + 8) != a1 )
  {
    return 0LL;
  }
  v4 = *(_QWORD **)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters;
  if ( a2 == *(_QWORD **)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
  {
    *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = a2[3];
  }
  else
  {
    for ( i = *(_QWORD **)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters + 24LL); i != a2; i = (_QWORD *)i[3] )
      v4 = i;
    v4[3] = a2[3];
  }
  v5 = *(_QWORD **)(a1 + 624);
  if ( a2 == v5 )
  {
    *(_QWORD *)(a1 + 624) = a2[4];
  }
  else
  {
    for ( j = (_QWORD *)v5[4]; j != a2; j = (_QWORD *)j[4] )
      v5 = j;
    v5[4] = a2[4];
  }
  if ( (unsigned int)HMMarkObjectDestroy(a2) )
  {
    v6 = (_QWORD *)a2[6];
    if ( HMAssignmentUnlock(a2 + 6) )
    {
      HMFreeObject(a2);
      xxxDestroyWindow(v6);
    }
    else
    {
      HMFreeObject(a2);
    }
  }
  return 1LL;
}
