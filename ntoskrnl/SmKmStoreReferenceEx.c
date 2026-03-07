unsigned __int64 __fastcall SmKmStoreReferenceEx(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  int v4; // r9d

  if ( (unsigned int)a2 < 0x400 && (v2 = SmKmStoreRefFromStoreIndex(a1, a2)) != 0 )
    return SmKmStoreReference(v3, v4 | ((*(unsigned __int16 *)(v2 + 32) & 0x3Fu) << 10));
  else
    return 0LL;
}
