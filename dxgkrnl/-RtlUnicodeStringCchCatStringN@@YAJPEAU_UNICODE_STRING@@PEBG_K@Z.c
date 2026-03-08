/*
 * XREFs of ?RtlUnicodeStringCchCatStringN@@YAJPEAU_UNICODE_STRING@@PEBG_K@Z @ 0x1C005B5E0
 * Callers:
 *     ?VmBusSendGetRegistryKeys@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAG@Z @ 0x1C03856B8 (-VmBusSendGetRegistryKeys@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUnicodeStringCchCatStringN(struct _UNICODE_STRING *a1, wchar_t *a2)
{
  unsigned __int64 Length; // r9
  unsigned __int16 MaximumLength; // ax
  unsigned int v6; // ecx
  unsigned __int64 v7; // rdx
  __int64 v8; // r9
  unsigned __int64 v9; // rdx
  wchar_t *v10; // rbx
  __int16 v11; // ax
  unsigned __int64 v12; // r8

  Length = a1->Length;
  if ( (Length & 1) != 0 )
    return (unsigned int)-1073741811;
  MaximumLength = a1->MaximumLength;
  if ( (MaximumLength & 1) != 0 )
    return (unsigned int)-1073741811;
  if ( (unsigned __int16)Length > MaximumLength )
    return (unsigned int)-1073741811;
  if ( MaximumLength == 0xFFFF )
    return (unsigned int)-1073741811;
  v6 = 0;
  if ( !a1->Buffer && ((_WORD)Length || MaximumLength) )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v7 = Length;
    v8 = 1LL;
    v9 = v7 >> 1;
    v10 = &a1->Buffer[v9];
    v11 = 0;
    v12 = ((unsigned __int64)a1->MaximumLength >> 1) - v9;
    if ( v12 )
    {
      while ( v8 )
      {
        if ( *a2 )
        {
          *v10++ = *a2++;
          --v8;
          ++v11;
          if ( --v12 )
            continue;
        }
        if ( v12 || !v8 )
          break;
        goto LABEL_14;
      }
    }
    else
    {
LABEL_14:
      if ( *a2 )
        v6 = -2147483643;
    }
    a1->Length = 2 * (v11 + v9);
  }
  return v6;
}
