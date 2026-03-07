void __fastcall CRapidHpdInfo::Delete(unsigned int a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  int v5; // r10d
  unsigned int v6; // r10d
  struct _GUID *v7; // rbx
  void *v8; // rcx
  __int128 v9; // [rsp+40h] [rbp-28h] BYREF
  struct _GUID v10; // [rsp+50h] [rbp-18h] BYREF

  if ( CRapidHpdInfo::s_pRapidHpdInfo )
  {
    v4 = CMonitorTopology::CompareToCurrent(*(_QWORD *)CRapidHpdInfo::s_pRapidHpdInfo[2].Data4, 0LL, a3);
    v5 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
       - *(_DWORD *)CRapidHpdInfo::s_pRapidHpdInfo->Data4;
    v9 = *(_OWORD *)CRapidHpdInfo::s_pRapidHpdInfo[1].Data4;
    InputTraceLogging::DesktopRecalc::RapidHpdComplete(
      a1,
      *(unsigned int *)&CRapidHpdInfo::s_pRapidHpdInfo[1].Data2,
      (unsigned int)((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                    * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
    - CRapidHpdInfo::s_pRapidHpdInfo->Data1,
      CRapidHpdInfo::s_pRapidHpdInfo[1].Data1,
      v5,
      &v9,
      v4);
    v6 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
       - *(_DWORD *)CRapidHpdInfo::s_pRapidHpdInfo->Data4;
    v10 = *(struct _GUID *)CRapidHpdInfo::s_pRapidHpdInfo[1].Data4;
    TraceLoggingRapidHpdComplete(
      a1,
      *(_DWORD *)&CRapidHpdInfo::s_pRapidHpdInfo[1].Data2,
      ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
    - CRapidHpdInfo::s_pRapidHpdInfo->Data1,
      CRapidHpdInfo::s_pRapidHpdInfo[1].Data1,
      v6,
      &v10,
      v4);
    v7 = CRapidHpdInfo::s_pRapidHpdInfo;
    if ( CRapidHpdInfo::s_pRapidHpdInfo )
    {
      v8 = *(void **)CRapidHpdInfo::s_pRapidHpdInfo[2].Data4;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v8, 0xFFFFFFFF) == 1 )
        Win32FreePool(v8);
      Win32FreePool(v7);
    }
    CRapidHpdInfo::s_pRapidHpdInfo = 0LL;
  }
}
