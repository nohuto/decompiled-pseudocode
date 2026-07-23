/*
 * XREFs of SepRmSetAuditEventWrkr @ 0x1407C50B0
 * Callers:
 *     SepRmCommandServerThread @ 0x1407AD430 (SepRmCommandServerThread.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x14035BF80 (PsIsCurrentThreadInServerSilo.c)
 */

char __fastcall SepRmSetAuditEventWrkr(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  int v4; // eax
  int *v5; // r10
  __int64 *v6; // r11
  __int64 v7; // rsi
  __int16 v8; // r8
  __int16 v9; // ax
  __int16 v10; // r9
  __int64 v11; // rdx
  __int16 v12; // bx
  int v13; // ecx
  int v14; // edx

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
        v12 = *(_WORD *)(a1 + 2LL * v3 + 44);
        if ( (v12 & 1) != 0 )
        {
          SeAuditingState[2 * v3] = 1;
          ++v9;
          v12 = *(_WORD *)(a1 + 2LL * v3 + 44);
        }
        if ( (v12 & 2) != 0 )
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
          v13 = 33;
          v14 = 17;
          v4 = 65;
        }
        else
        {
          v13 = 34;
          v14 = 18;
          v4 = 66;
        }
      }
      else
      {
LABEL_11:
        v13 = 36;
        v14 = 20;
        v4 = 68;
      }
      if ( v10 )
      {
        v4 = v13;
        if ( v10 == v8 )
          v4 = v14;
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
