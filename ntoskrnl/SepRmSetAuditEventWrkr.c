/*
 * XREFs of SepRmSetAuditEventWrkr @ 0x14084A570
 * Callers:
 *     SepRmCommandServerThread @ 0x140825260 (SepRmCommandServerThread.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402459D0 (PsIsCurrentThreadInServerSilo.c)
 */

char __fastcall SepRmSetAuditEventWrkr(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  int v4; // eax
  int *v5; // rdi
  __int64 *v6; // rsi
  __int64 v7; // r14
  __int16 v8; // r11
  __int16 v9; // dx
  __int16 v10; // cx
  __int64 v11; // rbp
  int v12; // edx
  int v13; // r8d

  v3 = 0;
  *(_DWORD *)(a2 + 40) = 0;
  LOBYTE(v4) = PsIsCurrentThreadInServerSilo(a1, a2);
  if ( !(_BYTE)v4 )
  {
    v5 = SeAuditingStateByCategory;
    v6 = AdtpPerCategoryCount;
    v7 = 9LL;
    do
    {
      v8 = *(_WORD *)v6;
      v9 = 0;
      v10 = 0;
      if ( !*(_WORD *)v6 )
        goto LABEL_11;
      v11 = *(unsigned __int16 *)v6;
      do
      {
        *(_WORD *)&SeAuditingState[2 * v3] = 0;
        if ( (*(_BYTE *)(a1 + 2LL * v3 + 44) & 1) != 0 )
        {
          SeAuditingState[2 * v3] = 1;
          ++v9;
        }
        if ( (*(_BYTE *)(a1 + 2LL * v3 + 44) & 2) != 0 )
        {
          SeAuditingState[2 * v3 + 1] = 1;
          ++v10;
        }
        ++v3;
        --v11;
      }
      while ( v11 );
      if ( v9 )
      {
        if ( v9 == v8 )
        {
          v12 = 33;
          v4 = 65;
          v13 = 17;
        }
        else
        {
          v12 = 34;
          v4 = 66;
          v13 = 18;
        }
      }
      else
      {
LABEL_11:
        v12 = 36;
        v4 = 68;
        v13 = 20;
      }
      if ( v10 )
      {
        v4 = v12;
        if ( v10 == v8 )
          v4 = v13;
      }
      *v5 = v4;
      v6 = (__int64 *)((char *)v6 + 2);
      ++v5;
      --v7;
    }
    while ( v7 );
    SepRmAuditingEnabled = 1;
  }
  return v4;
}
