/*
 * XREFs of PepParkMask @ 0x1C000DCD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0003AB4 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EAD0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000EDC0 (memset.c)
 */

__int64 __fastcall PepParkMask(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // r14
  __int128 v8; // [rsp+30h] [rbp-30h] BYREF
  __int64 v9; // [rsp+40h] [rbp-20h]
  _DWORD v10[2]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v11; // [rsp+50h] [rbp-10h]
  void *v12; // [rsp+58h] [rbp-8h]
  unsigned int v13; // [rsp+A0h] [rbp+40h] BYREF

  result = 0LL;
  v13 = 0;
  v10[1] = 0;
  v8 = 0LL;
  v9 = 0LL;
  if ( !PepSkipParkNotification )
  {
    result = (unsigned int)dword_1C0013970;
    if ( dword_1C0013970 >= (unsigned int)dword_1C00133F4 )
    {
      memset(&PepParkLists, 0, (unsigned int)(16 * dword_1C00133F4));
      v5 = 0;
      KeInitializeEnumerationContext(&v8, &unk_1C0013718);
      result = KeEnumerateNextProcessor(&v13, &v8);
      if ( !(_DWORD)result )
      {
        do
        {
          v6 = v13;
          v7 = *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Blink->Flink + v13);
          *((_QWORD *)&PepParkLists + 2 * v5) = *(_QWORD *)(v7 + 1104);
          *((_BYTE *)&PepParkLists + 16 * v5++ + 8) = KeCheckProcessorAffinityEx(a2, v6);
          result = KeEnumerateNextProcessor(&v13, &v8);
        }
        while ( !(_DWORD)result );
        if ( v5 )
        {
          v11 = a1;
          v10[0] = v5;
          v12 = &PepParkLists;
          result = ((__int64 (__fastcall *)(_QWORD, _DWORD *))qword_1C00136A0)(*(_QWORD *)(v7 + 1104), v10);
          if ( (int)result < 0 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              result = WPP_RECORDER_SF_D(
                         (__int64)WPP_GLOBAL_Control->DeviceExtension,
                         4u,
                         2u,
                         0x12u,
                         (__int64)&WPP_26255293f6d13ac9c2d7d7a8bbb4918d_Traceguids,
                         result,
                         v8,
                         v9);
            PepSkipParkNotification = 1;
          }
        }
      }
    }
  }
  return result;
}
