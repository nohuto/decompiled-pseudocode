/*
 * XREFs of SdbGetTagDataSize @ 0x140759B30
 * Callers:
 *     SdbpGetIndex @ 0x140759384 (SdbpGetIndex.c)
 *     SdbpGetFirstIndexedRecord @ 0x14075949C (SdbpGetFirstIndexedRecord.c)
 *     SdbpReadTagData @ 0x140759730 (SdbpReadTagData.c)
 *     SdbpGetNextTagId @ 0x140759AA8 (SdbpGetNextTagId.c)
 *     SdbpGetNextIndexedRecord @ 0x1407C15CC (SdbpGetNextIndexedRecord.c)
 *     SdbQueryDataExTagID @ 0x1407C1F28 (SdbQueryDataExTagID.c)
 *     KsepDbReadKData @ 0x1408BFCA0 (KsepDbReadKData.c)
 *     SdbpGetMatchingTextAttributes @ 0x1409659F8 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140965C24 (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140755754 (AslLogCallPrintf.c)
 *     SdbGetTagFromTagID @ 0x140759BE4 (SdbGetTagFromTagID.c)
 *     SdbpReadMappedData @ 0x140759C1C (SdbpReadMappedData.c)
 */

__int64 __fastcall SdbGetTagDataSize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  int v6; // eax
  __int64 result; // rax
  unsigned int v8; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  v6 = SdbGetTagFromTagID(a1, a2, a3, a4) & 0xF000;
  switch ( v6 )
  {
    case 12288:
      result = 2LL;
      break;
    case 24576:
    case 16384:
      result = 4LL;
      break;
    case 20480:
      result = 8LL;
      break;
    case 4096:
      result = 0LL;
      break;
    case 8192:
      result = 1LL;
      break;
    default:
      v8 = 0;
      if ( !(unsigned int)SdbpReadMappedData(a1, (unsigned int)(v4 + 2), &v8, 4LL) )
        AslLogCallPrintf(1LL);
      result = v8;
      break;
  }
  if ( (int)result + v4 < (unsigned int)result || (unsigned int)(result + v4) > *(_DWORD *)(a1 + 20) )
  {
    AslLogCallPrintf(1LL);
    return 0xFFFFFFFFLL;
  }
  return result;
}
