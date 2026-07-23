/*
 * XREFs of TtmpSetDisplayRequestEnded @ 0x1409003C0
 * Callers:
 *     TtmpUpdateDisplayRequiredPowerRequest @ 0x1409005B0 (TtmpUpdateDisplayRequiredPowerRequest.c)
 * Callees:
 *     TtmiGetTerminalById @ 0x1408FD93C (TtmiGetTerminalById.c)
 *     TtmiScheduleSessionWorker @ 0x1408FF2A0 (TtmiScheduleSessionWorker.c)
 *     TtmpFindPowerRequestEntryById @ 0x1408FFACC (TtmpFindPowerRequestEntryById.c)
 *     TtmiLogError @ 0x140902C24 (TtmiLogError.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall TtmpSetDisplayRequestEnded(__int64 a1, int a2)
{
  char v3; // si
  _QWORD **v4; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  _QWORD *v7; // r14
  int TerminalById; // eax
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  v3 = 0;
  if ( !TtmpFindPowerRequestEntryById(a1, a2, &v12) )
    return;
  v4 = (_QWORD **)(v12 + 48);
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 == v4 )
      break;
    if ( (_QWORD **)v5[1] != v4 || (v6 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *v4 = v6;
    v7 = v5 - 1;
    v6[1] = v4;
    TerminalById = TtmiGetTerminalById(&v13, a1, *((_DWORD *)v5 - 2));
    if ( TerminalById < 0 )
    {
      TtmiLogError("TtmpSetDisplayRequestEnded", 736LL, (unsigned int)TerminalById, 0xFFFFFFFFLL);
      goto LABEL_13;
    }
    v9 = v13;
    if ( *(_DWORD *)(v13 + 24) != 1416459348 )
      goto LABEL_13;
    v10 = *(_DWORD *)(v13 + 32);
    if ( v10 )
    {
      v11 = v10 - 1;
      *(_DWORD *)(v13 + 32) = v11;
      if ( !v11 )
      {
        *(_DWORD *)(v9 + 36) |= 0x24u;
        v3 = 1;
      }
LABEL_13:
      ExFreePoolWithTag(v7, 0x52507454u);
    }
    else
    {
      TtmiLogError("TtmpSetDisplayRequestEnded", 718LL, 3221225485LL, 0xFFFFFFFFLL);
    }
  }
  if ( v3 )
    TtmiScheduleSessionWorker(a1, 2);
}
