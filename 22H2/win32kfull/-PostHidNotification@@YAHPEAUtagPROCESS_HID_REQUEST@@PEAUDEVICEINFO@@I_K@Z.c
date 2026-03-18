/*
 * XREFs of ?PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z @ 0x1C009FEC0
 * Callers:
 *     PostDeviceNotification @ 0x1C009FAD0 (PostDeviceNotification.c)
 * Callees:
 *     AdjustPwndPtiPqForDelegation @ 0x1C0060D1C (AdjustPwndPtiPqForDelegation.c)
 *     PostInputMessage @ 0x1C0117268 (PostInputMessage.c)
 */

_BOOL8 __fastcall PostHidNotification(struct tagPROCESS_HID_REQUEST *a1, struct DEVICEINFO *a2, int a3)
{
  __int64 v3; // r8
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v8; // [rsp+80h] [rbp+27h] BYREF
  struct tagWND *v9; // [rsp+88h] [rbp+2Fh] BYREF
  struct tagQ *v10; // [rsp+90h] [rbp+37h] BYREF
  int v11; // [rsp+C0h] [rbp+67h] BYREF
  int v12; // [rsp+D0h] [rbp+77h] BYREF

  v12 = a3;
  v3 = *((_QWORD *)a1 + 4);
  if ( !v3 )
    return 1LL;
  if ( (*((_DWORD *)a1 + 5) & 4) == 0 )
    return 1LL;
  v5 = *(_QWORD *)(v3 + 40);
  v9 = (struct tagWND *)*((_QWORD *)a1 + 4);
  if ( *(char *)(v5 + 20) < 0 )
    return 1LL;
  if ( *(char *)(v5 + 19) < 0 )
    return 1LL;
  v8 = *(_QWORD *)(v3 + 16);
  v11 = 0;
  v12 = 0;
  v10 = *(struct tagQ **)(v8 + 432);
  if ( !(unsigned int)AdjustPwndPtiPqForDelegation(
                        (__int64 *)&v10,
                        (__int64 *)&v9,
                        (struct tagTHREADINFO **)&v8,
                        0xFEu,
                        0LL,
                        &v11,
                        &v12) )
    return 1LL;
  v6 = 0LL;
  if ( a2 )
    v6 = *(_QWORD *)a2;
  return (unsigned int)PostInputMessage(v10, v9, 0xFEu, v6, 0, 0LL, 0LL, 0, 0LL, 0LL, 0LL, v11, v12, v8) != 0;
}
