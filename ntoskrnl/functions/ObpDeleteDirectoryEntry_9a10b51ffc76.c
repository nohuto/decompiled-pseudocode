LONG_PTR __fastcall ObpDeleteDirectoryEntry(_QWORD *P, void **a2)
{
  char *v2; // rsi
  void *v4; // rdi

  v2 = (char *)P[1];
  v4 = *a2;
  ObpUnlockDirectory((__int64)a2);
  ExFreePoolWithTag(P, 0);
  ObfDereferenceObjectWithTag(v4, 0x6944624Fu);
  if ( ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*(v2 - 24) ^ ((unsigned __int16)((_WORD)v2 - 48) >> 8))) == ObpDirectoryObjectType->Index )
    return ObpDeleteDirectoryName(v2);
  else
    return ObfDereferenceObjectWithTag(v2, 0x6944624Fu);
}
