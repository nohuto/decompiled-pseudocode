/*
 * XREFs of ?GetInstanceId@@YAJU_UNICODE_STRING@@PEAPEAG1@Z @ 0x1C01A5864
 * Callers:
 *     ?GetTiltKeyName@@YAJU_UNICODE_STRING@@PEAPEAGH@Z @ 0x1C01A590C (-GetTiltKeyName@@YAJU_UNICODE_STRING@@PEAPEAGH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetInstanceId(struct _UNICODE_STRING *a1, unsigned __int16 **a2, unsigned __int16 **a3)
{
  const wchar_t *Buffer; // rcx
  unsigned int v6; // edi
  wchar_t *v7; // rax
  wchar_t *v8; // rax
  unsigned __int16 *v9; // rax

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
          *a2 = v8;
          if ( v8 )
          {
            *a2 = v8 + 1;
            v9 = wcschr(v8 + 1, 0x23u);
            *a3 = v9;
            if ( v9 )
              return 0;
          }
        }
      }
    }
  }
  return v6;
}
