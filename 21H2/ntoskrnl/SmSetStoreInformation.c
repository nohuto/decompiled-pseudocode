/*
 * XREFs of SmSetStoreInformation @ 0x1406E5AA0
 * Callers:
 *     NtSetSystemInformation @ 0x1407D6120 (NtSetSystemInformation.c)
 * Callees:
 *     SmProcessStoreMemoryPriorityRequest @ 0x1406E5B58 (SmProcessStoreMemoryPriorityRequest.c)
 *     SmProcessCreateRequest @ 0x1406ED528 (SmProcessCreateRequest.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     SmProcessConfigRequest @ 0x14085E334 (SmProcessConfigRequest.c)
 *     SmProcessDeleteRequest @ 0x1409D3E54 (SmProcessDeleteRequest.c)
 *     SmProcessResizeRequest @ 0x1409D42F8 (SmProcessResizeRequest.c)
 *     SmProcessSystemStoreTrimRequest @ 0x1409D4698 (SmProcessSystemStoreTrimRequest.c)
 *     SmcProcessCreateRequest @ 0x1409D4BC0 (SmcProcessCreateRequest.c)
 *     SmcProcessDeleteRequest @ 0x1409D4E10 (SmcProcessDeleteRequest.c)
 *     SmcProcessResizeRequest @ 0x1409D4FF8 (SmcProcessResizeRequest.c)
 *     SmcProcessStoreCreateRequest @ 0x1409D52C0 (SmcProcessStoreCreateRequest.c)
 *     SmcProcessStoreDeleteRequest @ 0x1409D5408 (SmcProcessStoreDeleteRequest.c)
 */

__int64 __fastcall SmSetStoreInformation(__int64 a1, __int128 *a2, int a3, KPROCESSOR_MODE a4)
{
  __int64 v5; // r8
  __int64 v6; // r9
  __int128 v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  if ( a3 != 24 )
    return 3221225476LL;
  v8 = *a2;
  v9 = *((_QWORD *)a2 + 2);
  if ( (unsigned int)*a2 != 1 )
    return 3221225485LL;
  if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a4) )
    return 3221225506LL;
  if ( SDWORD1(v8) <= 12 )
  {
    switch ( DWORD1(v8) )
    {
      case 0xC:
        LOBYTE(v6) = a4;
        return SmcProcessStoreDeleteRequest(&unk_140D32200, *((_QWORD *)&v8 + 1), (unsigned int)v9, v6);
      case 3:
        LOBYTE(v6) = a4;
        return SmProcessCreateRequest(&SmGlobals, *((_QWORD *)&v8 + 1), (unsigned int)v9, v6);
      case 4:
        LOBYTE(v6) = a4;
        return SmProcessDeleteRequest(&SmGlobals, *((_QWORD *)&v8 + 1), (unsigned int)v9, v6);
      case 9:
        LOBYTE(v6) = a4;
        return SmcProcessCreateRequest(&unk_140D32200, *((_QWORD *)&v8 + 1), (unsigned int)v9, v6);
      case 0xA:
        LOBYTE(v6) = a4;
        return SmcProcessDeleteRequest(&unk_140D32200, *((_QWORD *)&v8 + 1), (unsigned int)v9, v6);
      case 0xB:
        LOBYTE(v6) = a4;
        return SmcProcessStoreCreateRequest(&unk_140D32200, *((_QWORD *)&v8 + 1), (unsigned int)v9, v6);
      default:
        return 3221225475LL;
    }
  }
  else
  {
    switch ( DWORD1(v8) )
    {
      case 0x11:
        LOBYTE(v6) = a4;
        return SmProcessResizeRequest(&SmGlobals, *((_QWORD *)&v8 + 1), (unsigned int)v9, v6);
      case 0x12:
        LOBYTE(v6) = a4;
        return SmcProcessResizeRequest(&unk_140D32200, *((_QWORD *)&v8 + 1), (unsigned int)v9, v6);
      case 0x13:
        LOBYTE(v5) = a4;
        return SmProcessConfigRequest(*((_QWORD *)&v8 + 1), (unsigned int)v9, v5);
      case 0x14:
        LOBYTE(v5) = a4;
        return SmProcessStoreMemoryPriorityRequest(*((_QWORD *)&v8 + 1), (unsigned int)v9, v5);
      case 0x15:
        LOBYTE(v5) = a4;
        return SmProcessSystemStoreTrimRequest(*((_QWORD *)&v8 + 1), (unsigned int)v9, v5);
      default:
        return 3221225475LL;
    }
  }
}
