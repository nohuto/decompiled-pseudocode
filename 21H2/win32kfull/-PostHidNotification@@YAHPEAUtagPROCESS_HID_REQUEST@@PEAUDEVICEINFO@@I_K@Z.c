/*
 * XREFs of ?PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z @ 0x1C0003AF8
 * Callers:
 *     PostDeviceNotification @ 0x1C0102FA4 (PostDeviceNotification.c)
 * Callees:
 *     PostInputMessage @ 0x1C00AB69C (PostInputMessage.c)
 *     AdjustPwndPtiPqForDelegation @ 0x1C00AC8D8 (AdjustPwndPtiPqForDelegation.c)
 */

__int64 __fastcall PostHidNotification(struct tagPROCESS_HID_REQUEST *a1, struct DEVICEINFO *a2, unsigned int a3)
{
  __int64 v3; // r8
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  struct tagWND *v9; // [rsp+70h] [rbp-10h] BYREF
  struct tagQ *v10; // [rsp+78h] [rbp-8h] BYREF
  __int64 v11; // [rsp+90h] [rbp+10h] BYREF
  unsigned int v12; // [rsp+A0h] [rbp+20h] BYREF

  v12 = a3;
  v3 = *((_QWORD *)a1 + 4);
  if ( !v3 )
    return 1LL;
  if ( (*((_DWORD *)a1 + 5) & 4) == 0 )
    return 1LL;
  v6 = *(_QWORD *)(v3 + 40);
  v9 = (struct tagWND *)*((_QWORD *)a1 + 4);
  if ( *(char *)(v6 + 20) < 0 )
    return 1LL;
  if ( *(char *)(v6 + 19) < 0 )
    return 1LL;
  v7 = *(_QWORD *)(v3 + 16);
  v12 = 0;
  v11 = v7;
  v10 = *(struct tagQ **)(v7 + 432);
  if ( !(unsigned int)AdjustPwndPtiPqForDelegation(
                        (unsigned int)&v10,
                        (unsigned int)&v9,
                        (unsigned int)&v11,
                        254,
                        0LL,
                        (__int64)&v12) )
    return 1LL;
  v8 = a2 ? *(_QWORD *)a2 : 0LL;
  result = PostInputMessage(v10, v9, 0xFEu, v8, 0, 0LL, 0LL, 0, 0LL, 0LL, 0LL, v12, v11);
  if ( (_DWORD)result )
    return 1LL;
  return result;
}
