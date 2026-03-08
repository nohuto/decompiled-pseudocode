/*
 * XREFs of HsaEnumerateIvmdDevices @ 0x14052D390
 * Callers:
 *     <none>
 * Callees:
 *     HalpHsaCreateReservedDevice @ 0x14052BD7C (HalpHsaCreateReservedDevice.c)
 */

__int64 __fastcall HsaEnumerateIvmdDevices(__int64 a1, _DWORD *a2, __int64 a3)
{
  _DWORD *v3; // r14
  __int64 result; // rax
  __int64 v8; // rdi
  _QWORD **v9; // r14
  _QWORD *v10; // rbx
  _QWORD *ReservedDevice; // rax

  v3 = *(_DWORD **)(a1 + 208);
  if ( *a2 >= *v3 )
  {
    v8 = 0LL;
    v9 = (_QWORD **)(v3 + 2);
    v10 = *v9;
    while ( 1 )
    {
      if ( v10 == v9 || (unsigned int)v8 >= **(_DWORD **)(a1 + 208) )
      {
        result = 0LL;
        *a2 = **(_DWORD **)(a1 + 208);
        return result;
      }
      ReservedDevice = HalpHsaCreateReservedDevice(*(unsigned __int16 *)(a1 + 160), (__int64)v10);
      *(_QWORD *)(a3 + 8 * v8) = ReservedDevice;
      if ( !ReservedDevice )
        break;
      v10 = (_QWORD *)*v10;
      v8 = (unsigned int)(v8 + 1);
    }
    return 3221225626LL;
  }
  else
  {
    *a2 = *v3;
    return 3221225507LL;
  }
}
