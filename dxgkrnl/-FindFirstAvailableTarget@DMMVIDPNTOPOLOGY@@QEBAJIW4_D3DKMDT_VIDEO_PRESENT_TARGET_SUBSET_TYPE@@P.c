__int64 __fastcall DMMVIDPNTOPOLOGY::FindFirstAvailableTarget(
        DMMVIDPNTOPOLOGY *a1,
        unsigned int a2,
        int a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7)
{
  _DWORD *v7; // r12
  _DWORD *v11; // r15
  _DWORD *v12; // r14
  _DWORD *v13; // rsi
  __int64 Container; // rbp
  _QWORD *v15; // r8
  __int64 v16; // r9
  bool v17; // di
  DMMVIDPNTARGETSET *v18; // rbx
  struct DMMVIDPNTARGET *NextTarget; // rbx
  __int64 v20; // rax
  DMMVIDPNTARGETSET *v22; // [rsp+20h] [rbp-48h]

  v7 = a4;
  if ( !a4 )
    WdLogSingleEntry0(1LL);
  if ( !a3 )
    WdLogSingleEntry0(1LL);
  *v7 = -1;
  v11 = a5;
  if ( a5 )
    *a5 = -2;
  v12 = a6;
  if ( a6 )
    *a6 = -2;
  v13 = a7;
  if ( a7 )
    *a7 = 0;
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a1 + 160);
  v17 = a2 == -1;
  v22 = *(DMMVIDPNTARGETSET **)(Container + 312);
  v18 = (DMMVIDPNTARGETSET *)*((_QWORD *)v22 + 3);
  if ( v18 == (DMMVIDPNTARGETSET *)((char *)v22 + 24) )
  {
    NextTarget = 0LL;
    goto LABEL_23;
  }
  NextTarget = (DMMVIDPNTARGETSET *)((char *)v18 - 8);
  if ( NextTarget )
  {
    while ( 1 )
    {
      if ( v17 )
      {
        v20 = *((_QWORD *)NextTarget + 12);
        if ( *(_QWORD *)(v20 + 112)
          && (a3 != 2 || IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(v20 + 80)))
          && (unsigned int)DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(
                             a1,
                             (_QWORD *)*((unsigned int *)NextTarget + 6),
                             v15,
                             v16) == -1 )
        {
LABEL_22:
          v13 = a7;
          v12 = a6;
          v11 = a5;
          v7 = a4;
          break;
        }
      }
      else
      {
        v17 = *((_DWORD *)NextTarget + 6) == a2;
      }
      NextTarget = DMMVIDPNTARGETSET::GetNextTarget(v22, NextTarget);
      if ( !NextTarget )
        goto LABEL_22;
    }
  }
LABEL_23:
  if ( v17 )
  {
    if ( NextTarget )
    {
      *v7 = *((_DWORD *)NextTarget + 6);
      if ( v11 )
        *v11 = *(_DWORD *)(*((_QWORD *)NextTarget + 12) + 80LL);
      if ( v12 )
        *v12 = *(_DWORD *)(*((_QWORD *)NextTarget + 12) + 84LL);
      if ( v13 )
        *v13 = *(_DWORD *)(*((_QWORD *)NextTarget + 12) + 92LL);
      return 0LL;
    }
    else
    {
      WdLogSingleEntry1(7LL, Container);
      return 3223192371LL;
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, Container, a2);
    return 3223192325LL;
  }
}
