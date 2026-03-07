void *__fastcall SubmissionQueueReInit(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // cx

  *(_DWORD *)(a2 + 44) = 0;
  *(_WORD *)(a2 + 48) = 0;
  *(_WORD *)(a2 + 128) = 0;
  if ( *(_WORD *)(a2 + 40) )
    v2 = *(_WORD *)(a1 + 334);
  else
    v2 = *(_WORD *)(a1 + 332);
  return NVMeZeroMemory(*(void **)a2, v2 << 6);
}
