/*
 * XREFs of TelpIsDeviceAzureADJoined @ 0x100022A6
 * Callers:
 *     _TelIsOsInProcessorMode@4 @ 0x10003070 (_TelIsOsInProcessorMode@4.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z @ 0x10003E71 (-Return_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z.c)
 */

void *__thiscall TelpIsDeviceAzureADJoined(char *this)
{
  void *AadJoinInformation; // eax
  wil::details::in1diag3 *v3; // ecx
  void *v4; // esi
  char v5; // dl
  _DWORD *v6; // eax
  unsigned int v8; // [esp+0h] [ebp-Ch]
  const char *v9; // [esp+4h] [ebp-8h]
  _DWORD *v10; // [esp+8h] [ebp-4h] BYREF

  v10 = 0;
  AadJoinInformation = (void *)NetGetAadJoinInformation(0, &v10);
  v4 = AadJoinInformation;
  v5 = 1;
  if ( AadJoinInformation == (void *)1 || AadJoinInformation == (void *)-2147024769 )
  {
    *this = 0;
    v4 = 0;
    goto LABEL_10;
  }
  v6 = v10;
  if ( (int)v4 < 0 || !v10 || *v10 != 1 )
    v5 = 0;
  *this = v5;
  if ( (int)v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(v3, v4, v8, v9, (int)v10);
LABEL_10:
    v6 = v10;
  }
  if ( v6 )
    NetFreeAadJoinInformation(v6);
  return v4;
}
