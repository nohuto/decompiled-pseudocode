__int64 __fastcall GreSetBitmapOwner(__int64 a1, int a2)
{
  unsigned int v3; // esi
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned int v7; // ecx
  unsigned int v8; // edx
  __int64 v9; // rcx
  __int64 v11; // [rsp+30h] [rbp-28h] BYREF
  int v12; // [rsp+38h] [rbp-20h]

  v3 = 0;
  v5 = HmgShareLockCheck(a1, 5);
  v6 = v5;
  if ( v5 )
  {
    if ( (*(_WORD *)(v5 + 100) || !*(_QWORD *)(v5 + 192) || a2) && (a1 & 0x800000) == 0 )
      v3 = HmgSetOwner(a1, a2, 5);
    v7 = *(_DWORD *)v6;
    v8 = *(_DWORD *)v6;
    v11 = 0LL;
    v12 = 0;
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v11, (unsigned __int16)v7 | (v8 >> 8) & 0xFF0000, 0, 0, 1);
    if ( v12 )
    {
      LOBYTE(v9) = *(_BYTE *)(v11 + 14);
      TrackHmgrReferenceDecrement(v9, (struct OBJECT *)v6);
      --*(_DWORD *)(v6 + 8);
      HANDLELOCK::vUnlock((HANDLELOCK *)&v11);
      if ( v12 )
        HANDLELOCK::vUnlock((HANDLELOCK *)&v11);
    }
  }
  return v3;
}
