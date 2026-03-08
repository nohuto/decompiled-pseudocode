/*
 * XREFs of RtlpLookupUserFunctionTableInverted @ 0x14039DBC0
 * Callers:
 *     RtlpLookupUserFunctionTable @ 0x14039DB7C (RtlpLookupUserFunctionTable.c)
 *     RtlGetImageBaseAndLoadConfig @ 0x1405AF9E0 (RtlGetImageBaseAndLoadConfig.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

unsigned __int64 __fastcall RtlpLookupUserFunctionTableInverted(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  int v7; // r8d
  int v8; // r9d
  int v9; // r10d
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r8
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  signed __int32 v16[8]; // [rsp+0h] [rbp-58h] BYREF
  int v17; // [rsp+20h] [rbp-38h]
  int v18; // [rsp+24h] [rbp-34h]
  _DWORD *v19; // [rsp+28h] [rbp-30h]
  unsigned __int64 v20; // [rsp+30h] [rbp-28h]
  int v21; // [rsp+70h] [rbp+18h]

  v4 = qword_140D1F388;
  v19 = (_DWORD *)qword_140D1F388;
  v21 = *(_DWORD *)(qword_140D1F388 + 8);
  v17 = 0;
  v18 = 0;
  v5 = qword_140D1F388 + 16;
  v6 = *(_QWORD *)(qword_140D1F388 + 24);
  if ( a1 < v6 || a1 >= v6 + *(unsigned int *)(qword_140D1F388 + 32) )
  {
    v7 = *v19 - 1;
    if ( (unsigned int)v7 > 0x200 )
      return 0LL;
    if ( *v19 != 1 )
    {
      v8 = 1;
      v18 = 1;
      v17 = v7;
      while ( v7 >= v8 )
      {
        v9 = (v8 + v7) >> 1;
        v5 = (__int64)&v19[6 * v9 + 4];
        v10 = *(_QWORD *)(v5 + 8);
        v11 = v10 + *(unsigned int *)(v5 + 16);
        if ( v11 < v10 )
          return 0LL;
        if ( a1 < v10 )
        {
          if ( !v9 )
            break;
          v7 = v9 - 1;
          v17 = v9 - 1;
        }
        else
        {
          if ( a1 < v11 )
            goto LABEL_13;
          v8 = v9 + 1;
          v18 = v9 + 1;
        }
      }
    }
    v5 = 0LL;
  }
LABEL_13:
  if ( !v5 )
    return 0LL;
  v12 = *(_QWORD *)v5;
  v20 = v12;
  *(_QWORD *)a2 = v12;
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(v5 + 8);
  *(_DWORD *)(a2 + 20) = *(_DWORD *)(v5 + 20);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(v5 + 16);
  v13 = *(unsigned int *)(a2 + 20);
  if ( (_DWORD)v13 )
  {
    if ( (v12 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v12 + v13 > 0x7FFFFFFF0000LL || v12 + v13 < v12 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  v14 = *(_QWORD *)(a2 + 8);
  if ( (_WORD)v14 )
    ExRaiseDatatypeMisalignment();
  if ( v14 + 64 > 0x7FFFFFFF0000LL || v14 + 64 < v14 )
    MEMORY[0x7FFFFFFF0000] = 0;
  _InterlockedOr(v16, 0);
  if ( *(_DWORD *)(v4 + 8) != v21 || (v21 & 1) != 0 )
    return 0LL;
  else
    return v20;
}
