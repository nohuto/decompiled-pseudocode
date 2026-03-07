__int64 __fastcall NtDCompositionCreateConnection(void *a1, struct HDCOMPOSITIONCONNECTION__ **a2)
{
  struct HDCOMPOSITIONCONNECTION__ *v3; // rdx
  signed int v4; // ebx
  struct HDCOMPOSITIONCONNECTION__ *v6; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  v6 = 0LL;
  v4 = a2 == 0LL ? 0xC000000D : 0;
  if ( a2 )
  {
    v4 = DirectComposition::CConnection::Create(a1, &v6);
    v3 = v6;
  }
  if ( v4 >= 0 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a2 = v3;
  }
  return (unsigned int)v4;
}
