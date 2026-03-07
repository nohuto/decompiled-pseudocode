__int64 __fastcall SepGetAnonymousToken(__int64 a1, PVOID *a2)
{
  int v4; // ebx
  _DWORD *v6; // rcx
  _QWORD v7[3]; // [rsp+40h] [rbp-30h] BYREF
  int v8; // [rsp+58h] [rbp-18h]
  int v9; // [rsp+5Ch] [rbp-14h]
  __int128 v10; // [rsp+60h] [rbp-10h]
  PVOID Object; // [rsp+90h] [rbp+20h] BYREF

  Object = 0LL;
  v9 = 0;
  v7[1] = 0LL;
  v8 = 0;
  v7[2] = 0LL;
  v7[0] = 48LL;
  v10 = 0LL;
  v4 = SepDuplicateToken((_DWORD)SeAnonymousLogonTokenNoEveryone, (unsigned int)v7, 1, 2, 2, 0, 1, (__int64)&Object);
  if ( v4 >= 0 )
  {
    if ( a1 )
    {
      v4 = SepSetTokenPackage(Object, *(_QWORD *)(a1 + 784));
      if ( v4 < 0
        || (v4 = SepSetTokenCapabilities(
                   Object,
                   *(_QWORD *)(a1 + 784),
                   *(_QWORD *)(a1 + 792),
                   *(unsigned int *)(a1 + 800)),
            v4 < 0)
        || (SepSetTokenSessionById((_DWORD)Object, *(_DWORD *)(a1 + 120), 0, 0, 0LL),
            *((_DWORD *)Object + 30) = *(_DWORD *)(a1 + 120),
            v4 = SepSetTokenLowboxNumber(Object, *(_QWORD *)(a1 + 784)),
            v4 < 0)
        || (v6 = *(_DWORD **)(a1 + 776)) != 0LL
        && *v6
        && (v4 = AuthzBasepDuplicateSecurityAttributes((__int64)v6, *((_QWORD **)Object + 97), 0), v4 < 0) )
      {
        ObfDereferenceObject(Object);
        return (unsigned int)v4;
      }
      *((_QWORD *)Object + 9) &= 0x200800000uLL;
      *((_QWORD *)Object + 10) &= 0x200800000uLL;
      *((_QWORD *)Object + 8) &= 0x200800000uLL;
      *((_DWORD *)Object + 50) &= ~0x2000u;
      *((_DWORD *)Object + 50) |= 0x4000u;
      *((_DWORD *)Object + 50) |= *(_DWORD *)(a1 + 200) & 0x380000;
    }
    *a2 = Object;
  }
  return (unsigned int)v4;
}
