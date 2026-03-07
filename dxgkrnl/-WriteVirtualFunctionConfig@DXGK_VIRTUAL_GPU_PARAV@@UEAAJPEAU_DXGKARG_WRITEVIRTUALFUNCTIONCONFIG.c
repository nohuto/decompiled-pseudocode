__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::WriteVirtualFunctionConfig(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct _DXGKARG_WRITEVIRTUALFUNCTIONCONFIG *a2)
{
  __int64 Offset; // r9
  size_t Length; // r8
  ULONG v5; // ecx

  Offset = a2->Offset;
  if ( (unsigned int)Offset >= 0xD0 )
  {
    Length = a2->Length;
    if ( (unsigned int)(Length + Offset) <= 0xD4 )
      goto LABEL_6;
  }
  if ( (unsigned int)Offset >= 0xD4 )
  {
    v5 = a2->Length;
    if ( v5 + (unsigned int)Offset <= 0xD8 )
    {
      Length = v5;
LABEL_6:
      memmove((void *)(Offset + 184 + *((_QWORD *)this + 13)), a2->Data, Length);
    }
  }
  return 0LL;
}
