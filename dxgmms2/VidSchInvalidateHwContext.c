__int64 __fastcall VidSchInvalidateHwContext(__int64 a1, char a2)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 v5; // r14
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // rax
  _BYTE *v9; // r9
  __int64 v10; // r8
  __int64 v11; // rdx
  _BYTE *v12; // rcx
  __int64 v13; // r8
  char v14; // al
  _BYTE *v15; // rax
  int v16; // eax
  bool IsLimitExhausted; // al
  __int64 v18; // rdx
  unsigned __int64 v19; // r8
  __int64 v20; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(v2 + 32);
  VidSchMarkDeviceAsError(v2);
  v6 = *(_QWORD *)(v3 + 1760);
  if ( v6 && (a2 & 1) == 0 )
  {
    v7 = *(_QWORD *)(v2 + 40);
    v8 = *(_QWORD *)(v7 + 8);
    if ( v8 )
    {
      v9 = (_BYTE *)(v6 + 2821);
      *(_QWORD *)(v6 + 2808) = *(_QWORD *)(*(_QWORD *)(v8 + 64) + 80LL);
      v10 = *(_QWORD *)(v7 + 2648);
      if ( !v10 )
        goto LABEL_12;
      v11 = 15LL;
      v12 = (_BYTE *)(v6 + 2821);
      v13 = v10 - (_QWORD)v9;
      do
      {
        if ( v11 == -2147483631 )
          break;
        v14 = v12[v13];
        if ( !v14 )
          break;
        *v12++ = v14;
        --v11;
      }
      while ( v11 );
      v15 = v12 - 1;
      if ( v11 )
        v15 = v12;
      *v15 = 0;
      if ( !v11 )
LABEL_12:
        *v9 = 0;
    }
    if ( !*(_BYTE *)(*(_QWORD *)(v2 + 40) + 2632LL) )
    {
      v16 = *(_DWORD *)(v2 + 48);
      if ( (v16 & 8) == 0 && (v16 & 1) == 0 )
      {
        TdrHistoryUpdate((struct _TDR_HISTORY *)(v7 + 40), (const struct _TDR_RECOVERY_CONTEXT *)v6);
        IsLimitExhausted = TdrHistoryIsLimitExhausted(
                             (const struct _TDR_HISTORY *)(v7 + 40),
                             (const struct _TDR_RECOVERY_CONTEXT *)v6,
                             1);
        *(_BYTE *)(v6 + 2820) = IsLimitExhausted;
        if ( IsLimitExhausted )
        {
          v18 = *(_QWORD *)(v7 + 2624);
          v19 = (unsigned __int64)*(unsigned int *)(v5 + 4) >> 5;
          v20 = *(_DWORD *)(v5 + 4) & 0x1F;
          *(_DWORD *)(v18 + 4 * v19) |= 1 << (*(_BYTE *)(v5 + 4) & 0x1F);
          if ( bTracingEnabled )
          {
            if ( (byte_1C00769C1 & 1) != 0 )
              McTemplateK0dp_EtwWriteTransfer(v20, v18, v19, *(_DWORD *)(v5 + 4), *(_QWORD *)(v6 + 2808));
          }
        }
      }
    }
  }
  return 0LL;
}
