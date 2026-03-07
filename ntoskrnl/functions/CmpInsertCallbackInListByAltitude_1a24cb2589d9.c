__int64 __fastcall CmpInsertCallbackInListByAltitude(__int64 a1, char a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdi
  LONG v6; // eax
  __int64 *v7; // rax
  __int64 v8; // rcx

  v4 = 0;
  CmpLockCallbackListExclusive();
  *(_QWORD *)(a1 + 24) = ++CmpCallbackCookie;
  v5 = CallbackListHead;
  if ( (__int64 *)CallbackListHead != &CallbackListHead )
  {
    do
    {
      v6 = RtlCompareAltitudes((PCUNICODE_STRING)(v5 + 48), (PCUNICODE_STRING)(a1 + 48));
      if ( v6 )
      {
        if ( v6 < 0 )
          goto LABEL_6;
      }
      else if ( !a2 )
      {
        goto LABEL_10;
      }
      v5 = *(_QWORD *)v5;
    }
    while ( (__int64 *)v5 != &CallbackListHead );
    if ( !v6 && !a2 )
    {
LABEL_10:
      v4 = -1071906799;
      goto LABEL_8;
    }
  }
LABEL_6:
  v7 = *(__int64 **)(v5 + 8);
  v8 = *v7;
  if ( *(__int64 **)(*v7 + 8) != v7 )
    __fastfail(3u);
  *(_QWORD *)a1 = v8;
  *(_QWORD *)(a1 + 8) = v7;
  *(_QWORD *)(v8 + 8) = a1;
  *v7 = a1;
  _InterlockedIncrement(&CmpCallBackCount);
LABEL_8:
  CmpUnlockCallbackList();
  return v4;
}
