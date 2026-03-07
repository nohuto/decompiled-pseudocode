__int64 __fastcall IoGetFileObjectFilterContext(__int64 a1, _QWORD *a2, char a3)
{
  __int64 v3; // rbx
  _QWORD *v6; // rax
  __int64 result; // rax

  v3 = 0LL;
  if ( !*(_QWORD *)(a1 + 208) )
  {
    if ( !a3 )
    {
      result = 0LL;
      goto LABEL_6;
    }
    result = IopAllocateFileObjectExtension(a1, 0LL);
    if ( (int)result < 0 )
      goto LABEL_6;
  }
  v6 = *(_QWORD **)(a1 + 208);
  if ( v6 && v6 != IopRevocationExtension )
    v3 = v6[4];
  result = 0LL;
LABEL_6:
  *a2 = v3;
  return result;
}
