/*
 * XREFs of ?CreateValidTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IIQEAUtagTOUCHINPUT@@@Z @ 0x1C01B021C
 * Callers:
 *     ForwardTouchMessage @ 0x1C01B139C (ForwardTouchMessage.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?AllocTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IPEBUtagTOUCHINPUT@@IPEAK@Z @ 0x1C01AFDF8 (-AllocTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IPEBUtagTOUCHINPUT@@IPEAK@Z.c)
 *     ?CopyTouchInputListSorted@@YAHPEBUtagTOUCHINPUTLIST@@PEAU1@HPEAIPEAH@Z @ 0x1C01AFF7C (-CopyTouchInputListSorted@@YAHPEBUtagTOUCHINPUTLIST@@PEAU1@HPEAIPEAH@Z.c)
 */

struct HTOUCHINPUT__ *__fastcall CreateValidTouchInputInfo(
        struct tagTHREADINFO *a1,
        __int64 a2,
        unsigned int a3,
        struct tagTOUCHINPUT *const a4)
{
  struct HTOUCHINPUT__ *v4; // rdi
  unsigned __int64 v8; // rdx
  __int64 v9; // r8
  NTSTATUS v10; // ecx
  int v11; // eax
  struct tagTOUCHINPUT *v12; // rbx
  ULONG v14; // eax
  unsigned int v15; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v16; // [rsp+34h] [rbp-2Ch]
  struct tagTOUCHINPUT *v17[2]; // [rsp+38h] [rbp-28h]
  _DWORD v18[2]; // [rsp+48h] [rbp-18h] BYREF
  struct tagTOUCHINPUT *v19; // [rsp+50h] [rbp-10h]
  __int64 v20; // [rsp+58h] [rbp-8h]
  unsigned int v21; // [rsp+88h] [rbp+28h] BYREF

  v4 = 0LL;
  v20 = 0LL;
  v21 = 0;
  v8 = 48LL * a3;
  *(_OWORD *)v17 = 0LL;
  if ( v8 > 0xFFFFFFFF )
  {
    v10 = -1073741675;
    goto LABEL_10;
  }
  v16 = 0;
  v15 = a3;
  v17[0] = (struct tagTOUCHINPUT *)Win32AllocPoolZInit((unsigned int)v8, 1952871253LL);
  if ( !v17[0] )
  {
    v10 = -1073741801;
LABEL_10:
    v14 = RtlNtStatusToDosError(v10);
    UserSetLastError(v14);
    return 0LL;
  }
  v18[0] = a3;
  v18[1] = a3;
  v19 = a4;
  v11 = CopyTouchInputListSorted((const struct tagTOUCHINPUTLIST *)v18, (struct tagTOUCHINPUTLIST *)&v15, v9, &v21);
  v12 = v17[0];
  if ( v11 )
    v4 = AllocTouchInputInfo(a1, v16, v17[0], v21);
  if ( v12 )
    Win32FreePool(v12);
  return v4;
}
