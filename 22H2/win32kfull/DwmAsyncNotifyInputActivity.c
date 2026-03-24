/*
 * XREFs of DwmAsyncNotifyInputActivity @ 0x1C0115908
 * Callers:
 *     PostInputMessage @ 0x1C00507E0 (PostInputMessage.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

__int64 __fastcall DwmAsyncNotifyInputActivity(PVOID Object, int a2, unsigned __int64 a3)
{
  PVOID v3; // rbx
  unsigned int v4; // edi
  int v6; // ecx
  _OWORD v7[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v8; // [rsp+40h] [rbp-20h]
  int v9; // [rsp+48h] [rbp-18h]
  int v10; // [rsp+4Ch] [rbp-14h]
  unsigned __int64 v11; // [rsp+50h] [rbp-10h]

  v3 = Object;
  v4 = -1073741823;
  if ( Object )
  {
    v11 = 0LL;
    memset(v7, 0, sizeof(v7));
    WORD2(v7[0]) = 0x8000;
    LODWORD(v7[0]) = 3670032;
    v8 = 0LL;
    v9 = 1073741910;
    v10 = a2;
    if ( (unsigned int)(a2 - 256) > 1 )
    {
      if ( (unsigned int)(a2 - 513) > 0xD )
        goto LABEL_4;
      v6 = 8707;
      if ( !_bittest(&v6, a2 - 513) )
        goto LABEL_4;
      Object = v3;
    }
    else
    {
      if ( a3 > 0x28 || (unsigned int)a3 < 0x21 )
        goto LABEL_4;
      v11 = a3;
    }
    v4 = LpcRequestPort(Object, v7);
LABEL_4:
    ObfDereferenceObject(v3);
  }
  return v4;
}
