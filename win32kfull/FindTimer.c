__int64 __fastcall FindTimer(void *a1, void *a2, unsigned __int8 a3, int a4, void ***a5)
{
  void **v5; // rbx
  void *v8; // rax
  void ***v10; // rsi
  void **v11; // rdi
  unsigned int v12; // ebp
  void **i; // r14
  __int64 v14; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v16; // rdx

  v5 = 0LL;
  v8 = a2;
  v10 = (void ***)((char *)&gTimerHashTable + 16 * (((unsigned __int8)a2 + BYTE1(a1)) & 0x3F));
  v11 = 0LL;
  v12 = 0;
  for ( i = *v10; i != (void **)v10; i = (void **)*i )
  {
    v11 = i - 14;
    if ( *(i - 3) == a1 && v11[12] == v8 )
    {
      v14 = *((unsigned int *)v11 + 12);
      if ( ((a3 ^ *((_BYTE *)v11 + 48)) & 6) == 0 )
      {
        if ( (v14 & 0x40) != 0 )
          goto LABEL_12;
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14);
        v16 = CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process )
          v16 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
        if ( v16 == *((_QWORD *)v11[3] + 53) || !a1 && ((*((_BYTE *)v11 + 48) ^ a3) & 4) == 0 )
        {
LABEL_12:
          if ( a4 )
          {
            FreeTimer((void ***)i - 14);
            v11 = 0LL;
          }
          v12 = 1;
          break;
        }
      }
      v8 = a2;
    }
  }
  if ( a5 )
  {
    if ( v12 == 1 )
      v5 = v11;
    *a5 = v5;
  }
  return v12;
}
