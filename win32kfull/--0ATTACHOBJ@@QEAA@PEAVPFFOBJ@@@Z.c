ATTACHOBJ *__fastcall ATTACHOBJ::ATTACHOBJ(ATTACHOBJ *this, struct PFFOBJ *a2)
{
  __int64 v4; // r8
  unsigned int v5; // ebx
  __int64 v6; // rcx
  struct _FONTFILEVIEW **v7; // r10
  struct _FONTFILEVIEW *v8; // rdx
  int v9; // eax
  unsigned int v11[2]; // [rsp+20h] [rbp-38h] BYREF
  int v12; // [rsp+28h] [rbp-30h]
  void *v13[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+40h] [rbp-18h]

  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  v4 = *(_QWORD *)a2;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 88LL) + 40LL) & 0x2000) != 0 )
  {
    v5 = *(_DWORD *)(v4 + 36);
    if ( v5 <= 3 )
    {
      if ( (*(_DWORD *)(v4 + 52) & 0x1000) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      if ( (*(_DWORD *)(*(_QWORD *)a2 + 52LL) & 0x2000) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      v6 = 0LL;
      if ( v5 )
      {
        v7 = *(struct _FONTFILEVIEW ***)(*(_QWORD *)a2 + 200LL);
        while ( 1 )
        {
          v8 = v7[v6];
          v9 = *((_DWORD *)v8 + 10);
          if ( (v9 & 0x10) == 0 && (v9 & 8) != 0 && !*((_QWORD *)v8 + 6) )
            break;
          v6 = (unsigned int)(v6 + 1);
          if ( (unsigned int)v6 >= v5 )
            return this;
        }
        v14 = 0LL;
        *(_QWORD *)v11 = 0LL;
        v12 = 0;
        *(_OWORD *)v13 = 0LL;
        if ( MapFontFiles(v5, v7, v13, v11) )
        {
          *(_QWORD *)this = *(_QWORD *)(*(_QWORD *)a2 + 200LL);
          *((_DWORD *)this + 2) = v5;
        }
      }
    }
  }
  return this;
}
