/*
 * XREFs of KiIntSteerUpdateDeviceInterruptMask @ 0x14028EFF0
 * Callers:
 *     KiIntSteerDisable @ 0x14028E484 (KiIntSteerDisable.c)
 *     KiIntSteerConnect @ 0x14028FF2C (KiIntSteerConnect.c)
 *     KiIntSteerDistributeInterrupts @ 0x1402A8CD8 (KiIntSteerDistributeInterrupts.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140234A60 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 */

__int64 __fastcall KiIntSteerUpdateDeviceInterruptMask(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax
  __int64 Prcb; // rax
  unsigned __int16 *v7[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v8; // [rsp+30h] [rbp-18h]
  int v9; // [rsp+32h] [rbp-16h]
  __int16 v10; // [rsp+36h] [rbp-12h]
  unsigned int v11; // [rsp+60h] [rbp+18h] BYREF
  int v12; // [rsp+64h] [rbp+1Ch]

  v12 = HIDWORD(a3);
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v8 = *(_WORD *)(a1 + 8);
  v7[1] = *(unsigned __int16 **)a1;
  v7[0] = 0LL;
  while ( 1 )
  {
    result = KeEnumerateNextProcessor(&v11, v7);
    if ( (_DWORD)result )
      break;
    Prcb = KeGetPrcb(v11);
    if ( a2 )
    {
      if ( a2 == 1 && (*(_DWORD *)(Prcb + 11672))-- == 1 )
        _interlockedbittestandset64(
          (volatile signed __int32 *)(*(_QWORD *)(Prcb + 192) + 104LL),
          *(unsigned __int8 *)(Prcb + 209));
    }
    else if ( ++*(_DWORD *)(Prcb + 11672) == 1 )
    {
      _interlockedbittestandreset64(
        (volatile signed __int32 *)(*(_QWORD *)(Prcb + 192) + 104LL),
        *(unsigned __int8 *)(Prcb + 209));
    }
  }
  return result;
}
