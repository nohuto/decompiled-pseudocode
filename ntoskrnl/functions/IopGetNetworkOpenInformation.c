__int64 __fastcall IopGetNetworkOpenInformation(struct _FILE_OBJECT *Object, __int64 a2)
{
  int v4; // edx
  __int64 v6; // [rsp+48h] [rbp+7h] BYREF
  __int128 v7; // [rsp+50h] [rbp+Fh] BYREF
  __int128 v8; // [rsp+60h] [rbp+1Fh]
  __int64 v9; // [rsp+70h] [rbp+2Fh]
  __int64 v10[2]; // [rsp+78h] [rbp+37h] BYREF
  __int64 v11; // [rsp+88h] [rbp+47h]

  v9 = 0LL;
  v11 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  *(_OWORD *)v10 = 0LL;
  v4 = IopQueryXxxInformation(Object, 4, 0x28u, 0, (struct _IRP *)&v7, &v6, 1);
  if ( v4 >= 0 )
  {
    v4 = IopQueryXxxInformation(Object, 5, 0x18u, 0, (struct _IRP *)v10, &v6, 1);
    if ( v4 >= 0 )
    {
      *(_OWORD *)*(_QWORD *)(a2 + 104) = v7;
      *(_OWORD *)(*(_QWORD *)(a2 + 104) + 16LL) = v8;
      *(_QWORD *)(*(_QWORD *)(a2 + 104) + 32LL) = v10[0];
      *(_QWORD *)(*(_QWORD *)(a2 + 104) + 40LL) = v10[1];
      *(_DWORD *)(*(_QWORD *)(a2 + 104) + 48LL) = v9;
    }
  }
  return (unsigned int)v4;
}
