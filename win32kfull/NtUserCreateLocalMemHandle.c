__int64 __fastcall NtUserCreateLocalMemHandle(__int64 a1, volatile void *a2, unsigned int a3, _DWORD *a4)
{
  SIZE_T v5; // r15
  ULONG64 v8; // rcx
  __int64 v9; // rsi
  unsigned int v10; // ebx
  unsigned int v11; // eax

  v5 = a3;
  EnterCrit(0LL, 0LL);
  v9 = HMValidateHandle(a1, 6u);
  v10 = 0;
  if ( v9 )
  {
    if ( a2 )
      ProbeForWrite(a2, v5, 1u);
    if ( a4 )
    {
      v8 = MmUserProbeAddress;
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (_DWORD *)MmUserProbeAddress;
      *a4 = *(_DWORD *)(v9 + 16);
    }
    if ( a2 && (v11 = *(_DWORD *)(v9 + 16), (unsigned int)v5 >= v11) )
      memmove((void *)a2, (const void *)(v9 + 20), v11);
    else
      v10 = -1073741789;
  }
  else
  {
    v10 = -1073741816;
  }
  UserSessionSwitchLeaveCrit(v8);
  return v10;
}
