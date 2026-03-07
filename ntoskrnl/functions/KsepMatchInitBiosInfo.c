__int64 KsepMatchInitBiosInfo()
{
  int v0; // edi
  int v1; // eax
  HANDLE v2; // rbx
  int v3; // r14d
  __int64 v5; // rax
  _WORD *v6; // rcx
  unsigned __int64 v7; // rax
  unsigned int v8; // esi
  unsigned int v9; // ebx
  unsigned int v10; // eax
  HANDLE KeyHandle; // [rsp+30h] [rbp-30h] BYREF
  __int64 v12; // [rsp+38h] [rbp-28h] BYREF
  wchar_t v13[3]; // [rsp+40h] [rbp-20h] BYREF
  wchar_t v14[3]; // [rsp+46h] [rbp-1Ah] BYREF
  wchar_t Str[6]; // [rsp+4Ch] [rbp-14h] BYREF

  v12 = 0LL;
  KeyHandle = 0LL;
  xmmword_140C70958 = 0LL;
  qword_140C70988 = 0LL;
  v0 = -1;
  xmmword_140C70968 = 0LL;
  xmmword_140C70978 = 0LL;
  v1 = KsepRegistryOpenKey(L"\\Registry\\Machine\\Hardware\\Description\\System", 0LL, &KeyHandle);
  v2 = KeyHandle;
  v3 = v1;
  if ( v1 >= 0 )
  {
    v3 = KsepRegistryQuerySZ(KeyHandle, L"SystemBiosDate", 1, v13, 0x16uLL, &v12);
    if ( v3 >= 0 )
    {
      Str[4] = 0;
      KsepHistoryMessages[((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F] = 655816LL;
      if ( (KsepDebugFlag & 1) != 0 )
        KsepDebugPrint(0LL, "KSE: BiosDate name [%ws] .\n", v13);
      KsepLogInfo(0, "KSE: BiosDate name [%ws] .\n", v13);
      v3 = KsepRegistryQueryMULTISZ(KeyHandle, L"SystemBiosVersion", &unk_140D18AF0, 0x208uLL, &v12);
      word_140D18CF6 = 0;
      v5 = 0LL;
      v6 = &unk_140D18AF0;
      while ( *v6 != 32 )
      {
        v5 = (unsigned int)(v5 + 1);
        ++v6;
        if ( (unsigned int)v5 >= 0x104 )
          goto LABEL_16;
      }
      v7 = 2 * v5;
      if ( v7 >= 0x208 )
        _report_rangecheckfailure();
      *(_WORD *)((char *)&unk_140D18AF0 + v7) = 0;
LABEL_16:
      KsepHistoryMessages[((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F] = 655840LL;
      if ( (KsepDebugFlag & 1) != 0 )
        KsepDebugPrint(0LL, "KSE: BiosVendor name [%ws] .\n", &unk_140D18AF0);
      KsepLogInfo(0, "KSE: BiosVendor name [%ws] .\n", &unk_140D18AF0);
      v13[2] = 0;
      v14[2] = 0;
      v8 = wcstoul(Str, 0LL, 16);
      v9 = wcstoul(v13, 0LL, 16) << 8;
      v10 = v9 + wcstoul(v14, 0LL, 16);
      v2 = KeyHandle;
      v0 = v10 + ((v8 + (v8 < 0x80 ? 0x2000 : 6400)) << 16);
    }
  }
  if ( v2 )
    KsepRegistryCloseKey(v2);
  if ( v3 >= 0 )
  {
    *(_QWORD *)&xmmword_140C70958 = &unk_140D18AF0;
    DWORD2(xmmword_140C70978) = v0;
  }
  else
  {
    DWORD2(xmmword_140C70978) = -1;
    *(_QWORD *)&xmmword_140C70958 = 0LL;
  }
  return (unsigned int)v3;
}
