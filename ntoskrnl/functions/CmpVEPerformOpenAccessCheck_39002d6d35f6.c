__int64 __fastcall CmpVEPerformOpenAccessCheck(
        _QWORD *Object,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 v6; // rbx
  __int64 v8; // rcx

  v6 = Object[1];
  if ( !*(_WORD *)(v6 + 66) && (*(_DWORD *)(a5 + 24) & 0x10) == 0 && (*(_DWORD *)(v6 + 184) & 0x40) == 0 )
  {
    v8 = *(unsigned int *)(*(_QWORD *)(v6 + 32) + 4112LL);
    if ( (v8 & 0x10) != 0 )
    {
      LOBYTE(v8) = KeGetCurrentThread()->PreviousMode;
      if ( !(unsigned __int8)CmpIsSystemEntity(v8, 0LL, a5 + 16)
        && (int)CmpCheckAdminAccess(*(_DWORD *)(a3 + 16), (PSECURITY_DESCRIPTOR)(*(_QWORD *)(v6 + 88) + 32LL)) >= 0 )
      {
        return (unsigned int)-1073741790;
      }
    }
  }
  return a6;
}
