__int64 __fastcall EtwpUpdateProcessTracingCallback(PRKPROCESS PROCESS, __int64 a2)
{
  unsigned __int64 v4; // rsi
  struct _EX_RUNDOWN_REF *p_Blink; // rbx
  char v6; // r8
  unsigned int v7; // edx
  __int64 v8; // rax
  __int64 *v9; // rcx
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-50h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  v4 = PROCESS[1].Affinity.StaticBitmap[24];
  if ( v4 )
  {
    p_Blink = (struct _EX_RUNDOWN_REF *)&PROCESS[1].ProfileListHead.Blink;
    if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&PROCESS[1].ProfileListHead.Blink) )
    {
      KeStackAttachProcess(PROCESS, &ApcState);
      v6 = *(_BYTE *)(a2 + 4);
      v7 = *(_DWORD *)a2;
      if ( v6 )
        _interlockedbittestandset((volatile signed __int32 *)(v4 + 888), v7);
      else
        _interlockedbittestandreset((volatile signed __int32 *)(v4 + 888), v7);
      v8 = 0LL;
      v9 = (__int64 *)PROCESS[1].Affinity.StaticBitmap[30];
      if ( v9 )
        v8 = *v9;
      if ( v8 )
      {
        if ( v6 )
          _interlockedbittestandset((volatile signed __int32 *)(v8 + 576), v7);
        else
          _interlockedbittestandreset((volatile signed __int32 *)(v8 + 576), v7);
      }
      KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
      ExReleaseRundownProtection_0(p_Blink);
    }
  }
  return 0LL;
}
