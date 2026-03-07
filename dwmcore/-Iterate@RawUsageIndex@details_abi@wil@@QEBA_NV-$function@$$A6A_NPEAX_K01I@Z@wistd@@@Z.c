char __fastcall wil::details_abi::RawUsageIndex::Iterate(__int64 a1, __int64 a2)
{
  int v4; // edi
  __int64 v5; // r15
  __int64 v6; // rcx
  __int64 v8; // [rsp+40h] [rbp-29h] BYREF
  __int64 v9; // [rsp+48h] [rbp-21h] BYREF
  __int64 v10; // [rsp+50h] [rbp-19h] BYREF
  __int16 v11; // [rsp+58h] [rbp-11h] BYREF
  char v12; // [rsp+5Ah] [rbp-Fh]
  unsigned int v13; // [rsp+5Ch] [rbp-Dh]
  unsigned __int16 v14; // [rsp+60h] [rbp-9h]
  __int128 v15; // [rsp+68h] [rbp-1h]
  __int16 v16; // [rsp+78h] [rbp+Fh] BYREF
  char v17; // [rsp+7Ah] [rbp+11h]
  int v18; // [rsp+7Ch] [rbp+13h]
  unsigned __int16 v19; // [rsp+80h] [rbp+17h]
  __int128 v20; // [rsp+88h] [rbp+1Fh]
  int v21; // [rsp+D0h] [rbp+67h] BYREF
  unsigned __int8 *v22; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v23; // [rsp+E8h] [rbp+7Fh] BYREF

  v22 = (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 10LL);
  v11 = *(_WORD *)(a1 + 2);
  v12 = *(_BYTE *)(a1 + 4);
  v16 = *(_WORD *)(a1 + 6);
  v17 = *(_BYTE *)(a1 + 8);
  v13 = 0;
  v14 = 0;
  v15 = 0LL;
  v18 = 0;
  v19 = 0;
  v20 = 0LL;
LABEL_2:
  while ( wil::details_abi::UsageIndexProperty::Read(
            (wil::details_abi::UsageIndexProperty *)&v11,
            &v22,
            *(unsigned __int8 **)(a1 + 32)) )
  {
    v4 = 0;
    if ( v13 )
    {
      v5 = *((_QWORD *)&v15 + 1);
      while ( wil::details_abi::UsageIndexProperty::Read(
                (wil::details_abi::UsageIndexProperty *)&v16,
                &v22,
                *(unsigned __int8 **)(a1 + 32)) )
      {
        v6 = *(_QWORD *)(a2 + 112);
        v21 = v18;
        v23 = v19;
        v8 = *((_QWORD *)&v20 + 1);
        v9 = v14;
        v10 = v5;
        if ( !v6 )
          __fastfail(7u);
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64 *, __int64 *, __int64 *, __int64 *, int *))(*(_QWORD *)v6 + 32LL))(
                v6,
                &v10,
                &v9,
                &v8,
                &v23,
                &v21) )
        {
          wistd::function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::~function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>(a2);
          return 0;
        }
        if ( ++v4 >= v13 )
          goto LABEL_2;
      }
    }
  }
  wistd::function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::~function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>(a2);
  return 1;
}
