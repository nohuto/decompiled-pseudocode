/*
 * XREFs of DwmAsyncMagnSetWindowFilterList @ 0x1C026FA1C
 * Callers:
 *     MagpComposeDesktop @ 0x1C007EC4C (MagpComposeDesktop.c)
 *     MagSetLensContextInformation @ 0x1C01A4A80 (MagSetLensContextInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall DwmAsyncMagnSetWindowFilterList(PVOID Object, __int64 a2, __int64 a3, int *a4)
{
  unsigned int v8; // ebx
  int v9; // ecx
  unsigned int v10; // eax
  __int64 v11; // r9
  __int64 v12; // r10
  _QWORD *v13; // r8
  int v15; // [rsp+20h] [rbp-E0h] BYREF
  __int16 v16; // [rsp+24h] [rbp-DCh]
  int v17; // [rsp+48h] [rbp-B8h]
  __int64 v18; // [rsp+50h] [rbp-B0h]
  int v19; // [rsp+58h] [rbp-A8h]
  int v20; // [rsp+5Ch] [rbp-A4h]
  _BYTE v21[200]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+128h] [rbp+28h]

  v8 = -1073741823;
  if ( Object )
  {
    memset_0(&v15, 0, 0x110uLL);
    v9 = *a4;
    v16 = 0x8000;
    v20 = a4[1];
    v15 = 17826024;
    v17 = 1073741926;
    v18 = a2;
    v10 = 25;
    v22 = a3;
    v19 = v9;
    if ( (unsigned int)(v20 + v9) >= 0x19 || (v10 = v20 + v9) != 0 )
    {
      v11 = *((_QWORD *)a4 + 1) - (_QWORD)v21;
      v12 = v10;
      v13 = v21;
      do
      {
        *v13 = *(_QWORD *)((char *)v13 + v11);
        ++v13;
        --v12;
      }
      while ( v12 );
    }
    EtwUpdateEvent(0LL, 1073741926LL);
    v8 = LpcRequestPort(Object, &v15);
    ObfDereferenceObject(Object);
  }
  return v8;
}
