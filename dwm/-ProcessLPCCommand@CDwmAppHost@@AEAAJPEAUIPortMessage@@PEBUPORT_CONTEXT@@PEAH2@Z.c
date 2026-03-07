__int64 __fastcall CDwmAppHost::ProcessLPCCommand(
        CDwmAppHost *this,
        struct IPortMessage *a2,
        const struct PORT_CONTEXT *a3,
        int *a4,
        int *a5)
{
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // r10
  __int16 v10; // dx
  CDwmAppHost *v11; // rcx
  unsigned int v12; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  CDwmAppHost *v20; // rcx
  void *v21; // [rsp+28h] [rbp-10h]
  void *v22; // [rsp+28h] [rbp-10h]

  v7 = 0;
  v8 = (*(__int64 (__fastcall **)(struct IPortMessage *))(*(_QWORD *)a2 + 16LL))(a2);
  v9 = v8;
  v10 = *(_WORD *)(v8 + 4) >> 15;
  *a4 = 1;
  *a5 = 0;
  v11 = (CDwmAppHost *)((*(_WORD *)(v8 + 4) & 0x7FFFu) - 1);
  if ( (*(_WORD *)(v8 + 4) & 0x7FFF) == 1 )
  {
    v17 = *(_DWORD *)(v8 + 40);
    if ( v17 < 0x40000035 && v17 >= 0x20000004 )
      goto LABEL_5;
    v18 = v17 - 536870913;
    if ( v18 )
    {
      v19 = v18 - 2;
      if ( v19 )
      {
        if ( v19 != 536870962 )
          goto LABEL_5;
        if ( (_BYTE)v10 && (unsigned __int8)IsDWMGhostHandleGhostMsgPresent() )
        {
          DWMGhostHandleGhostMsg(a2);
          *a5 = 1;
        }
      }
      else if ( *(_DWORD *)(v9 + 8) == (_DWORD)qword_140016B00 )
      {
        CSettingsManager::PropagateUserLogon((CSettingsManager *)qword_140016B18, 0LL, 0LL, 0LL, 1);
        (*(void (__fastcall **)(struct IPortMessage *, _QWORD))(*(_QWORD *)a2 + 24LL))(a2, 0LL);
        *a5 = 1;
      }
    }
    else if ( *(_DWORD *)(v9 + 8) == (_DWORD)qword_140016B00 )
    {
      (*(void (__fastcall **)(struct IPortMessage *, _QWORD))(*(_QWORD *)a2 + 24LL))(a2, 0LL);
      *a5 = 1;
      CDwmAppHost::Shutdown(v20, -805305602);
    }
  }
  else
  {
    if ( (*(_WORD *)(v8 + 4) & 0x7FFF) != 3 )
      return v7;
    v12 = *(_DWORD *)(v8 + 40);
    if ( v12 < 0x40000035 && v12 >= 0x20000003 )
      goto LABEL_5;
    v14 = v12 - 536870914;
    if ( v14 )
    {
      v15 = v14 - 536870963;
      if ( v15 )
      {
        if ( v15 == 2 )
        {
          if ( (_BYTE)v10 )
          {
            HIBYTE(word_140016B88) = 1;
            v16 = CDwmAppHost::LpcNotifySettingsChange(v11, 0x21u);
            v7 = v16;
            if ( v16 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x207u, v21);
              HIBYTE(word_140016B88) = 0;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x1A4u, v22);
            }
            else
            {
              HIBYTE(word_140016B88) = 0;
            }
          }
          return v7;
        }
LABEL_5:
        *a4 = 0;
        return v7;
      }
      if ( (_BYTE)v10 && (unsigned __int8)IsDWMGhostHandleGhostMsgPresent() )
        DWMGhostHandleGhostMsg(a2);
    }
    else if ( *(_DWORD *)(v9 + 8) == (_DWORD)qword_140016B00 )
    {
      CSettingsManager::PropagateUserLogon(
        (CSettingsManager *)qword_140016B18,
        *(HKEY *)(v9 + 52),
        *(HKEY *)(v9 + 60),
        *(HKEY *)(v9 + 68),
        *(_DWORD *)(v9 + 76) != 0);
    }
  }
  return v7;
}
