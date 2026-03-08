/*
 * XREFs of UsbhCreateConfigurationRequestEx @ 0x1C0031E3C
 * Callers:
 *     UsbhConfigureUsbHub @ 0x1C0029DB0 (UsbhConfigureUsbHub.c)
 * Callees:
 *     memset @ 0x1C0023880 (memset.c)
 */

char *__fastcall UsbhCreateConfigurationRequestEx(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int16 v4; // ax
  unsigned __int16 v5; // si
  char *Pool2; // rax
  char *v9; // rbx
  int v10; // edx
  int v11; // ecx
  _DWORD *v12; // rax

  v4 = (unsigned __int8)a4[4];
  v5 = 88;
  if ( (unsigned __int8)v4 > 1u )
    v5 = 24 * v4 + 64;
  Pool2 = (char *)ExAllocatePool2(64LL, v5, 1112885333LL);
  v9 = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, v5);
    v10 = 0;
    v9[42] = a4[2];
    v9[43] = a4[3];
    *((_DWORD *)v9 + 14) = (unsigned __int8)a4[4];
    LOBYTE(v11) = a4[4];
    if ( (_BYTE)v11 )
    {
      v12 = v9 + 84;
      do
      {
        *(v12 - 1) = -1;
        ++v10;
        *v12 = 0;
        v12 += 6;
        v11 = (unsigned __int8)a4[4];
      }
      while ( v10 < v11 );
    }
    *((_WORD *)v9 + 20) = 24 * ((unsigned __int8)v11 + 1);
    *(_WORD *)v9 = v5;
    *((_WORD *)v9 + 1) = 0;
    *((_QWORD *)v9 + 3) = a2;
  }
  return v9;
}
