NTSTATUS __fastcall PnpiBiosAddressHandleGlobalFlags(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        struct _IO_RESOURCE_DESCRIPTOR *a4)
{
  __int64 v6; // r14
  ULONGLONG v7; // r9
  ULONGLONG v8; // r10
  ULONGLONG v9; // rsi
  char v10; // al
  ULONGLONG v11; // r11
  ULONGLONG v13; // rax
  char v14; // dl
  UCHAR Type; // dl
  NTSTATUS result; // eax
  __int64 v17; // rax
  unsigned __int64 Alignment; // [rsp+30h] [rbp-10h] BYREF
  __int64 v19; // [rsp+38h] [rbp-8h] BYREF
  unsigned __int64 MaximumAddress; // [rsp+70h] [rbp+30h] BYREF
  unsigned __int64 MinimumAddress; // [rsp+88h] [rbp+48h] BYREF

  v19 = 0LL;
  v6 = a3;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  MaximumAddress = 0LL;
  v10 = *(_BYTE *)(a1 + 4);
  v11 = 0LL;
  MinimumAddress = 0LL;
  Alignment = 0LL;
  a4->ShareDisposition = 2 * (~v10 & !_bittest(&AcpiOverrideAttributes, 0xBu)) + 1;
  if ( ((a4->Type - 1) & 0xF9) == 0 && a4->Type != 5 )
  {
    v13 = RtlIoDecodeMemIoResource(a4, &Alignment, &MinimumAddress, &MaximumAddress);
    v7 = MaximumAddress;
    v11 = v13;
    v8 = MinimumAddress;
    v9 = Alignment;
  }
  v14 = *(_BYTE *)(a1 + 4);
  if ( (v14 & 0xC) == 0xC )
  {
    Type = a4->Type;
    if ( Type == 6 )
    {
      a4->u.Port.Length = a4->u.Port.MinimumAddress.LowPart - a4->u.Port.Alignment + 1;
    }
    else
    {
      result = RtlIoEncodeMemIoResource(a4, Type, v7 - v8 + 1, v9, v8, v7);
      if ( result < 0 )
        return result;
    }
  }
  else if ( (v14 & 8) != 0 )
  {
    if ( a4->Type == 6 )
      a4->u.Port.Alignment = a4->u.Port.MinimumAddress.LowPart - a4->u.Port.Length + 1;
    else
      a4->u.Port.MinimumAddress.QuadPart = v7 - v11 + 1;
  }
  else if ( (v14 & 4) != 0 )
  {
    if ( a4->Type == 6 )
      a4->u.Port.MinimumAddress.LowPart = a4->u.Port.Length + a4->u.Port.Alignment - 1;
    else
      a4->u.Port.MaximumAddress.QuadPart = v11 + v8 - 1;
  }
  if ( (*(_BYTE *)(a1 + 4) & 1) == 0 )
  {
    result = PnpiUpdateResourceList(a2 + 8 * v6, &v19);
    if ( result < 0 )
      return result;
    v17 = v19;
    *(_BYTE *)(v19 + 1) = -127;
    *(_WORD *)(v17 + 4) = 1;
  }
  return 0;
}
