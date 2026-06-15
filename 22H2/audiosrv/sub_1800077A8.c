/*
 * XREFs of sub_1800077A8 @ 0x1800077A8
 * Callers:
 *     sub_180006008 @ 0x180006008 (sub_180006008.c)
 * Callees:
 *     _o__invalid_parameter_noinfo @ 0x18006AB0E (_o__invalid_parameter_noinfo.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800D5648 @ 0x1800D5648 (sub_1800D5648.c)
 */

int __fastcall sub_1800077A8(__int64 a1, void *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  void *v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // ebx
  WORD pControl; // [rsp+30h] [rbp+8h] BYREF
  size_t Size; // [rsp+38h] [rbp+10h] BYREF
  DWORD dwRevision; // [rsp+40h] [rbp+18h] BYREF

  LODWORD(Size) = GetSecurityDescriptorLength(a2);
  v4 = o_malloc((unsigned int)Size);
  *(_QWORD *)(a1 + 8) = v4;
  if ( !v4 )
    sub_1800B8610(2147942414LL);
  if ( !GetSecurityDescriptorControl(a2, &pControl, &dwRevision) )
  {
    v10 = sub_1800D5648(v6, v5, v7);
    _o_free(*(_QWORD *)(a1 + 8));
    *(_QWORD *)(a1 + 8) = 0LL;
    sub_1800B8610(v10);
  }
  v8 = *(_QWORD *)(a1 + 8);
  if ( (pControl & 0x8000u) == 0 )
  {
    LODWORD(v8) = MakeSelfRelativeSD(a2, *(PSECURITY_DESCRIPTOR *)(a1 + 8), (LPDWORD)&Size);
    if ( !(_DWORD)v8 )
    {
      v14 = sub_1800D5648(v12, v11, v13);
      _o_free(*(_QWORD *)(a1 + 8));
      *(_QWORD *)(a1 + 8) = 0LL;
      sub_1800B8610(v14);
    }
  }
  else if ( (_DWORD)Size )
  {
    if ( v8 )
    {
      v9 = *(void **)(a1 + 8);
      if ( a2 )
      {
        LODWORD(v8) = (unsigned int)memcpy(v9, a2, (unsigned int)Size);
        return v8;
      }
      memset(v9, 0, (unsigned int)Size);
    }
    *(_DWORD *)o__errno() = 22;
    o__invalid_parameter_noinfo();
    sub_1800B8610(2147942487LL);
  }
  return v8;
}
