struct CResource *__fastcall CResourceTable::GetResourceWithoutType(CResourceTable *this, unsigned int a2)
{
  __int64 v2; // rax

  if ( a2 && a2 < *((_DWORD *)this + 7) && (v2 = *((_QWORD *)this + 5), *(_DWORD *)(*((_DWORD *)this + 6) * a2 + v2)) )
    return *(struct CResource **)(*((_DWORD *)this + 6) * a2 + v2 + 8);
  else
    return 0LL;
}
