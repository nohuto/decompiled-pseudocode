__int64 __fastcall IoGetFileMemoryPartitionInformation(__int64 a1)
{
  _QWORD *v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 208);
  result = 0LL;
  if ( v1 )
  {
    if ( v1 != IopRevocationExtension )
      return v1[9];
  }
  return result;
}
