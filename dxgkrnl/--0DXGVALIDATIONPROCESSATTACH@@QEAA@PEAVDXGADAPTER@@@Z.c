DXGVALIDATIONPROCESSATTACH *__fastcall DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
        DXGVALIDATIONPROCESSATTACH *this,
        struct DXGADAPTER *a2)
{
  __int64 v4; // rdi
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // eax
  struct DXGPROCESS *Current; // rax
  int v11; // ecx
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  struct _KPROCESS *v14; // rcx

  *(_BYTE *)this = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
    {
      WdLogSingleEntry1(1LL, 2406LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v7,
            v6,
            v8,
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
    v4 = *(_QWORD *)&DXGGLOBAL::m_pGlobal;
    if ( *(_DWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 1684LL) )
    {
      v9 = *((_DWORD *)a2 + 109);
      if ( (v9 & 0x20) == 0 && (v9 & 4) == 0 )
      {
        Current = DXGPROCESS::GetCurrent();
        if ( Current )
        {
          if ( (*((_BYTE *)Current + 424) & 1) == 0 && (*((_DWORD *)Current + 106) & 2) == 0 )
          {
            v11 = *(_DWORD *)(v4 + 1684);
            if ( v11 == 2 || v11 == 1 && *((_BYTE *)Current + 589) )
            {
              Global = DXGGLOBAL::GetGlobal();
              SessionData = DXGGLOBAL::GetSessionData(Global);
              if ( SessionData )
              {
                v14 = (struct _KPROCESS *)*((_QWORD *)SessionData + 2340);
                if ( v14 )
                {
                  KeStackAttachProcess(v14, (PRKAPC_STATE)((char *)this + 8));
                  *(_BYTE *)this = 1;
                }
              }
            }
          }
        }
      }
    }
  }
  return this;
}
