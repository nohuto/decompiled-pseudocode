_QWORD *__fastcall ACPIInsertPhysicalDeviceLocationDescriptor(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rax
  _QWORD *v4; // rdx
  __int64 v5; // rcx
  _QWORD *result; // rax

  v2 = *(_QWORD **)(a1 + 8);
  if ( *v2 != a1 )
    goto LABEL_17;
  *(_QWORD *)(a2 + 8) = v2;
  *(_QWORD *)a2 = a1;
  *v2 = a2;
  *(_QWORD *)(a1 + 8) = a2;
  v3 = *(_QWORD *)(a2 + 104) - *(_QWORD *)&GUID_NULL.Data1;
  if ( !v3 )
    v3 = *(_QWORD *)(a2 + 112) - *(_QWORD *)GUID_NULL.Data4;
  if ( v3 )
  {
    v4 = (_QWORD *)(a2 + 88);
    v5 = a1 + 40;
    goto LABEL_13;
  }
  result = (_QWORD *)(*(_QWORD *)(a2 + 136) - *(_QWORD *)&GUID_NULL.Data1);
  if ( !result )
    result = (_QWORD *)(*(_QWORD *)(a2 + 144) - *(_QWORD *)GUID_NULL.Data4);
  if ( result )
  {
    *(_OWORD *)(a1 + 56) = *(_OWORD *)(a2 + 136);
  }
  else
  {
    if ( (*(_DWORD *)(a2 + 28) & 0x40000) != 0 )
    {
      v4 = (_QWORD *)(a2 + 72);
      v5 = a1 + 24;
LABEL_13:
      result = *(_QWORD **)(v5 + 8);
      if ( *result == v5 )
      {
        *v4 = v5;
        v4[1] = result;
        *result = v4;
        *(_QWORD *)(v5 + 8) = v4;
        return result;
      }
LABEL_17:
      __fastfail(3u);
    }
    if ( !*(_QWORD *)(a1 + 16) )
      *(_QWORD *)(a1 + 16) = a2;
  }
  return result;
}
