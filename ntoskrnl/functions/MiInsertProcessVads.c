__int64 __fastcall MiInsertProcessVads(__int64 a1, _QWORD **a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  int inserted; // edi
  __int64 Process; // rbp
  _QWORD *v7; // rbx
  _QWORD *v8; // r12

  CurrentThread = KeGetCurrentThread();
  inserted = 0;
  Process = (__int64)CurrentThread->ApcState.Process;
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
  v7 = *a2;
  if ( *a2 )
  {
    while ( 1 )
    {
      v8 = (_QWORD *)*v7;
      inserted = MiInsertVadCharges(v7, a1);
      if ( inserted < 0 )
        break;
      MiInsertVad((__int64)v7, a1, 0);
      v7 = v8;
      if ( !v8 )
        goto LABEL_4;
    }
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
    *a2 = v7;
  }
  else
  {
LABEL_4:
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
    *a2 = 0LL;
  }
  return (unsigned int)inserted;
}
