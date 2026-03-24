/*
 * XREFs of ?FormFullImageName@@YAKPEBU_UNICODE_STRING@@PEAU1@1@Z @ 0x1C01273CC
 * Callers:
 *     ?LoadApiSetHost@@YAJPEAU_Win32kApiSetHost@@PEAU_UNICODE_STRING@@@Z @ 0x1C0127218 (-LoadApiSetHost@@YAJPEAU_Win32kApiSetHost@@PEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     memmove @ 0x1C016E4C0 (memmove.c)
 */

__int64 __fastcall FormFullImageName(const struct _UNICODE_STRING *a1, const STRING *a2, struct _STRING *a3)
{
  USHORT v4; // r9
  WCHAR *PoolWithTag; // rax
  __int64 result; // rax

  v4 = a2->Length + 2 + a1->Length;
  a3->MaximumLength = v4;
  PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v4, 0x6B333257u);
  a3->Buffer = (PCHAR)PoolWithTag;
  if ( PoolWithTag )
  {
    a3->Length = a1->Length;
    memmove(PoolWithTag, a1->Buffer, a1->Length);
    if ( RtlAppendStringToString(a3, a2) >= 0 )
    {
      result = 1LL;
      *(_WORD *)&a3->Buffer[2 * ((unsigned __int64)a3->Length >> 1)] = 0;
      return result;
    }
    ExFreePoolWithTag(a3->Buffer, 0);
  }
  return 0LL;
}
