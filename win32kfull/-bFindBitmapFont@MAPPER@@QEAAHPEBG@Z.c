__int64 __fastcall MAPPER::bFindBitmapFont(MAPPER *this, const unsigned __int16 *a2)
{
  struct _HASHBUCKET *v5; // rax
  struct _FONTSUB *v6; // rax
  _QWORD *i; // rcx
  __int64 v8; // r8
  int v9; // edx
  int v10; // eax
  int v11; // edx
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( (*((_DWORD *)this + 63) & 0x10000000) == 0 )
  {
    v12[0] = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(this) + 32) + 20272LL);
    v12[1] = *(_QWORD *)v12[0];
    if ( FHOBJ::bValid((FHOBJ *)v12) )
    {
      v5 = FHOBJ::pbktSearch((FHOBJ *)v12, a2, 0LL, 0LL, 0);
      if ( v5
        || (v6 = pfsubAlternateFacename(a2)) != 0LL
        && (*((_BYTE *)v6 + 195) & 1) != 0
        && (v5 = FHOBJ::pbktSearch((FHOBJ *)v12, (const unsigned __int16 *)v6 + 65, 0LL, 0LL, 0)) != 0LL )
      {
        for ( i = (_QWORD *)*((_QWORD *)v5 + 1); i; i = (_QWORD *)*i )
        {
          v8 = *(_QWORD *)(i[1] + 32LL);
          if ( (*(_DWORD *)(v8 + 48) & 2) != 0 )
          {
            v9 = (*((_DWORD *)this + 63) & 2) != 0
               ? *(__int16 *)(v8 + 56)
               : *(__int16 *)(v8 + 60) + *(__int16 *)(v8 + 62);
            v10 = *((_DWORD *)this + 41);
            if ( v10 == v9 || v10 == 2 && v9 == 3 )
            {
              v11 = *((_DWORD *)this + 42);
              if ( !v11 || v11 == *(__int16 *)(v8 + 76) )
                return 1LL;
            }
          }
        }
      }
    }
  }
  return 0LL;
}
