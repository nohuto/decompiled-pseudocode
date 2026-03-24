/*
 * XREFs of xxxFrostCrashedWindow @ 0x1C020A1B4
 * Callers:
 *     NtUserFrostCrashedWindow @ 0x1C01F8CB0 (NtUserFrostCrashedWindow.c)
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C00388DC (IsWindowBeingDestroyed.c)
 *     _GetProp @ 0x1C006B990 (_GetProp.c)
 *     HMValidateHandleNoSecure @ 0x1C008C3F8 (HMValidateHandleNoSecure.c)
 *     ?_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z @ 0x1C0209E5C (-_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxSendSyncGHOSTINFO@@YAHPEAU_GHOSTINFO@@@Z @ 0x1C020A0B4 (-xxxSendSyncGHOSTINFO@@YAHPEAU_GHOSTINFO@@@Z.c)
 */

unsigned __int64 __fastcall xxxFrostCrashedWindow(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  struct _KTHREAD **v5; // rcx
  unsigned __int64 v6; // rax
  struct _KTHREAD *v7; // rcx
  unsigned int ThreadProcessId; // eax
  PETHREAD *v9; // rcx
  unsigned int ThreadId; // eax
  unsigned __int64 v11; // rbx
  __int64 v12; // rdx
  int v13; // edi
  __int64 v14; // rax
  __int64 v15; // r9
  unsigned __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // r9
  int v20; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v21; // [rsp+24h] [rbp-34h]
  unsigned int v22; // [rsp+2Ch] [rbp-2Ch]
  unsigned int v23; // [rsp+30h] [rbp-28h]
  __int64 v24; // [rsp+34h] [rbp-24h]
  unsigned __int64 v25; // [rsp+3Ch] [rbp-1Ch]

  v4 = 0LL;
  if ( (unsigned int)_ShouldFrostCrashedWindow((struct tagWND *)a1) )
  {
    v5 = *(struct _KTHREAD ***)(a1 + 16);
    v6 = *(_QWORD *)a1;
    v25 = 0LL;
    v20 = 2;
    v7 = *v5;
    v21 = v6;
    ThreadProcessId = (unsigned int)PsGetThreadProcessId(v7);
    v9 = *(PETHREAD **)(a1 + 16);
    v22 = ThreadProcessId;
    ThreadId = (unsigned int)PsGetThreadId(*v9);
    v11 = *(_QWORD *)a1;
    v23 = ThreadId;
    v24 = a2;
    v13 = xxxSendSyncGHOSTINFO((struct _GHOSTINFO *)&v20, v12);
    v14 = HMValidateHandleNoSecure(v11, 1);
    if ( v13 )
    {
      if ( v14 )
      {
        if ( !(unsigned int)IsWindowBeingDestroyed(v14) )
        {
          if ( GetProp(v15, *(unsigned __int16 *)(gpsi + 1378LL), 1LL) )
          {
            v16 = v25;
            if ( v25 )
            {
              v17 = HMValidateHandleNoSecure(v25, 1);
              if ( v17 )
              {
                if ( !(unsigned int)IsWindowBeingDestroyed(v17)
                  && GetProp(v18, *(unsigned __int16 *)(gpsi + 1378LL), 1LL) )
                {
                  return v16;
                }
              }
            }
          }
        }
      }
    }
  }
  return v4;
}
