struct tagMOUSE_PROMOTION_ENTRY *CreateEntryFromLastEntry(void)
{
  struct tagMOUSE_PROMOTION_ENTRY *result; // rax
  __int64 v1; // rcx
  struct tagMOUSE_PROMOTION_ENTRY *v2; // rbx
  __int64 v3; // rax
  __int128 v4; // xmm0

  result = (struct tagMOUSE_PROMOTION_ENTRY *)Win32AllocPoolZInit(48LL, 1886221141LL);
  v2 = result;
  if ( result )
  {
    v3 = SGDGetUserSessionState(v1);
    *(_OWORD *)v2 = *(_OWORD *)(v3 + 16200);
    *((_OWORD *)v2 + 1) = *(_OWORD *)(v3 + 16216);
    v4 = *(_OWORD *)(v3 + 16232);
    result = v2;
    *((_OWORD *)v2 + 2) = v4;
  }
  return result;
}
