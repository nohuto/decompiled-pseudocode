__int64 __fastcall UmfdQueryGlyphAttrs(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  _QWORD v6[6]; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v7; // [rsp+50h] [rbp-28h]
  __int64 v8; // [rsp+58h] [rbp-20h]
  __int64 v9; // [rsp+60h] [rbp-18h]

  result = FONTOBJ_GetCachedGlyphAttrs(a1, a2);
  if ( !result )
  {
    FontDriverDdiRequest::FontDriverDdiRequest((__int64)v6, 7);
    v9 = 0LL;
    v8 = 0LL;
    v6[0] = &QueryGlyphAttrsRequest::`vftable';
    v6[5] = a1;
    v7 = a2;
    if ( (int)UmfdClientSendAndWaitForCompletion(*(unsigned int *)(*(_QWORD *)(a1 + 24) + 8LL), (__int64)v6) >= 0 )
    {
      v5 = v8;
      if ( v8 )
        FONTOBJ_SetCachedGlyphAttrs(a1, a2, v8);
      return v5;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
