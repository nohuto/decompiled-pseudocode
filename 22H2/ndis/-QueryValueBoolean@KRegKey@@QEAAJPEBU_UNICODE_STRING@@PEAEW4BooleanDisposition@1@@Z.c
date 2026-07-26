/*
 * XREFs of ?QueryValueBoolean@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAEW4BooleanDisposition@1@@Z @ 0x1C0109478
 * Callers:
 *     ?QueryValueBoolean@KRegKey@@QEAAJPEB_WPEAEW4BooleanDisposition@1@@Z @ 0x1C01094D8 (-QueryValueBoolean@KRegKey@@QEAAJPEB_WPEAEW4BooleanDisposition@1@@Z.c)
 * Callees:
 *     ?QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C0108B80 (-QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueBoolean(
        KRegKey *this,
        struct _UNICODE_STRING *a2,
        unsigned __int8 *a3,
        enum KRegKey::BooleanDisposition a4)
{
  unsigned __int8 v5; // bl
  int v7; // edi
  unsigned int v9[6]; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0;
  v9[0] = 0;
  if ( KRegKey::QueryValueUlong(this, a2, v9) == -1073741772 )
  {
    if ( a4 )
    {
      v7 = a4 - 1;
      if ( !v7 )
      {
LABEL_4:
        *a3 = v5;
        return 0LL;
      }
      if ( v7 == 1 )
      {
LABEL_7:
        v5 = 1;
        goto LABEL_4;
      }
    }
    return 3221225524LL;
  }
  else
  {
    if ( !v9[0] )
      goto LABEL_4;
    if ( v9[0] == 1 )
      goto LABEL_7;
    return 3221227787LL;
  }
}
