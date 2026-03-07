__int64 __fastcall CmpConstructAndCacheName(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  int v5; // ebx
  bool v7; // cf
  signed __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0LL;
  v3 = *(_QWORD *)(a1 + 296);
  if ( (v3 & 1) != 0 )
    v3 &= ~1uLL;
  if ( !v3 )
  {
    v5 = CmpConstructNameWithStatus(a1, &v8);
    if ( v5 < 0 )
      goto LABEL_7;
    v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 296), v8, 0LL) != 0;
    v3 = *(_QWORD *)(a1 + 296);
    v8 &= -(__int64)v7;
    if ( (v3 & 1) != 0 )
      v3 &= ~1uLL;
  }
  if ( a2 )
    *a2 = v3;
  v5 = 0;
LABEL_7:
  if ( v8 )
    CmpFreeTransientPoolWithTag((void *)v8, 0x624E4D43u);
  return (unsigned int)v5;
}
