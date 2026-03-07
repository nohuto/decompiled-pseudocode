void __fastcall AlpcpDestroyBlob(__int64 a1, int a2)
{
  _BYTE *v2; // rsi
  __int64 v5; // rdi

  v2 = (_BYTE *)(a1 - 48);
  v5 = AlpcpRegisteredTypes[*(unsigned __int8 *)(a1 - 48 + 17)];
  (*(void (**)(void))(v5 + 24))();
  if ( a2 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 - 16));
    KeAbPostRelease(a1 - 16);
  }
  if ( (*(int (__fastcall **)(__int64))(v5 + 40))(a1) >= 0 )
  {
    if ( (v2[16] & 2) != 0 )
    {
      ExFreeToNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&AlpcpLookasides + *(unsigned int *)(v5 + 8), v2);
    }
    else if ( *(_QWORD *)(v5 + 48) )
    {
      (*((void (__fastcall **)(_BYTE *))&AlpcpLookasides + 16 * (unsigned __int64)*(unsigned int *)(v5 + 8) + 7))(v2);
    }
    else
    {
      ExFreePoolWithTag(v2, *(_DWORD *)(v5 + 4));
    }
  }
}
