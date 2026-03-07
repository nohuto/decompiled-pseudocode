int __fastcall KiSynchNumaCounterSetCallback(int a1, __int64 a2)
{
  int v4; // ebx
  struct _PCW_BUFFER *v5; // r14
  unsigned int v6; // edi
  int v7; // esi
  const void *v8; // rbx
  __int64 v9; // rdx
  int result; // eax
  PPCW_DATA Data; // [rsp+20h] [rbp-E0h]
  ULONG Id; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v13; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  struct _PCW_DATA v15; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v16; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v17; // [rsp+70h] [rbp-90h] BYREF
  __int128 v18; // [rsp+80h] [rbp-80h] BYREF
  __int64 v19; // [rsp+90h] [rbp-70h]
  struct _PCW_DATA v20; // [rsp+98h] [rbp-68h] BYREF
  _DWORD v21[48]; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v22[48]; // [rsp+170h] [rbp+70h] BYREF
  wchar_t pszDest[12]; // [rsp+230h] [rbp+130h] BYREF

  v19 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  memset(v21, 0, 0xB8uLL);
  memset(v22, 0, 0xB8uLL);
  Id = 0;
  v13 = 0LL;
  DestinationString = 0LL;
  if ( !a1 )
  {
    EtwReferenceSpinLockCounters();
    return 0;
  }
  v4 = a1 - 1;
  if ( !v4 )
  {
    EtwDereferenceSpinLockCounters();
    return 0;
  }
  if ( (unsigned int)(v4 - 1) > 1 )
    return 0;
  v5 = *(struct _PCW_BUFFER **)(a2 + 24);
  v6 = 0;
  v16 = 0LL;
  if ( KeNumberNodes )
  {
    while ( 1 )
    {
      memset(v21, 0, 0xB8uLL);
      v7 = 0;
      KeInitializeSchedulerSubNodeEnumerationContext(&v17, KeNodeBlock[v6]);
      if ( !(unsigned int)KeEnumerateNextSchedulerSubNodeInNode((__int64)&v17, &v13) )
      {
        do
        {
          KiQuerySubNodeActiveAffinity(v13, (__int64)&v16, 0LL);
          *((_QWORD *)&v18 + 1) = v16;
          LOWORD(v19) = WORD4(v16);
          *(_QWORD *)&v18 = 0LL;
          while ( !(unsigned int)KeEnumerateNextProcessor(&Id, (unsigned __int16 **)&v18) )
          {
            v8 = (const void *)(KiProcessorBlock[Id] + 35008);
            KiAddSynchCounters(v21, (__int64)v8);
            KiAddSynchCounters(v22, v9);
            LODWORD(Data) = v7;
            RtlStringCbPrintfW(pszDest, 0x16uLL, L"%u,%u", v6, Data);
            RtlInitUnicodeString(&DestinationString, pszDest);
            v20.Data = v8;
            v20.Size = 184;
            result = PcwAddInstance(v5, &DestinationString, Id, 1u, &v20);
            if ( result < 0 )
              return result;
            ++v7;
          }
        }
        while ( !(unsigned int)KeEnumerateNextSchedulerSubNodeInNode((__int64)&v17, &v13) );
        if ( v7 )
        {
          RtlStringCbPrintfW(pszDest, 0x16uLL, L"%u,_Total", v6);
          RtlInitUnicodeString(&DestinationString, pszDest);
          v15.Data = v21;
          v15.Size = 184;
          result = PcwAddInstance(v5, &DestinationString, v6 + KeMaximumProcessors, 1u, &v15);
          if ( result < 0 )
            break;
        }
      }
      if ( ++v6 >= (unsigned __int16)KeNumberNodes )
        goto LABEL_14;
    }
  }
  else
  {
LABEL_14:
    RtlStringCbPrintfW(pszDest, 0x16uLL, L"_Total");
    RtlInitUnicodeString(&DestinationString, pszDest);
    v15.Data = v22;
    v15.Size = 184;
    return PcwAddInstance(v5, &DestinationString, KeMaximumProcessors + (unsigned __int16)KeNumberNodes, 1u, &v15);
  }
  return result;
}
