__int64 __fastcall CSyncLockGroup::GetMaxOutstandingFrames(CSyncLockGroup *this)
{
  __int64 *v1; // rbx
  __int64 *v2; // rbp
  unsigned int v3; // esi
  __int64 v4; // rdi
  __int64 v5; // rcx
  _DWORD v7[20]; // [rsp+20h] [rbp-68h] BYREF

  v1 = (__int64 *)*((_QWORD *)this + 2);
  v2 = (__int64 *)*((_QWORD *)this + 3);
  v3 = CCommonRegistryData::m_parallelModePolicy == 2;
  while ( v1 != v2 )
  {
    v4 = *v1;
    memset_0(v7, 0, 0x48uLL);
    v5 = v4 + *(int *)(*(_QWORD *)(v4 + 8) + 12LL) + 8LL;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v5 + 48LL))(v5, v7) )
    {
      if ( v3 <= v7[0] )
        v3 = v7[0];
    }
    ++v1;
  }
  return v3;
}
