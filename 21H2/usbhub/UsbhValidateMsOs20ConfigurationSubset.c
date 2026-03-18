/*
 * XREFs of UsbhValidateMsOs20ConfigurationSubset @ 0x1C0052000
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0009F20 (Log.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F4F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001F800 (memset.c)
 *     UsbhGetNextMsOs20Descriptor @ 0x1C0032D1C (UsbhGetNextMsOs20Descriptor.c)
 */

char __fastcall UsbhValidateMsOs20ConfigurationSubset(
        __int64 a1,
        _DWORD *a2,
        unsigned __int16 *a3,
        unsigned __int64 a4)
{
  __int64 v8; // r9
  int v9; // r8d
  unsigned __int64 v10; // rbp
  unsigned __int16 *v11; // rdi
  char v12; // si
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int8 (__fastcall *v15)(__int64, _BYTE *, unsigned __int16 *, unsigned __int64); // r10
  _BYTE v17[64]; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int16 *v18; // [rsp+B0h] [rbp+18h] BYREF

  memset(v17, 0, sizeof(v17));
  if ( *a3 != 8 )
  {
    v8 = *a3;
    v9 = 1447252784;
LABEL_18:
    Log(a1, 256, v9, v8, 0LL);
    return 0;
  }
  v8 = a3[3];
  if ( (unsigned int)v8 < 0xC )
  {
    v9 = 1447252785;
    goto LABEL_18;
  }
  v10 = (unsigned __int64)a3 + v8;
  if ( (unsigned __int64)a3 + v8 > a4 )
  {
    v9 = 1447252786;
    goto LABEL_18;
  }
  v11 = a3 + 4;
  v18 = v11;
  v12 = 1;
  do
  {
    v13 = v11[1];
    if ( (unsigned int)v13 < 9 )
    {
      v14 = 2 * v13;
      v15 = (unsigned __int8 (__fastcall *)(__int64, _BYTE *, unsigned __int16 *, unsigned __int64))*(&MsOs20DispatchTable + v14);
      if ( !*((_BYTE *)&MsOs20DispatchTable + 8 * v14 + 8) )
      {
        Log(a1, 256, 1447252787, v11[1], 0LL);
        v12 = 0;
      }
      v12 = v15(a1, v17, v11, v10) != 0 ? v12 : 0;
    }
    if ( !UsbhGetNextMsOs20Descriptor(v10, &v18) )
    {
      v8 = 0LL;
      v9 = 1447252788;
      goto LABEL_18;
    }
    v11 = v18;
  }
  while ( v18 );
  if ( v12 == 1 )
    *a2 |= 8u;
  return v12;
}
