void __fastcall PfSnLogAsyncWorker(__int64 a1, __int64 *a2)
{
  __int64 v4; // rax
  ULONG v5; // r9d
  __int16 v6; // [rsp+30h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-9h] BYREF
  __int64 v8; // [rsp+50h] [rbp+7h]
  int v9; // [rsp+58h] [rbp+Fh]
  int v10; // [rsp+5Ch] [rbp+13h]
  __int64 v11; // [rsp+60h] [rbp+17h]
  __int64 v12; // [rsp+68h] [rbp+1Fh]
  __int64 v13; // [rsp+70h] [rbp+27h]
  __int64 v14; // [rsp+78h] [rbp+2Fh]
  __int64 v15; // [rsp+80h] [rbp+37h]
  __int64 v16; // [rsp+88h] [rbp+3Fh]

  if ( a1 && qword_140C6A388 && EtwEventEnabled(qword_140C6A388, (PCEVENT_DESCRIPTOR)a2) )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( *(_WORD *)(a1 + 16 + 2 * v4) );
    v6 = v4;
    v5 = 4;
    UserData.Ptr = (ULONGLONG)&v6;
    v9 = 2 * (unsigned __int16)v4;
    v11 = a1 + 76;
    v13 = a1 + 80;
    *(_QWORD *)&UserData.Size = 2LL;
    v8 = a1 + 16;
    v10 = 0;
    v12 = 4LL;
    v14 = 4LL;
    if ( a2 == PfSnEvt_AsyncWorker_Start )
    {
      v16 = 4LL;
      v15 = a1 + 124;
      v5 = 5;
    }
    EtwWrite(qword_140C6A388, (PCEVENT_DESCRIPTOR)a2, 0LL, v5, &UserData);
  }
}
