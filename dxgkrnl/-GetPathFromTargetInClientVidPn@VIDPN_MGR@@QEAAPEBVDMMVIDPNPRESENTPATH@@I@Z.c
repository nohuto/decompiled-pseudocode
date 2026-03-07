const struct DMMVIDPNPRESENTPATH *__fastcall VIDPN_MGR::GetPathFromTargetInClientVidPn(
        struct _KTHREAD **this,
        unsigned int a2)
{
  __int64 v3; // rsi
  struct DMMVIDPNPRESENTPATH *v4; // rbx
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  _QWORD *v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  DMMVIDPNTOPOLOGY *v9; // rdi
  int PathSourceFromTarget; // eax
  struct DMMVIDPNPRESENTPATH *Path; // rdi
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v3 = a2;
  if ( this[8] != KeGetCurrentThread() )
    WdLogSingleEntry0(1LL);
  v4 = 0LL;
  v13 = 0LL;
  ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef((VIDPN_MGR *)this);
  auto_rc<DMMVIDPN const>::reset(&v13, (__int64)ClientCommittedVidPnRef);
  if ( !v13 )
  {
    if ( !this[1] )
      WdLogSingleEntry0(1LL);
    v8 = *((_QWORD *)this[1] + 2);
    goto LABEL_11;
  }
  v9 = (DMMVIDPNTOPOLOGY *)(v13 + 96);
  if ( v13 == -96 )
    WdLogSingleEntry0(1LL);
  PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v9, (_QWORD *)(unsigned int)v3, v6, v7);
  if ( PathSourceFromTarget == -1 )
  {
    v8 = v3;
LABEL_11:
    WdLogSingleEntry1(7LL, v8);
    goto LABEL_15;
  }
  Path = DMMVIDPNTOPOLOGY::FindPath(v9, PathSourceFromTarget, v3);
  if ( !Path )
    WdLogSingleEntry0(1LL);
  v4 = Path;
LABEL_15:
  auto_rc<DMMVIDPN const>::reset(&v13, 0LL);
  return v4;
}
