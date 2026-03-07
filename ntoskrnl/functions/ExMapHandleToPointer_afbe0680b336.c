__int64 __fastcall ExMapHandleToPointer(unsigned int *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r9

  if ( (a2 & 0x3FC) != 0 && (v2 = ExpLookupHandleTableEntry(a1, a2)) != 0 )
    return v2 & -(__int64)(ExLockHandleTableEntry(v3, (_QWORD *)v2) != 0);
  else
    return 0LL;
}
