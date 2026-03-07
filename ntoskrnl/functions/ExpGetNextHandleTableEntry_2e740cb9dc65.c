__int64 __fastcall ExpGetNextHandleTableEntry(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *v3; // r10
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // r9

  v3 = a3;
  if ( a2 )
  {
    v6 = *a3 + 4;
    if ( (v6 ^ (unsigned __int64)*a3) < 0x400 )
    {
      v5 = a2 + 16;
      goto LABEL_4;
    }
    v4 = *a3 + 8;
  }
  else
  {
    v4 = 4LL;
  }
  v5 = ExpLookupHandleTableEntry(a1, v4);
LABEL_4:
  *v3 = v6;
  return v5;
}
