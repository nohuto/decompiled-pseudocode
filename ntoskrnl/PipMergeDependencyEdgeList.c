void __fastcall PipMergeDependencyEdgeList(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r15
  int v5; // r14d
  __int64 *v6; // rsi
  _QWORD **v7; // rdi
  _QWORD *v8; // r13
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 *v13; // r8
  __int64 v14; // r15
  __int64 v15; // rdx
  bool v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rcx
  UNICODE_STRING *v19; // rsi
  PCUNICODE_STRING *v20; // rdx
  PVOID P; // [rsp+20h] [rbp-48h] BYREF
  __int64 *v25; // [rsp+88h] [rbp+20h]

  P = 0LL;
  v3 = a2;
  v5 = a3;
  v6 = (__int64 *)((a3 != 0 ? 0x10 : 0) + a1 + 16);
  v25 = v6;
  v7 = (_QWORD **)(a2 + 16 + (a3 != 0 ? 0x10 : 0));
  PiPnpRtlBeginOperation((__int64 **)&P);
  v8 = *v7;
  if ( *v7 == v7 )
    goto LABEL_21;
  do
  {
    v9 = PiListEntryToDependencyEdge((__int64)v8, v5);
    v10 = *v6;
    v11 = v9;
    v8 = (_QWORD *)*v8;
    if ( (__int64 *)*v6 == v6 )
      goto LABEL_9;
    while ( 1 )
    {
      v12 = PiListEntryToDependencyEdge(v10, v5);
      v10 = *v13;
      v14 = v12;
      if ( v5 )
        break;
      v15 = *(_QWORD *)(v11 + 32);
      v16 = v15 == *(_QWORD *)(v12 + 32);
      if ( v15 == *(_QWORD *)(v12 + 32) )
        goto LABEL_12;
LABEL_7:
      if ( (__int64 *)v10 == v6 )
      {
        v3 = a2;
        goto LABEL_9;
      }
    }
    if ( *(_QWORD *)(v11 + 40) != *(_QWORD *)(v12 + 40) )
      goto LABEL_7;
    v16 = 1;
LABEL_12:
    v19 = *(UNICODE_STRING **)(v11 + 56);
    while ( v19 != (UNICODE_STRING *)(v11 + 56) )
    {
      v20 = (PCUNICODE_STRING *)v19;
      v19 = *(UNICODE_STRING **)&v19->Length;
      PipAddRequestToEdge(v14, v20 + 2);
    }
    PipFreeDependencyEdge((_DWORD *)v11, v14);
    v5 = a3;
    v11 = 0LL;
    v3 = a2;
    if ( !v16 )
    {
LABEL_9:
      if ( v5 )
      {
        v18 = *(_QWORD *)(v11 + 40);
        v17 = a1;
        *(_QWORD *)(v11 + 32) = a1;
      }
      else
      {
        v17 = *(_QWORD *)(v11 + 32);
        v18 = a1;
        *(_QWORD *)(v11 + 40) = a1;
      }
      PipNotifyDependenciesChanged(v18, v17);
      ++*(_DWORD *)(a1 + 88);
      if ( (*(_DWORD *)(v3 + 88))-- == 1 )
        PipDeleteDependencyNode((_QWORD *)v3);
    }
    v6 = v25;
  }
  while ( v8 != v7 );
LABEL_21:
  PipMoveListEntries(v6, (__int64)v7);
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
}
