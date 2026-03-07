__int64 __fastcall DeleteHrgnClip(__int64 a1)
{
  _QWORD *v1; // rdi
  unsigned int v2; // eax
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  v1 = (_QWORD *)(a1 + 40);
  v2 = *(_DWORD *)(a1 + 64) & 0xFFFFFF3F;
  *(_DWORD *)(a1 + 64) = v2;
  if ( (v2 & 0x40000) != 0 )
  {
    *(_DWORD *)(a1 + 64) = v2 & 0xFFFBFFFF;
  }
  else
  {
    if ( *v1 > 2uLL )
      GreMarkDeletableRgn();
    DeleteMaybeSpecialRgn(*v1);
  }
  result = DeleteMaybeSpecialRgn(*(_QWORD *)(a1 + 48));
  *v1 = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( (*(_DWORD *)(a1 + 64) & 0x2000) == 0 )
  {
    v5 = *(_QWORD *)(a1 + 56);
    if ( !v5 )
      return result;
    result = GreSelectVisRgn(*(_QWORD *)(a1 + 8), v5, 1LL);
    goto LABEL_8;
  }
  result = RevalidateDCE(a1);
  v6 = *(_QWORD *)(a1 + 56);
  if ( v6 )
  {
    result = GreDeleteObject(v6);
LABEL_8:
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
