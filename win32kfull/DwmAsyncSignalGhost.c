/*
 * XREFs of DwmAsyncSignalGhost @ 0x1C0270588
 * Callers:
 *     ?SendAsyncSGHOSTINFO@@YAHQEAU_GHOSTINFO@@@Z @ 0x1C01F4ECC (-SendAsyncSGHOSTINFO@@YAHQEAU_GHOSTINFO@@@Z.c)
 * Callees:
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall DwmAsyncSignalGhost(PVOID Object, __int128 *a2)
{
  unsigned int v4; // edi
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  int v7; // eax
  int v9; // [rsp+20h] [rbp-58h] BYREF
  __int16 v10; // [rsp+24h] [rbp-54h]
  int v11; // [rsp+48h] [rbp-30h]
  __int128 v12; // [rsp+4Ch] [rbp-2Ch]
  __int128 v13; // [rsp+5Ch] [rbp-1Ch]
  int v14; // [rsp+6Ch] [rbp-Ch]

  v4 = -1073741823;
  if ( Object )
  {
    memset_0(&v9, 0, 0x50uLL);
    v5 = *a2;
    v6 = a2[1];
    v10 = 0x8000;
    v7 = *((_DWORD *)a2 + 8);
    v12 = v5;
    v14 = v7;
    v13 = v6;
    v9 = 5242920;
    v11 = 1073741877;
    v4 = LpcRequestPort(Object, &v9);
    ObfDereferenceObject(Object);
  }
  return v4;
}
