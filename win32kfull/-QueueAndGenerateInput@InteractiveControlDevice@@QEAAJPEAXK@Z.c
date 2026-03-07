__int64 __fastcall InteractiveControlDevice::QueueAndGenerateInput(
        InteractiveControlDevice *this,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r15
  unsigned int v6; // edx
  InteractiveControlInput *v7; // rbx
  unsigned int Messages; // edi
  unsigned __int8 *v10; // r13
  InteractiveControlInput *v11; // rax
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // eax
  unsigned int v16; // r12d
  struct InteractiveControlInput *v18; // [rsp+90h] [rbp+48h] BYREF
  struct tagWND *updated; // [rsp+98h] [rbp+50h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+58h] BYREF
  const char *v21; // [rsp+A8h] [rbp+60h] BYREF

  v4 = *((unsigned __int16 *)this + 40);
  v6 = (unsigned int)a3 % *((unsigned __int16 *)this + 40);
  v7 = 0LL;
  Messages = 0;
  v18 = 0LL;
  if ( v6 )
  {
    Messages = -1073739509;
    if ( (unsigned int)dword_1C0357150 > 2 )
    {
      LODWORD(v20) = v4;
      v21 = "InteractiveControlDevice::QueueAndGenerateInput -> Invalid report length.";
      LODWORD(v18) = a3;
      LODWORD(updated) = -1073739509;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)this,
        byte_1C031FA59,
        a3,
        a4,
        (void **)&v21,
        (__int64)&updated,
        (__int64)&v18,
        (__int64)&v20);
    }
  }
  else
  {
    v10 = &a2[(unsigned int)a3];
    if ( a2 < v10 )
    {
      while ( 1 )
      {
        if ( !v7 )
        {
          v11 = (InteractiveControlInput *)Win32AllocPool(96LL, 1819440195LL, a3, a4);
          if ( !v11 )
            return (unsigned int)-1073741670;
          v7 = InteractiveControlInput::InteractiveControlInput(v11, this);
          if ( !v7 )
            return (unsigned int)-1073741670;
        }
        v12 = InteractiveControlInput::ParseInputReport(v7, a2, v4);
        Messages = v12;
        if ( v12 < 0 )
          break;
        InteractiveControlDevice::GetPreviousInputReport(this, 0LL, (struct _LIST_ENTRY **)&v18);
        v15 = InteractiveControlDevice::DetermineMessageCreationFlags(this, v18, v7);
        v16 = v15;
        if ( v15 )
        {
          updated = InteractiveControlDevice::UpdateInputTarget(this, v15);
          InteractiveControlDevice::PerformInputActions(this, v7, v16);
          InteractiveControlDevice::QueueInput(this, 0LL, v7);
          if ( !*((_DWORD *)this + 91) )
            Messages = InteractiveControlInput::GenerateMessages(v7, updated, *((unsigned int *)this + 16), v16);
          v7 = 0LL;
        }
        a2 += v4;
        if ( a2 >= v10 )
          goto LABEL_18;
      }
      if ( (unsigned int)dword_1C0357150 > 2 )
      {
        LODWORD(v20) = v12;
        v18 = (struct InteractiveControlInput *)"Function failed.";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          (__int64)&dword_1C0357150,
          byte_1C031F148,
          v13,
          v14,
          (void **)&v18,
          (__int64)&v20);
      }
LABEL_18:
      if ( v7 )
        InteractiveControlInput::`scalar deleting destructor'(v7, 1);
    }
  }
  return Messages;
}
