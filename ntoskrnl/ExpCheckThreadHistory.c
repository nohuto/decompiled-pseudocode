char __fastcall ExpCheckThreadHistory(__int64 a1)
{
  int v1; // eax
  struct _KTHREAD *CurrentThread; // rdi
  char v4; // r8
  char v5; // r10
  char i; // r9
  struct _KTHREAD *v7; // rcx
  int v8; // r11d
  int v9; // ebx
  char v11; // dl
  struct _KTHREAD *Object; // rbx
  __int64 v13; // rax
  char j; // r9
  int v15; // esi
  char v16; // r10
  char v17; // di
  _OWORD v18[2]; // [rsp+0h] [rbp-38h] BYREF

  v1 = *(_DWORD *)(a1 + 408);
  memset(v18, 0, sizeof(v18));
  if ( (v1 & 7) == 4 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v5 = 0;
  for ( i = 0; i < 4; ++i )
  {
    v7 = *(struct _KTHREAD **)(a1 + 8LL * i + 72);
    if ( v7 )
    {
      if ( v7 != CurrentThread && v7->WaitBlockFill6[68] == 5 )
      {
        v11 = v7->WaitRegister.Flags & 7;
        if ( (v11 == 1 || v11 == 4) && v7->WaitBlockCount == 1 )
        {
          Object = (struct _KTHREAD *)v7->WaitBlock[0].Object;
          if ( Object != *(struct _KTHREAD **)(*(_QWORD *)(a1 + 16) + 8LL) )
          {
            if ( v11 == 4 || Object == (struct _KTHREAD *)&v7->SuspendEvent )
              return 1;
            v13 = v5++;
            *((_QWORD *)v18 + v13) = Object;
          }
        }
      }
    }
  }
  v8 = v5;
  v9 = v5 - 3;
  if ( v9 < 0 )
    return 0;
  for ( j = 1; ; ++j )
  {
    v15 = j;
    v16 = 1;
    v17 = j;
    if ( v8 - j >= 2 )
      break;
LABEL_19:
    ++v4;
    if ( v15 > v9 )
      return 0;
  }
  while ( *((_QWORD *)v18 + v4) != *((_QWORD *)v18 + v17) || ++v16 < 3 )
  {
    if ( 3 - v16 > v8 - ++v17 )
      goto LABEL_19;
  }
  return 1;
}
