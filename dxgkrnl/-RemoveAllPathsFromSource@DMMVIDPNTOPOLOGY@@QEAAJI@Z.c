__int64 __fastcall DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource(DMMVIDPNTOPOLOGY *this, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  char i; // r14
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbp
  __int64 v17; // r14
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // rax
  __int64 v24; // rax
  unsigned int v25; // [rsp+40h] [rbp+18h] BYREF

  v2 = a2;
  if ( DMMVIDPNTOPOLOGY::IsSourceInTopology(this, a2) )
  {
    v25 = -1;
    for ( i = 0; ; i = 1 )
    {
      v11 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(this, (char *)(unsigned int)v2, 0LL, &v25);
      LODWORD(v16) = v11;
      if ( v11 == -1071774919 )
        break;
      if ( v11 < 0 )
      {
        WdLogSingleEntry3(2LL, v2, this, v11);
        return (unsigned int)v16;
      }
      v17 = v25;
      if ( v25 == -1 )
        WdLogSingleEntry0(1LL);
      v18 = DMMVIDPNTOPOLOGY::RemovePath(this, v2, v17, 0LL);
      v16 = v18;
      if ( v18 < 0 )
      {
        if ( v18 != -1073741790 )
          WdLogSingleEntry0(1LL);
        v23 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v19, v21, v22);
        v23[3] = v2;
        v23[4] = v17;
        v23[5] = v16;
        return (unsigned int)v16;
      }
    }
    v24 = WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
    *(_QWORD *)(v24 + 24) = v2;
    *(_QWORD *)(v24 + 32) = this;
    return i == 0 ? 0xC01E0339 : 0;
  }
  else
  {
    v8 = WdLogNewEntry5_WdTrace(v5, v4, v6, v7);
    *(_QWORD *)(v8 + 24) = v2;
    *(_QWORD *)(v8 + 32) = this;
    return 3223192377LL;
  }
}
