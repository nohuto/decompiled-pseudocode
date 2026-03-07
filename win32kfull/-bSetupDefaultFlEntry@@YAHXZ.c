__int64 __fastcall bSetupDefaultFlEntry(__int64 a1)
{
  unsigned int v1; // esi
  unsigned int v2; // edi
  __int64 v3; // r14
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // r15
  PFTOBJ *v7; // rcx
  __int64 *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int128 v12; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v13[2]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v14; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v15; // [rsp+A0h] [rbp+30h] BYREF
  struct PFF *v16; // [rsp+A8h] [rbp+38h] BYREF

  v1 = 0;
  v2 = 0;
  v3 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  v4 = v3 + 14212;
  v14 = *(_QWORD *)(v3 + 20272);
  do
  {
    if ( *(_DWORD *)(v4 - 124) && *(_WORD *)v4 && !*(_QWORD *)(v4 + 524) )
    {
      v5 = 664LL * v2;
      v12 = 0LL;
      v13[0] = &v12;
      v15 = 0;
      v16 = 0LL;
      v13[1] = v5 + v3 + 14146;
      v6 = v5 + v3;
      if ( (unsigned int)PUBLIC_PFTOBJ::bLoadAFont(
                           (PUBLIC_PFTOBJ *)&v14,
                           (const unsigned __int16 *)(v5 + v3 + 14212),
                           &v15,
                           0xAu,
                           &v16,
                           (struct _EUDCLOAD *)v13,
                           0) )
      {
        if ( (_QWORD)v12 )
        {
          v8 = (__int64 *)&v12;
          v9 = 2LL;
          do
          {
            v10 = *v8++;
            *(_DWORD *)(v10 + 12) |= 0x200u;
            --v9;
          }
          while ( v9 );
          v1 = 1;
          *(_OWORD *)(v4 + 524) = v12;
        }
        else
        {
          PFTOBJ::bUnloadEUDCFont(v7, (unsigned __int16 *)(v6 + 14212));
          *(_WORD *)v4 = 0;
        }
      }
      else
      {
        *(_WORD *)v4 = 0;
        *(_OWORD *)(v4 + 524) = 0LL;
      }
    }
    ++v2;
    v4 += 664LL;
  }
  while ( v2 < 7 );
  return v1;
}
