__int64 __fastcall DrvDbRegisterDatabase(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rsi
  __int64 v10; // rdi
  __int64 v12; // r9
  __int64 result; // rax
  int v14; // edx
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF

  v8 = PiDrvDbCtx;
  a7 = 0LL;
  v10 = 0LL;
  v15 = 0LL;
  if ( (int)DrvDbFindDatabaseNode(PiDrvDbCtx, a2, &a7, a4) >= 0 )
    return 0x40000000LL;
  if ( a3 )
  {
    result = DrvDbFindDatabaseNode(v8, a3, &v15, v12);
    if ( (int)result < 0 )
      return result;
    v10 = v15;
  }
  v14 = (8 * (a6 & 2)) | 0x20;
  if ( (a6 & 1) == 0 )
    v14 = 8 * (a6 & 2);
  return DrvDbCreateDatabaseNode(v8, a2, v10, 0LL, a5, v14, PiDrvDbNodeActionCallback, a8, &a7);
}
