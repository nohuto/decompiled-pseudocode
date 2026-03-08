/*
 * XREFs of ?PostCOMPOSITEDInvalidateAPC@@YAHQEAUtagWND@@PEBUtagRECT@@@Z @ 0x1C01BDA84
 * Callers:
 *     FlushWEFCOMPOSITEDDCEBounds @ 0x1C0016990 (FlushWEFCOMPOSITEDDCEBounds.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall PostCOMPOSITEDInvalidateAPC(struct tagWND *const a1, const struct tagRECT *a2)
{
  __int128 v3; // [rsp+30h] [rbp-48h] BYREF
  __m256i v4; // [rsp+40h] [rbp-38h]

  *(_OWORD *)v4.m256i_i8 = *(unsigned __int64 *)a1;
  *(_OWORD *)&v4.m256i_u64[2] = 0LL;
  v3 = 0LL;
  *(struct tagRECT *)&v4.m256i_u64[1] = *a2;
  return ((__int64 (__fastcall *)(struct _KTHREAD *, void (__fastcall *)(struct BLTINFO *), void (__fastcall *)(struct _KAPC *), void (__fastcall *)(char *, void *, void *), __int128 *, int))UserPostNKAPCBuffer)(
           KeGetCurrentThread(),
           vSrcCopyDummy,
           SpbApcRundown,
           NormalAPCInvalidateCOMPOSITEDWnd,
           &v3,
           48);
}
