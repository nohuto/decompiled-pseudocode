NTSTATUS __fastcall WdtpCancelTimer(__int64 a1, char a2)
{
  ULONG_PTR v3; // rcx
  NTSTATUS result; // eax

  v3 = *(_QWORD *)(a1 + 48);
  if ( a2 )
  {
    ExDeleteTimer(v3, 1, 1, 0LL);
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  else
  {
    ExCancelTimer(v3, 0LL);
  }
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_DWORD *)(a1 + 128) = 0;
  result = *(_DWORD *)(a1 + 88);
  if ( result > 0 )
    return KeWaitForSingleObject((PVOID)(a1 + 96), Executive, 0, 0, 0LL);
  return result;
}
