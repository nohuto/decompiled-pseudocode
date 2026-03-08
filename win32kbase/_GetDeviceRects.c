/*
 * XREFs of _GetDeviceRects @ 0x1C0218E90
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C007A1CC (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall GetDeviceRects(__int64 a1, _OWORD *a2, _OWORD *a3)
{
  __int64 v3; // rcx
  unsigned int v4; // ebx
  __int64 v7; // rax

  v3 = *(_QWORD *)(a1 + 16);
  v4 = 0;
  if ( v3 )
  {
    v7 = HMValidateHandleNoSecure(v3, 19);
    if ( v7 )
    {
      v4 = 1;
      *a2 = *(_OWORD *)(*(_QWORD *)(v7 + 472) + 160LL);
      *a3 = *(_OWORD *)(*(_QWORD *)(v7 + 472) + 176LL);
    }
  }
  return v4;
}
