/*
 * XREFs of _PnpRegQueryValueIndirect @ 0x1406B89A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbLengthW @ 0x1402DCD64 (RtlStringCbLengthW.c)
 *     _PnpParseIndirectResourceString @ 0x1406974B8 (_PnpParseIndirectResourceString.c)
 *     _PnpParseIndirectInfString @ 0x1406C47D8 (_PnpParseIndirectInfString.c)
 *     _RegRtlQueryValue @ 0x14077FC64 (_RegRtlQueryValue.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
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
  const wchar_t *v7; // rdi
  unsigned int *v9; // rsi
  void *Pool2; // rbx
  bool *v12; // r14
  unsigned int Value; // ebp
  unsigned int v15; // ecx
  unsigned int v16; // esi
  int v17; // eax
  size_t pcbLength; // [rsp+60h] [rbp+8h] BYREF

  pcbLength = a1;
  v7 = a5;
  v9 = (unsigned int *)a6;
  Pool2 = 0LL;
  if ( a5 )
    v7 = (const wchar_t *)(-(__int64)(*(_DWORD *)a6 != 0) & (unsigned __int64)a5);
  else
    *(_DWORD *)a6 = 0;
  v12 = a7;
  if ( a7 )
    *a7 = 0;
  *a4 = 0;
  Value = RegRtlQueryValue(a2, (__int64)v9);
  if ( Value && Value != -1073741789 || !v12 )
    return Value;
  v15 = *a4;
  if ( *a4 > 3 )
  {
    if ( v15 <= 6 )
      goto LABEL_22;
    if ( v15 != 7 )
    {
      if ( v15 - 8 > 3 )
      {
        *v12 = (_WORD)v15 == 25;
        return Value;
      }
LABEL_22:
      *v12 = 0;
      return Value;
    }
  }
  v16 = *v9;
  if ( Value )
  {
    if ( v16 <= 0xFFFE )
    {
      while ( 1 )
      {
        if ( Pool2 )
          ExFreePoolWithTag(Pool2, 0);
        Pool2 = (void *)ExAllocatePool2(256LL, v16, 1380994640LL);
        if ( !Pool2 )
          break;
        LODWORD(pcbLength) = v16;
        v17 = RegRtlQueryValue(a2, (__int64)&pcbLength);
        if ( v17 != -1073741789 )
        {
          if ( v17 )
            goto LABEL_31;
          v7 = (const wchar_t *)Pool2;
          goto LABEL_17;
        }
        if ( (unsigned int)pcbLength > v16 )
        {
          v16 = pcbLength;
          if ( (unsigned int)pcbLength <= 0xFFFE )
            continue;
        }
        goto LABEL_31;
      }
    }
  }
  else
  {
LABEL_17:
    if ( RtlStringCbLengthW(v7, v16, &pcbLength) >= 0
      && ((unsigned __int8)PnpParseIndirectInfString(v7) || PnpParseIndirectResourceString((__int64)v7)) )
    {
      *v12 = 1;
    }
    if ( Pool2 )
LABEL_31:
      ExFreePoolWithTag(Pool2, 0);
  }
  return Value;
}
