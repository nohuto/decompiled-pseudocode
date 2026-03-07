__int64 __fastcall AlpcpValidateDataInformation(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 v3; // r9
  unsigned __int16 v4; // r9
  _DWORD *v5; // r8

  v2 = *(unsigned __int16 *)(a2 + 6);
  v3 = *(unsigned __int16 *)(a2 + 2);
  if ( (unsigned int)v2 < 0x28 || v2 > v3 - 24 )
    return 3221225485LL;
  v4 = v3 - v2;
  v5 = (_DWORD *)(a1 + v2);
  if ( ((unsigned __int8)v5 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  return (unsigned int)(((unsigned __int64)v4 - 8) >> 4) < *v5 ? 0xC000000D : 0;
}
