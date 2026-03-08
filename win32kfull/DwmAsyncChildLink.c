/*
 * XREFs of DwmAsyncChildLink @ 0x1C007E580
 * Callers:
 *     LinkWindow @ 0x1C00639C0 (LinkWindow.c)
 *     ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1C007E294 (-DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z.c)
 * Callees:
 *     ?IncrementDWMWindowUniqueness@@YA_JXZ @ 0x1C0028164 (-IncrementDWMWindowUniqueness@@YA_JXZ.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall DwmAsyncChildLink(PVOID Object, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v9; // ebx
  int v11; // [rsp+20h] [rbp-58h] BYREF
  __int16 v12; // [rsp+24h] [rbp-54h]
  int v13; // [rsp+48h] [rbp-30h]
  __int64 v14; // [rsp+4Ch] [rbp-2Ch]
  __int64 v15; // [rsp+54h] [rbp-24h]
  __int64 v16; // [rsp+5Ch] [rbp-1Ch]
  int v17; // [rsp+64h] [rbp-14h]

  v9 = -1073741823;
  IncrementDWMWindowUniqueness((__int64)Object);
  if ( Object )
  {
    memset_0(&v11, 0, 0x48uLL);
    v11 = 4718624;
    v12 = 0x8000;
    v17 = a5;
    v13 = 1073741842;
    v14 = a2;
    v15 = a3;
    v16 = a4;
    v9 = LpcRequestPort(Object, &v11);
    ObfDereferenceObject(Object);
  }
  return v9;
}
