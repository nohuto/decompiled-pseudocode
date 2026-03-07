__int64 __fastcall PiUEventNotifyDeviceInstanceChange(__int64 a1)
{
  int v1; // edx
  unsigned int v2; // r12d
  int v4; // edx
  __int128 *v5; // r15
  unsigned int v6; // esi
  _QWORD **v7; // r14
  _QWORD *v8; // rbx
  _QWORD *v10; // rbp
  __int128 v11; // [rsp+20h] [rbp-38h] BYREF

  v1 = *(_DWORD *)(a1 + 88);
  v2 = 0;
  v11 = 0LL;
  v4 = v1 - 4;
  if ( !v4 || (unsigned int)(v4 - 6) <= 1 )
  {
    ExAcquireFastMutex(&PiUEventClientRegistrationListLock);
    v5 = &v11;
    *(_QWORD *)&v11 = (char *)&PiUEventDevInstanceClientList
                    + 16 * (unsigned int)PiUEventHashStringIntoBucket((PCWSTR)(a1 + 120));
    v6 = 0;
    *((_QWORD *)&v11 + 1) = &unk_140C5CA90;
    do
    {
      v7 = *(_QWORD ***)v5;
      v8 = **(_QWORD ***)v5;
      while ( v8 != v7 )
      {
        v10 = v8;
        v8 = (_QWORD *)*v8;
        if ( v6 || !wcsicmp((const wchar_t *)(a1 + 120), *(const wchar_t **)(v10[3] + 16LL)) )
        {
          if ( (unsigned __int8)PiUEventApplyAdditionalFilters(a1, v10) )
            v2 = PiUEventNotifyClient(a1, v10);
        }
      }
      ++v6;
      v5 = (__int128 *)((char *)v5 + 8);
    }
    while ( v6 < 2 );
    ExReleaseFastMutex(&PiUEventClientRegistrationListLock);
  }
  return v2;
}
