__int64 __fastcall CmpAbortRollbackPacket(__int64 a1, _BYTE *a2)
{
  int v2; // esi
  __int64 v5; // r15
  __int64 v7; // rbx
  NTSTATUS v8; // edi

  v2 = 0;
  if ( a2 )
    *a2 = 0;
  v5 = 0LL;
  if ( *(_DWORD *)a1 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v5);
      if ( v7 )
        break;
LABEL_20:
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= *(_DWORD *)a1 )
        return (unsigned int)v2;
    }
    if ( (v7 & 1) != 0 )
    {
      v8 = CmpRollbackLightWeightTransaction(v7 & 0xFFFFFFFFFFFFFFFEuLL);
      if ( v8 >= 0 )
      {
        CmpTransDereferenceTransaction(v7);
LABEL_11:
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v5) = 0LL;
LABEL_17:
        if ( v2 >= 0 && v8 < 0 )
          v2 = v8;
        goto LABEL_20;
      }
    }
    else
    {
      v8 = TmRollbackEnlistment(*(PKENLISTMENT *)(*(_QWORD *)(a1 + 8) + 8 * v5), 0LL);
      if ( v8 >= 0 )
      {
        ObfDereferenceObject((PVOID)v7);
        goto LABEL_11;
      }
    }
    if ( v8 == -1072103403 || v8 == -1072103405 || v8 == -1072103402 )
    {
      v8 = 0;
      if ( a2 )
        *a2 = 1;
    }
    goto LABEL_17;
  }
  return (unsigned int)v2;
}
