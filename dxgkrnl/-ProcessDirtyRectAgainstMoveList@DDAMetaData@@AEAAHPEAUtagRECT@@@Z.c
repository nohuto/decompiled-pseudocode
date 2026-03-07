__int64 __fastcall DDAMetaData::ProcessDirtyRectAgainstMoveList(DDAMetaData *this, struct tagRECT *a2)
{
  int v2; // r14d
  unsigned int v3; // r15d
  unsigned int v6; // ebp
  __int64 v7; // rdi
  __int64 v8; // rbx
  struct tagRECT *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx

  v2 = 0;
  v3 = *((_DWORD *)this + 11);
  v6 = 1;
  v7 = **((_QWORD **)this + 6);
  if ( !v3 )
    return v6;
  v8 = v7 + 8;
  while ( 1 )
  {
    if ( !(unsigned int)RectsOverlap(a2, v8, 0LL) )
    {
      v7 += 24LL;
      v8 += 24LL;
      goto LABEL_7;
    }
    v6 = DDAMetaData::AddToDirtyList(this, v9);
    if ( !v6 )
      break;
    v10 = **((_QWORD **)this + 6);
    v11 = (unsigned int)--*((_DWORD *)this + 11);
    *(_OWORD *)v7 = *(_OWORD *)(v10 + 24 * v11);
    *(_QWORD *)(v7 + 16) = *(_QWORD *)(v10 + 24 * v11 + 16);
LABEL_7:
    if ( ++v2 >= v3 )
      return v6;
  }
  WdLogSingleEntry1(2LL, 847LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to add existing move to dirty list",
    847LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 0LL;
}
