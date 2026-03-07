void __fastcall MiInitializeDpcGroupAffinity(_OWORD *a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // r14
  __int64 v5; // rbp
  _OWORD *v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int128 v10; // kr00_16
  __int64 v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+28h] [rbp-30h]
  __int128 v14; // [rsp+30h] [rbp-28h]

  if ( a3 )
  {
    v4 = a3;
    v5 = a2 - (_QWORD)a1;
    v7 = a1;
    do
    {
      v8 = 0LL;
      v10 = *(_OWORD *)((char *)v7 + v5);
      v13 = *(_QWORD *)((char *)v7 + v5 + 8);
      v9 = v10;
      *((_QWORD *)&v14 + 1) = v13;
      *(_QWORD *)&v14 = 0LL;
      v12 = v10;
      if ( (_QWORD)v10 )
      {
        do
        {
          v11 = KiProcessorBlock[(unsigned int)KeFindFirstSetRightGroupAffinity(&v12)];
          if ( !a4 || (unsigned int)MiGetEngineType(v11) == a4 )
            v8 |= *(_QWORD *)(v11 + 200);
          v9 &= ~*(_QWORD *)(v11 + 200);
          v12 = v9;
        }
        while ( v9 );
        *(_QWORD *)&v14 = v8;
      }
      *v7++ = v14;
      --v4;
    }
    while ( v4 );
  }
}
