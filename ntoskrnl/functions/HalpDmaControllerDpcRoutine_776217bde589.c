void __fastcall HalpDmaControllerDpcRoutine(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  unsigned int v3; // ecx
  __int64 v4; // rax
  int v5; // eax

  v2 = *(_QWORD *)(a2 + 24);
  v3 = 0;
  if ( v2 && *(_QWORD *)(a2 + 8) )
  {
    v4 = *(_QWORD *)(v2 + 360);
    if ( v4 && (*(_DWORD *)(v4 + 12) & 1) != 0 )
    {
      v3 = 3;
    }
    else
    {
      v5 = *(_DWORD *)(a2 + 32);
      if ( v5 )
        v3 = 3 - (v5 != 2);
    }
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(a2 + 8))(
      *(_QWORD *)(a2 + 24),
      *(_QWORD *)(*(_QWORD *)(v2 + 352) + 48LL),
      *(_QWORD *)(a2 + 16),
      v3);
  }
}
