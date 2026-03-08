/*
 * XREFs of PopUnregisterPowerSettingCallback @ 0x14058B784
 * Callers:
 *     PopDispatchPowerSettingCallbacks @ 0x14068D630 (PopDispatchPowerSettingCallbacks.c)
 *     PoUnregisterPowerSettingCallback @ 0x140984070 (PoUnregisterPowerSettingCallback.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PopUnregisterPowerSettingCallback(_QWORD *a1)
{
  _QWORD *v1; // rdx
  void **v2; // rax
  void **v3; // rax

  v1 = (_QWORD *)*a1;
  if ( *((_BYTE *)a1 + 33) )
  {
    if ( (_QWORD *)v1[1] == a1 )
    {
      v2 = (void **)a1[1];
      if ( *v2 == a1 )
      {
        *v2 = v1;
        v1[1] = v2;
        a1[1] = a1;
        *a1 = a1;
        KeSetEvent(&PopPowerSettingCallbackReturned, 0, 0);
        return;
      }
    }
LABEL_8:
    __fastfail(3u);
  }
  if ( (_QWORD *)v1[1] != a1 )
    goto LABEL_8;
  v3 = (void **)a1[1];
  if ( *v3 != a1 )
    goto LABEL_8;
  *v3 = v1;
  v1[1] = v3;
  *((_DWORD *)a1 + 4) = 0;
  a1[1] = a1;
  *a1 = a1;
  ExFreePoolWithTag(a1, 0x74655350u);
}
