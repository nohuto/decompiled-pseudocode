__int64 __fastcall InteractiveControlParser::FindDigitizerForDevice(struct InteractiveControlDevice *a1)
{
  char *v1; // rsi
  char *v2; // rbx
  unsigned int v4; // edi
  char *v5; // rcx
  __int16 v6; // ax
  __int64 v7; // r8
  __int64 v8; // r9
  int v10; // [rsp+40h] [rbp-30h] BYREF
  int v11; // [rsp+44h] [rbp-2Ch] BYREF
  __int64 v12; // [rsp+48h] [rbp-28h] BYREF
  __int128 v13; // [rsp+50h] [rbp-20h] BYREF

  v1 = (char *)a1 + 184;
  v2 = (char *)*((_QWORD *)a1 + 23);
  v13 = 0LL;
  v4 = 0;
  while ( v2 != v1 )
  {
    v5 = v2;
    v2 = *(char **)v2;
    if ( *((_DWORD *)v5 + 4) == 1 )
    {
      v6 = *((_WORD *)v5 + 40);
      if ( v6 == 48 )
      {
        DWORD2(v13) = InteractiveControlParser::GetScaledComponentValue(
                        (struct tagINTERACTIVECTRL_COMPONENT_ENTRY *)v5,
                        *((_DWORD *)v5 + 19) - *((_DWORD *)v5 + 18))
                    + 1;
      }
      else if ( v6 == 49 )
      {
        HIDWORD(v13) = InteractiveControlParser::GetScaledComponentValue(
                         (struct tagINTERACTIVECTRL_COMPONENT_ENTRY *)v5,
                         *((_DWORD *)v5 + 19) - *((_DWORD *)v5 + 18))
                     + 1;
      }
    }
  }
  RIMFindTouchDigitizerWithSize(&v13, (char *)a1 + 240);
  if ( !*((_QWORD *)a1 + 30) )
  {
    if ( (unsigned int)dword_1C0357150 > 3 )
    {
      v10 = HIDWORD(v13);
      v11 = DWORD2(v13);
      v12 = (__int64)"InteractiveControlParser::FindDigitizerForDevice failed to find matching digitizer.";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_1C0357150,
        byte_1C031FCB7,
        v7,
        v8,
        (void **)&v12,
        (__int64)&v11,
        (__int64)&v10);
    }
    return (unsigned int)-1073741632;
  }
  return v4;
}
