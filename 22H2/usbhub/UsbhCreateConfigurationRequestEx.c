/*
 * XREFs of UsbhCreateConfigurationRequestEx @ 0x1C00326E8
 * Callers:
 *     UsbhConfigureUsbHub @ 0x1C002A738 (UsbhConfigureUsbHub.c)
 * Callees:
 *     memset @ 0x1C001E180 (memset.c)
 */

unsigned __int16 *__fastcall UsbhCreateConfigurationRequestEx(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int16 v4; // ax
  unsigned __int16 v5; // si
  unsigned __int16 *PoolWithTag; // rax
  unsigned __int16 *v9; // rbx
  int v10; // edx
  int v11; // ecx
  _DWORD *v12; // rax

  v4 = (unsigned __int8)a4[4];
  v5 = 88;
  if ( (unsigned __int8)v4 > 1u )
    v5 = 24 * v4 + 64;
  PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(SHIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory), v5, 0x42554855u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v5);
    memset(v9, 0, v5);
    v10 = 0;
    *((_BYTE *)v9 + 42) = a4[2];
    *((_BYTE *)v9 + 43) = a4[3];
    *((_DWORD *)v9 + 14) = (unsigned __int8)a4[4];
    LOBYTE(v11) = a4[4];
    if ( (_BYTE)v11 )
    {
      v12 = v9 + 42;
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
    v9[20] = 24 * ((unsigned __int8)v11 + 1);
    *v9 = v5;
    v9[1] = 0;
    *((_QWORD *)v9 + 3) = a2;
  }
  return v9;
}
