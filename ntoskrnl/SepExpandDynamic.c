/*
 * XREFs of SepExpandDynamic @ 0x140743D78
 * Callers:
 *     SepAppendAceToTokenDefaultDacl @ 0x1402BE754 (SepAppendAceToTokenDefaultDacl.c)
 *     NtSetInformationToken @ 0x140741E70 (NtSetInformationToken.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepExpandDynamic(__int64 a1, unsigned int a2)
{
  unsigned int v4; // ebp
  __int64 v5; // rax
  _BYTE *Pool2; // rax
  _BYTE *v7; // rbx
  void *v8; // rsi
  __int64 v9; // rax

  v4 = *(_DWORD *)(a1 + 140) + 8 + 4 * *(unsigned __int8 *)(*(_QWORD *)(a1 + 168) + 1LL);
  v5 = *(_QWORD *)(a1 + 184);
  if ( v5 )
    v4 += *(unsigned __int16 *)(v5 + 2);
  if ( a2 <= v4 )
    return 0LL;
  Pool2 = (_BYTE *)ExAllocatePool2(256LL, a2, 1683252563LL);
  v7 = Pool2;
  if ( Pool2 )
  {
    v8 = *(void **)(a1 + 176);
    memmove(Pool2, v8, v4);
    v9 = *(_QWORD *)(a1 + 184);
    *(_DWORD *)(a1 + 140) += a2 - v4;
    *(_QWORD *)(a1 + 176) = v7;
    if ( v9 )
      *(_QWORD *)(a1 + 184) = &v7[v9 - (_QWORD)v8];
    *(_QWORD *)(a1 + 168) += v7 - (_BYTE *)v8;
    ExFreePoolWithTag(v8, 0);
    return 0LL;
  }
  return 3221225626LL;
}
