__int64 __fastcall CPropertySet::NotifyCurrentPropertyValuesInternal(CPropertySet *this, unsigned int a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  bool i; // zf
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0LL;
  v3 = a2;
  for ( i = a2 == 0; !i; i = v3 == 0 )
  {
    if ( (v3 & 1) != 0 && (unsigned int)v2 < *((_DWORD *)this + 28) )
    {
      if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId((char *)this + 88) )
        ModuleFailFastForHRESULT(2147942487LL, retaddr);
      v7 = CPropertySet::NotifyPropertyValue((__int64)this, v6, *(_DWORD *)(*((_QWORD *)this + 11) + 8 * v2));
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x20Bu, 0LL);
        return 0LL;
      }
    }
    v2 = (unsigned int)(v2 + 1);
    v3 >>= 1;
  }
  return 0LL;
}
