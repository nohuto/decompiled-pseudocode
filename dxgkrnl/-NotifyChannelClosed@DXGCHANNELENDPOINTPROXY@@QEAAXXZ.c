void __fastcall DXGCHANNELENDPOINTPROXY::NotifyChannelClosed(DXGCHANNELENDPOINTPROXY *this)
{
  _QWORD *v2; // rdi
  unsigned int v3; // ebp
  unsigned int v4; // ebx
  unsigned int UsedEntryCount; // r12d
  unsigned int EntryType; // r14d
  unsigned int v7; // eax
  unsigned int v8; // r15d
  unsigned int v9; // ecx
  int v10; // edx
  __int64 v11; // r8
  _BYTE v12[16]; // [rsp+50h] [rbp-28h] BYREF

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 17) + 24LL))(*((_QWORD *)this + 17));
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, (DXGCHANNELENDPOINTPROXY *)((char *)this + 72), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  v2 = (_QWORD *)((char *)this + 40);
  if ( *((_DWORD *)this + 15) != *((_DWORD *)this + 14) )
  {
    v3 = 0;
    v4 = 0;
    UsedEntryCount = HMGRTABLE::GetUsedEntryCount((DXGCHANNELENDPOINTPROXY *)((char *)this + 40));
    if ( UsedEntryCount )
    {
      do
      {
        if ( v4 >= *((_DWORD *)this + 14) )
        {
          WdLogSingleEntry1(1LL, 878LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"Index < m_HandleTable.GetTableSize()",
            878LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        EntryType = HMGRTABLE::GetEntryType((__int64)this + 40, v4);
        if ( !EntryType )
          goto LABEL_16;
        v7 = HMGRTABLE::BuildEntryHandle((DXGCHANNELENDPOINTPROXY *)((char *)this + 40), v4);
        v8 = v7;
        v9 = (v7 >> 6) & 0xFFFFFF;
        if ( v9 < *((_DWORD *)this + 14)
          && ((v7 >> 25) & 0x60) == (*(_BYTE *)(*v2 + 16LL * v9 + 8) & 0x60)
          && (*(_DWORD *)(*v2 + 16LL * v9 + 8) & 0x2000) == 0 )
        {
          v10 = *(_DWORD *)(*v2 + 16LL * v9 + 8) & 0x1F;
          if ( v10 )
          {
            if ( EntryType == v10 )
            {
              v11 = *(_QWORD *)(*v2 + 16LL * v9);
              goto LABEL_13;
            }
            WdLogSingleEntry1(2LL, 267LL);
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
        v11 = 0LL;
LABEL_13:
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 17) + 16LL))(
               *((_QWORD *)this + 17),
               EntryType,
               v11) )
        {
          HMGRTABLE::FreeHandle((DXGCHANNELENDPOINTPROXY *)((char *)this + 40), v8);
        }
        ++v3;
LABEL_16:
        ++v4;
      }
      while ( v3 < UsedEntryCount );
    }
  }
  if ( v12[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
}
