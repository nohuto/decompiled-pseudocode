__int64 NtMapViewOfSection(__int64 a1, __int64 a2, _QWORD *a3, ...)
{
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // rbx
  int v9; // esi
  _QWORD *v10; // rdi
  _QWORD *v11; // r12
  int v12; // r14d
  int v13; // ebx
  __int64 v14; // r9
  __int64 v15; // [rsp+20h] [rbp-118h]
  int v16[2]; // [rsp+28h] [rbp-110h]
  char PreviousMode; // [rsp+50h] [rbp-E8h]
  __int64 v18[2]; // [rsp+58h] [rbp-E0h] BYREF
  __int128 v19; // [rsp+68h] [rbp-D0h] BYREF
  PVOID Object[2]; // [rsp+78h] [rbp-C0h]
  int v21; // [rsp+88h] [rbp-B0h]
  _QWORD v22[16]; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+158h] [rbp+20h] BYREF
  va_list va; // [rsp+158h] [rbp+20h]
  __int64 v25; // [rsp+160h] [rbp+28h]
  _QWORD *v26; // [rsp+168h] [rbp+30h]
  _QWORD *v27; // [rsp+170h] [rbp+38h]
  __int64 v28; // [rsp+178h] [rbp+40h]
  __int64 v29; // [rsp+180h] [rbp+48h]
  __int64 v30; // [rsp+188h] [rbp+50h]
  va_list va1; // [rsp+190h] [rbp+58h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v23 = va_arg(va1, _QWORD);
  v25 = va_arg(va1, _QWORD);
  v26 = va_arg(va1, _QWORD *);
  v27 = va_arg(va1, _QWORD *);
  v28 = va_arg(va1, _QWORD);
  v29 = va_arg(va1, _QWORD);
  v30 = va_arg(va1, _QWORD);
  memset(v22, 0, sizeof(v22));
  *(_OWORD *)v18 = 0LL;
  v19 = 0LL;
  *(_OWORD *)Object = 0LL;
  result = MiValidateZeroBits((__int64 *)va, v6);
  if ( (int)result >= 0 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    v8 = v23;
    v9 = v30;
    v10 = v26;
    v11 = v27;
    result = MiMapViewOfSectionCommon(a2, a1, 0LL, a3, v27, v26, v30, v23, PreviousMode, v18);
    if ( (int)result < 0 )
    {
      ++dword_140C67C18;
    }
    else
    {
      v12 = v29;
      v13 = MiMapParametersInitialize(v22, v18[1], v29, v9, v8);
      if ( v13 < 0
        || (v13 = MiMapViewOfSection(Object[0], (unsigned int)v22, (unsigned int)v18, v25, (__int64)&v19, v28, 0),
            v21 = v13,
            v13 < 0) )
      {
        if ( v18[0] )
          ++dword_140C67C1C;
        else
          ++dword_140C67C18;
      }
      else
      {
        if ( (v22[7] & 0x400000000LL) != 0 )
          DbgkMapViewOfSection((_KPROCESS *)Object[1], (__int64)Object[0], v18[0], v14, v15, 0, 0);
        if ( (*((_DWORD *)Object[0] + 14) & 0x20) == 0 && (BYTE8(v19) & 2) != 0 )
        {
          v16[0] = v9;
          LODWORD(v15) = v12;
          EtwTiLogMapExecView((__int64)Object[1], PreviousMode, v18[0], v18[1], v15, *(_QWORD *)v16);
        }
        *v11 = v22[3];
        *a3 = v18[0];
        if ( v10 )
          *v10 = v19;
      }
      ObfDereferenceObject(Object[0]);
      ObfDereferenceObjectWithTag(Object[1], 0x77566D4Du);
      return (unsigned int)v13;
    }
  }
  return result;
}
