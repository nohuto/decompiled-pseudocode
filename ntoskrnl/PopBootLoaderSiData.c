/*
 * XREFs of PopBootLoaderSiData @ 0x140A9E9C8
 * Callers:
 *     PoBroadcastSystemState @ 0x140AA38F8 (PoBroadcastSystemState.c)
 * Callees:
 *     BapdRegisterSiData @ 0x140A8E4CC (BapdRegisterSiData.c)
 *     BapdRemoveWbclData @ 0x140AA7954 (BapdRemoveWbclData.c)
 */

void __fastcall PopBootLoaderSiData(__int64 a1)
{
  _DWORD *v1; // rsi
  unsigned int v2; // ebx
  unsigned int *v3; // rdi
  unsigned int v4; // edx

  v1 = *(_DWORD **)(a1 + 32);
  BapdRemoveWbclData();
  if ( *v1 == 1281517896 )
  {
    v2 = 1;
    v3 = v1 + 4;
    do
    {
      v4 = v3[1];
      if ( v4 )
        BapdRegisterSiData((_DWORD *)((char *)v1 + *v3), v4, v2);
      ++v2;
      v3 += 2;
    }
    while ( v2 <= 2 );
  }
}
