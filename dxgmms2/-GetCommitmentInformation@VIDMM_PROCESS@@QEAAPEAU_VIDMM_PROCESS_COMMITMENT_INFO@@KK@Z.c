struct _VIDMM_PROCESS_COMMITMENT_INFO *__fastcall VIDMM_PROCESS::GetCommitmentInformation(
        VIDMM_PROCESS *this,
        unsigned int a2,
        unsigned int a3)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * a2);
  if ( v3 )
    return (struct _VIDMM_PROCESS_COMMITMENT_INFO *)(*(_QWORD *)(v3 + 16) + 184LL * a3);
  else
    return 0LL;
}
