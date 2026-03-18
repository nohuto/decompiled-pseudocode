/*
 * XREFs of RtlGetSetBootStatusData @ 0x1406D66F0
 * Callers:
 *     PopBootStatGet @ 0x1406D5F3C (PopBootStatGet.c)
 *     PopBootStatSet @ 0x1406D6228 (PopBootStatSet.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlpGetSetBootStatusData @ 0x1406D6860 (RtlpGetSetBootStatusData.c)
 */

__int64 __fastcall RtlGetSetBootStatusData(HANDLE FileHandle, char a2, int a3, _BYTE *a4, int a5, _DWORD *a6)
{
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  _BYTE *v13; // rcx
  __int64 v14; // r8
  char v15; // al
  __int64 v16; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v17[192]; // [rsp+40h] [rbp-C0h] BYREF

  LODWORD(v16) = 0;
  memset(v17, 0, sizeof(v17));
  if ( a2 )
    return RtlpGetSetBootStatusData(FileHandle, a5, (__int64)a6);
  if ( a3 == 15 )
    return 3221225485LL;
  result = RtlpGetSetBootStatusData(FileHandle, 1, 0LL);
  if ( (int)result >= 0 )
  {
    result = RtlpGetSetBootStatusData(FileHandle, 192, 0LL);
    if ( (int)result >= 0 )
    {
      result = RtlpGetSetBootStatusData(FileHandle, a5, (__int64)&v16);
      if ( (int)result >= 0 )
      {
        v11 = (unsigned int)v16;
        if ( a6 )
          *a6 = v16;
        if ( (_DWORD)v11 )
        {
          v12 = v11;
          v13 = v17;
          v14 = v11;
          v15 = 0;
          do
          {
            v15 += *v13++;
            --v14;
          }
          while ( v14 );
          do
          {
            v15 -= *a4++;
            --v12;
          }
          while ( v12 );
        }
        return RtlpGetSetBootStatusData(FileHandle, 1, 0LL);
      }
    }
  }
  return result;
}
