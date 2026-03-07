__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::ReadVirtualFunctionConfig(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct _DXGKARG_READVIRTUALFUNCTIONCONFIG *a2)
{
  unsigned int v4; // r14d
  __int64 v5; // r15
  __int64 Offset; // rcx
  ULONG Length; // edx
  size_t v8; // r8
  char *v9; // rdx
  ULONG v10; // edx
  ULONG v11; // edx
  __int64 v12; // rdx
  ULONG v13; // edx
  unsigned int v14; // edi
  _BYTE *i; // rbp
  ULONG v16; // edx
  _BYTE v18[160]; // [rsp+0h] [rbp-118h] BYREF
  ULONG v19; // [rsp+D0h] [rbp-48h] BYREF
  __int64 v20; // [rsp+D8h] [rbp-40h]
  __int64 v21; // [rsp+E0h] [rbp-38h]

  v4 = 0;
  if ( !g_PciConfig.VendorID )
  {
    dword_1C013D262 = 458894;
    g_PciConfig.VendorID = 5140;
    dword_1C013D266 = 16;
    dword_1C013D26A = 770;
    word_1C013D26E = 0;
    qword_1C013D270 = 0LL;
    qword_1C013D278 = 0LL;
    qword_1C013D280 = 0LL;
    dword_1C013D288 = 0;
    qword_1C013D28C = 0LL;
    qword_1C013D294 = 64LL;
    dword_1C013D29C = 0;
  }
  v5 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 216LL);
  Offset = a2->Offset;
  if ( (unsigned int)Offset >= 0xC0 )
  {
    Length = a2->Length;
    if ( Length + (unsigned int)Offset <= 0xD0 )
    {
      v8 = Length;
      v20 = *(_QWORD *)((char *)this + 28);
      v9 = &v18[Offset + 24];
      v21 = 0LL;
LABEL_16:
      memmove(a2->Data, v9, v8);
      return v4;
    }
  }
  if ( (unsigned int)Offset >= 0xD0 )
  {
    v10 = a2->Length;
    if ( v10 + (unsigned int)Offset <= 0xD4 )
    {
      v8 = v10;
      v19 = 42;
      v9 = &v18[Offset];
      goto LABEL_16;
    }
  }
  if ( (unsigned int)Offset >= 0xD4 )
  {
    v11 = a2->Length;
    if ( v11 + (unsigned int)Offset <= 0xDC )
    {
      v8 = v11;
      v12 = Offset - 184;
LABEL_15:
      v9 = (char *)this + v12;
      goto LABEL_16;
    }
  }
  if ( (unsigned int)Offset >= 0xDC )
  {
    v13 = a2->Length;
    if ( v13 + (unsigned int)Offset <= 0xE0 )
    {
      v8 = v13;
      v12 = Offset + 164;
      goto LABEL_15;
    }
  }
  v14 = 0;
  for ( i = a2->Data; v14 < a2->Length; ++v14 )
  {
    v16 = v14 + a2->Offset;
    if ( v16 < 0x100 )
    {
      if ( v16 >= 4 || (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 436LL) & 4) != 0 )
      {
        i[v14] = *((_BYTE *)&g_PciConfig.VendorID + v16);
      }
      else
      {
        v19 = 0;
        v4 = DpReadDeviceSpace(v5, 0LL, &i[v14], v16, 1u, &v19);
        if ( (v4 & 0x80000000) != 0 || v19 != 1 )
        {
          WdLogSingleEntry1(2LL, a2->VirtualFunctionIndex);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to read PCI config space: %I64n",
            a2->VirtualFunctionIndex,
            0LL,
            0LL,
            0LL,
            0LL);
          return v4;
        }
      }
    }
    else
    {
      i[v14] = 0;
    }
  }
  return v4;
}
