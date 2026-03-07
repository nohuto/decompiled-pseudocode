__int64 __fastcall GetDeviceId(struct _UNICODE_STRING *a1, unsigned __int16 **a2, unsigned __int16 **a3)
{
  const wchar_t *Buffer; // rcx
  unsigned int v6; // ebx
  wchar_t *v7; // rax
  unsigned __int16 *v8; // rax

  Buffer = a1->Buffer;
  v6 = -1073741668;
  if ( Buffer )
  {
    if ( a2 )
    {
      if ( a3 )
      {
        v7 = wcschr(Buffer, 0x23u);
        *a2 = v7;
        if ( v7 )
        {
          *a2 = v7 + 1;
          v8 = wcschr(v7 + 1, 0x23u);
          *a3 = v8;
          if ( v8 )
            return 0;
        }
      }
    }
  }
  return v6;
}
