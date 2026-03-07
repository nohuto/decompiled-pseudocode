void __fastcall IoBugCheckDriverDataCallback(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _OWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  unsigned __int16 *v4; // rax
  int v5; // ecx
  __int64 v6; // rdx

  v4 = (unsigned __int16 *)KiBugCheckDriver;
  v5 = 0;
  ReasonSpecificData[1] = xmmword_14003F6E0;
  if ( v4 && *((_QWORD *)v4 + 1) && *v4 )
    v5 = *v4;
  v6 = *((_QWORD *)ReasonSpecificData + 4);
  if ( v6 )
  {
    if ( v6 == *(_QWORD *)ReasonSpecificData )
    {
      *((_DWORD *)ReasonSpecificData + 10) = v5;
      *((_QWORD *)ReasonSpecificData + 4) = *((_QWORD *)v4 + 1);
    }
  }
  else
  {
    *((_DWORD *)ReasonSpecificData + 10) = v5;
  }
}
