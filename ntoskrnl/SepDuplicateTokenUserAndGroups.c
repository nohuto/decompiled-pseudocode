/*
 * XREFs of SepDuplicateTokenUserAndGroups @ 0x1409CC9C0
 * Callers:
 *     SepFilterToken @ 0x14073FED0 (SepFilterToken.c)
 *     SepDuplicateToken @ 0x1407BCF00 (SepDuplicateToken.c)
 * Callees:
 *     SepDuplicateSid @ 0x1407843E0 (SepDuplicateSid.c)
 */

__int64 __fastcall SepDuplicateTokenUserAndGroups(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  _QWORD *v3; // r14
  unsigned int v4; // ebx
  unsigned int v7; // r8d
  __int64 result; // rax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 208);
  v3 = (_QWORD *)(a1 + 152);
  v4 = 0;
  v12 = 0LL;
  v7 = 0;
  if ( v2 != -1 )
  {
    result = SepDuplicateSid(*(unsigned __int8 **)(*v3 + 16LL * v2), &v12);
    v7 = result;
    if ( (int)result < 0 )
      return result;
    *(_QWORD *)(a2 + 1120) = v12;
  }
  if ( _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 1128) + 8LL)) <= 1 )
    __fastfail(0xEu);
  *(_QWORD *)(a2 + 1128) = *(_QWORD *)(a1 + 1128);
  v9 = *(_DWORD *)(a1 + 124);
  *(_DWORD *)(a2 + 124) = v9;
  if ( v9 )
  {
    do
    {
      v10 = 2LL * v4;
      if ( v4 == v2 )
        v11 = *(_QWORD *)(a2 + 1120);
      else
        v11 = *(_QWORD *)(*v3 + 16LL * v4);
      *(_QWORD *)(*(_QWORD *)(a2 + 152) + 16LL * v4++) = v11;
      *(_DWORD *)(*(_QWORD *)(a2 + 152) + 8 * v10 + 8) = *(_DWORD *)(*v3 + 8 * v10 + 8);
    }
    while ( v4 < *(_DWORD *)(a2 + 124) );
  }
  return v7;
}
