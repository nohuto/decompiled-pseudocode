struct OBJECT *__fastcall GdiHandleManager::GetEntryObject(GdiHandleManager *this, unsigned int a2)
{
  unsigned int v3; // eax
  __int64 v4; // r8
  unsigned int v5; // r9d
  __int64 v6; // r8

  v3 = GdiHandleManager::DecodeIndex(this, a2);
  v4 = *((_QWORD *)this + 2);
  v5 = *(_DWORD *)(v4 + 2056);
  if ( v3 >= v5 + ((*(unsigned __int16 *)(v4 + 2) + 0xFFFF) << 16) )
    return 0LL;
  if ( v3 >= v5 )
  {
    v6 = *(_QWORD *)(v4 + 8LL * (((v3 - v5) >> 16) + 1) + 8);
    v3 += -65536 * ((v3 - v5) >> 16) - v5;
  }
  else
  {
    v6 = *(_QWORD *)(v4 + 8);
  }
  if ( v3 >= *(_DWORD *)(v6 + 20) )
    return 0LL;
  else
    return *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v6 + 24) + 8 * ((unsigned __int64)v3 >> 8))
                             + 16LL * (unsigned __int8)v3
                             + 8);
}
