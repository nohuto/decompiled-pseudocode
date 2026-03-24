/*
 * XREFs of NtDCompositionSendDwmLpcMessage @ 0x1C00CDE80
 * Callers:
 *     <none>
 * Callees:
 *     GreUnlockDwmState @ 0x1C0048E10 (GreUnlockDwmState.c)
 *     ReferenceDwmProcess @ 0x1C004AA00 (ReferenceDwmProcess.c)
 *     CheckOrAcquireDwmStateLock @ 0x1C004AA44 (CheckOrAcquireDwmStateLock.c)
 *     UserReferenceDwmApiPort @ 0x1C004AAF0 (UserReferenceDwmApiPort.c)
 *     UserDereferenceDwmProcess @ 0x1C00862D0 (UserDereferenceDwmProcess.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 *     memmove @ 0x1C00CF9C0 (memmove.c)
 */

__int64 __fastcall NtDCompositionSendDwmLpcMessage(char *Src, size_t Size)
{
  PVOID v4; // r12
  signed int v5; // ebx
  struct _KPROCESS *v6; // r13
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r14
  __int64 *v11; // r12
  __int64 v12; // r13
  __int64 CurrentProcess; // rax
  signed int v14; // eax
  __int64 i; // rcx
  void *v16; // rcx
  int v18; // [rsp+38h] [rbp-120h]
  char v19; // [rsp+40h] [rbp-118h]
  struct _KPROCESS *PROCESS; // [rsp+48h] [rbp-110h]
  PVOID Object; // [rsp+50h] [rbp-108h]
  __int128 v22; // [rsp+58h] [rbp-100h]
  void *v23; // [rsp+68h] [rbp-F0h]
  __int64 v24; // [rsp+70h] [rbp-E8h]
  char *v25; // [rsp+78h] [rbp-E0h]
  size_t v26; // [rsp+80h] [rbp-D8h]
  size_t v27; // [rsp+88h] [rbp-D0h]
  size_t v28[2]; // [rsp+90h] [rbp-C8h] BYREF
  _DWORD v29[20]; // [rsp+A0h] [rbp-B8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+F0h] [rbp-68h] BYREF

  v23 = Src;
  v25 = Src;
  v26 = Size;
  v27 = Size;
  v22 = 0LL;
  v4 = 0LL;
  Object = 0LL;
  v24 = 0LL;
  v19 = 0;
  memset(v29, 0, 0x48uLL);
  v5 = Size > 0x20 ? 0xC000000D : 0;
  if ( Size > 0x20 )
  {
    v6 = 0LL;
  }
  else
  {
    if ( &Src[Size] < Src || (unsigned __int64)&Src[Size] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(&v29[10], Src, Size);
    v6 = 0LL;
  }
  v7 = 0LL;
  if ( Size <= 0x20 )
  {
    switch ( v29[10] )
    {
      case 0x4000004A:
        if ( Size == 32 )
        {
          *(_QWORD *)&v22 = &v29[11];
          v7 = 1LL;
          goto LABEL_26;
        }
        break;
      case 0x40000076:
        if ( Size == 28 )
        {
          *(_QWORD *)&v22 = &v29[13];
          *((_QWORD *)&v22 + 1) = &v29[15];
        }
        else
        {
          v5 = -1073741811;
        }
        if ( v27 == 28 )
          v7 = 2LL;
        goto LABEL_26;
      case 0x40000079:
      case 0x4000007A:
      case 0x4000007E:
        if ( Size == 28 )
          *(_QWORD *)&v22 = &v29[13];
        else
          v5 = -1073741811;
        LOBYTE(v7) = Size == 28;
LABEL_26:
        if ( v5 >= 0 )
        {
          v4 = UserReferenceDwmApiPort();
          Object = v4;
          if ( !v4 )
            v5 = -1073741823;
        }
        goto LABEL_29;
    }
    v5 = -1073741811;
    goto LABEL_26;
  }
LABEL_29:
  if ( v5 >= 0 )
  {
    if ( CheckOrAcquireDwmStateLock() )
    {
      v19 = 1;
    }
    else
    {
      v19 = 0;
      v5 = -1073741823;
    }
    if ( v5 >= 0 )
    {
      v6 = (struct _KPROCESS *)ReferenceDwmProcess();
      PROCESS = v6;
      if ( !v6 )
        v5 = -1073741823;
      if ( v5 >= 0 && v7 )
      {
        v10 = 0LL;
        while ( 1 )
        {
          v11 = (__int64 *)*((_QWORD *)&v22 + v10);
          v12 = *v11;
          if ( *v11 )
          {
            CurrentProcess = PsGetCurrentProcess(v9, v8);
            LOBYTE(v18) = 1;
            v5 = ObDuplicateObject(CurrentProcess, v12, PROCESS, v11, 0, 0, 6, v18);
            if ( v5 < 0 )
              break;
          }
          if ( ++v10 >= v7 )
          {
            v6 = PROCESS;
            goto LABEL_48;
          }
        }
        memset(&ApcState, 0, sizeof(ApcState));
        v6 = PROCESS;
        KeStackAttachProcess(PROCESS, &ApcState);
        while ( v10 > 0 )
        {
          --v10;
          ObCloseHandle(**((HANDLE **)&v22 + v10), 1);
        }
        KeUnstackDetachProcess(&ApcState);
LABEL_48:
        v4 = Object;
      }
    }
  }
  if ( v6 )
    UserDereferenceDwmProcess(v6);
  if ( v19 )
    GreUnlockDwmState();
  if ( v5 >= 0 )
  {
    v28[0] = Size + 40;
    LOWORD(v29[0]) = Size;
    HIWORD(v29[0]) = Size + 40;
    LOWORD(v29[1]) = 0x8000;
    v14 = LpcSendWaitReceivePort(v4, 0x20000LL, v29, v29, v28, 0LL);
    v5 = v14;
    if ( v14 == 192 || v14 == 258 )
      v5 = -1073741823;
    if ( v5 >= 0 )
    {
      if ( v7 )
      {
        for ( i = 0LL; i < v7; ++i )
          **((_QWORD **)&v22 + i) = 0LL;
      }
      v16 = v23;
      if ( (unsigned __int64)v23 + Size > MmUserProbeAddress || (char *)v23 + Size <= v23 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v16, &v29[10], Size);
    }
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)v5;
}
