__int64 __fastcall MiChargeSystemImageCommitment(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // r8
  unsigned __int64 v3; // rdx

  v1 = MiSectionControlArea(a1);
  v3 = *(unsigned int *)(*(_QWORD *)v1 + 8LL);
  if ( !*(_DWORD *)(*(_QWORD *)v1 + 8LL) )
    return 0LL;
  if ( (_DWORD)v2 != 1 )
  {
    MiReleaseNonPagedResources((__int64)MiSystemPartition, v3, v2);
    return 0LL;
  }
  if ( (int)MiAcquireNonPagedResources((unsigned __int64)MiSystemPartition, v3, 0LL, 0) >= 0 )
    return 0LL;
  return 3221225626LL;
}
