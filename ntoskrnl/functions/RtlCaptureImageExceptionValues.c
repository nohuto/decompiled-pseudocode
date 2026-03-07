__int64 __fastcall RtlCaptureImageExceptionValues(__int64 a1, __int64 *a2, _DWORD *a3)
{
  __int64 *v4; // rbx
  __int64 v5; // rax

  v4 = a2;
  LOBYTE(a2) = 1;
  v5 = RtlImageDirectoryEntryToData(a1, a2, 3LL, a3);
  *v4 = v5;
  if ( !v5 )
    *a3 = 0;
  return 0LL;
}
