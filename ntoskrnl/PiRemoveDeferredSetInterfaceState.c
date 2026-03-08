/*
 * XREFs of PiRemoveDeferredSetInterfaceState @ 0x140871408
 * Callers:
 *     IopProcessSetInterfaceState @ 0x140683354 (IopProcessSetInterfaceState.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1406EA560 (RtlEqualUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiRemoveDeferredSetInterfaceState(__int64 a1, const UNICODE_STRING *a2)
{
  UNICODE_STRING **v2; // rdi
  UNICODE_STRING *v4; // rbx
  unsigned int v5; // esi
  BOOLEAN v7; // al
  UNICODE_STRING **v8; // rcx
  void **Buffer; // rax

  v2 = (UNICODE_STRING **)(a1 + 608);
  v4 = *(UNICODE_STRING **)(a1 + 608);
  v5 = -1073741823;
  if ( v4 != (UNICODE_STRING *)(a1 + 608) )
  {
    while ( 1 )
    {
      v7 = RtlEqualUnicodeString(v4 + 1, a2, 1u);
      v8 = *(UNICODE_STRING ***)&v4->Length;
      if ( v7 )
        break;
      v4 = *(UNICODE_STRING **)&v4->Length;
      if ( v8 == v2 )
        return v5;
    }
    if ( v8[1] != v4 || (Buffer = (void **)v4->Buffer, *Buffer != v4) )
      __fastfail(3u);
    *Buffer = v8;
    v8[1] = (UNICODE_STRING *)Buffer;
    ExFreePoolWithTag(v4[1].Buffer, 0);
    ExFreePoolWithTag(v4, 0);
    return 0;
  }
  return v5;
}
