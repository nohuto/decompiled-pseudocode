/*
 * XREFs of xxxProcessSetWindowPosEvent @ 0x1C009AE90
 * Callers:
 *     xxxProcessEventMessage @ 0x1C005C220 (xxxProcessEventMessage.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     xxxEndDeferWindowPosEx @ 0x1C004720C (xxxEndDeferWindowPosEx.c)
 *     InternalBeginDeferWindowPos @ 0x1C0048E6C (InternalBeginDeferWindowPos.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 */

__int64 __fastcall xxxProcessSetWindowPosEvent(__int64 a1)
{
  __int64 v2; // rsi
  int v3; // eax
  __int64 v4; // rbx
  int i; // ebp
  __int64 v7; // rax
  __int64 v8; // rcx

  v2 = InternalBeginDeferWindowPos(*(_DWORD *)(a1 + 28));
  if ( v2 )
  {
    memmove(*(void **)(v2 + 40), *(const void **)(a1 + 40), 168LL * *(int *)(a1 + 28));
    v3 = *(_DWORD *)(a1 + 28);
    v4 = *(_QWORD *)(v2 + 40);
    *(_DWORD *)(v2 + 28) = v3;
    for ( i = v3 - 1; i >= 0; --i )
    {
      if ( (*(_DWORD *)(v4 + 156) & 0x20) != 0 )
      {
        if ( *(_QWORD *)v4 )
        {
          v7 = HMValidateHandleNoSecure(*(_QWORD *)v4, 1);
          if ( v7 )
          {
            v8 = *(_QWORD *)(*(_QWORD *)(v7 + 40) + 256LL);
            if ( v8 != *(_QWORD *)(v4 + 128) )
              *(_QWORD *)(v4 + 128) = v8;
          }
        }
      }
      v4 += 168LL;
    }
    xxxEndDeferWindowPosEx((struct tagSMWP *)v2, 0);
  }
  return Win32FreePool(a1);
}
