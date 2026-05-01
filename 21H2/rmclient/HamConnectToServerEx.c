/*
 * XREFs of HamConnectToServerEx @ 0x180003930
 * Callers:
 *     HamConnectToServer @ 0x180003920 (HamConnectToServer.c)
 * Callees:
 *     HampConnectionDestroy @ 0x1800021E8 (HampConnectionDestroy.c)
 *     HampConnectionCreate @ 0x1800039B0 (HampConnectionCreate.c)
 */

__int64 __fastcall HamConnectToServerEx(__int64 a1, int a2, __int64 *a3)
{
  int v4; // ebx
  __int64 v5; // rcx
  _QWORD v7[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  v8 = 0LL;
  if ( a1 )
  {
    v7[1] = 0LL;
    v7[0] = a1;
    v4 = HampConnectionCreate((unsigned int)v7, (unsigned int)&unk_180015730, a2, 0, (__int64)&v8);
    if ( v4 < 0 )
    {
      v5 = v8;
    }
    else
    {
      v5 = 0LL;
      *a3 = v8;
      v4 = 0;
    }
    if ( v5 )
      HampConnectionDestroy(v5);
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return (unsigned int)v4;
}
