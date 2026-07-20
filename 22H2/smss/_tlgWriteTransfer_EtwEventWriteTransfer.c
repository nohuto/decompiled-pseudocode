/*
 * XREFs of _tlgWriteTransfer_EtwEventWriteTransfer @ 0x140001014
 * Callers:
 *     SmpCopyFile @ 0x1400152DC (SmpCopyFile.c)
 *     SmpSendPlatformBinaryStatus @ 0x1400178C8 (SmpSendPlatformBinaryStatus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tlgWriteTransfer_EtwEventWriteTransfer(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  _DWORD v7[2]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v8; // [rsp+38h] [rbp-10h]

  v7[0] = *a2 << 24;
  v7[1] = *(unsigned __int16 *)(a2 + 1);
  v8 = *(_QWORD *)(a2 + 3);
  *(_QWORD *)a6 = off_140027020;
  *(_DWORD *)(a6 + 8) = *(unsigned __int16 *)off_140027020;
  *(_QWORD *)(a6 + 16) = a2 + 11;
  *(_DWORD *)(a6 + 12) = 2;
  *(_DWORD *)(a6 + 24) = *(unsigned __int16 *)(a2 + 11);
  *(_DWORD *)(a6 + 28) = 1;
  return ((__int64 (__fastcall *)(__int64, _DWORD *, _QWORD, _QWORD, int, __int64))EtwEventWriteTransfer)(
           qword_140027038,
           v7,
           0LL,
           0LL,
           a5,
           a6);
}
