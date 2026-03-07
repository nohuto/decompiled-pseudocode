__int64 __fastcall ArbArbiterHandler(__int64 a1, int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // eax
  unsigned int v8; // edi
  struct _KEVENT *v9; // rcx
  struct _KEVENT *v11; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(*(PVOID *)(a1 + 8), Executive, 0, 0, 0LL);
  if ( a2 > 5 )
  {
    switch ( a2 )
    {
      case 6:
        v7 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 200))(a1, a3);
        goto LABEL_5;
      case 7:
        v7 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 192))(a1, a3);
        goto LABEL_5;
      case 8:
LABEL_22:
        v8 = -1073741822;
        goto LABEL_9;
      case 9:
        v7 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 184))(a1, a3);
        goto LABEL_5;
    }
LABEL_25:
    v8 = -1073741811;
    goto LABEL_9;
  }
  switch ( a2 )
  {
    case 5:
      goto LABEL_22;
    case 0:
      v7 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 152))(a1, a3);
      goto LABEL_5;
    case 1:
      v7 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 160))(a1, a3);
      goto LABEL_5;
  }
  if ( a2 != 2 )
  {
    if ( a2 == 3 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64))(a1 + 176))(a1);
      goto LABEL_5;
    }
    if ( a2 == 4 )
      goto LABEL_22;
    goto LABEL_25;
  }
  v7 = (*(__int64 (__fastcall **)(__int64))(a1 + 168))(a1);
LABEL_5:
  v8 = v7;
  if ( v7 >= 0 )
  {
    if ( (unsigned int)a2 <= 1 )
    {
      v11 = *(struct _KEVENT **)(a1 + 304);
      *(_BYTE *)(a1 + 296) = 1;
      KeResetEvent(v11);
    }
    else if ( (unsigned int)(a2 - 2) <= 1 )
    {
      v9 = *(struct _KEVENT **)(a1 + 304);
      *(_BYTE *)(a1 + 296) = 0;
      KeSetEvent(v9, 0, 0);
    }
  }
LABEL_9:
  KeSetEvent(*(PRKEVENT *)(a1 + 8), 0, 0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v8;
}
