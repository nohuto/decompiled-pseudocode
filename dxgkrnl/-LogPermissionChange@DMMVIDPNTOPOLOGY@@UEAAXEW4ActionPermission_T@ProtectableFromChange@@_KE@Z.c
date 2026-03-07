_QWORD *__fastcall DMMVIDPNTOPOLOGY::LogPermissionChange(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5)
{
  __int64 v7; // rcx
  _QWORD *result; // rax
  unsigned __int64 v9; // rdi
  __int64 v10; // rcx
  _QWORD *v11; // rsi

  if ( (_DWORD)a3 == 1 )
  {
    v7 = (unsigned __int8)a2;
    if ( !(_BYTE)a2 )
      goto LABEL_6;
    v7 = (unsigned int)(unsigned __int8)a2 - 1;
    if ( (unsigned __int8)a2 == 1 )
      goto LABEL_6;
    v7 = (unsigned int)(unsigned __int8)a2 - 2;
    if ( (unsigned __int8)a2 == 2 )
    {
      result = (_QWORD *)WdLogNewEntry5_WdTrace(v7, a2, a3, a4);
      result[4] = a5;
      result[5] = a1 - 56;
      goto LABEL_7;
    }
    if ( (unsigned __int8)a2 == 3 )
    {
LABEL_6:
      result = (_QWORD *)WdLogNewEntry5_WdTrace(v7, a2, a3, a4);
      result[4] = a1 - 56;
LABEL_7:
      result[3] = a4;
      return result;
    }
    a2 = (unsigned __int8)a2;
    return (_QWORD *)WdLogSingleEntry1(2LL, a2);
  }
  if ( (_DWORD)a3 != 2 )
  {
    a2 = (int)a3;
    return (_QWORD *)WdLogSingleEntry1(2LL, a2);
  }
  v9 = (unsigned __int8)a2;
  if ( !(_BYTE)a2 )
  {
    result = (_QWORD *)WdLogNewEntry5_WdTrace((unsigned __int8)a2, a2, a3, a4);
    v11 = result;
    result[3] = a1 - 56;
    if ( v9 < *(_QWORD *)(a1 + 80) )
      goto LABEL_26;
    goto LABEL_25;
  }
  if ( (unsigned __int8)a2 == 1 )
  {
    result = (_QWORD *)WdLogNewEntry5_WdTrace((unsigned int)(unsigned __int8)a2 - 1, a2, a3, a4);
    v11 = result;
    result[3] = a1 - 56;
    if ( v9 < *(_QWORD *)(a1 + 80) )
      goto LABEL_26;
    goto LABEL_25;
  }
  v10 = (unsigned int)(unsigned __int8)a2 - 2;
  if ( (unsigned __int8)a2 == 2 )
  {
    result = (_QWORD *)WdLogNewEntry5_WdTrace(v10, a2, a3, a4);
    v11 = result;
    result[3] = a1 - 56;
    if ( v9 < *(_QWORD *)(a1 + 80) )
      goto LABEL_26;
LABEL_25:
    result = (_QWORD *)WdLogSingleEntry0(1LL);
    goto LABEL_26;
  }
  if ( (unsigned __int8)a2 != 3 )
  {
    a2 = (unsigned __int8)a2;
    return (_QWORD *)WdLogSingleEntry1(2LL, a2);
  }
  result = (_QWORD *)WdLogNewEntry5_WdTrace(v10, a2, a3, a4);
  v11 = result;
  result[3] = a1 - 56;
  if ( v9 >= *(_QWORD *)(a1 + 80) )
    goto LABEL_25;
LABEL_26:
  v11[4] = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v9);
  return result;
}
