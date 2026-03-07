void __fastcall BLTQUEUE::EnableVSyncEventSignaling(BLTQUEUE *this)
{
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v3; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  const CHAR *v7; // r9
  __int64 v8; // r10
  __int64 v9; // rax
  const CHAR *v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  *((_BYTE *)this + 571) = 1;
  *((LARGE_INTEGER *)this + 105) = PerformanceCounter;
  KeSetEvent((PRKEVENT)((char *)this + 520), 0, 0);
  if ( *((_DWORD *)this + 34) == 3 )
  {
    Current = DXGPROCESS::GetCurrent(v3);
    if ( Current )
    {
      if ( !*((_BYTE *)Current + 601) )
      {
        *((_BYTE *)Current + 601) = 1;
        if ( (unsigned int)dword_1C013A8A8 > 5 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C013A8A8, 0x400000080000LL) )
          {
            v9 = *(_QWORD *)(v8 + 64);
            if ( v9 )
              v7 = *(const CHAR **)(v9 + 96);
            v10 = v7;
            v11 = 33556480LL;
            v12 = 1LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
              v5,
              byte_1C00A1C42,
              v6,
              (__int64)&v12,
              (__int64)&v11,
              &v10);
          }
        }
      }
    }
  }
}
