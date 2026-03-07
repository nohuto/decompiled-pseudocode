bool __fastcall TdrHistoryIsLimitExhausted(
        const struct _TDR_HISTORY *a1,
        const struct _TDR_RECOVERY_CONTEXT *a2,
        char a3)
{
  unsigned int v3; // r10d
  unsigned int v4; // r9d
  __int64 v5; // rax
  bool v6; // cf

  v3 = 0;
  v4 = *((_DWORD *)a1 + 5) & 0x3F;
  do
  {
    v5 = *((_QWORD *)a1 + 5 * v4 + 3);
    if ( !v5 )
      break;
    if ( (unsigned __int64)*((unsigned int *)a1 + 4) * (*((_QWORD *)a2 + 15) - v5) > 10000000
                                                                                   * (unsigned __int64)(unsigned int)dword_1C013BA8C )
      break;
    ++v3;
    v4 = ((_BYTE)v4 - 1) & 0x3F;
  }
  while ( v4 != (*((_DWORD *)a1 + 5) & 0x3F) );
  if ( a3 )
    v6 = v3 + 1 < dword_1C013BA88;
  else
    v6 = v3 < dword_1C013BA88;
  return !v6;
}
