NTSTATUS __fastcall SmCrAuthEncrypt(
        __int64 a1,
        UCHAR *a2,
        UCHAR *pbOutput,
        ULONG cbOutput,
        __int64 a5,
        ULONG pcbResult,
        __int64 a7)
{
  *(_DWORD *)(a1 + 72) = 12;
  pcbResult = 0;
  *(_QWORD *)(a1 + 64) = a5;
  *(_QWORD *)(a1 + 96) = a7;
  *(_DWORD *)(a1 + 104) = 16;
  return BCryptEncrypt(
           *(BCRYPT_KEY_HANDLE *)(a1 + 32),
           a2,
           cbOutput,
           (void *)(a1 + 56),
           0LL,
           0,
           pbOutput,
           cbOutput,
           &pcbResult,
           0);
}
