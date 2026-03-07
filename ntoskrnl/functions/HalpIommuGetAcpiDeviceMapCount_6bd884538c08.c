__int64 __fastcall HalpIommuGetAcpiDeviceMapCount(__int64 a1)
{
  ULONG_PTR v1; // rbx
  __int64 result; // rax

  v1 = HalpIommuList;
  result = 0LL;
  while ( (ULONG_PTR *)v1 != &HalpIommuList )
  {
    if ( *(_QWORD *)(v1 + 368) )
    {
      result = (*(__int64 (__fastcall **)(_QWORD, __int64))(v1 + 368))(*(_QWORD *)(v1 + 16), a1);
      if ( (_DWORD)result )
        break;
    }
    v1 = *(_QWORD *)v1;
  }
  return result;
}
