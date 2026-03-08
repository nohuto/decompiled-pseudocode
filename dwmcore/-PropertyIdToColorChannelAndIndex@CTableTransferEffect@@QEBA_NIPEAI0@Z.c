/*
 * XREFs of ?PropertyIdToColorChannelAndIndex@CTableTransferEffect@@QEBA_NIPEAI0@Z @ 0x18025129C
 * Callers:
 *     ?SetProperty@CTableTransferEffect@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180251600 (-SetProperty@CTableTransferEffect@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTableTransferEffect::PropertyIdToColorChannelAndIndex(
        CTableTransferEffect *this,
        unsigned int a2,
        unsigned int *a3,
        unsigned int *a4)
{
  bool result; // al

  if ( (a2 & 0xF) != 0xF || a2 >> 6 >= *((_DWORD *)this + 10 * ((a2 >> 4) & 3) + 52) )
    return 0;
  result = 1;
  *a4 = a2 >> 6;
  *a3 = (a2 >> 4) & 3;
  return result;
}
