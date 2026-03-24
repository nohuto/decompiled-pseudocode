/*
 * XREFs of ?PostCOMPOSITEDInvalidateAPC@@YAHQEAUtagWND@@PEBUtagRECT@@@Z @ 0x1C01E7374
 * Callers:
 *     FlushWEFCOMPOSITEDDCEBounds @ 0x1C01E78C0 (FlushWEFCOMPOSITEDDCEBounds.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

__int64 __fastcall PostCOMPOSITEDInvalidateAPC(struct tagWND *const a1, const struct tagRECT *a2)
{
  __int128 v2; // xmm0
  _QWORD v4[3]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v5; // [rsp+48h] [rbp-30h]
  __int64 v6; // [rsp+58h] [rbp-20h]

  v2 = (__int128)*a2;
  v4[0] = 0LL;
  v4[1] = 0LL;
  v6 = 0LL;
  v4[2] = *(_QWORD *)a1;
  v5 = v2;
  return ((__int64 (__fastcall *)(struct _KTHREAD *, void (__fastcall *)(struct BLTINFO *), void (__fastcall *)(struct _KAPC *), void (__fastcall *)(char *, void *, void *), _QWORD *, int))UserPostNKAPCBuffer)(
           KeGetCurrentThread(),
           vSrcCopyDummy,
           SpbApcRundown,
           NormalAPCInvalidateCOMPOSITEDWnd,
           v4,
           48);
}
