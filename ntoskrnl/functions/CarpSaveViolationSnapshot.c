NTSTATUS __fastcall CarpSaveViolationSnapshot(int a1, int a2, __int64 *a3, __int64 a4)
{
  NTSTATUS result; // eax
  __int64 v5; // rax

  result = _InterlockedCompareExchange(&CarIsViolationSnapshotTaken, 1, 0);
  if ( result != 1 )
  {
    v5 = 0LL;
    dword_140C34B48 = a1;
    dword_140C34B4C = a2;
    if ( a3 )
    {
      qword_140C34B50 = *a3;
      qword_140C34B58 = a3[1];
      v5 = a3[2];
    }
    else
    {
      qword_140C34B50 = 0LL;
      qword_140C34B58 = 0LL;
    }
    qword_140C34B60 = v5;
    return RtlStringCchCopyW(&pszDest, 0x20uLL, (NTSTRSAFE_PCWSTR)(a4 + 4));
  }
  return result;
}
