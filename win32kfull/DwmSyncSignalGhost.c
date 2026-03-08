/*
 * XREFs of DwmSyncSignalGhost @ 0x1C0270E20
 * Callers:
 *     ?xxxSendSyncGHOSTINFO@@YAHPEAU_GHOSTINFO@@@Z @ 0x1C01F681C (-xxxSendSyncGHOSTINFO@@YAHPEAU_GHOSTINFO@@@Z.c)
 * Callees:
 *     ?DwmSyncLPCAllowed@@YAJXZ @ 0x1C001D800 (-DwmSyncLPCAllowed@@YAJXZ.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall DwmSyncSignalGhost(PVOID Object, __int128 *a2)
{
  int v4; // ebx
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  int v7; // eax
  __int128 v8; // xmm1
  int v10; // [rsp+30h] [rbp-50h] BYREF
  __int16 v11; // [rsp+34h] [rbp-4Ch]
  int v12; // [rsp+58h] [rbp-28h]
  __int128 v13; // [rsp+5Ch] [rbp-24h]
  __int128 v14; // [rsp+6Ch] [rbp-14h]
  int v15; // [rsp+7Ch] [rbp-4h]
  __int64 v16; // [rsp+90h] [rbp+10h] BYREF

  v4 = -1073741823;
  if ( Object )
  {
    v4 = DwmSyncLPCAllowed();
    if ( v4 >= 0 )
    {
      memset_0(&v10, 0, 0x50uLL);
      v5 = *a2;
      v6 = a2[1];
      v11 = 0x8000;
      v15 = *((_DWORD *)a2 + 8);
      v10 = 5242920;
      v12 = 1073741877;
      v13 = v5;
      v16 = 80LL;
      v14 = v6;
      v4 = LpcSendWaitReceivePort(Object, 0x20000LL, &v10, &v10, &v16, 0LL);
      if ( v4 >= 0 )
      {
        v7 = v15;
        v8 = v14;
        *a2 = v13;
        a2[1] = v8;
        *((_DWORD *)a2 + 8) = v7;
      }
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v4;
}
