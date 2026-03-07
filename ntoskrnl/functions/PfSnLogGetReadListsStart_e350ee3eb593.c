void __fastcall PfSnLogGetReadListsStart(__int64 a1, int a2)
{
  __int64 v3; // rax
  __int16 v4; // [rsp+30h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-9h] BYREF
  __int64 v6; // [rsp+50h] [rbp+7h]
  int v7; // [rsp+58h] [rbp+Fh]
  int v8; // [rsp+5Ch] [rbp+13h]
  __int64 v9; // [rsp+60h] [rbp+17h]
  __int64 v10; // [rsp+68h] [rbp+1Fh]
  __int64 v11; // [rsp+70h] [rbp+27h]
  __int64 v12; // [rsp+78h] [rbp+2Fh]
  int *v13; // [rsp+80h] [rbp+37h]
  __int64 v14; // [rsp+88h] [rbp+3Fh]
  int v15; // [rsp+B8h] [rbp+6Fh] BYREF

  if ( a1 )
  {
    v15 = a2;
    if ( qword_140C6A388 )
    {
      if ( EtwEventEnabled(qword_140C6A388, &PfSnEvt_GetReadLists_Start) )
      {
        v3 = -1LL;
        do
          ++v3;
        while ( *(_WORD *)(a1 + 16 + 2 * v3) );
        v4 = v3;
        UserData.Ptr = (ULONGLONG)&v4;
        v7 = 2 * (unsigned __int16)v3;
        v6 = a1 + 16;
        v9 = a1 + 76;
        v11 = a1 + 80;
        v13 = &v15;
        *(_QWORD *)&UserData.Size = 2LL;
        v8 = 0;
        v10 = 4LL;
        v12 = 4LL;
        v14 = 4LL;
        EtwWrite(qword_140C6A388, &PfSnEvt_GetReadLists_Start, 0LL, 5u, &UserData);
      }
    }
  }
}
