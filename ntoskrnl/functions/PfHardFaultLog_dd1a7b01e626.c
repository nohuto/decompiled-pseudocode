struct _KTHREAD *__fastcall PfHardFaultLog(_QWORD *a1, int a2, int a3)
{
  struct _KTHREAD *result; // rax
  _KPROCESS *Process; // rbp
  _QWORD *v7; // rsi
  unsigned __int16 v8; // ax
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdx
  _DWORD v12[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v13; // [rsp+48h] [rbp-30h]
  __int64 v14; // [rsp+50h] [rbp-28h]
  __int64 v15; // [rsp+58h] [rbp-20h]
  __int64 v16; // [rsp+60h] [rbp-18h]

  result = KeGetCurrentThread();
  Process = result->Process;
  if ( !*a1 && !a1[1] )
  {
    v7 = a1 + 4;
    goto LABEL_4;
  }
  if ( !a2 )
    goto LABEL_11;
  if ( a2 == 1 )
  {
    v8 = 626;
    goto LABEL_12;
  }
  if ( a2 != 2 )
  {
LABEL_11:
    v8 = 544;
    goto LABEL_12;
  }
  v8 = 627;
LABEL_12:
  v7 = a1 + 4;
  result = (struct _KTHREAD *)EtwTraceSiloTimedEvent(*(_QWORD *)&Process[2].Header.Lock, v8, a3, (int)a1 + 32);
LABEL_4:
  if ( a1[8] )
  {
    if ( a2 != 2 )
    {
      v9 = MEMORY[0xFFFFF78000000320];
      v10 = MEMORY[0xFFFFF78000000320] - a1[8];
      a1[8] = v10;
      v11 = (__int64)Process[1].Header.WaitListHead.Flink ^ (__int64)Process[1].ThreadListHead.Flink;
      v12[0] = 2 * v10;
      v12[1] = dword_140D0BE90;
      v15 = a1[6];
      v13 = (unsigned int)(*v7 >> 9);
      v14 = a1[5];
      v16 = v11 & 0x1FFFFFFFFFFFFFFFLL;
      return (struct _KTHREAD *)PfLogEvent(29, v9, v12, 0x28u);
    }
  }
  return result;
}
