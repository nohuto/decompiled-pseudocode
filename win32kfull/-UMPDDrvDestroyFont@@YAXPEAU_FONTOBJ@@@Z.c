void __fastcall UMPDDrvDestroyFont(struct _FONTOBJ *a1)
{
  UMPDOBJ *v2; // rbx
  size_t Size; // [rsp+20h] [rbp-50h]
  __int64 v4; // [rsp+30h] [rbp-40h] BYREF
  UMPDOBJ *v5; // [rsp+38h] [rbp-38h] BYREF
  __int128 v6; // [rsp+40h] [rbp-30h] BYREF
  __int128 v7; // [rsp+50h] [rbp-20h]
  struct _FONTOBJ *v8; // [rsp+60h] [rbp-10h] BYREF

  LODWORD(v4) = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v5);
  v2 = v5;
  v8 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( v5 )
  {
    if ( a1 )
    {
      *(_QWORD *)&v6 = 0x2B00000028LL;
      *(_QWORD *)&v7 = *(_QWORD *)v5;
      *((_QWORD *)&v7 + 1) = a1[1].pvConsumer;
      v8 = a1;
      if ( (unsigned int)UMPDOBJ::pfo(v5, (__m128i **)&v8) )
      {
        LODWORD(Size) = 4;
        UMPDOBJ::Thunk(v2, &v6, 0x28u, &v4, Size);
      }
    }
  }
  v4 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v4);
  XUMPDOBJ::~XUMPDOBJ(&v5);
}
