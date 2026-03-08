/*
 * XREFs of rimFreeSpecificDevFinal @ 0x1C00BC028
 * Callers:
 *     RIMFreeSpecificDev @ 0x1C00BBF88 (RIMFreeSpecificDev.c)
 *     rimDoRimDevChangeAsyncWorkItem @ 0x1C00BC0DC (rimDoRimDevChangeAsyncWorkItem.c)
 *     RIMFreeSpecificDevOnCreateFailure @ 0x1C019DEC8 (RIMFreeSpecificDevOnCreateFailure.c)
 * Callees:
 *     rimDereferenceDev @ 0x1C00354BC (rimDereferenceDev.c)
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     RIMRemoveHoldingFrame @ 0x1C01CDBCC (RIMRemoveHoldingFrame.c)
 */

LONG_PTR __fastcall rimFreeSpecificDevFinal(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rax
  __int64 v6; // rdx
  __int64 *v7; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax

  v4 = (_QWORD *)(a2 + 104);
  v6 = *(_QWORD *)(a2 + 104);
  v7 = a1;
  if ( (_QWORD *)v6 != v4 )
  {
    if ( *(_QWORD **)(v6 + 8) != v4 || (a1 = (__int64 *)v4[1], (_QWORD *)*a1 != v4) )
      __fastfail(3u);
    *a1 = v6;
    *(_QWORD *)(v6 + 8) = a1;
    v4[1] = v4;
    *v4 = v4;
  }
  if ( (*(_DWORD *)(a2 + 184) & 0x2000) != 0 )
  {
    v9 = SGDGetUserSessionState(a1, v6, a3, a4);
    RIMLockExclusive(v9 + 240);
    *(_DWORD *)(a2 + 200) |= 4u;
    v14 = SGDGetUserSessionState(v11, v10, v12, v13);
    *(_QWORD *)(v14 + 248) = 0LL;
    ExReleasePushLockExclusiveEx(v14 + 240, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( *(_BYTE *)(a2 + 48) == 2 )
    RIMRemoveHoldingFrame(v7, a2);
  return rimDereferenceDev(a2, v6, a3, a4);
}
