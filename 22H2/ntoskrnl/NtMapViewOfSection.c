/*
 * XREFs of NtMapViewOfSection @ 0x140638420
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     memset @ 0x140413800 (memset.c)
 *     MiMapViewOfSectionCommon @ 0x140638690 (MiMapViewOfSectionCommon.c)
 *     MiValidateZeroBits @ 0x1406388BC (MiValidateZeroBits.c)
 *     MiMapViewOfSection @ 0x140639150 (MiMapViewOfSection.c)
 *     MiMapParametersInitialize @ 0x1406396D0 (MiMapParametersInitialize.c)
 *     EtwTiLogMapExecView @ 0x1406A0AF4 (EtwTiLogMapExecView.c)
 *     DbgkMapViewOfSection @ 0x1406FCFD4 (DbgkMapViewOfSection.c)
 */

__int64 NtMapViewOfSection(__int64 a1, __int64 a2, _QWORD *a3, ...)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 result; // rax
  __int64 v9; // rbx
  int v10; // r13d
  _QWORD *v11; // rdi
  _QWORD *v12; // r14
  char v13; // r15
  int v14; // ebx
  bool v15; // zf
  unsigned __int8 v16; // [rsp+50h] [rbp-E8h]
  __int64 v17[2]; // [rsp+58h] [rbp-E0h] BYREF
  __int128 v18; // [rsp+68h] [rbp-D0h] BYREF
  PADAPTER_OBJECT DmaAdapter[2]; // [rsp+78h] [rbp-C0h]
  int v20; // [rsp+88h] [rbp-B0h]
  _QWORD v21[16]; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+158h] [rbp+20h] BYREF
  va_list va; // [rsp+158h] [rbp+20h]
  __int64 v24; // [rsp+160h] [rbp+28h]
  _QWORD *v25; // [rsp+168h] [rbp+30h]
  _QWORD *v26; // [rsp+170h] [rbp+38h]
  __int64 v27; // [rsp+178h] [rbp+40h]
  __int64 v28; // [rsp+180h] [rbp+48h]
  __int64 v29; // [rsp+188h] [rbp+50h]
  va_list va1; // [rsp+190h] [rbp+58h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v22 = va_arg(va1, _QWORD);
  v24 = va_arg(va1, _QWORD);
  v25 = va_arg(va1, _QWORD *);
  v26 = va_arg(va1, _QWORD *);
  v27 = va_arg(va1, _QWORD);
  v28 = va_arg(va1, _QWORD);
  v29 = va_arg(va1, _QWORD);
  memset(v21, 0, sizeof(v21));
  *(_OWORD *)v17 = 0LL;
  v18 = 0LL;
  *(_OWORD *)DmaAdapter = 0LL;
  result = MiValidateZeroBits((__int64 *)va, v6, v7);
  if ( (int)result >= 0 )
  {
    v16 = KeGetCurrentThread()->$6BEBF485330D18E60173AA6D991B35AC::gap0[10];
    v9 = v22;
    v10 = v29;
    v11 = v25;
    v12 = v26;
    result = MiMapViewOfSectionCommon(a2, a1, 0LL, a3, v26, v25, v29, v22, v16, v17);
    if ( (int)result < 0 )
    {
      ++dword_140C4E7E0;
      return result;
    }
    v13 = v28;
    v14 = MiMapParametersInitialize(v21, v17[1], v28, v10, v9);
    if ( v14 < 0 )
    {
      v15 = v17[0] == 0;
    }
    else
    {
      v14 = MiMapViewOfSection(DmaAdapter[0], (unsigned int)v21, (unsigned int)v17, v24, (__int64)&v18, v27, 0);
      v20 = v14;
      if ( v14 >= 0 )
      {
        if ( (v21[9] & 4) != 0 )
          DbgkMapViewOfSection((ULONG_PTR)DmaAdapter[1]);
        if ( ((__int64)DmaAdapter[0][3].DmaOperations & 0x20) == 0 && (BYTE8(v18) & 2) != 0 )
          EtwTiLogMapExecView(DmaAdapter[1], v16, v17[0], v17[1], v13, v10);
        *v12 = v21[3];
        *a3 = v17[0];
        if ( v11 )
          *v11 = v18;
        goto LABEL_12;
      }
      v15 = v17[0] == 0;
    }
    if ( v15 )
      ++dword_140C4E7E0;
    else
      ++dword_140C4E7E4;
LABEL_12:
    HalPutDmaAdapter(DmaAdapter[0]);
    ObfDereferenceObjectWithTag(DmaAdapter[1], 0x77566D4Du);
    return (unsigned int)v14;
  }
  return result;
}
