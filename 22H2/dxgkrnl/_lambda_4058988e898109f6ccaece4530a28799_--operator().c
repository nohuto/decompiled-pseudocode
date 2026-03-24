/*
 * XREFs of _lambda_4058988e898109f6ccaece4530a28799_::operator() @ 0x1C02E5AA4
 * Callers:
 *     ?BuildDynamicVideoPresentTargetChildRelations@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAKPEAIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C02E5BF8 (-BuildDynamicVideoPresentTargetChildRelations@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAKPEAIPEAW4_CONN.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_4058988e898109f6ccaece4530a28799_::operator()(__int64 a1, __int64 a2)
{
  unsigned int *v2; // r8
  unsigned int v4; // r9d
  unsigned int v5; // r10d
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r10
  unsigned int v9; // edi
  __int64 v10; // r11
  __int64 v11; // rdx
  int v12; // eax

  v2 = *(unsigned int **)a1;
  v4 = **(_DWORD **)a1;
  v5 = **(_DWORD **)(a1 + 8);
  if ( v4 >= v5 )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v6);
    v2 = *(unsigned int **)a1;
    v4 = **(_DWORD **)a1;
    v5 = **(_DWORD **)(a1 + 8);
  }
  v7 = v5 - 1;
  v8 = v5 - 2;
  v9 = *(_DWORD *)(**(_QWORD **)(a1 + 16) + 4 * v7);
  if ( (unsigned int)v8 >= v4 )
  {
    v10 = (unsigned int)(v8 + 1);
    do
    {
      v11 = **(_QWORD **)(a1 + 16);
      v12 = *(_DWORD *)(v11 + 4 * v8);
      v8 = (unsigned int)(v8 - 1);
      *(_DWORD *)(v11 + 4 * v10) = v12;
      v10 = (unsigned int)(v10 - 1);
      v2 = *(unsigned int **)a1;
      v4 = **(_DWORD **)a1;
    }
    while ( (unsigned int)v8 >= v4 );
  }
  *v2 = v4 + 1;
  return v9;
}
