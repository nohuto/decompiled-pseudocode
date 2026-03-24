/*
 * XREFs of PopUnregisterPowerSettingCallback @ 0x1403806BC
 * Callers:
 *     PopDispatchPowerSettingCallbacks @ 0x1406F2CD0 (PopDispatchPowerSettingCallbacks.c)
 *     PoUnregisterPowerSettingCallback @ 0x140772340 (PoUnregisterPowerSettingCallback.c)
 * Callees:
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall PopUnregisterPowerSettingCallback(__int64 *a1)
{
  __int64 *v1; // rdx
  __int64 **v2; // rax
  __int64 **v3; // rax

  v1 = (__int64 *)*a1;
  if ( !*((_BYTE *)a1 + 33) )
  {
    if ( (__int64 *)v1[1] == a1 )
    {
      v2 = (__int64 **)a1[1];
      if ( *v2 == a1 )
      {
        *v2 = v1;
        v1[1] = (__int64)v2;
        *((_DWORD *)a1 + 4) = 0;
        a1[1] = (__int64)a1;
        *a1 = (__int64)a1;
        ExFreePoolWithTag(a1, 0x74655350u);
        return;
      }
    }
LABEL_5:
    __fastfail(3u);
  }
  if ( (__int64 *)v1[1] != a1 )
    goto LABEL_5;
  v3 = (__int64 **)a1[1];
  if ( *v3 != a1 )
    goto LABEL_5;
  *v3 = v1;
  v1[1] = (__int64)v3;
  a1[1] = (__int64)a1;
  *a1 = (__int64)a1;
  KeSetEvent(&PopPowerSettingCallbackReturned, 0, 0);
}
