_UNKNOWN **__fastcall IovpCompleteRequest3(__int64 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **result; // rax
  bool v4; // di
  __int64 v8; // rbp
  _BYTE *v9; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = 0;
  if ( *(_QWORD *)a3 )
  {
    v8 = *(_QWORD *)(a3 + 8);
    *(_BYTE *)(v8 + 16) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 8));
    if ( *(_BYTE *)(a1 + 67) <= *(_BYTE *)(a1 + 66) )
    {
      v9 = *(_BYTE **)(a1 + 184);
      if ( *v9 == 27 )
        v4 = v9[1] == 2;
    }
    *(_BYTE *)(a3 + 16) = v4;
    *(_QWORD *)(a3 + 24) = a2;
    return (_UNKNOWN **)VfIrpDatabaseEntryReleaseLock(v8);
  }
  return result;
}
