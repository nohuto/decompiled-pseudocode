__int64 __fastcall PspApplyIFEOPerfOptions(__int64 a1, unsigned int *a2, KPROCESSOR_MODE a3)
{
  unsigned int v6; // edi
  signed __int32 v7; // eax
  unsigned int v8; // edi
  signed __int32 v9; // edx
  unsigned int DefaultPagePriority; // eax
  unsigned int v11; // r8d
  signed __int32 v12; // eax
  int v13; // r8d
  signed __int32 v14; // edx
  __int64 result; // rax

  if ( (*a2 & 1) != 0 )
  {
    v6 = a2[2];
    if ( v6 < 4 && (v6 <= 2 || (SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, a3) & 1) != 0) )
    {
      v7 = *(_DWORD *)(a1 + 1124);
      v8 = v6 << 27;
      do
      {
        v9 = v7;
        v7 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1124), v8 | v7 & 0xC7FFFFFF, v7);
      }
      while ( v7 != v9 );
    }
  }
  if ( (*a2 & 2) != 0 )
  {
    DefaultPagePriority = MmGetDefaultPagePriority();
    if ( v11 < DefaultPagePriority )
    {
      v12 = *(_DWORD *)(a1 + 1120);
      v13 = v11 << 12;
      do
      {
        v14 = v12;
        v12 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1120), v13 | v12 & 0xFFFF8FFF, v12);
      }
      while ( v12 != v14 );
    }
  }
  result = *a2;
  if ( (result & 4) != 0 && a2[4] <= 0xFF )
    return PspSetProcessPriorityClass(a1, *((_BYTE *)a2 + 16), 0LL, a3);
  return result;
}
