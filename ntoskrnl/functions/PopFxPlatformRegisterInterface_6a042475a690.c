__int64 __fastcall PopFxPlatformRegisterInterface(__int64 a1, __int64 (__fastcall **a2)(unsigned int *a1))
{
  signed __int64 v3; // rdx
  unsigned int v4; // ebx

  if ( *(_DWORD *)(a1 + 4) == 1 )
  {
    if ( *(_QWORD *)(a1 + 8) && (v3 = *(_QWORD *)(a1 + 24)) != 0 )
    {
      v4 = -1073741823;
      if ( !_InterlockedCompareExchange64(&qword_140C388D0, v3, 0LL) )
      {
        v4 = 0;
        PopFxPlatformInterface = *(_OWORD *)(a1 + 8);
        a2[1] = 0LL;
        *a2 = PoFxPlatformRequestHandler;
        ObfReferenceObjectWithTag(*(PVOID *)(a1 + 24), 0x4D584650u);
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741735;
  }
  return v4;
}
