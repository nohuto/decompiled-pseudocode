/*
 * XREFs of _PnpRegQueryValueIndirect @ 0x1405F8AF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbLengthW @ 0x14024789C (RtlStringCbLengthW.c)
 *     _PnpParseIndirectResourceString @ 0x1405DE350 (_PnpParseIndirectResourceString.c)
 *     _PnpParseIndirectInfString @ 0x14061004C (_PnpParseIndirectInfString.c)
 *     _RegRtlQueryValue @ 0x140637128 (_RegRtlQueryValue.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnpRegQueryValueIndirect(
        size_t a1,
        void *a2,
        __int64 a3,
        unsigned int *a4,
        const wchar_t *a5,
        __int64 a6,
        bool *a7)
{
  const wchar_t *v7; // rbx
  unsigned int *v9; // rsi
  PVOID PoolWithTag; // rdi
  bool *v12; // r14
  unsigned int Value; // eax
  unsigned int v14; // ebp
  unsigned int v16; // ecx
  unsigned int v17; // esi
  int v18; // eax
  size_t pcbLength; // [rsp+60h] [rbp+8h] BYREF

  pcbLength = a1;
  v7 = a5;
  v9 = (unsigned int *)a6;
  PoolWithTag = 0LL;
  if ( a5 )
    v7 = (const wchar_t *)(-(__int64)(*(_DWORD *)a6 != 0) & (unsigned __int64)a5);
  else
    *(_DWORD *)a6 = 0;
  v12 = a7;
  if ( a7 )
    *a7 = 0;
  *a4 = 0;
  Value = RegRtlQueryValue(a2, (__int64)v9);
  v14 = Value;
  if ( Value && Value != -1073741789 || !v12 )
    return v14;
  v16 = *a4;
  if ( *a4 > 3 )
  {
    if ( v16 <= 6 )
      goto LABEL_21;
    if ( v16 != 7 )
    {
      if ( v16 - 8 > 3 )
      {
        *v12 = (_WORD)v16 == 25;
        return v14;
      }
LABEL_21:
      *v12 = 0;
      return v14;
    }
  }
  v17 = *v9;
  if ( Value )
  {
    if ( v17 <= 0xFFFE )
    {
      while ( 1 )
      {
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0);
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v17, 0x52504E50u);
        if ( !PoolWithTag )
          break;
        LODWORD(pcbLength) = v17;
        v18 = RegRtlQueryValue(a2, (__int64)&pcbLength);
        if ( v18 != -1073741789 )
          goto LABEL_32;
        if ( (unsigned int)pcbLength <= v17 )
        {
          v18 = -1073741595;
LABEL_32:
          if ( v18 )
            goto LABEL_19;
          v7 = (const wchar_t *)PoolWithTag;
          goto LABEL_16;
        }
        v17 = pcbLength;
        if ( (unsigned int)pcbLength > 0xFFFE )
          goto LABEL_19;
      }
    }
  }
  else
  {
LABEL_16:
    if ( RtlStringCbLengthW(v7, v17, &pcbLength) >= 0
      && ((unsigned __int8)PnpParseIndirectInfString(v7) || PnpParseIndirectResourceString((__int64)v7)) )
    {
      *v12 = 1;
    }
LABEL_19:
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
  return v14;
}
