/*
 * XREFs of UsbhValidateSerialNumberString @ 0x1C0052FB8
 * Callers:
 *     UsbhGetSerialNumber @ 0x1C00509A4 (UsbhGetSerialNumber.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     UsbhException @ 0x1C004A988 (UsbhException.c)
 */

char __fastcall UsbhValidateSerialNumberString(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, _BYTE *a5)
{
  _DWORD *v9; // rax
  __int16 *v10; // r9
  __int16 v11; // dx
  _WORD *v12; // rcx

  FdoExt(a1);
  v9 = PdoExt(a2);
  v10 = *(__int16 **)(a3 + 8);
  v11 = *v10;
  if ( *v10 )
  {
    v12 = *(_WORD **)(a3 + 8);
    do
    {
      if ( (unsigned __int16)(v11 - 32) > 0x5Fu || v11 == 44 )
      {
        UsbhException(
          a1,
          *((_WORD *)v9 + 714),
          0x27u,
          v10,
          *(_DWORD *)(a3 + 4),
          -1073741811,
          -1072693248,
          usbfile_dq_c,
          283,
          0);
        goto LABEL_11;
      }
      v11 = *++v12;
    }
    while ( *v12 );
    if ( a4 )
      *a4 = 0;
    return 1;
  }
  else
  {
    *a5 = 1;
    UsbhException(
      a1,
      *((_WORD *)v9 + 714),
      0x27u,
      v10,
      *(_DWORD *)(a3 + 4),
      -1073741811,
      -1072693248,
      usbfile_dq_c,
      270,
      0);
LABEL_11:
    if ( a4 )
      *a4 = -1072693248;
    return 0;
  }
}
