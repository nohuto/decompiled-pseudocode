__int64 __fastcall CDrawingContext::PopLayerInternal(__int64 a1)
{
  __int64 v2; // r8
  unsigned int v3; // esi
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v9; // eax
  unsigned int v10; // ecx

  v2 = (unsigned int)(*(_DWORD *)(a1 + 520) - 1);
  v3 = 0;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 496) + 8 * v2);
  *(_DWORD *)(a1 + 520) = v2;
  if ( CScopedClipStack::HasCpuClipsInScope((CScopedClipStack *)(a1 + 896)) )
    v6 = *(_QWORD *)(*(_QWORD *)(v5 + 1872) - 16LL);
  else
    v6 = 0LL;
  if ( v4 == v6 )
  {
    v7 = *(_QWORD *)(a1 + 2768);
    if ( *(_QWORD *)(v7 - 16) )
      --*(_QWORD *)(*(_QWORD *)(a1 + 904) - 160LL);
    *(_QWORD *)(v7 - 16) = 0LL;
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 24LL))(v4, a1);
    v3 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x107Cu, 0LL);
    }
    else if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4) == 1 )
    {
      *(_BYTE *)(a1 + 8169) = 1;
    }
  }
  if ( v4 )
    (**(void (__fastcall ***)(__int64, __int64))v4)(v4, 1LL);
  return v3;
}
