/*
 * XREFs of ?BuildDeviceHeader@@YAHPEAEKPEAKGG@Z @ 0x1C01C5B10
 * Callers:
 *     ?BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z @ 0x1C01C5EBC (-BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BuildDeviceHeader(
        unsigned __int8 *a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int16 a4,
        char a5)
{
  __int64 v5; // r10
  unsigned int v6; // r11d
  __int64 v7; // r10
  __int64 v8; // r10
  __int64 v9; // r10

  v5 = *a3;
  v6 = 0;
  if ( (int)v5 + 4 < a2 )
  {
    v6 = 1;
    a1[v5] = (a4 > 0xFFu) + 5;
    v7 = (unsigned int)(v5 + 1);
    a1[v7] = a4;
    v8 = (unsigned int)(v7 + 1);
    if ( a4 > 0xFFu )
    {
      a1[v8] = HIBYTE(a4);
      v8 = (unsigned int)(v8 + 1);
    }
    a1[v8] = 9;
    v9 = (unsigned int)(v8 + 1);
    a1[v9] = a5;
    *a3 = v9 + 1;
  }
  return v6;
}
