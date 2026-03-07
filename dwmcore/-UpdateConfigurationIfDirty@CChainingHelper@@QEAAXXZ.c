void __fastcall CChainingHelper::UpdateConfigurationIfDirty(CChainingHelper *this)
{
  char v1; // al
  CChainingHelper *v2; // rbx
  int v3; // eax
  char v4; // r8
  char v5; // r9
  CChainingHelper *v6; // rdx
  __int64 v7; // r10
  _QWORD v8[4]; // [rsp+20h] [rbp-20h] BYREF
  CChainingHelper *v9; // [rsp+50h] [rbp+10h] BYREF
  int v10; // [rsp+58h] [rbp+18h] BYREF
  CChainingHelper *v11; // [rsp+60h] [rbp+20h] BYREF

  v1 = *((_BYTE *)this + 36);
  v2 = this;
  if ( (v1 & 1) != 0 )
  {
    v3 = 0;
    v4 = 0;
    v10 = 0;
    v5 = 0;
    LOBYTE(v9) = 0;
    v6 = this;
    v7 = 3LL;
    do
    {
      LOBYTE(this) = *(_BYTE *)v6;
      if ( (*(_BYTE *)v6 & 1) != 0 )
      {
        v3 |= *((_DWORD *)v6 + 1);
        v5 = 1;
        LOBYTE(this) = ((unsigned __int8)this & 2) != 0;
        v4 |= (unsigned __int8)this;
      }
      v6 = (CChainingHelper *)((char *)v6 + 12);
      --v7;
    }
    while ( v7 );
    v10 = v3;
    LOBYTE(v9) = v4;
    if ( v5 )
    {
      v8[0] = v2;
      v8[1] = &v9;
      v8[2] = &v10;
      CChainingHelper::RunForAllAxes__lambda_40b2a6404f1a20f79c4b9feef5831a62___((__int64)this, (__int64)v8);
    }
    else
    {
      v11 = v2;
      CChainingHelper::RunForAllAxes__lambda_ff7ff6922ce62528cf9facebf3a4fb75___((__int64)this, (__int64 *)&v11);
    }
    *((_BYTE *)v2 + 36) &= ~1u;
    v1 = *((_BYTE *)v2 + 36);
  }
  if ( (v1 & 2) != 0 )
  {
    v9 = v2;
    CChainingHelper::RunForAllAxes__lambda_f3ac08a02e4a7ab098607de630a59e6d___((__int64)this, (__int64 *)&v9);
    *((_BYTE *)v2 + 36) &= ~2u;
  }
}
