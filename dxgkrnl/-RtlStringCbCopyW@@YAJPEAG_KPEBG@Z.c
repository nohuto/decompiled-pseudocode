NTSTATUS __fastcall RtlStringCbCopyW(unsigned __int16 *a1, unsigned __int64 a2, size_t *a3)
{
  size_t v3; // rdx
  NTSTATUS result; // eax
  size_t v5; // [rsp+20h] [rbp-18h]

  v3 = a2 >> 1;
  if ( v3 - 1 <= 0x7FFFFFFE )
    return RtlStringCopyWorkerW_0(a1, v3, a3, (STRSAFE_PCNZWCH)a3, v5);
  result = -1073741811;
  if ( v3 )
    *a1 = 0;
  return result;
}
