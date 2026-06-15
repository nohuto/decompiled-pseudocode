/*
 * XREFs of pfnwa @ 0x1800FFD10
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800F9F24 @ 0x1800F9F24 (sub_1800F9F24.c)
 *     sub_1800FBBF4 @ 0x1800FBBF4 (sub_1800FBBF4.c)
 *     sub_1800FEC48 @ 0x1800FEC48 (sub_1800FEC48.c)
 */

void __fastcall pfnwa(
        PTP_CALLBACK_INSTANCE Instance,
        unsigned __int8 *Context,
        PTP_WAIT Wait,
        TP_WAIT_RESULT WaitResult)
{
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  char v8; // dl
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  if ( _InterlockedIncrement((volatile signed __int32 *)Context + 37) > 1 )
  {
    v5 = RegNotifyChangeKeyValue(*((HKEY *)Context + 15), Context[144], 0x10000005u, *((HANDLE *)Context + 16), 1);
    if ( !v5 || v5 == 5 )
    {
      sub_1800F9F24((__int64)Context, 0);
      v8 = 1;
    }
    else
    {
      if ( v5 != 811 )
      {
        if ( v5 != 1018 )
        {
          if ( v5 > 0 )
            v5 = (unsigned __int16)v5 | 0x80070000;
          sub_1800FBBF4((int)retaddr, v6, v7, v5);
          __debugbreak();
        }
        sub_1800F9F24((__int64)Context, 1);
      }
      v8 = 0;
    }
    sub_1800FEC48((__int64)Context, v8);
  }
}
