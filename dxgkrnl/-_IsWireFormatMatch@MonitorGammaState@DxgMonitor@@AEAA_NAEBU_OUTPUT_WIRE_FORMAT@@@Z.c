bool __fastcall DxgMonitor::MonitorGammaState::_IsWireFormatMatch(
        DxgMonitor::MonitorGammaState *this,
        const struct _OUTPUT_WIRE_FORMAT *a2)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  unsigned int v11; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)this + 120LL))(*(_QWORD *)this, &v11);
  v3 = (unsigned __int8)v11 >> 2;
  if ( !((unsigned __int8)v11 >> 2) || *(_DWORD *)a2 )
  {
    v3 = (v11 >> 8) & 0x3F;
    if ( !v3 || *(_DWORD *)a2 != 1 )
    {
      v3 = (v11 >> 14) & 0x3F;
      if ( !v3 || *(_DWORD *)a2 != 2 )
      {
        v3 = (v11 >> 20) & 0x3F;
        if ( !v3 || *(_DWORD *)a2 != 3 )
        {
          v3 = v11 >> 26;
          if ( !(v11 >> 26) || *(_DWORD *)a2 != 4 )
            return 0;
        }
      }
    }
  }
  v4 = v3 - 1;
  if ( !v4 )
    return *((_DWORD *)a2 + 1) == 6;
  v5 = v4 - 1;
  if ( !v5 )
    return *((_DWORD *)a2 + 1) == 8;
  v8 = v5 - 2;
  if ( !v8 )
    return *((_DWORD *)a2 + 1) == 10;
  v9 = v8 - 4;
  if ( !v9 )
    return *((_DWORD *)a2 + 1) == 12;
  v10 = v9 - 8;
  if ( !v10 )
    return *((_DWORD *)a2 + 1) == 14;
  if ( v10 == 16 )
    return *((_DWORD *)a2 + 1) == 16;
  return 0;
}
