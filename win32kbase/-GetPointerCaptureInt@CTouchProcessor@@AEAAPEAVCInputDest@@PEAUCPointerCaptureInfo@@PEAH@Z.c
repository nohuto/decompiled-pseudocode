struct CInputDest *__fastcall CTouchProcessor::GetPointerCaptureInt(
        CTouchProcessor *this,
        struct CPointerCaptureInfo *a2,
        int *a3)
{
  CInputDest *v3; // r10
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  CInputDest *v11; // r10

  v3 = (struct CPointerCaptureInfo *)((char *)a2 + 8);
  if ( *((_DWORD *)a2 + 2) && (CInputDest::TestWindowFlag(v3, 0x480u) || CInputDest::TestWindowFlag(v11, 0x380u)) )
  {
    if ( IS_USERCRIT_OWNED_EXCLUSIVE(v8, v7, v9, v10) )
      CTouchProcessor::ReleasePointerCaptureInt(this, a2);
    if ( a3 )
      *a3 = 0;
    return 0LL;
  }
  else
  {
    if ( a3 )
      *a3 = *((_DWORD *)a2 + 32);
    return (struct CInputDest *)((unsigned __int64)v3 & -(__int64)(*(_DWORD *)v3 != 0));
  }
}
