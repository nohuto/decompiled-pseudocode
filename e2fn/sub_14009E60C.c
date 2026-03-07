__int64 __fastcall sub_14009E60C(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  unsigned __int64 v4; // rdx

  v2 = *(_QWORD *)(a1 + 64);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 8);
    if ( v3 )
    {
      if ( !*(_DWORD *)(v2 + 20) )
      {
        v4 = *(unsigned int *)(*(unsigned int *)(a1 + 56) + v3);
        if ( (_DWORD)v4 == -1 && *(_DWORD *)(*(_QWORD *)(v2 + 8) + 8LL) == -1 )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 8LL))(v2, 3LL);
        else
          _InterlockedAdd64((volatile signed __int64 *)(a1 + 80), v4);
      }
    }
  }
  return *(_QWORD *)(a1 + 80);
}
