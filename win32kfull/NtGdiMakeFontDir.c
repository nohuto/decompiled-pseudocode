/*
 * XREFs of NtGdiMakeFontDir @ 0x1C02C64D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C012BEC0 (__report_rangecheckfailure.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     GreMakeFontDir @ 0x1C02D77CC (GreMakeFontDir.c)
 */

__int64 __fastcall NtGdiMakeFontDir(unsigned int a1, _OWORD *a2, unsigned int a3, char *a4, unsigned int Size)
{
  unsigned int FontDir; // ebx
  unsigned int v10; // eax
  unsigned __int64 v11; // rax
  _OWORD *v12; // rsi
  _OWORD v15[15]; // [rsp+40h] [rbp-358h] BYREF
  __int64 v16; // [rsp+130h] [rbp-268h]
  __int16 v17; // [rsp+138h] [rbp-260h]
  char v18; // [rsp+13Ah] [rbp-25Eh]
  _WORD v19[264]; // [rsp+140h] [rbp-258h] BYREF

  memset_0(v15, 0, 0xFBuLL);
  FontDir = 0;
  if ( Size <= 0x20A && a3 >= 0xFB )
  {
    if ( &a4[Size] < a4 || (unsigned __int64)&a4[Size] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v19, a4, Size);
    v10 = 2;
    if ( Size >= 2 )
      v10 = Size;
    v11 = (v10 >> 1) - 1;
    if ( v11 >= 261 )
      _report_rangecheckfailure();
    v19[v11] = 0;
    FontDir = GreMakeFontDir(a1, v15, v19);
    if ( FontDir )
    {
      if ( (unsigned __int64)a2 + 251 > MmUserProbeAddress || (_OWORD *)((char *)a2 + 251) <= a2 )
        *(_BYTE *)MmUserProbeAddress = 0;
      *a2 = v15[0];
      a2[1] = v15[1];
      a2[2] = v15[2];
      a2[3] = v15[3];
      a2[4] = v15[4];
      a2[5] = v15[5];
      a2[6] = v15[6];
      v12 = a2 + 8;
      *(v12 - 1) = v15[7];
      *v12 = v15[8];
      v12[1] = v15[9];
      v12[2] = v15[10];
      v12[3] = v15[11];
      v12[4] = v15[12];
      v12[5] = v15[13];
      v12[6] = v15[14];
      *((_QWORD *)v12 + 14) = v16;
      *((_WORD *)v12 + 60) = v17;
      *((_BYTE *)v12 + 122) = v18;
    }
  }
  return FontDir;
}
