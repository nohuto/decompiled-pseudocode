__int64 __fastcall PsMapSystemDlls(__int64 a1, unsigned int a2)
{
  int v2; // ebx
  int v5; // r14d
  int v6; // ebp
  int v7; // r15d
  __int64 v8; // rsi
  _UNKNOWN **v9; // rdx
  $115DCDF994C6370D29323EAB0E0C9502 v11; // [rsp+20h] [rbp-68h] BYREF

  v2 = 0;
  memset(&v11, 0, sizeof(v11));
  if ( (_KPROCESS *)a1 == KeGetCurrentThread()->ApcState.Process )
  {
    v5 = 0;
  }
  else
  {
    v5 = 1;
    KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)&v11);
  }
  v6 = *(_QWORD *)(a1 + 1408) != 0LL;
  if ( (*(_BYTE *)(a1 + 992) & 1) != 0 )
    v6 = 2;
  v7 = 0;
  v8 = 0LL;
  while ( 1 )
  {
    v9 = PspSystemDlls[v8];
    if ( v9 )
    {
      if ( v8 )
      {
        if ( v6 == 1 )
        {
          if ( v7 != (unsigned int)PsWow64GetProcessNtdllType(a1) )
            goto LABEL_7;
        }
        else if ( v6 != 2 || ((_DWORD)v9[1] & 0x40) == 0 )
        {
          goto LABEL_7;
        }
      }
      v2 = PspMapSystemDll(
             a1,
             v9,
             a2,
             0LL,
             v11.SavedApcState.ApcListHead[0].Flink,
             v11.SavedApcState.ApcListHead[0].Blink,
             v11.SavedApcState.ApcListHead[1].Flink,
             v11.SavedApcState.ApcListHead[1].Blink,
             v11.SavedApcState.Process,
             *(_QWORD *)&v11.SavedApcStateFill[40]);
      if ( v2 < 0 )
        break;
    }
LABEL_7:
    ++v7;
    if ( ++v8 >= 7 )
      goto LABEL_8;
  }
  if ( v6 == 1 )
    v2 = -1073741405;
LABEL_8:
  if ( v5 )
    KiUnstackDetachProcess(&v11);
  return (unsigned int)v2;
}
