__int64 __fastcall SimpleHapticsController::UpdateWaveformInfoList(
        SimpleHapticsController *this,
        __int16 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // r10d
  __int64 v5; // rax
  const char *v7; // [rsp+40h] [rbp-18h] BYREF
  __int16 v8; // [rsp+60h] [rbp+8h] BYREF
  __int16 v9; // [rsp+78h] [rbp+20h] BYREF

  v4 = *((_DWORD *)this + 22);
  v5 = 0LL;
  if ( v4 )
  {
    this = (SimpleHapticsController *)*((_QWORD *)this + 10);
    while ( *((_WORD *)this + 4 * v5) != a2 )
    {
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= v4 )
        goto LABEL_5;
    }
    *((_WORD *)this + 4 * v5 + 1) = a3;
    return 0LL;
  }
  else
  {
LABEL_5:
    if ( (unsigned int)dword_1C0357118 > 4 )
    {
      v9 = a2;
      v7 = "SimpleHapticsController::UpdateWaveformInfoList Ordinal not found";
      v8 = a3;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>>(
        (__int64)this,
        byte_1C031FB24,
        a3,
        a4,
        (void **)&v7,
        (__int64)&v9,
        (__int64)&v8);
    }
    return 3221226021LL;
  }
}
