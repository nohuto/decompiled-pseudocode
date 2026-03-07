void __fastcall DestroyProcessesObjects(struct tagPROCESSINFO *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _BOOL8 v5; // r14
  char *v6; // rbx
  __int64 v7; // rsi
  __int64 *v8; // rdi
  struct _HANDLEENTRY *v9; // rbx
  _QWORD *v10; // rdi
  struct _HANDLEENTRY *v11; // rsi
  __int64 v12; // rdx
  char v13; // al
  unsigned int CurrentProcessId; // ebx

  v5 = *(_QWORD *)a1 == (_QWORD)gpepCSRSS;
  if ( qword_1C02D2EC8 )
  {
    CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
    if ( (unsigned int)GreGetObjectOwner((__int64)qword_1C02D2EC0, 1) == (CurrentProcessId & 0xFFFFFFFC) )
    {
      if ( qword_1C02D7178 )
        qword_1C02D7178();
    }
  }
  v6 = (char *)&gcachedCaptions;
  v7 = 5LL;
  v8 = (__int64 *)&gcachedCaptions;
  do
  {
    if ( *(_QWORD *)v6 && *(struct tagPROCESSINFO **)(*(_QWORD *)v6 + 24LL) == a1 )
      HMAssignmentUnlockWorker(v8);
    v8 += 2;
    v6 += 16;
    --v7;
  }
  while ( v7 );
  v9 = qword_1C02D0E08;
  v10 = gpKernelHandleTable;
  v11 = (struct _HANDLEENTRY *)((char *)qword_1C02D0E08 + 32 * (unsigned int)giheLast);
  if ( qword_1C02D0E08 <= v11 )
  {
    do
    {
      v12 = *((unsigned __int8 *)v9 + 24);
      if ( (_BYTE)v12 && (*((_BYTE *)&unk_1C028159C + 24 * v12) & 2) != 0 && (struct tagPROCESSINFO *)v10[1] == a1 )
      {
        if ( v5 && (_BYTE)v12 == 3 )
          FixupGlobalCursor(*v10, a1);
        if ( (*((_BYTE *)v9 + 25) & 1) == 0 )
          HMDestroyUnlockedObjectWorker(v9, v12, a3, a4);
        v13 = *((_BYTE *)v9 + 24);
        if ( v13 && gptiRit )
        {
          if ( v13 == 3 )
          {
            if ( qword_1C02D6E00 && (int)qword_1C02D6E00() >= 0 )
            {
              if ( qword_1C02D6E08 )
                qword_1C02D6E08(*v10);
            }
          }
          else
          {
            HMChangeOwnerPheProcessWorker(v9);
          }
        }
      }
      v9 = (struct _HANDLEENTRY *)((char *)v9 + 32);
      v10 += 3;
    }
    while ( v9 <= v11 );
  }
}
