// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchiFreeQueuePacket(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v4; // rbp
  __int64 v5; // rdx
  __int64 *v6; // rcx
  __int64 result; // rax
  __int64 v8; // rcx

  v4 = *(KSPIN_LOCK **)(*(_QWORD *)(a1 + 96) + 24LL);
  if ( !*(_DWORD *)(a2 + 48) )
  {
    v5 = *(_QWORD *)(a2 + 616);
    v6 = (__int64 *)(a2 + 264);
    if ( v5 || *v6 )
    {
      v8 = *v6;
      g_DxgMmsBugcheckExportIndex = 1;
      result = WdLogSingleEntry5(0LL, 281LL, 2560LL, a2, v5, v8);
      __debugbreak();
      goto LABEL_8;
    }
  }
  WdLogSingleEntry2(4LL, a2, a1);
  *(_QWORD *)(a2 + 56) = MEMORY[0xFFFFF78000000320];
  v4 += 217;
  *(_DWORD *)(a2 + 52) = 0;
  VidSchiInterlockedRemoveEntryList(v4, a2 + 8, a1 + 776);
  VidSchiInterlockedInsertTailList(
    v4,
    a1 + ((*(_DWORD *)(a2 + 64) & 0x40) != 0 ? 736LL : 712LL),
    (_QWORD *)(a2 + 8),
    (_DWORD *)(a1 + ((*(_DWORD *)(a2 + 64) & 0x40) != 0 ? 752LL : 728LL)));
  result = *(unsigned int *)(a2 + 64);
  if ( (result & 0x40) == 0 )
  {
    while ( 1 )
    {
      result = VidSchiInterlockedRemoveHeadListIfExistAndMoreThanSpecified(v4, a1 + 712, a1 + 728);
      if ( !result )
        break;
LABEL_8:
      ExFreePoolWithTag((PVOID)(result - 8), 0);
    }
  }
  return result;
}
