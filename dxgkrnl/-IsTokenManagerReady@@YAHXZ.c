__int64 IsTokenManagerReady(void)
{
  unsigned int v0; // ebx
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v2; // rdi
  int v4; // edx
  int v5; // ecx
  int v6; // r8d

  v0 = 0;
  if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
  {
    WdLogSingleEntry1(1LL, 2406LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v5,
          v4,
          v6,
          0,
          2,
          -1,
          (__int64)L"m_pGlobal != NULL",
          2406LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  SessionData = DXGGLOBAL::GetSessionData(*(DXGGLOBAL **)&DXGGLOBAL::m_pGlobal);
  if ( SessionData )
  {
    v2 = *((_QWORD *)SessionData + 2343);
    if ( v2 )
    {
      (**(void (__fastcall ***)(_QWORD))v2)(*((_QWORD *)SessionData + 2343));
      v0 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 184LL))(v2);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  return v0;
}
