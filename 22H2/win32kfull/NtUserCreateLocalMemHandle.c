/*
 * XREFs of NtUserCreateLocalMemHandle @ 0x1C01CE090
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C002D0F8 (HMValidateHandle.c)
 *     memmove @ 0x1C0141300 (memmove.c)
 */

__int64 __fastcall NtUserCreateLocalMemHandle(__int64 a1, volatile void *a2, unsigned int a3, _DWORD *a4)
{
  SIZE_T v5; // r15
  __int64 v8; // rdx
  ULONG64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebx
  unsigned int v14; // eax

  v5 = a3;
  EnterCrit(0LL, 0LL);
  v10 = HMValidateHandle(a1, 6u);
  v13 = 0;
  if ( v10 )
  {
    if ( a2 )
      ProbeForWrite(a2, v5, 1u);
    if ( a4 )
    {
      v8 = *(unsigned int *)(v10 + 16);
      v9 = MmUserProbeAddress;
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (_DWORD *)MmUserProbeAddress;
      *a4 = v8;
    }
    if ( a2 && (v14 = *(_DWORD *)(v10 + 16), (unsigned int)v5 >= v14) )
      memmove((void *)a2, (const void *)(v10 + 20), v14);
    else
      v13 = -1073741789;
  }
  else
  {
    v13 = -1073741816;
  }
  UserSessionSwitchLeaveCrit(v9, v8, v11, v12);
  return v13;
}
