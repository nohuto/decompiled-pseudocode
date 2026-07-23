/*
 * XREFs of TtmiPurgeSessionPowerRequestEntries @ 0x1408FF184
 * Callers:
 *     TtmiSessionTerminalListWorker @ 0x1408FDA90 (TtmiSessionTerminalListWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall TtmiPurgeSessionPowerRequestEntries(__int64 a1)
{
  unsigned __int64 *v1; // r14
  unsigned __int64 *v3; // rdi
  unsigned __int64 v4; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 *v6; // rdx
  unsigned __int64 v7; // r8
  _QWORD *v8; // rsi
  _QWORD *i; // rbx
  _QWORD *v10; // r9
  _QWORD *v11; // rdx
  _QWORD *v12; // r8
  _QWORD *v13; // rax

  v1 = *(unsigned __int64 **)(a1 + 280);
  v3 = v1;
  while ( 1 )
  {
    if ( !v3 )
      goto LABEL_7;
    v4 = *v3;
    result = *v3 & 0x8000000000000002uLL;
    if ( result == 0x8000000000000002uLL )
    {
      result = MEMORY[0];
      v4 = *v3;
    }
    if ( (v4 & 1) != 0 )
    {
LABEL_7:
      v6 = v1 + 1;
      result = *(_QWORD *)(a1 + 280);
      v7 = result + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 276) >> 5);
      while ( 1 )
      {
        if ( (unsigned __int64)v6 >= v7 )
        {
          v4 = 0LL;
          goto LABEL_12;
        }
        result = *v6;
        if ( (*v6 & 1) == 0 )
          break;
        ++v6;
      }
      v3 = (unsigned __int64 *)*v6;
      v1 = v6;
      v4 = *v6;
    }
    else
    {
      v3 = (unsigned __int64 *)v4;
    }
LABEL_12:
    if ( !v4 )
      return result;
    v8 = (_QWORD *)(v4 + 48);
    for ( i = *(_QWORD **)(v4 + 48); i != v8; i = (_QWORD *)*i )
    {
      v10 = i - 1;
      v11 = i;
      if ( !_bittest(*(const signed __int32 **)(a1 + 64), *((_DWORD *)i - 2)) )
      {
        v12 = (_QWORD *)*i;
        v13 = (_QWORD *)i[1];
        i = v13;
        if ( *(_QWORD **)(*v11 + 8LL) != v11 || (_QWORD *)*v13 != v11 )
          __fastfail(3u);
        *v13 = v12;
        v12[1] = v13;
        ExFreePoolWithTag(v10, 0x52507454u);
      }
    }
  }
}
